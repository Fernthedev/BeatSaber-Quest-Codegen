#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NoteCutInfo)
namespace GlobalNamespace {
class NoteData;
}
namespace UnityEngine {
struct Vector3;
}
namespace GlobalNamespace {
struct SaberType;
}
namespace GlobalNamespace {
class ISaberMovementData;
}
namespace GlobalNamespace {
struct __NoteCutInfo__FailReason;
}
namespace UnityEngine {
struct Quaternion;
}
// Forward declare root types
namespace GlobalNamespace {
struct __NoteCutInfo__FailReason;
}
namespace GlobalNamespace {
struct NoteCutInfo;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__NoteCutInfo__FailReason);
MARK_VAL_T(::GlobalNamespace::NoteCutInfo);
// Type: ::FailReason
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15024))
// CS Name: ::NoteCutInfo::FailReason
struct CORDL_TYPE __NoteCutInfo__FailReason : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct ____NoteCutInfo__FailReason_Unwrapped
enum struct ____NoteCutInfo__FailReason_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_TooSoon = static_cast<int32_t>(0x1),
__E_WrongColor = static_cast<int32_t>(0x2),
__E_CutHarder = static_cast<int32_t>(0x3),
__E_WrongDirection = static_cast<int32_t>(0x4),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field None value: static_cast<int32_t>(0x0)
static ::GlobalNamespace::__NoteCutInfo__FailReason const None;

/// @brief Field TooSoon value: static_cast<int32_t>(0x1)
static ::GlobalNamespace::__NoteCutInfo__FailReason const TooSoon;

/// @brief Field WrongColor value: static_cast<int32_t>(0x2)
static ::GlobalNamespace::__NoteCutInfo__FailReason const WrongColor;

/// @brief Field CutHarder value: static_cast<int32_t>(0x3)
static ::GlobalNamespace::__NoteCutInfo__FailReason const CutHarder;

