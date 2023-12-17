#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PoolableSerializable_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SliderSpawnInfoNetSerializable)
namespace LiteNetLib::Utils {
class NetDataWriter;
}
namespace GlobalNamespace {
struct ColorType;
}
namespace GlobalNamespace {
struct SliderMidAnchorMode;
}
namespace GlobalNamespace {
struct Vector3Serializable;
}
namespace LiteNetLib::Utils {
class NetDataReader;
}
namespace GlobalNamespace {
struct NoteLineLayer;
}
namespace UnityEngine {
struct Vector3;
}
namespace GlobalNamespace {
struct __SliderData__Type;
}
namespace GlobalNamespace {
struct NoteCutDirection;
}
// Forward declare root types
namespace GlobalNamespace {
class SliderSpawnInfoNetSerializable;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SliderSpawnInfoNetSerializable);
// Type: ::SliderSpawnInfoNetSerializable
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15033))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15046))
// CS Name: ::SliderSpawnInfoNetSerializable*
class CORDL_TYPE SliderSpawnInfoNetSerializable : public ::GlobalNamespace::PoolableSerializable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0xc8};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0xc8 - sizeof(::GlobalNamespace::PoolableSerializable)]{};

/// @brief Field colorType offset 0x14
 __declspec(property(get=__get_colorType, put=__set_colorType)) ::GlobalNamespace::ColorType  colorType;

/// @brief Field sliderType offset 0x18
 __declspec(property(get=__get_sliderType, put=__set_sliderType)) ::GlobalNamespace::__SliderData__Type  sliderType;

/// @brief Field hasHeadNote offset 0x1c
 __declspec(property(get=__get_hasHeadNote, put=__set_hasHeadNote)) bool  hasHeadNote;

/// @brief Field headTime offset 0x20
 __declspec(property(get=__get_headTime, put=__set_headTime)) float_t  headTime;

/// @brief Field headLineIndex offset 0x24
 __declspec(property(get=__get_headLineIndex, put=__set_headLineIndex)) int32_t  headLineIndex;

/// @brief Field headLineLayer offset 0x28
 __declspec(property(get=__get_headLineLayer, put=__set_headLineLayer)) ::GlobalNamespace::NoteLineLayer  headLineLayer;

/// @brief Field headBeforeJumpLineLayer offset 0x2c
 __declspec(property(get=__get_headBeforeJumpLineLayer, put=__set_headBeforeJumpLineLayer)) ::GlobalNamespace::NoteLineLayer  headBeforeJumpLineLayer;

/// @brief Field headControlPointLengthMultiplier offset 0x30
 __declspec(property(get=__get_headControlPointLengthMultiplier, put=__set_headControlPointLengthMultiplier)) float_t  headControlPointLengthMultiplier;

/// @brief Field headCutDirection offset 0x34
 __declspec(property(get=__get_headCutDirection, put=__set_headCutDirection)) ::GlobalNamespace::NoteCutDirection  headCutDirection;

/// @brief Field headCutDirectionAngleOffset offset 0x38
 __declspec(property(get=__get_headCutDirectionAngleOffset, put=__set_headCutDirectionAngleOffset)) float_t  headCutDirectionAngleOffset;

/// @brief Field hasTailNote offset 0x3c
 __declspec(property(get=__get_hasTailNote, put=__set_hasTailNote)) bool  hasTailNote;

/// @brief Field tailTime offset 0x40
 __declspec(property(get=__get_tailTime, put=__set_tailTime)) float_t  tailTime;

/// @brief Field tailLineIndex offset 0x44
 __declspec(property(get=__get_tailLineIndex, put=__set_tailLineIndex)) int32_t  tailLineIndex;

/// @brief Field tailLineLayer offset 0x48
 __declspec(property(get=__get_tailLineLayer, put=__set_tailLineLayer)) ::GlobalNamespace::NoteLineLayer  tailLineLayer;

/// @brief Field tailBeforeJumpLineLayer offset 0x4c
 __declspec(property(get=__get_tailBeforeJumpLineLayer, put=__set_tailBeforeJumpLineLayer)) ::GlobalNamespace::NoteLineLayer  tailBeforeJumpLineLayer;

/// @brief Field tailControlPointLengthMultiplier offset 0x50
 __declspec(property(get=__get_tailControlPointLengthMultiplier, put=__set_tailControlPointLengthMultiplier)) float_t  tailControlPointLengthMultiplier;

/// @brief Field tailCutDirection offset 0x54
 __declspec(property(get=__get_tailCutDirection, put=__set_tailCutDirection)) ::GlobalNamespace::NoteCutDirection  tailCutDirection;

