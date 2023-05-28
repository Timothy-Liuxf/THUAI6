// Message2Server

// Code generated by protoc-gen-go. DO NOT EDIT.
// versions:
// 	protoc-gen-go v1.28.0
// 	protoc        (unknown)
// source: Message2Server.proto

package proto

import (
	protoreflect "google.golang.org/protobuf/reflect/protoreflect"
	protoimpl "google.golang.org/protobuf/runtime/protoimpl"
	reflect "reflect"
	sync "sync"
)

const (
	// Verify that this generated code is sufficiently up-to-date.
	_ = protoimpl.EnforceVersion(20 - protoimpl.MinVersion)
	// Verify that runtime/protoimpl is sufficiently up-to-date.
	_ = protoimpl.EnforceVersion(protoimpl.MaxVersion - 20)
)

type PlayerMsg struct {
	state         protoimpl.MessageState
	sizeCache     protoimpl.SizeCache
	unknownFields protoimpl.UnknownFields

	PlayerId int64 `protobuf:"varint,1,opt,name=player_id,json=playerId,proto3" json:"player_id,omitempty"`
	// Types that are assignable to JobType:
	//	*PlayerMsg_StudentType
	//	*PlayerMsg_TrickerType
	JobType    isPlayerMsg_JobType `protobuf_oneof:"job_type"`
	PlayerType PlayerType          `protobuf:"varint,4,opt,name=player_type,json=playerType,proto3,enum=protobuf.PlayerType" json:"player_type,omitempty"`
}

func (x *PlayerMsg) Reset() {
	*x = PlayerMsg{}
	if protoimpl.UnsafeEnabled {
		mi := &file_Message2Server_proto_msgTypes[0]
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		ms.StoreMessageInfo(mi)
	}
}

func (x *PlayerMsg) String() string {
	return protoimpl.X.MessageStringOf(x)
}

func (*PlayerMsg) ProtoMessage() {}

func (x *PlayerMsg) ProtoReflect() protoreflect.Message {
	mi := &file_Message2Server_proto_msgTypes[0]
	if protoimpl.UnsafeEnabled && x != nil {
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		if ms.LoadMessageInfo() == nil {
			ms.StoreMessageInfo(mi)
		}
		return ms
	}
	return mi.MessageOf(x)
}

// Deprecated: Use PlayerMsg.ProtoReflect.Descriptor instead.
func (*PlayerMsg) Descriptor() ([]byte, []int) {
	return file_Message2Server_proto_rawDescGZIP(), []int{0}
}

func (x *PlayerMsg) GetPlayerId() int64 {
	if x != nil {
		return x.PlayerId
	}
	return 0
}

func (m *PlayerMsg) GetJobType() isPlayerMsg_JobType {
	if m != nil {
		return m.JobType
	}
	return nil
}

func (x *PlayerMsg) GetStudentType() StudentType {
	if x, ok := x.GetJobType().(*PlayerMsg_StudentType); ok {
		return x.StudentType
	}
	return StudentType_NULL_STUDENT_TYPE
}

func (x *PlayerMsg) GetTrickerType() TrickerType {
	if x, ok := x.GetJobType().(*PlayerMsg_TrickerType); ok {
		return x.TrickerType
	}
	return TrickerType_NULL_TRICKER_TYPE
}

func (x *PlayerMsg) GetPlayerType() PlayerType {
	if x != nil {
		return x.PlayerType
	}
	return PlayerType_NULL_PLAYER_TYPE
}

type isPlayerMsg_JobType interface {
	isPlayerMsg_JobType()
}

type PlayerMsg_StudentType struct {
	StudentType StudentType `protobuf:"varint,2,opt,name=student_type,json=studentType,proto3,enum=protobuf.StudentType,oneof"`
}

type PlayerMsg_TrickerType struct {
	TrickerType TrickerType `protobuf:"varint,3,opt,name=tricker_type,json=trickerType,proto3,enum=protobuf.TrickerType,oneof"`
}

func (*PlayerMsg_StudentType) isPlayerMsg_JobType() {}

func (*PlayerMsg_TrickerType) isPlayerMsg_JobType() {}

