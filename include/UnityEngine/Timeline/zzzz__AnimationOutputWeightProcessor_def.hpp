#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AnimationOutputWeightProcessor)
namespace UnityEngine::Timeline {
struct __AnimationOutputWeightProcessor__WeightInfo;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::Playables {
struct Playable;
}
namespace UnityEngine::Animations {
struct AnimationPlayableOutput;
}
namespace UnityEngine::Timeline {
class ITimelineEvaluateCallback;
}
namespace UnityEngine::Animations {
struct AnimationMotionXToDeltaPlayable;
}
// Forward declare root types
namespace UnityEngine::Timeline {
class AnimationOutputWeightProcessor;
}
namespace UnityEngine::Timeline {
struct __AnimationOutputWeightProcessor__WeightInfo;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Timeline::AnimationOutputWeightProcessor);
MARK_VAL_T(::UnityEngine::Timeline::__AnimationOutputWeightProcessor__WeightInfo);
// Type: ::WeightInfo
namespace UnityEngine::Timeline {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13829))
// CS Name: ::AnimationOutputWeightProcessor::WeightInfo
struct CORDL_TYPE __AnimationOutputWeightProcessor__WeightInfo : public ::bs_hook::ValueTypeWrapper<0x28> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field mixer offset 0x0
 __declspec(property(get=__get_mixer, put=__set_mixer)) ::UnityEngine::Playables::Playable  mixer;

/// @brief Field parentMixer offset 0x10
 __declspec(property(get=__get_parentMixer, put=__set_parentMixer)) ::UnityEngine::Playables::Playable  parentMixer;

/// @brief Field port offset 0x20
 __declspec(property(get=__get_port, put=__set_port)) int32_t  port;

constexpr void __set_mixer(::UnityEngine::Playables::Playable  value) ;

constexpr ::UnityEngine::Playables::Playable& __get_mixer() ;

constexpr ::UnityEngine::Playables::Playable const& __get_mixer() const;

constexpr void __set_parentMixer(::UnityEngine::Playables::Playable  value) ;

constexpr ::UnityEngine::Playables::Playable& __get_parentMixer() ;

constexpr ::UnityEngine::Playables::Playable const& __get_parentMixer() const;

constexpr void __set_port(int32_t  value) ;

constexpr int32_t& __get_port() ;

constexpr int32_t const& __get_port() const;

// Ctor Parameters [CppParam { name: "mixer", ty: "::UnityEngine::Playables::Playable", modifiers: "", def_value: None }, CppParam { name: "parentMixer", ty: "::UnityEngine::Playables::Playable", modifiers: "", def_value: None }, CppParam { name: "port", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __AnimationOutputWeightProcessor__WeightInfo(::UnityEngine::Playables::Playable  mixer, ::UnityEngine::Playables::Playable  parentMixer, int32_t  port) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __AnimationOutputWeightProcessor__WeightInfo(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x28>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __AnimationOutputWeightProcessor__WeightInfo()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::__AnimationOutputWeightProcessor__WeightInfo, 0x28>, "Size mismatch!");

} // namespace end def UnityEngine::Timeline
// Type: UnityEngine.Timeline::AnimationOutputWeightProcessor
namespace UnityEngine::Timeline {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13830))
// CS Name: ::UnityEngine.Timeline::AnimationOutputWeightProcessor*
class CORDL_TYPE AnimationOutputWeightProcessor : public ::System::Object {
public:
// Declarations
using WeightInfo = ::UnityEngine::Timeline::__AnimationOutputWeightProcessor__WeightInfo;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::System::Object)]{};

/// @brief Field m_Output offset 0x10
 __declspec(property(get=__get_m_Output, put=__set_m_Output)) ::UnityEngine::Animations::AnimationPlayableOutput  m_Output;

/// @brief Field m_MotionXPlayable offset 0x20
 __declspec(property(get=__get_m_MotionXPlayable, put=__set_m_MotionXPlayable)) ::UnityEngine::Animations::AnimationMotionXToDeltaPlayable  m_MotionXPlayable;

/// @brief Field m_Mixers offset 0x30
 __declspec(property(get=__get_m_Mixers, put=__set_m_Mixers)) ::System::Collections::Generic::List_1<::UnityEngine::Timeline::__AnimationOutputWeightProcessor__WeightInfo>*  m_Mixers;

/// @brief Convert operator to "::UnityEngine::Timeline::ITimelineEvaluateCallback"
constexpr operator  ::UnityEngine::Timeline::ITimelineEvaluateCallback*() noexcept;

constexpr void __set_m_Output(::UnityEngine::Animations::AnimationPlayableOutput  value) ;

constexpr ::UnityEngine::Animations::AnimationPlayableOutput& __get_m_Output() ;

constexpr ::UnityEngine::Animations::AnimationPlayableOutput const& __get_m_Output() const;

constexpr void __set_m_MotionXPlayable(::UnityEngine::Animations::AnimationMotionXToDeltaPlayable  value) ;

constexpr ::UnityEngine::Animations::AnimationMotionXToDeltaPlayable& __get_m_MotionXPlayable() ;

constexpr ::UnityEngine::Animations::AnimationMotionXToDeltaPlayable const& __get_m_MotionXPlayable() const;

constexpr void __set_m_Mixers(::System::Collections::Generic::List_1<::UnityEngine::Timeline::__AnimationOutputWeightProcessor__WeightInfo>*  value) ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Timeline::__AnimationOutputWeightProcessor__WeightInfo>* __get_m_Mixers() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Timeline::__AnimationOutputWeightProcessor__WeightInfo>*> __get_m_Mixers() const;

static inline ::UnityEngine::Timeline::AnimationOutputWeightProcessor* New_ctor(::UnityEngine::Animations::AnimationPlayableOutput  output) ;

/// @brief Method .ctor addr 0x2c4f358 size 0xc0 virtual false final false
inline void _ctor(::UnityEngine::Animations::AnimationPlayableOutput  output) ;

/// @brief Method FindMixers addr 0x2c4f418 size 0xe8 virtual false final false
inline void FindMixers() ;

/// @brief Method FindMixers addr 0x2c4f500 size 0x2c8 virtual false final false
inline void FindMixers(::UnityEngine::Playables::Playable  parent, int32_t  port, ::UnityEngine::Playables::Playable  node) ;

/// @brief Method Evaluate addr 0x2c4f7c8 size 0x13c virtual true final true
inline void Evaluate() ;

// Ctor Parameters [CppParam { name: "", ty: "AnimationOutputWeightProcessor", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AnimationOutputWeightProcessor(AnimationOutputWeightProcessor && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AnimationOutputWeightProcessor", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AnimationOutputWeightProcessor(AnimationOutputWeightProcessor const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 AnimationOutputWeightProcessor()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::AnimationOutputWeightProcessor, 0x38>, "Size mismatch!");

} // namespace end def UnityEngine::Timeline
NEED_NO_BOX(::UnityEngine::Timeline::AnimationOutputWeightProcessor);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::AnimationOutputWeightProcessor*, "UnityEngine.Timeline", "AnimationOutputWeightProcessor");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::__AnimationOutputWeightProcessor__WeightInfo, "UnityEngine.Timeline", "AnimationOutputWeightProcessor/WeightInfo");