/// @brief Field tailCutDirectionAngleOffset offset 0x58
 __declspec(property(get=__get_tailCutDirectionAngleOffset, put=__set_tailCutDirectionAngleOffset)) float_t  tailCutDirectionAngleOffset;

/// @brief Field midAnchorMode offset 0x5c
 __declspec(property(get=__get_midAnchorMode, put=__set_midAnchorMode)) ::GlobalNamespace::SliderMidAnchorMode  midAnchorMode;

/// @brief Field sliceCount offset 0x60
 __declspec(property(get=__get_sliceCount, put=__set_sliceCount)) int32_t  sliceCount;

/// @brief Field squishAmount offset 0x64
 __declspec(property(get=__get_squishAmount, put=__set_squishAmount)) float_t  squishAmount;

/// @brief Field headMoveStartPos offset 0x68
 __declspec(property(get=__get_headMoveStartPos, put=__set_headMoveStartPos)) ::GlobalNamespace::Vector3Serializable  headMoveStartPos;

/// @brief Field headJumpStartPos offset 0x74
 __declspec(property(get=__get_headJumpStartPos, put=__set_headJumpStartPos)) ::GlobalNamespace::Vector3Serializable  headJumpStartPos;

/// @brief Field headJumpEndPos offset 0x80
 __declspec(property(get=__get_headJumpEndPos, put=__set_headJumpEndPos)) ::GlobalNamespace::Vector3Serializable  headJumpEndPos;

/// @brief Field headJumpGravity offset 0x8c
 __declspec(property(get=__get_headJumpGravity, put=__set_headJumpGravity)) float_t  headJumpGravity;

/// @brief Field tailMoveStartPos offset 0x90
 __declspec(property(get=__get_tailMoveStartPos, put=__set_tailMoveStartPos)) ::GlobalNamespace::Vector3Serializable  tailMoveStartPos;

/// @brief Field tailJumpStartPos offset 0x9c
 __declspec(property(get=__get_tailJumpStartPos, put=__set_tailJumpStartPos)) ::GlobalNamespace::Vector3Serializable  tailJumpStartPos;

/// @brief Field tailJumpEndPos offset 0xa8
 __declspec(property(get=__get_tailJumpEndPos, put=__set_tailJumpEndPos)) ::GlobalNamespace::Vector3Serializable  tailJumpEndPos;

/// @brief Field tailJumpGravity offset 0xb4
 __declspec(property(get=__get_tailJumpGravity, put=__set_tailJumpGravity)) float_t  tailJumpGravity;

/// @brief Field moveDuration offset 0xb8
 __declspec(property(get=__get_moveDuration, put=__set_moveDuration)) float_t  moveDuration;

/// @brief Field jumpDuration offset 0xbc
 __declspec(property(get=__get_jumpDuration, put=__set_jumpDuration)) float_t  jumpDuration;

/// @brief Field rotation offset 0xc0
 __declspec(property(get=__get_rotation, put=__set_rotation)) float_t  rotation;

constexpr void __set_colorType(::GlobalNamespace::ColorType  value) ;

constexpr ::GlobalNamespace::ColorType& __get_colorType() ;

constexpr ::GlobalNamespace::ColorType const& __get_colorType() const;

constexpr void __set_sliderType(::GlobalNamespace::__SliderData__Type  value) ;

constexpr ::GlobalNamespace::__SliderData__Type& __get_sliderType() ;

constexpr ::GlobalNamespace::__SliderData__Type const& __get_sliderType() const;

constexpr void __set_hasHeadNote(bool  value) ;

constexpr bool& __get_hasHeadNote() ;

constexpr bool const& __get_hasHeadNote() const;

constexpr void __set_headTime(float_t  value) ;

constexpr float_t& __get_headTime() ;

constexpr float_t const& __get_headTime() const;

constexpr void __set_headLineIndex(int32_t  value) ;

constexpr int32_t& __get_headLineIndex() ;

constexpr int32_t const& __get_headLineIndex() const;

constexpr void __set_headLineLayer(::GlobalNamespace::NoteLineLayer  value) ;

constexpr ::GlobalNamespace::NoteLineLayer& __get_headLineLayer() ;

constexpr ::GlobalNamespace::NoteLineLayer const& __get_headLineLayer() const;

constexpr void __set_headBeforeJumpLineLayer(::GlobalNamespace::NoteLineLayer  value) ;

constexpr ::GlobalNamespace::NoteLineLayer& __get_headBeforeJumpLineLayer() ;