type MoveMsg struct {
	state         protoimpl.MessageState
	sizeCache     protoimpl.SizeCache
	unknownFields protoimpl.UnknownFields

	PlayerId           int64   `protobuf:"varint,1,opt,name=player_id,json=playerId,proto3" json:"player_id,omitempty"`
	Angle              float64 `protobuf:"fixed64,2,opt,name=angle,proto3" json:"angle,omitempty"`
	TimeInMilliseconds int64   `protobuf:"varint,3,opt,name=time_in_milliseconds,json=timeInMilliseconds,proto3" json:"time_in_milliseconds,omitempty"`
}

func (x *MoveMsg) Reset() {
	*x = MoveMsg{}
	if protoimpl.UnsafeEnabled {
		mi := &file_Message2Server_proto_msgTypes[1]
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		ms.StoreMessageInfo(mi)
	}
}

func (x *MoveMsg) String() string {
	return protoimpl.X.MessageStringOf(x)
}

func (*MoveMsg) ProtoMessage() {}

func (x *MoveMsg) ProtoReflect() protoreflect.Message {
	mi := &file_Message2Server_proto_msgTypes[1]
	if protoimpl.UnsafeEnabled && x != nil {
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		if ms.LoadMessageInfo() == nil {
			ms.StoreMessageInfo(mi)
		}
		return ms
	}
	return mi.MessageOf(x)
}

// Deprecated: Use MoveMsg.ProtoReflect.Descriptor instead.
func (*MoveMsg) Descriptor() ([]byte, []int) {
	return file_Message2Server_proto_rawDescGZIP(), []int{1}
}

func (x *MoveMsg) GetPlayerId() int64 {
	if x != nil {
		return x.PlayerId
	}
	return 0
}

func (x *MoveMsg) GetAngle() float64 {
	if x != nil {
		return x.Angle
	}
	return 0
}

func (x *MoveMsg) GetTimeInMilliseconds() int64 {
	if x != nil {
		return x.TimeInMilliseconds
	}
	return 0
}

type PropMsg struct {
	state         protoimpl.MessageState
	sizeCache     protoimpl.SizeCache
	unknownFields protoimpl.UnknownFields

	PlayerId int64    `protobuf:"varint,1,opt,name=player_id,json=playerId,proto3" json:"player_id,omitempty"`
	PropType PropType `protobuf:"varint,2,opt,name=prop_type,json=propType,proto3,enum=protobuf.PropType" json:"prop_type,omitempty"`
}

func (x *PropMsg) Reset() {
	*x = PropMsg{}
	if protoimpl.UnsafeEnabled {
		mi := &file_Message2Server_proto_msgTypes[2]
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		ms.StoreMessageInfo(mi)
	}
}

func (x *PropMsg) String() string {
	return protoimpl.X.MessageStringOf(x)
}

func (*PropMsg) ProtoMessage() {}

func (x *PropMsg) ProtoReflect() protoreflect.Message {
	mi := &file_Message2Server_proto_msgTypes[2]
	if protoimpl.UnsafeEnabled && x != nil {
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		if ms.LoadMessageInfo() == nil {
			ms.StoreMessageInfo(mi)
		}
		return ms
	}
	return mi.MessageOf(x)
}

// Deprecated: Use PropMsg.ProtoReflect.Descriptor instead.
func (*PropMsg) Descriptor() ([]byte, []int) {
	return file_Message2Server_proto_rawDescGZIP(), []int{2}
}

func (x *PropMsg) GetPlayerId() int64 {
	if x != nil {
		return x.PlayerId
	}
	return 0
}

func (x *PropMsg) GetPropType() PropType {
	if x != nil {
		return x.PropType
	}
	return PropType_NULL_PROP_TYPE
}

type SendMsg struct {
	state         protoimpl.MessageState
	sizeCache     protoimpl.SizeCache
	unknownFields protoimpl.UnknownFields

	PlayerId   int64  `protobuf:"varint,1,opt,name=player_id,json=playerId,proto3" json:"player_id,omitempty"`
	ToPlayerId int64  `protobuf:"varint,2,opt,name=to_player_id,json=toPlayerId,proto3" json:"to_player_id,omitempty"`
	Message    string `protobuf:"bytes,3,opt,name=message,proto3" json:"message,omitempty"`
}

func (x *SendMsg) Reset() {
	*x = SendMsg{}
	if protoimpl.UnsafeEnabled {
		mi := &file_Message2Server_proto_msgTypes[3]
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		ms.StoreMessageInfo(mi)
	}
}

func (x *SendMsg) String() string {
	return protoimpl.X.MessageStringOf(x)
}

func (*SendMsg) ProtoMessage() {}

