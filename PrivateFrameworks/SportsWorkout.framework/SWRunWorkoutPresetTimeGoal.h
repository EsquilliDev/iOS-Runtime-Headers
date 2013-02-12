/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SportsWorkout.framework/SportsWorkout
 */

@interface SWRunWorkoutPresetTimeGoal : SWRunWorkoutPreset {
}

+ (id)newPresetGoal20Minutes;
+ (id)newPresetGoal30Minutes;
+ (id)newPresetGoal45Minutes;
+ (id)newPresetGoal60Minutes;
+ (id)newPresetGoal90Minutes;
+ (id)newPresetGoalCustomTimeWithAmount:(id)arg1;

- (void)_fireOnDemandPromptForWorkoutController:(id)arg1 target:(id)arg2;
- (void)_fireTimeContextPromptForWorkoutController:(id)arg1 target:(id)arg2;
- (void)_fireTimeFinalRushPromptForWorkoutController:(id)arg1 target:(id)arg2;
- (void)_fireTimeGoalCompletedPromptForWorkoutController:(id)arg1 target:(id)arg2;
- (void)_fireTimeHalfwayPromptForWorkoutController:(id)arg1 target:(id)arg2;
- (void)_fireWorkoutSummaryPromptForWorkoutController:(id)arg1 target:(id)arg2;

@end