constexpr ::GlobalNamespace::NoteLineLayer const& __get_headBeforeJumpLineLayer() const;

constexpr void __set_headControlPointLengthMultiplier(float_t  value) ;

constexpr float_t& __get_headControlPointLengthMultiplier() ;

constexpr float_t const& __get_headControlPointLengthMultiplier() const;

constexpr void __set_headCutDirection(::GlobalNamespace::NoteCutDirection  value) ;

constexpr ::GlobalNamespace::NoteCutDirection& __get_headCutDirection() ;

constexpr ::GlobalNamespace::NoteCutDirection const& __get_headCutDirection() const;

constexpr void __set_headCutDirectionAngleOffset(float_t  value) ;

constexpr float_t& __get_headCutDirectionAngleOffset() ;

constexpr float_t const& __get_headCutDirectionAngleOffset() const;

constexpr void __set_hasTailNote(bool  value) ;

constexpr bool& __get_hasTailNote() ;

constexpr bool const& __get_hasTailNote() const;

constexpr void __set_tailTime(float_t  value) ;

constexpr float_t& __get_tailTime() ;

constexpr float_t const& __get_tailTime() const;

constexpr void __set_tailLineIndex(int32_t  value) ;

constexpr int32_t& __get_tailLineIndex() ;

constexpr int32_t const& __get_tailLineIndex() const;

constexpr void __set_tailLineLayer(::GlobalNamespace::NoteLineLayer  value) ;

constexpr ::GlobalNamespace::NoteLineLayer& __get_tailLineLayer() ;

constexpr ::GlobalNamespace::NoteLineLayer const& __get_tailLineLayer() const;

constexpr void __set_tailBeforeJumpLineLayer(::GlobalNamespace::NoteLineLayer  value) ;

constexpr ::GlobalNamespace::NoteLineLayer& __get_tailBeforeJumpLineLayer() ;

constexpr ::GlobalNamespace::NoteLineLayer const& __get_tailBeforeJumpLineLayer() const;

constexpr void __set_tailControlPointLengthMultiplier(float_t  value) ;

constexpr float_t& __get_tailControlPointLengthMultiplier() ;

constexpr float_t const& __get_tailControlPointLengthMultiplier() const;

constexpr void __set_tailCutDirection(::GlobalNamespace::NoteCutDirection  value) ;

constexpr ::GlobalNamespace::NoteCutDirection& __get_tailCutDirection() ;

constexpr ::GlobalNamespace::NoteCutDirection const& __get_tailCutDirection() const;

constexpr void __set_tailCutDirectionAngleOffset(float_t  value) ;

constexpr float_t& __get_tailCutDirectionAngleOffset() ;

constexpr float_t const& __get_tailCutDirectionAngleOffset() const;

constexpr void __set_midAnchorMode(::GlobalNamespace::SliderMidAnchorMode  value) ;

constexpr ::GlobalNamespace::SliderMidAnchorMode& __get_midAnchorMode() ;

constexpr ::GlobalNamespace::SliderMidAnchorMode const& __get_midAnchorMode() const;

constexpr void __set_sliceCount(int32_t  value) ;

constexpr int32_t& __get_sliceCount() ;

constexpr int32_t const& __get_sliceCount() const;

constexpr void __set_squishAmount(float_t  value) ;

constexpr float_t& __get_squishAmount() ;

constexpr float_t const& __get_squishAmount() const;

constexpr void __set_headMoveStartPos(::GlobalNamespace::Vector3Serializable  value) ;

constexpr ::GlobalNamespace::Vector3Serializable& __get_headMoveStartPos() ;

constexpr ::GlobalNamespace::Vector3Serializable const& __get_headMoveStartPos() const;

constexpr void __set_headJumpStartPos(::GlobalNamespace::Vector3Serializable  value) ;

constexpr ::GlobalNamespace::Vector3Serializable& __get_headJumpStartPos() ;

constexpr ::GlobalNamespace::Vector3Serializable const& __get_headJumpStartPos() const;

constexpr void __set_headJumpEndPos(::GlobalNamespace::Vector3Serializable  value) ;

constexpr ::GlobalNamespace::Vector3Serializable& __get_headJumpEndPos() ;

constexpr ::GlobalNamespace::Vector3Serializable const& __get_headJumpEndPos() const;

constexpr void __set_headJumpGravity(float_t  value) ;

constexpr float_t& __get_headJumpGravity() ;

constexpr float_t const& __get_headJumpGravity() const;

constexpr void __set_tailMoveStartPos(::GlobalNamespace::Vector3Serializable  value) ;