func (x *SendMsg) ProtoReflect() protoreflect.Message {
	mi := &file_Message2Server_proto_msgTypes[3]
	if protoimpl.UnsafeEnabled && x != nil {
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		if ms.LoadMessageInfo() == nil {
			ms.StoreMessageInfo(mi)
		}
		return ms
	}
	return mi.MessageOf(x)
}

// Deprecated: Use SendMsg.ProtoReflect.Descriptor instead.
func (*SendMsg) Descriptor() ([]byte, []int) {
	return file_Message2Server_proto_rawDescGZIP(), []int{3}
}

func (x *SendMsg) GetPlayerId() int64 {
	if x != nil {
		return x.PlayerId
	}
	return 0
}

func (x *SendMsg) GetToPlayerId() int64 {
	if x != nil {
		return x.ToPlayerId
	}
	return 0
}

func (x *SendMsg) GetMessage() string {
	if x != nil {
		return x.Message
	}
	return ""
}

type AttackMsg struct {
	state         protoimpl.MessageState
	sizeCache     protoimpl.SizeCache
	unknownFields protoimpl.UnknownFields

	PlayerId int64   `protobuf:"varint,1,opt,name=player_id,json=playerId,proto3" json:"player_id,omitempty"`
	Angle    float64 `protobuf:"fixed64,2,opt,name=angle,proto3" json:"angle,omitempty"`
}

func (x *AttackMsg) Reset() {
	*x = AttackMsg{}
	if protoimpl.UnsafeEnabled {
		mi := &file_Message2Server_proto_msgTypes[4]
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		ms.StoreMessageInfo(mi)
	}
}

func (x *AttackMsg) String() string {
	return protoimpl.X.MessageStringOf(x)
}

func (*AttackMsg) ProtoMessage() {}

func (x *AttackMsg) ProtoReflect() protoreflect.Message {
	mi := &file_Message2Server_proto_msgTypes[4]
	if protoimpl.UnsafeEnabled && x != nil {
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		if ms.LoadMessageInfo() == nil {
			ms.StoreMessageInfo(mi)
		}
		return ms
	}
	return mi.MessageOf(x)
}

// Deprecated: Use AttackMsg.ProtoReflect.Descriptor instead.
func (*AttackMsg) Descriptor() ([]byte, []int) {
	return file_Message2Server_proto_rawDescGZIP(), []int{4}
}

func (x *AttackMsg) GetPlayerId() int64 {
	if x != nil {
		return x.PlayerId
	}
	return 0
}

func (x *AttackMsg) GetAngle() float64 {
	if x != nil {
		return x.Angle
	}
	return 0
}

type IDMsg struct {
	state         protoimpl.MessageState
	sizeCache     protoimpl.SizeCache
	unknownFields protoimpl.UnknownFields

	PlayerId int64 `protobuf:"varint,1,opt,name=player_id,json=playerId,proto3" json:"player_id,omitempty"`
}

func (x *IDMsg) Reset() {
	*x = IDMsg{}
	if protoimpl.UnsafeEnabled {
		mi := &file_Message2Server_proto_msgTypes[5]
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		ms.StoreMessageInfo(mi)
	}
}

func (x *IDMsg) String() string {
	return protoimpl.X.MessageStringOf(x)
}

func (*IDMsg) ProtoMessage() {}

func (x *IDMsg) ProtoReflect() protoreflect.Message {
	mi := &file_Message2Server_proto_msgTypes[5]
	if protoimpl.UnsafeEnabled && x != nil {
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		if ms.LoadMessageInfo() == nil {
			ms.StoreMessageInfo(mi)
		}
		return ms
	}
	return mi.MessageOf(x)
}

// Deprecated: Use IDMsg.ProtoReflect.Descriptor instead.
func (*IDMsg) Descriptor() ([]byte, []int) {
	return file_Message2Server_proto_rawDescGZIP(), []int{5}
}

func (x *IDMsg) GetPlayerId() int64 {
	if x != nil {
		return x.PlayerId
	}
	return 0
}

type TreatAndRescueMsg struct {
	state         protoimpl.MessageState
	sizeCache     protoimpl.SizeCache
	unknownFields protoimpl.UnknownFields

	PlayerId   int64 `protobuf:"varint,1,opt,name=player_id,json=playerId,proto3" json:"player_id,omitempty"`
	ToPlayerId int64 `protobuf:"varint,2,opt,name=to_player_id,json=toPlayerId,proto3" json:"to_player_id,omitempty"`
}

