/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@interface TSKProgressiveCommandGroup : TSKCommandGroup {
}

- (const struct CommandGroupArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct CommandArchive {} *x3; struct RepeatedPtrField<TSP::Reference> { void **x_4_1_1; int x_4_1_2; int x_4_1_3; int x_4_1_4; } x4; struct IndexSet {} *x5; int x6; unsigned int x7[1]; }*)commandGroupArchiveFromUnarchiver:(id)arg1;
- (const struct ProgressiveCommandGroupArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct CommandGroupArchive {} *x3; int x4; unsigned int x5[1]; }*)progressiveCommandGroupArchiveFromUnarchiver:(id)arg1;
- (id)initFromUnarchiver:(id)arg1;
- (void)loadFromArchive:(const struct ProgressiveCommandGroupArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct CommandGroupArchive {} *x3; int x4; unsigned int x5[1]; }*)arg1 unarchiver:(id)arg2;
- (void)saveToArchive:(struct ProgressiveCommandGroupArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct CommandGroupArchive {} *x3; int x4; unsigned int x5[1]; }*)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;

@end