constexpr ::GlobalNamespace::Vector3Serializable& __get_tailMoveStartPos() ;

constexpr ::GlobalNamespace::Vector3Serializable const& __get_tailMoveStartPos() const;

constexpr void __set_tailJumpStartPos(::GlobalNamespace::Vector3Serializable  value) ;

constexpr ::GlobalNamespace::Vector3Serializable& __get_tailJumpStartPos() ;

constexpr ::GlobalNamespace::Vector3Serializable const& __get_tailJumpStartPos() const;

constexpr void __set_tailJumpEndPos(::GlobalNamespace::Vector3Serializable  value) ;

constexpr ::GlobalNamespace::Vector3Serializable& __get_tailJumpEndPos() ;

constexpr ::GlobalNamespace::Vector3Serializable const& __get_tailJumpEndPos() const;

constexpr void __set_tailJumpGravity(float_t  value) ;

constexpr float_t& __get_tailJumpGravity() ;

constexpr float_t const& __get_tailJumpGravity() const;

constexpr void __set_moveDuration(float_t  value) ;

constexpr float_t& __get_moveDuration() ;

constexpr float_t const& __get_moveDuration() const;

constexpr void __set_jumpDuration(float_t  value) ;

constexpr float_t& __get_jumpDuration() ;

constexpr float_t const& __get_jumpDuration() const;

constexpr void __set_rotation(float_t  value) ;

constexpr float_t& __get_rotation() ;

constexpr float_t const& __get_rotation() const;

/// @brief Method Obtain addr 0x12a9014 size 0x64 virtual false final false
static inline ::GlobalNamespace::SliderSpawnInfoNetSerializable* Obtain() ;

/// @brief Method Init addr 0x12a9078 size 0x244 virtual false final false
inline ::GlobalNamespace::SliderSpawnInfoNetSerializable* Init(::GlobalNamespace::ColorType  colorType, ::GlobalNamespace::__SliderData__Type  sliderType, bool  hasHeadNote, float_t  headTime, int32_t  headLineIndex, ::GlobalNamespace::NoteLineLayer  headLineLayer, ::GlobalNamespace::NoteLineLayer  headBeforeJumpLineLayer, float_t  headControlPointLengthMultiplier, ::GlobalNamespace::NoteCutDirection  headCutDirection, float_t  headCutDirectionAngleOffset, bool  hasTailNote, float_t  tailTime, int32_t  tailLineIndex, ::GlobalNamespace::NoteLineLayer  tailLineLayer, ::GlobalNamespace::NoteLineLayer  tailBeforeJumpLineLayer, float_t  tailControlPointLengthMultiplier, ::GlobalNamespace::NoteCutDirection  tailCutDirection, float_t  tailCutDirectionAngleOffset, ::GlobalNamespace::SliderMidAnchorMode  midAnchorMode, int32_t  sliceCount, float_t  squishAmount, ::UnityEngine::Vector3  headMoveStartPos, ::UnityEngine::Vector3  headJumpStartPos, ::UnityEngine::Vector3  headJumpEndPos, float_t  headJumpGravity, ::UnityEngine::Vector3  tailMoveStartPos, ::UnityEngine::Vector3  tailJumpStartPos, ::UnityEngine::Vector3  tailJumpEndPos, float_t  tailJumpGravity, float_t  moveDuration, float_t  jumpDuration, float_t  rotation) ;

static inline ::GlobalNamespace::SliderSpawnInfoNetSerializable* New_ctor() ;

/// @brief Method .ctor addr 0x12a92bc size 0x58 virtual false final false
inline void _ctor() ;

/// @brief Method Serialize addr 0x12a9314 size 0x238 virtual true final false
inline void Serialize(::LiteNetLib::Utils::NetDataWriter*  writer) ;

/// @brief Method Deserialize addr 0x12a954c size 0x274 virtual true final false
inline void Deserialize(::LiteNetLib::Utils::NetDataReader*  reader) ;

// Ctor Parameters [CppParam { name: "", ty: "SliderSpawnInfoNetSerializable", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SliderSpawnInfoNetSerializable(SliderSpawnInfoNetSerializable && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SliderSpawnInfoNetSerializable", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SliderSpawnInfoNetSerializable(SliderSpawnInfoNetSerializable const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 SliderSpawnInfoNetSerializable()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SliderSpawnInfoNetSerializable, 0xc8>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SliderSpawnInfoNetSerializable);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SliderSpawnInfoNetSerializable*, "", "SliderSpawnInfoNetSerializable");