func (x *TreatAndRescueMsg) Reset() {
	*x = TreatAndRescueMsg{}
	if protoimpl.UnsafeEnabled {
		mi := &file_Message2Server_proto_msgTypes[6]
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		ms.StoreMessageInfo(mi)
	}
}

func (x *TreatAndRescueMsg) String() string {
	return protoimpl.X.MessageStringOf(x)
}

func (*TreatAndRescueMsg) ProtoMessage() {}

func (x *TreatAndRescueMsg) ProtoReflect() protoreflect.Message {
	mi := &file_Message2Server_proto_msgTypes[6]
	if protoimpl.UnsafeEnabled && x != nil {
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		if ms.LoadMessageInfo() == nil {
			ms.StoreMessageInfo(mi)
		}
		return ms
	}
	return mi.MessageOf(x)
}

// Deprecated: Use TreatAndRescueMsg.ProtoReflect.Descriptor instead.
func (*TreatAndRescueMsg) Descriptor() ([]byte, []int) {
	return file_Message2Server_proto_rawDescGZIP(), []int{6}
}

func (x *TreatAndRescueMsg) GetPlayerId() int64 {
	if x != nil {
		return x.PlayerId
	}
	return 0
}

func (x *TreatAndRescueMsg) GetToPlayerId() int64 {
	if x != nil {
		return x.ToPlayerId
	}
	return 0
}

type SkillMsg struct {
	state         protoimpl.MessageState
	sizeCache     protoimpl.SizeCache
	unknownFields protoimpl.UnknownFields

	PlayerId int64 `protobuf:"varint,1,opt,name=player_id,json=playerId,proto3" json:"player_id,omitempty"`
	SkillId  int32 `protobuf:"varint,2,opt,name=skill_id,json=skillId,proto3" json:"skill_id,omitempty"`
}

func (x *SkillMsg) Reset() {
	*x = SkillMsg{}
	if protoimpl.UnsafeEnabled {
		mi := &file_Message2Server_proto_msgTypes[7]
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		ms.StoreMessageInfo(mi)
	}
}

func (x *SkillMsg) String() string {
	return protoimpl.X.MessageStringOf(x)
}

func (*SkillMsg) ProtoMessage() {}

func (x *SkillMsg) ProtoReflect() protoreflect.Message {
	mi := &file_Message2Server_proto_msgTypes[7]
	if protoimpl.UnsafeEnabled && x != nil {
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		if ms.LoadMessageInfo() == nil {
			ms.StoreMessageInfo(mi)
		}
		return ms
	}
	return mi.MessageOf(x)
}

// Deprecated: Use SkillMsg.ProtoReflect.Descriptor instead.
func (*SkillMsg) Descriptor() ([]byte, []int) {
	return file_Message2Server_proto_rawDescGZIP(), []int{7}
}

func (x *SkillMsg) GetPlayerId() int64 {
	if x != nil {
		return x.PlayerId
	}
	return 0
}

func (x *SkillMsg) GetSkillId() int32 {
	if x != nil {
		return x.SkillId
	}
	return 0
}

var File_Message2Server_proto protoreflect.FileDescriptor

