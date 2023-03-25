// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: MessageType.proto

#include "MessageType.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

PROTOBUF_PRAGMA_INIT_SEG

namespace _pb = ::PROTOBUF_NAMESPACE_ID;
namespace _pbi = _pb::internal;

namespace protobuf
{
}  // namespace protobuf
static const ::_pb::EnumDescriptor* file_level_enum_descriptors_MessageType_2eproto[11];
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_MessageType_2eproto = nullptr;
const uint32_t TableStruct_MessageType_2eproto::offsets[1] = {};
static constexpr ::_pbi::MigrationSchema* schemas = nullptr;
static constexpr ::_pb::Message* const* file_default_instances = nullptr;

const char descriptor_table_protodef_MessageType_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
    "\n\021MessageType.proto\022\010protobuf*\207\001\n\nBullet"
    "Type\022\024\n\020NULL_BULLET_TYPE\020\000\022\020\n\014FLYING_KNI"
    "FE\020\001\022\034\n\030COMMON_ATTACK_OF_TRICKER\020\002\022\017\n\013FA"
    "ST_BULLET\020\003\022\023\n\017ORDINARY_BULLET\020\004\022\r\n\tATOM"
    "_BOMB\020\005*\241\001\n\tPlaceType\022\023\n\017NULL_PLACE_TYPE"
    "\020\000\022\010\n\004LAND\020\001\022\010\n\004WALL\020\002\022\t\n\005GRASS\020\003\022\r\n\tCLA"
    "SSROOM\020\004\022\010\n\004GATE\020\005\022\017\n\013HIDDEN_GATE\020\006\022\n\n\006W"
    "INDOW\020\007\022\t\n\005DOOR3\020\010\022\t\n\005DOOR5\020\t\022\t\n\005DOOR6\020\n"
    "\022\t\n\005CHEST\020\013*8\n\tShapeType\022\023\n\017NULL_SHAPE_T"
    "YPE\020\000\022\n\n\006CIRCLE\020\001\022\n\n\006SQUARE\020\002*\206\001\n\010PropTy"
    "pe\022\022\n\016NULL_PROP_TYPE\020\000\022\r\n\tADD_SPEED\020\001\022\022\n"
    "\016ADD_LIFE_OR_AP\020\002\022\020\n\014ADD_HP_OR_AP\020\003\022\023\n\017S"
    "HIELD_OR_SPEAR\020\004\022\010\n\004KEY3\020\005\022\010\n\004KEY5\020\006\022\010\n\004"
    "KEY6\020\007*f\n\017StudentBuffType\022\023\n\017NULL_SBUFF_"
    "TYPE\020\000\022\016\n\nSBUFFTYPE1\020\001\022\016\n\nSBUFFTYPE2\020\002\022\016"
    "\n\nSBUFFTYPE3\020\003\022\016\n\nSBUFFTYPE4\020\004*\251\002\n\013Playe"
    "rState\022\017\n\013NULL_STATUS\020\000\022\010\n\004IDLE\020\001\022\014\n\010LEA"
    "RNING\020\002\022\014\n\010ADDICTED\020\003\022\010\n\004QUIT\020\004\022\r\n\tGRADU"
    "ATED\020\005\022\013\n\007TREATED\020\006\022\013\n\007RESCUED\020\007\022\013\n\007STUN"
    "NED\020\010\022\014\n\010TREATING\020\t\022\014\n\010RESCUING\020\n\022\014\n\010SWI"
    "NGING\020\013\022\r\n\tATTACKING\020\014\022\013\n\007LOCKING\020\r\022\r\n\tR"
    "UMMAGING\020\016\022\014\n\010CLIMBING\020\017\022\023\n\017OPENING_A_CH"
    "EST\020\020\022\027\n\023USING_SPECIAL_SKILL\020\021\022\022\n\016OPENIN"
    "G_A_GATE\020\022*f\n\017TrickerBuffType\022\023\n\017NULL_TB"
    "UFF_TYPE\020\000\022\016\n\nTBUFFTYPE1\020\001\022\016\n\nTBUFFTYPE2"
    "\020\002\022\016\n\nTBUFFTYPE3\020\003\022\016\n\nTBUFFTYPE4\020\004*J\n\nPl"
    "ayerType\022\024\n\020NULL_PLAYER_TYPE\020\000\022\022\n\016STUDEN"
    "T_PLAYER\020\001\022\022\n\016TRICKER_PLAYER\020\002*g\n\013Studen"
    "tType\022\025\n\021NULL_STUDENT_TYPE\020\000\022\013\n\007ATHLETE\020"
    "\001\022\020\n\014STUDENTTYPE2\020\002\022\020\n\014STUDENTTYPE3\020\003\022\020\n"
    "\014STUDENTTYPE4\020\004*h\n\013TrickerType\022\025\n\021NULL_T"
    "RICKER_TYPE\020\000\022\014\n\010ASSASSIN\020\001\022\020\n\014TRICKERTY"
    "PE2\020\002\022\020\n\014TRICKERTYPE3\020\003\022\020\n\014TRICKERTYPE4\020"
    "\004*P\n\tGameState\022\023\n\017NULL_GAME_STATE\020\000\022\016\n\nG"
    "AME_START\020\001\022\020\n\014GAME_RUNNING\020\002\022\014\n\010GAME_EN"
    "D\020\003b\006proto3";
