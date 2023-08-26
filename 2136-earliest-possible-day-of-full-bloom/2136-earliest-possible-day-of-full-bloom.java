import java.util.*;

class Solution {
    public int earliestFullBloom(int[] plantTime, int[] growTime) {
        int n = growTime.length;
        
        // Create a list of indices and sort it based on decreasing growTime
        List<Integer> indices = new ArrayList<>();
        for (int i = 0; i < n; ++i) {
            indices.add(i);
        }
        Collections.sort(indices, Comparator.comparingInt(i -> -growTime[i]));
        
        int result = 0;
        int curPlantTime = 0;
        
        // Iterate through the sorted indices and calculate the earliest full bloom time
        for (int i = 0; i < n; ++i) {
            int idx = indices.get(i);
            
            // Calculate the time for the current plant
            int time = curPlantTime + plantTime[idx] + growTime[idx];
            
            // Update the result if this time is greater
            result = Math.max(result, time);
            
            // Update the current plant time for the next iteration
            curPlantTime += plantTime[idx];
        }
        
        return result;
    }
}