var file_Message2Server_proto_rawDesc = []byte{
	0x0a, 0x14, 0x4d, 0x65, 0x73, 0x73, 0x61, 0x67, 0x65, 0x32, 0x53, 0x65, 0x72, 0x76, 0x65, 0x72,
	0x2e, 0x70, 0x72, 0x6f, 0x74, 0x6f, 0x12, 0x08, 0x70, 0x72, 0x6f, 0x74, 0x6f, 0x62, 0x75, 0x66,
	0x1a, 0x11, 0x4d, 0x65, 0x73, 0x73, 0x61, 0x67, 0x65, 0x54, 0x79, 0x70, 0x65, 0x2e, 0x70, 0x72,
	0x6f, 0x74, 0x6f, 0x22, 0xe3, 0x01, 0x0a, 0x09, 0x50, 0x6c, 0x61, 0x79, 0x65, 0x72, 0x4d, 0x73,
	0x67, 0x12, 0x1b, 0x0a, 0x09, 0x70, 0x6c, 0x61, 0x79, 0x65, 0x72, 0x5f, 0x69, 0x64, 0x18, 0x01,
	0x20, 0x01, 0x28, 0x03, 0x52, 0x08, 0x70, 0x6c, 0x61, 0x79, 0x65, 0x72, 0x49, 0x64, 0x12, 0x3a,
	0x0a, 0x0c, 0x73, 0x74, 0x75, 0x64, 0x65, 0x6e, 0x74, 0x5f, 0x74, 0x79, 0x70, 0x65, 0x18, 0x02,
	0x20, 0x01, 0x28, 0x0e, 0x32, 0x15, 0x2e, 0x70, 0x72, 0x6f, 0x74, 0x6f, 0x62, 0x75, 0x66, 0x2e,
	0x53, 0x74, 0x75, 0x64, 0x65, 0x6e, 0x74, 0x54, 0x79, 0x70, 0x65, 0x48, 0x00, 0x52, 0x0b, 0x73,
	0x74, 0x75, 0x64, 0x65, 0x6e, 0x74, 0x54, 0x79, 0x70, 0x65, 0x12, 0x3a, 0x0a, 0x0c, 0x74, 0x72,
	0x69, 0x63, 0x6b, 0x65, 0x72, 0x5f, 0x74, 0x79, 0x70, 0x65, 0x18, 0x03, 0x20, 0x01, 0x28, 0x0e,
	0x32, 0x15, 0x2e, 0x70, 0x72, 0x6f, 0x74, 0x6f, 0x62, 0x75, 0x66, 0x2e, 0x54, 0x72, 0x69, 0x63,
	0x6b, 0x65, 0x72, 0x54, 0x79, 0x70, 0x65, 0x48, 0x00, 0x52, 0x0b, 0x74, 0x72, 0x69, 0x63, 0x6b,
	0x65, 0x72, 0x54, 0x79, 0x70, 0x65, 0x12, 0x35, 0x0a, 0x0b, 0x70, 0x6c, 0x61, 0x79, 0x65, 0x72,
	0x5f, 0x74, 0x79, 0x70, 0x65, 0x18, 0x04, 0x20, 0x01, 0x28, 0x0e, 0x32, 0x14, 0x2e, 0x70, 0x72,
	0x6f, 0x74, 0x6f, 0x62, 0x75, 0x66, 0x2e, 0x50, 0x6c, 0x61, 0x79, 0x65, 0x72, 0x54, 0x79, 0x70,
	0x65, 0x52, 0x0a, 0x70, 0x6c, 0x61, 0x79, 0x65, 0x72, 0x54, 0x79, 0x70, 0x65, 0x42, 0x0a, 0x0a,
	0x08, 0x6a, 0x6f, 0x62, 0x5f, 0x74, 0x79, 0x70, 0x65, 0x22, 0x6e, 0x0a, 0x07, 0x4d, 0x6f, 0x76,
	0x65, 0x4d, 0x73, 0x67, 0x12, 0x1b, 0x0a, 0x09, 0x70, 0x6c, 0x61, 0x79, 0x65, 0x72, 0x5f, 0x69,
	0x64, 0x18, 0x01, 0x20, 0x01, 0x28, 0x03, 0x52, 0x08, 0x70, 0x6c, 0x61, 0x79, 0x65, 0x72, 0x49,
	0x64, 0x12, 0x14, 0x0a, 0x05, 0x61, 0x6e, 0x67, 0x6c, 0x65, 0x18, 0x02, 0x20, 0x01, 0x28, 0x01,
	0x52, 0x05, 0x61, 0x6e, 0x67, 0x6c, 0x65, 0x12, 0x30, 0x0a, 0x14, 0x74, 0x69, 0x6d, 0x65, 0x5f,
	0x69, 0x6e, 0x5f, 0x6d, 0x69, 0x6c, 0x6c, 0x69, 0x73, 0x65, 0x63, 0x6f, 0x6e, 0x64, 0x73, 0x18,
	0x03, 0x20, 0x01, 0x28, 0x03, 0x52, 0x12, 0x74, 0x69, 0x6d, 0x65, 0x49, 0x6e, 0x4d, 0x69, 0x6c,
	0x6c, 0x69, 0x73, 0x65, 0x63, 0x6f, 0x6e, 0x64, 0x73, 0x22, 0x57, 0x0a, 0x07, 0x50, 0x72, 0x6f,
	0x70, 0x4d, 0x73, 0x67, 0x12, 0x1b, 0x0a, 0x09, 0x70, 0x6c, 0x61, 0x79, 0x65, 0x72, 0x5f, 0x69,
	0x64, 0x18, 0x01, 0x20, 0x01, 0x28, 0x03, 0x52, 0x08, 0x70, 0x6c, 0x61, 0x79, 0x65, 0x72, 0x49,
	0x64, 0x12, 0x2f, 0x0a, 0x09, 0x70, 0x72, 0x6f, 0x70, 0x5f, 0x74, 0x79, 0x70, 0x65, 0x18, 0x02,
	0x20, 0x01, 0x28, 0x0e, 0x32, 0x12, 0x2e, 0x70, 0x72, 0x6f, 0x74, 0x6f, 0x62, 0x75, 0x66, 0x2e,
	0x50, 0x72, 0x6f, 0x70, 0x54, 0x79, 0x70, 0x65, 0x52, 0x08, 0x70, 0x72, 0x6f, 0x70, 0x54, 0x79,
	0x70, 0x65, 0x22, 0x62, 0x0a, 0x07, 0x53, 0x65, 0x6e, 0x64, 0x4d, 0x73, 0x67, 0x12, 0x1b, 0x0a,
	0x09, 0x70, 0x6c, 0x61, 0x79, 0x65, 0x72, 0x5f, 0x69, 0x64, 0x18, 0x01, 0x20, 0x01, 0x28, 0x03,
	0x52, 0x08, 0x70, 0x6c, 0x61, 0x79, 0x65, 0x72, 0x49, 0x64, 0x12, 0x20, 0x0a, 0x0c, 0x74, 0x6f,
	0x5f, 0x70, 0x6c, 0x61, 0x79, 0x65, 0x72, 0x5f, 0x69, 0x64, 0x18, 0x02, 0x20, 0x01, 0x28, 0x03,
	0x52, 0x0a, 0x74, 0x6f, 0x50, 0x6c, 0x61, 0x79, 0x65, 0x72, 0x49, 0x64, 0x12, 0x18, 0x0a, 0x07,
	0x6d, 0x65, 0x73, 0x73, 0x61, 0x67, 0x65, 0x18, 0x03, 0x20, 0x01, 0x28, 0x09, 0x52, 0x07, 0x6d,
	0x65, 0x73, 0x73, 0x61, 0x67, 0x65, 0x22, 0x3e, 0x0a, 0x09, 0x41, 0x74, 0x74, 0x61, 0x63, 0x6b,
	0x4d, 0x73, 0x67, 0x12, 0x1b, 0x0a, 0x09, 0x70, 0x6c, 0x61, 0x79, 0x65, 0x72, 0x5f, 0x69, 0x64,
	0x18, 0x01, 0x20, 0x01, 0x28, 0x03, 0x52, 0x08, 0x70, 0x6c, 0x61, 0x79, 0x65, 0x72, 0x49, 0x64,
	0x12, 0x14, 0x0a, 0x05, 0x61, 0x6e, 0x67, 0x6c, 0x65, 0x18, 0x02, 0x20, 0x01, 0x28, 0x01, 0x52,
	0x05, 0x61, 0x6e, 0x67, 0x6c, 0x65, 0x22, 0x24, 0x0a, 0x05, 0x49, 0x44, 0x4d, 0x73, 0x67, 0x12,
	0x1b, 0x0a, 0x09, 0x70, 0x6c, 0x61, 0x79, 0x65, 0x72, 0x5f, 0x69, 0x64, 0x18, 0x01, 0x20, 0x01,
	0x28, 0x03, 0x52, 0x08, 0x70, 0x6c, 0x61, 0x79, 0x65, 0x72, 0x49, 0x64, 0x22, 0x52, 0x0a, 0x11,
	0x54, 0x72, 0x65, 0x61, 0x74, 0x41, 0x6e, 0x64, 0x52, 0x65, 0x73, 0x63, 0x75, 0x65, 0x4d, 0x73,
	0x67, 0x12, 0x1b, 0x0a, 0x09, 0x70, 0x6c, 0x61, 0x79, 0x65, 0x72, 0x5f, 0x69, 0x64, 0x18, 0x01,
	0x20, 0x01, 0x28, 0x03, 0x52, 0x08, 0x70, 0x6c, 0x61, 0x79, 0x65, 0x72, 0x49, 0x64, 0x12, 0x20,
	0x0a, 0x0c, 0x74, 0x6f, 0x5f, 0x70, 0x6c, 0x61, 0x79, 0x65, 0x72, 0x5f, 0x69, 0x64, 0x18, 0x02,
	0x20, 0x01, 0x28, 0x03, 0x52, 0x0a, 0x74, 0x6f, 0x50, 0x6c, 0x61, 0x79, 0x65, 0x72, 0x49, 0x64,
	0x22, 0x42, 0x0a, 0x08, 0x53, 0x6b, 0x69, 0x6c, 0x6c, 0x4d, 0x73, 0x67, 0x12, 0x1b, 0x0a, 0x09,
	0x70, 0x6c, 0x61, 0x79, 0x65, 0x72, 0x5f, 0x69, 0x64, 0x18, 0x01, 0x20, 0x01, 0x28, 0x03, 0x52,
	0x08, 0x70, 0x6c, 0x61, 0x79, 0x65, 0x72, 0x49, 0x64, 0x12, 0x19, 0x0a, 0x08, 0x73, 0x6b, 0x69,
	0x6c, 0x6c, 0x5f, 0x69, 0x64, 0x18, 0x02, 0x20, 0x01, 0x28, 0x05, 0x52, 0x07, 0x73, 0x6b, 0x69,
	0x6c, 0x6c, 0x49, 0x64, 0x42, 0x72, 0x0a, 0x0c, 0x63, 0x6f, 0x6d, 0x2e, 0x70, 0x72, 0x6f, 0x74,
	0x6f, 0x62, 0x75, 0x66, 0x42, 0x13, 0x4d, 0x65, 0x73, 0x73, 0x61, 0x67, 0x65, 0x32, 0x53, 0x65,
	0x72, 0x76, 0x65, 0x72, 0x50, 0x72, 0x6f, 0x74, 0x6f, 0x50, 0x01, 0x5a, 0x0d, 0x6a, 0x6f, 0x62,
	0x2d, 0x41, 0x50, 0x49, 0x2f, 0x70, 0x72, 0x6f, 0x74, 0x6f, 0xa2, 0x02, 0x03, 0x50, 0x58, 0x58,
	0xaa, 0x02, 0x08, 0x50, 0x72, 0x6f, 0x74, 0x6f, 0x62, 0x75, 0x66, 0xca, 0x02, 0x08, 0x50, 0x72,
	0x6f, 0x74, 0x6f, 0x62, 0x75, 0x66, 0xe2, 0x02, 0x14, 0x50, 0x72, 0x6f, 0x74, 0x6f, 0x62, 0x75,
	0x66, 0x5c, 0x47, 0x50, 0x42, 0x4d, 0x65, 0x74, 0x61, 0x64, 0x61, 0x74, 0x61, 0xea, 0x02, 0x08,
	0x50, 0x72, 0x6f, 0x74, 0x6f, 0x62, 0x75, 0x66, 0x62, 0x06, 0x70, 0x72, 0x6f, 0x74, 0x6f, 0x33,
}