static ::_pbi::once_flag descriptor_table_MessageType_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_MessageType_2eproto = {
    false,
    false,
    1411,
    descriptor_table_protodef_MessageType_2eproto,
    "MessageType.proto",
    &descriptor_table_MessageType_2eproto_once,
    nullptr,
    0,
    0,
    schemas,
    file_default_instances,
    TableStruct_MessageType_2eproto::offsets,
    nullptr,
    file_level_enum_descriptors_MessageType_2eproto,
    file_level_service_descriptors_MessageType_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_MessageType_2eproto_getter()
{
    return &descriptor_table_MessageType_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_MessageType_2eproto(&descriptor_table_MessageType_2eproto);
namespace protobuf
{
    const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* BulletType_descriptor()
    {
        ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_MessageType_2eproto);
        return file_level_enum_descriptors_MessageType_2eproto[0];
    }
    bool BulletType_IsValid(int value)
    {
        switch (value)
        {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
            case 5:
                return true;
            default:
                return false;
        }
    }

    const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* PlaceType_descriptor()
    {
        ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_MessageType_2eproto);
        return file_level_enum_descriptors_MessageType_2eproto[1];
    }
    bool PlaceType_IsValid(int value)
    {
        switch (value)
        {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
            case 5:
            case 6:
            case 7:
            case 8:
            case 9:
            case 10:
            case 11:
                return true;
            default:
                return false;
        }
    }

    const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* ShapeType_descriptor()
    {
        ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_MessageType_2eproto);
        return file_level_enum_descriptors_MessageType_2eproto[2];
    }
    bool ShapeType_IsValid(int value)
    {
        switch (value)
        {
            case 0:
            case 1:
            case 2:
                return true;
            default:
                return false;
        }
    }

    const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* PropType_descriptor()
    {
        ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_MessageType_2eproto);
        return file_level_enum_descriptors_MessageType_2eproto[3];
    }
    bool PropType_IsValid(int value)
    {
        switch (value)
        {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
            case 5:
            case 6:
            case 7:
                return true;
            default:
                return false;
        }
    }

    const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* StudentBuffType_descriptor()
    {
        ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_MessageType_2eproto);
        return file_level_enum_descriptors_MessageType_2eproto[4];
    }
    bool StudentBuffType_IsValid(int value)
    {
        switch (value)
        {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
                return true;
            default:
                return false;
        }
    }

    const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* PlayerState_descriptor()
    {
        ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_MessageType_2eproto);
        return file_level_enum_descriptors_MessageType_2eproto[5];
    }
    bool PlayerState_IsValid(int value)
    {
        switch (value)
        {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
            case 5:
            case 6:
            case 7:
            case 8:
            case 9:
            case 10:
            case 11:
            case 12:
            case 13:
            case 14:
            case 15:
            case 16:
            case 17:
            case 18:
                return true;
            default:
                return false;
        }
    }

    const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* TrickerBuffType_descriptor()
    {
        ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_MessageType_2eproto);
        return file_level_enum_descriptors_MessageType_2eproto[6];
    }
    bool TrickerBuffType_IsValid(int value)
    {
        switch (value)
        {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
                return true;
            default:
                return false;
        }
    }

    const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* PlayerType_descriptor()
    {
        ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_MessageType_2eproto);
        return file_level_enum_descriptors_MessageType_2eproto[7];
    }
    bool PlayerType_IsValid(int value)
    {
        switch (value)
        {
            case 0:
            case 1:
            case 2:
                return true;
            default:
                return false;
        }
    }

    const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* StudentType_descriptor()
    {
        ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_MessageType_2eproto);
        return file_level_enum_descriptors_MessageType_2eproto[8];
    }
    bool StudentType_IsValid(int value)
    {
        switch (value)
        {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
                return true;
            default:
                return false;
        }
    }

    const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* TrickerType_descriptor()
    {
        ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_MessageType_2eproto);
        return file_level_enum_descriptors_MessageType_2eproto[9];
    }
    bool TrickerType_IsValid(int value)
    {
        switch (value)
        {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
                return true;
            default:
                return false;
        }
    }

    const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* GameState_descriptor()
    {
        ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_MessageType_2eproto);
        return file_level_enum_descriptors_MessageType_2eproto[10];
    }
    bool GameState_IsValid(int value)
    {
        switch (value)
        {
            case 0:
            case 1:
            case 2:
            case 3:
                return true;
            default:
                return false;
        }
    }

    // @@protoc_insertion_point(namespace_scope)
}  // namespace protobuf
PROTOBUF_NAMESPACE_OPEN
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
