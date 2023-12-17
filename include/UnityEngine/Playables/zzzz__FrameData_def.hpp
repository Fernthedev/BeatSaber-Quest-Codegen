#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FrameData)
namespace UnityEngine::Playables {
struct __FrameData__Flags;
}
namespace UnityEngine::Playables {
struct __FrameData__EvaluationType;
}
namespace UnityEngine::Playables {
struct PlayState;
}
namespace UnityEngine::Playables {
struct PlayableOutput;
}
// Forward declare root types
namespace UnityEngine::Playables {
struct __FrameData__EvaluationType;
}
namespace UnityEngine::Playables {
struct __FrameData__Flags;
}
namespace UnityEngine::Playables {
struct FrameData;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Playables::__FrameData__EvaluationType);
MARK_VAL_T(::UnityEngine::Playables::__FrameData__Flags);
MARK_VAL_T(::UnityEngine::Playables::FrameData);
// Type: ::Flags
namespace UnityEngine::Playables {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10416))
// CS Name: ::FrameData::Flags
struct CORDL_TYPE __FrameData__Flags : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct ____FrameData__Flags_Unwrapped
enum struct ____FrameData__Flags_Unwrapped : int32_t {
__E_Evaluate = static_cast<int32_t>(0x1),
__E_SeekOccured = static_cast<int32_t>(0x2),
__E_Loop = static_cast<int32_t>(0x4),
__E_Hold = static_cast<int32_t>(0x8),
__E_EffectivePlayStateDelayed = static_cast<int32_t>(0x10),
__E_EffectivePlayStatePlaying = static_cast<int32_t>(0x20),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Evaluate value: static_cast<int32_t>(0x1)
static ::UnityEngine::Playables::__FrameData__Flags const Evaluate;

/// @brief Field SeekOccured value: static_cast<int32_t>(0x2)
static ::UnityEngine::Playables::__FrameData__Flags const SeekOccured;

/// @brief Field Loop value: static_cast<int32_t>(0x4)
static ::UnityEngine::Playables::__FrameData__Flags const Loop;

/// @brief Field Hold value: static_cast<int32_t>(0x8)
static ::UnityEngine::Playables::__FrameData__Flags const Hold;

/// @brief Field EffectivePlayStateDelayed value: static_cast<int32_t>(0x10)
static ::UnityEngine::Playables::__FrameData__Flags const EffectivePlayStateDelayed;

/// @brief Field EffectivePlayStatePlaying value: static_cast<int32_t>(0x20)
static ::UnityEngine::Playables::__FrameData__Flags const EffectivePlayStatePlaying;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator ____FrameData__Flags_Unwrapped () const noexcept {
return std::bit_cast<____FrameData__Flags_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __FrameData__Flags(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __FrameData__Flags(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __FrameData__Flags()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Playables::__FrameData__Flags, 0x4>, "Size mismatch!");

} // namespace end def UnityEngine::Playables
// Type: ::EvaluationType
namespace UnityEngine::Playables {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10417))
// CS Name: ::FrameData::EvaluationType
struct CORDL_TYPE __FrameData__EvaluationType : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct ____FrameData__EvaluationType_Unwrapped
enum struct ____FrameData__EvaluationType_Unwrapped : int32_t {
__E_Evaluate = static_cast<int32_t>(0x0),
__E_Playback = static_cast<int32_t>(0x1),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Evaluate value: static_cast<int32_t>(0x0)
static ::UnityEngine::Playables::__FrameData__EvaluationType const Evaluate;

/// @brief Field Playback value: static_cast<int32_t>(0x1)
static ::UnityEngine::Playables::__FrameData__EvaluationType const Playback;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator ____FrameData__EvaluationType_Unwrapped () const noexcept {
return std::bit_cast<____FrameData__EvaluationType_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __FrameData__EvaluationType(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __FrameData__EvaluationType(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __FrameData__EvaluationType()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Playables::__FrameData__EvaluationType, 0x4>, "Size mismatch!");

} // namespace end def UnityEngine::Playables
// Type: UnityEngine.Playables::FrameData
namespace UnityEngine::Playables {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10418))
// CS Name: ::UnityEngine.Playables::FrameData
struct CORDL_TYPE FrameData : public ::bs_hook::ValueTypeWrapper<0x40> {
public:
// Declarations
using EvaluationType = ::UnityEngine::Playables::__FrameData__EvaluationType;

using Flags = ::UnityEngine::Playables::__FrameData__Flags;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field m_FrameID offset 0x0
 __declspec(property(get=__get_m_FrameID, put=__set_m_FrameID)) uint64_t  m_FrameID;

/// @brief Field m_DeltaTime offset 0x8
 __declspec(property(get=__get_m_DeltaTime, put=__set_m_DeltaTime)) double_t  m_DeltaTime;

/// @brief Field m_Weight offset 0x10
 __declspec(property(get=__get_m_Weight, put=__set_m_Weight)) float_t  m_Weight;

/// @brief Field m_EffectiveWeight offset 0x14
 __declspec(property(get=__get_m_EffectiveWeight, put=__set_m_EffectiveWeight)) float_t  m_EffectiveWeight;

/// @brief Field m_EffectiveParentDelay offset 0x18
 __declspec(property(get=__get_m_EffectiveParentDelay, put=__set_m_EffectiveParentDelay)) double_t  m_EffectiveParentDelay;

/// @brief Field m_EffectiveParentSpeed offset 0x20
 __declspec(property(get=__get_m_EffectiveParentSpeed, put=__set_m_EffectiveParentSpeed)) float_t  m_EffectiveParentSpeed;

/// @brief Field m_EffectiveSpeed offset 0x24
 __declspec(property(get=__get_m_EffectiveSpeed, put=__set_m_EffectiveSpeed)) float_t  m_EffectiveSpeed;

/// @brief Field m_Flags offset 0x28
 __declspec(property(get=__get_m_Flags, put=__set_m_Flags)) ::UnityEngine::Playables::__FrameData__Flags  m_Flags;

/// @brief Field m_Output offset 0x30
 __declspec(property(get=__get_m_Output, put=__set_m_Output)) ::UnityEngine::Playables::PlayableOutput  m_Output;