var (
	file_Message2Server_proto_rawDescOnce sync.Once
	file_Message2Server_proto_rawDescData = file_Message2Server_proto_rawDesc
)

func file_Message2Server_proto_rawDescGZIP() []byte {
	file_Message2Server_proto_rawDescOnce.Do(func() {
		file_Message2Server_proto_rawDescData = protoimpl.X.CompressGZIP(file_Message2Server_proto_rawDescData)
	})
	return file_Message2Server_proto_rawDescData
}

var file_Message2Server_proto_msgTypes = make([]protoimpl.MessageInfo, 8)
var file_Message2Server_proto_goTypes = []interface{}{
	(*PlayerMsg)(nil),         // 0: protobuf.PlayerMsg
	(*MoveMsg)(nil),           // 1: protobuf.MoveMsg
	(*PropMsg)(nil),           // 2: protobuf.PropMsg
	(*SendMsg)(nil),           // 3: protobuf.SendMsg
	(*AttackMsg)(nil),         // 4: protobuf.AttackMsg
	(*IDMsg)(nil),             // 5: protobuf.IDMsg
	(*TreatAndRescueMsg)(nil), // 6: protobuf.TreatAndRescueMsg
	(*SkillMsg)(nil),          // 7: protobuf.SkillMsg
	(StudentType)(0),          // 8: protobuf.StudentType
	(TrickerType)(0),          // 9: protobuf.TrickerType
	(PlayerType)(0),           // 10: protobuf.PlayerType
	(PropType)(0),             // 11: protobuf.PropType
}
var file_Message2Server_proto_depIdxs = []int32{
	8,  // 0: protobuf.PlayerMsg.student_type:type_name -> protobuf.StudentType
	9,  // 1: protobuf.PlayerMsg.tricker_type:type_name -> protobuf.TrickerType
	10, // 2: protobuf.PlayerMsg.player_type:type_name -> protobuf.PlayerType
	11, // 3: protobuf.PropMsg.prop_type:type_name -> protobuf.PropType
	4,  // [4:4] is the sub-list for method output_type
	4,  // [4:4] is the sub-list for method input_type
	4,  // [4:4] is the sub-list for extension type_name
	4,  // [4:4] is the sub-list for extension extendee
	0,  // [0:4] is the sub-list for field type_name
}