/// @brief Field WrongDirection value: static_cast<int32_t>(0x4)
static ::GlobalNamespace::__NoteCutInfo__FailReason const WrongDirection;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator ____NoteCutInfo__FailReason_Unwrapped () const noexcept {
return std::bit_cast<____NoteCutInfo__FailReason_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __NoteCutInfo__FailReason(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __NoteCutInfo__FailReason(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __NoteCutInfo__FailReason()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__NoteCutInfo__FailReason, 0x4>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::NoteCutInfo
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15025))
// CS Name: ::NoteCutInfo
struct CORDL_TYPE NoteCutInfo : public ::bs_hook::ValueTypeWrapper<0x90> {
public:
// Declarations
using FailReason = ::GlobalNamespace::__NoteCutInfo__FailReason;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x90};

/// @brief Field noteData offset 0x0
 __declspec(property(get=__get_noteData, put=__set_noteData)) ::GlobalNamespace::NoteData*  noteData;

/// @brief Field speedOK offset 0x8
 __declspec(property(get=__get_speedOK, put=__set_speedOK)) bool  speedOK;

/// @brief Field directionOK offset 0x9
 __declspec(property(get=__get_directionOK, put=__set_directionOK)) bool  directionOK;

/// @brief Field saberTypeOK offset 0xa
 __declspec(property(get=__get_saberTypeOK, put=__set_saberTypeOK)) bool  saberTypeOK;

/// @brief Field wasCutTooSoon offset 0xb
 __declspec(property(get=__get_wasCutTooSoon, put=__set_wasCutTooSoon)) bool  wasCutTooSoon;

/// @brief Field saberSpeed offset 0xc
 __declspec(property(get=__get_saberSpeed, put=__set_saberSpeed)) float_t  saberSpeed;

/// @brief Field saberDir offset 0x10
 __declspec(property(get=__get_saberDir, put=__set_saberDir)) ::UnityEngine::Vector3  saberDir;

/// @brief Field saberType offset 0x1c
 __declspec(property(get=__get_saberType, put=__set_saberType)) ::GlobalNamespace::SaberType  saberType;

/// @brief Field timeDeviation offset 0x20
 __declspec(property(get=__get_timeDeviation, put=__set_timeDeviation)) float_t  timeDeviation;

/// @brief Field cutDirDeviation offset 0x24
 __declspec(property(get=__get_cutDirDeviation, put=__set_cutDirDeviation)) float_t  cutDirDeviation;

/// @brief Field cutPoint offset 0x28
 __declspec(property(get=__get_cutPoint, put=__set_cutPoint)) ::UnityEngine::Vector3  cutPoint;

/// @brief Field cutNormal offset 0x34
 __declspec(property(get=__get_cutNormal, put=__set_cutNormal)) ::UnityEngine::Vector3  cutNormal;

/// @brief Field cutAngle offset 0x40
 __declspec(property(get=__get_cutAngle, put=__set_cutAngle)) float_t  cutAngle;

/// @brief Field cutDistanceToCenter offset 0x44
 __declspec(property(get=__get_cutDistanceToCenter, put=__set_cutDistanceToCenter)) float_t  cutDistanceToCenter;

/// @brief Field worldRotation offset 0x48
 __declspec(property(get=__get_worldRotation, put=__set_worldRotation)) ::UnityEngine::Quaternion  worldRotation;

/// @brief Field inverseWorldRotation offset 0x58
 __declspec(property(get=__get_inverseWorldRotation, put=__set_inverseWorldRotation)) ::UnityEngine::Quaternion  inverseWorldRotation;

/// @brief Field noteRotation offset 0x68
 __declspec(property(get=__get_noteRotation, put=__set_noteRotation)) ::UnityEngine::Quaternion  noteRotation;

/// @brief Field notePosition offset 0x78
 __declspec(property(get=__get_notePosition, put=__set_notePosition)) ::UnityEngine::Vector3  notePosition;

/// @brief Field saberMovementData offset 0x88
 __declspec(property(get=__get_saberMovementData, put=__set_saberMovementData)) ::GlobalNamespace::ISaberMovementData*  saberMovementData;

 __declspec(property(get=get_allIsOK)) bool  allIsOK;

 __declspec(property(get=get_allExceptSaberTypeIsOK)) bool  allExceptSaberTypeIsOK;

 __declspec(property(get=get_failReason)) ::GlobalNamespace::__NoteCutInfo__FailReason  failReason;

constexpr void __set_noteData(::GlobalNamespace::NoteData*  value) ;

constexpr ::GlobalNamespace::NoteData* __get_noteData() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::NoteData*> __get_noteData() const;

constexpr void __set_speedOK(bool  value) ;

constexpr bool& __get_speedOK() ;

constexpr bool const& __get_speedOK() const;

constexpr void __set_directionOK(bool  value) ;

constexpr bool& __get_directionOK() ;

constexpr bool const& __get_directionOK() const;

constexpr void __set_saberTypeOK(bool  value) ;

constexpr bool& __get_saberTypeOK() ;

constexpr bool const& __get_saberTypeOK() const;

constexpr void __set_wasCutTooSoon(bool  value) ;

constexpr bool& __get_wasCutTooSoon() ;

constexpr bool const& __get_wasCutTooSoon() const;

constexpr void __set_saberSpeed(float_t  value) ;

constexpr float_t& __get_saberSpeed() ;

constexpr float_t const& __get_saberSpeed() const;

constexpr void __set_saberDir(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get_saberDir() ;

constexpr ::UnityEngine::Vector3 const& __get_saberDir() const;

constexpr void __set_saberType(::GlobalNamespace::SaberType  value) ;

constexpr ::GlobalNamespace::SaberType& __get_saberType() ;

constexpr ::GlobalNamespace::SaberType const& __get_saberType() const;

constexpr void __set_timeDeviation(float_t  value) ;

constexpr float_t& __get_timeDeviation() ;

constexpr float_t const& __get_timeDeviation() const;

constexpr void __set_cutDirDeviation(float_t  value) ;

constexpr float_t& __get_cutDirDeviation() ;

constexpr float_t const& __get_cutDirDeviation() const;

constexpr void __set_cutPoint(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get_cutPoint() ;

constexpr ::UnityEngine::Vector3 const& __get_cutPoint() const;

constexpr void __set_cutNormal(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get_cutNormal() ;

constexpr ::UnityEngine::Vector3 const& __get_cutNormal() const;

constexpr void __set_cutAngle(float_t  value) ;

constexpr float_t& __get_cutAngle() ;

constexpr float_t const& __get_cutAngle() const;

constexpr void __set_cutDistanceToCenter(float_t  value) ;

constexpr float_t& __get_cutDistanceToCenter() ;

constexpr float_t const& __get_cutDistanceToCenter() const;

constexpr void __set_worldRotation(::UnityEngine::Quaternion  value) ;

constexpr ::UnityEngine::Quaternion& __get_worldRotation() ;

constexpr ::UnityEngine::Quaternion const& __get_worldRotation() const;

constexpr void __set_inverseWorldRotation(::UnityEngine::Quaternion  value) ;

constexpr ::UnityEngine::Quaternion& __get_inverseWorldRotation() ;

constexpr ::UnityEngine::Quaternion const& __get_inverseWorldRotation() const;

constexpr void __set_noteRotation(::UnityEngine::Quaternion  value) ;

constexpr ::UnityEngine::Quaternion& __get_noteRotation() ;

constexpr ::UnityEngine::Quaternion const& __get_noteRotation() const;

constexpr void __set_notePosition(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get_notePosition() ;

constexpr ::UnityEngine::Vector3 const& __get_notePosition() const;

constexpr void __set_saberMovementData(::GlobalNamespace::ISaberMovementData*  value) ;

constexpr ::GlobalNamespace::ISaberMovementData* __get_saberMovementData() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ISaberMovementData*> __get_saberMovementData() const;

/// @brief Method get_allIsOK addr 0x12a3fb8 size 0x30 virtual false final false
inline bool get_allIsOK() ;

/// @brief Method get_allExceptSaberTypeIsOK addr 0x12a3fe8 size 0x28 virtual false final false
inline bool get_allExceptSaberTypeIsOK() ;

/// @brief Method get_failReason addr 0x12a4010 size 0x44 virtual false final false
inline ::GlobalNamespace::__NoteCutInfo__FailReason get_failReason() ;

/// @brief Method .ctor addr 0x12a4054 size 0x234 virtual false final false
inline void _ctor(::GlobalNamespace::NoteData*  noteData, bool  speedOK, bool  directionOK, bool  saberTypeOK, bool  wasCutTooSoon, float_t  saberSpeed, ::UnityEngine::Vector3  saberDir, ::GlobalNamespace::SaberType  saberType, float_t  timeDeviation, float_t  cutDirDeviation, ::UnityEngine::Vector3  cutPoint, ::UnityEngine::Vector3  cutNormal, float_t  cutDistanceToCenter, float_t  cutAngle, ::UnityEngine::Quaternion  worldRotation, ::UnityEngine::Quaternion  inverseWorldRotation, ::UnityEngine::Quaternion  noteRotation, ::UnityEngine::Vector3  notePosition, ::GlobalNamespace::ISaberMovementData*  saberMovementData) ;

// Ctor Parameters [CppParam { name: "noteData", ty: "::GlobalNamespace::NoteData*", modifiers: "", def_value: None }, CppParam { name: "speedOK", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "directionOK", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "saberTypeOK", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "wasCutTooSoon", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "saberSpeed", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "saberDir", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "saberType", ty: "::GlobalNamespace::SaberType", modifiers: "", def_value: None }, CppParam { name: "timeDeviation", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "cutDirDeviation", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "cutPoint", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "cutNormal", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "cutAngle", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "cutDistanceToCenter", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "worldRotation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: None }, CppParam { name: "inverseWorldRotation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: None }, CppParam { name: "noteRotation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: None }, CppParam { name: "notePosition", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "saberMovementData", ty: "::GlobalNamespace::ISaberMovementData*", modifiers: "", def_value: None }]
constexpr NoteCutInfo(::GlobalNamespace::NoteData*  noteData, bool  speedOK, bool  directionOK, bool  saberTypeOK, bool  wasCutTooSoon, float_t  saberSpeed, ::UnityEngine::Vector3  saberDir, ::GlobalNamespace::SaberType  saberType, float_t  timeDeviation, float_t  cutDirDeviation, ::UnityEngine::Vector3  cutPoint, ::UnityEngine::Vector3  cutNormal, float_t  cutAngle, float_t  cutDistanceToCenter, ::UnityEngine::Quaternion  worldRotation, ::UnityEngine::Quaternion  inverseWorldRotation, ::UnityEngine::Quaternion  noteRotation, ::UnityEngine::Vector3  notePosition, ::GlobalNamespace::ISaberMovementData*  saberMovementData) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit NoteCutInfo(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x90>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 NoteCutInfo()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::NoteCutInfo, 0x90>, "Size mismatch!");

} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__NoteCutInfo__FailReason, "", "NoteCutInfo/FailReason");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NoteCutInfo, "", "NoteCutInfo");