 __declspec(property(get=get_deltaTime)) float_t  deltaTime;

 __declspec(property(get=get_effectiveSpeed)) float_t  effectiveSpeed;

 __declspec(property(get=get_evaluationType)) ::UnityEngine::Playables::__FrameData__EvaluationType  evaluationType;

 __declspec(property(get=get_seekOccurred)) bool  seekOccurred;

 __declspec(property(get=get_timeLooped)) bool  timeLooped;

 __declspec(property(get=get_timeHeld)) bool  timeHeld;

 __declspec(property(get=get_output)) ::UnityEngine::Playables::PlayableOutput  output;

 __declspec(property(get=get_effectivePlayState)) ::UnityEngine::Playables::PlayState  effectivePlayState;

constexpr void __set_m_FrameID(uint64_t  value) ;

constexpr uint64_t& __get_m_FrameID() ;

constexpr uint64_t const& __get_m_FrameID() const;

constexpr void __set_m_DeltaTime(double_t  value) ;

constexpr double_t& __get_m_DeltaTime() ;

constexpr double_t const& __get_m_DeltaTime() const;

constexpr void __set_m_Weight(float_t  value) ;

constexpr float_t& __get_m_Weight() ;

constexpr float_t const& __get_m_Weight() const;

constexpr void __set_m_EffectiveWeight(float_t  value) ;

constexpr float_t& __get_m_EffectiveWeight() ;

constexpr float_t const& __get_m_EffectiveWeight() const;

constexpr void __set_m_EffectiveParentDelay(double_t  value) ;

constexpr double_t& __get_m_EffectiveParentDelay() ;

constexpr double_t const& __get_m_EffectiveParentDelay() const;

constexpr void __set_m_EffectiveParentSpeed(float_t  value) ;

constexpr float_t& __get_m_EffectiveParentSpeed() ;

constexpr float_t const& __get_m_EffectiveParentSpeed() const;

constexpr void __set_m_EffectiveSpeed(float_t  value) ;

constexpr float_t& __get_m_EffectiveSpeed() ;

constexpr float_t const& __get_m_EffectiveSpeed() const;

constexpr void __set_m_Flags(::UnityEngine::Playables::__FrameData__Flags  value) ;

constexpr ::UnityEngine::Playables::__FrameData__Flags& __get_m_Flags() ;

constexpr ::UnityEngine::Playables::__FrameData__Flags const& __get_m_Flags() const;

constexpr void __set_m_Output(::UnityEngine::Playables::PlayableOutput  value) ;

constexpr ::UnityEngine::Playables::PlayableOutput& __get_m_Output() ;

constexpr ::UnityEngine::Playables::PlayableOutput const& __get_m_Output() const;

/// @brief Method HasFlags addr 0x2cf53b8 size 0x10 virtual false final false
inline bool HasFlags(::UnityEngine::Playables::__FrameData__Flags  flag) ;

/// @brief Method get_deltaTime addr 0x2cf53c8 size 0xc virtual false final false
inline float_t get_deltaTime() ;

/// @brief Method get_effectiveSpeed addr 0x2cf53d4 size 0x8 virtual false final false
inline float_t get_effectiveSpeed() ;

/// @brief Method get_evaluationType addr 0x2cf53dc size 0x10 virtual false final false
inline ::UnityEngine::Playables::__FrameData__EvaluationType get_evaluationType() ;

/// @brief Method get_seekOccurred addr 0x2cf53ec size 0xc virtual false final false
inline bool get_seekOccurred() ;

/// @brief Method get_timeLooped addr 0x2cf53f8 size 0xc virtual false final false
inline bool get_timeLooped() ;

/// @brief Method get_timeHeld addr 0x2cf5404 size 0xc virtual false final false
inline bool get_timeHeld() ;

/// @brief Method get_output addr 0x2cf5410 size 0xc virtual false final false
inline ::UnityEngine::Playables::PlayableOutput get_output() ;

/// @brief Method get_effectivePlayState addr 0x2cf541c size 0x18 virtual false final false
inline ::UnityEngine::Playables::PlayState get_effectivePlayState() ;

// Ctor Parameters [CppParam { name: "m_FrameID", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "m_DeltaTime", ty: "double_t", modifiers: "", def_value: None }, CppParam { name: "m_Weight", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_EffectiveWeight", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_EffectiveParentDelay", ty: "double_t", modifiers: "", def_value: None }, CppParam { name: "m_EffectiveParentSpeed", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_EffectiveSpeed", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_Flags", ty: "::UnityEngine::Playables::__FrameData__Flags", modifiers: "", def_value: None }, CppParam { name: "m_Output", ty: "::UnityEngine::Playables::PlayableOutput", modifiers: "", def_value: None }]
constexpr FrameData(uint64_t  m_FrameID, double_t  m_DeltaTime, float_t  m_Weight, float_t  m_EffectiveWeight, double_t  m_EffectiveParentDelay, float_t  m_EffectiveParentSpeed, float_t  m_EffectiveSpeed, ::UnityEngine::Playables::__FrameData__Flags  m_Flags, ::UnityEngine::Playables::PlayableOutput  m_Output) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit FrameData(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x40>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 FrameData()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Playables::FrameData, 0x40>, "Size mismatch!");

} // namespace end def UnityEngine::Playables
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Playables::__FrameData__EvaluationType, "UnityEngine.Playables", "FrameData/EvaluationType");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Playables::__FrameData__Flags, "UnityEngine.Playables", "FrameData/Flags");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Playables::FrameData, "UnityEngine.Playables", "FrameData");