func init() { file_Message2Server_proto_init() }
func file_Message2Server_proto_init() {
	if File_Message2Server_proto != nil {
		return
	}
	file_MessageType_proto_init()
	if !protoimpl.UnsafeEnabled {
		file_Message2Server_proto_msgTypes[0].Exporter = func(v interface{}, i int) interface{} {
			switch v := v.(*PlayerMsg); i {
			case 0:
				return &v.state
			case 1:
				return &v.sizeCache
			case 2:
				return &v.unknownFields
			default:
				return nil
			}
		}
		file_Message2Server_proto_msgTypes[1].Exporter = func(v interface{}, i int) interface{} {
			switch v := v.(*MoveMsg); i {
			case 0:
				return &v.state
			case 1:
				return &v.sizeCache
			case 2:
				return &v.unknownFields
			default:
				return nil
			}
		}
		file_Message2Server_proto_msgTypes[2].Exporter = func(v interface{}, i int) interface{} {
			switch v := v.(*PropMsg); i {
			case 0:
				return &v.state
			case 1:
				return &v.sizeCache
			case 2:
				return &v.unknownFields
			default:
				return nil
			}
		}
		file_Message2Server_proto_msgTypes[3].Exporter = func(v interface{}, i int) interface{} {
			switch v := v.(*SendMsg); i {
			case 0:
				return &v.state
			case 1:
				return &v.sizeCache
			case 2:
				return &v.unknownFields
			default:
				return nil
			}
		}
		file_Message2Server_proto_msgTypes[4].Exporter = func(v interface{}, i int) interface{} {
			switch v := v.(*AttackMsg); i {
			case 0:
				return &v.state
			case 1:
				return &v.sizeCache
			case 2:
				return &v.unknownFields
			default:
				return nil
			}
		}
		file_Message2Server_proto_msgTypes[5].Exporter = func(v interface{}, i int) interface{} {
			switch v := v.(*IDMsg); i {
			case 0:
				return &v.state
			case 1:
				return &v.sizeCache
			case 2:
				return &v.unknownFields
			default:
				return nil
			}
		}
		file_Message2Server_proto_msgTypes[6].Exporter = func(v interface{}, i int) interface{} {
			switch v := v.(*TreatAndRescueMsg); i {
			case 0:
				return &v.state
			case 1:
				return &v.sizeCache
			case 2:
				return &v.unknownFields
			default:
				return nil
			}
		}
		file_Message2Server_proto_msgTypes[7].Exporter = func(v interface{}, i int) interface{} {
			switch v := v.(*SkillMsg); i {
			case 0:
				return &v.state
			case 1:
				return &v.sizeCache
			case 2:
				return &v.unknownFields
			default:
				return nil
			}
		}
	}
	file_Message2Server_proto_msgTypes[0].OneofWrappers = []interface{}{
		(*PlayerMsg_StudentType)(nil),
		(*PlayerMsg_TrickerType)(nil),
	}
	type x struct{}
	out := protoimpl.TypeBuilder{
		File: protoimpl.DescBuilder{
			GoPackagePath: reflect.TypeOf(x{}).PkgPath(),
			RawDescriptor: file_Message2Server_proto_rawDesc,
			NumEnums:      0,
			NumMessages:   8,
			NumExtensions: 0,
			NumServices:   0,
		},
		GoTypes:           file_Message2Server_proto_goTypes,
		DependencyIndexes: file_Message2Server_proto_depIdxs,
		MessageInfos:      file_Message2Server_proto_msgTypes,
	}.Build()
	File_Message2Server_proto = out.File
	file_Message2Server_proto_rawDesc = nil
	file_Message2Server_proto_goTypes = nil
	file_Message2Server_proto_depIdxs = nil
}
