#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__Background_def.hpp"
#include "UnityEngine/UIElements/zzzz__FontDefinition_def.hpp"
#include "UnityEngine/UIElements/zzzz__Length_def.hpp"
#include "UnityEngine/UIElements/zzzz__Rotate_def.hpp"
#include "UnityEngine/UIElements/zzzz__Scale_def.hpp"
#include "UnityEngine/UIElements/zzzz__TextShadow_def.hpp"
#include "UnityEngine/UIElements/zzzz__TransformOrigin_def.hpp"
#include "UnityEngine/UIElements/zzzz__Translate_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Font_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(StylePropertyAnimationSystem)
namespace System::Collections::Generic {
template<typename T>
class IEqualityComparer_1;
}
namespace UnityEngine::Pool {
template<typename T>
class ObjectPool_1;
}
namespace GlobalNamespace {
template<typename T>
class __StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class Queue_1;
}
namespace UnityEngine::UIElements {
class IPanel;
}
namespace UnityEngine::UIElements {
class EventBase;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine::UIElements {
struct Background;
}
namespace UnityEngine::UIElements {
struct FontDefinition;
}
namespace UnityEngine::UIElements {
struct Length;
}
namespace UnityEngine::UIElements {
struct Rotate;
}
namespace UnityEngine::UIElements {
struct Scale;
}
namespace UnityEngine::UIElements {
struct TextShadow;
}
namespace UnityEngine::UIElements {
struct TransformOrigin;
}
namespace UnityEngine::UIElements {
struct Translate;
}
namespace UnityEngine::UIElements {
template<typename T>
class __StylePropertyAnimationSystem__Values_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::UIElements {
class __StylePropertyAnimationSystem__ValuesFloat;
}
namespace UnityEngine::UIElements {
class __StylePropertyAnimationSystem__ValuesFontDefinition;
}
namespace UnityEngine::UIElements {
class __StylePropertyAnimationSystem__ValuesTextShadow;
}
namespace UnityEngine::UIElements {
class __StylePropertyAnimationSystem__Values;
}
namespace UnityEngine::UIElements {
class __StylePropertyAnimationSystem__ValuesBackground;
}
namespace UnityEngine::UIElements {
class __StylePropertyAnimationSystem__ValuesTranslate;
}
namespace UnityEngine::UIElements {
template<typename T>
class __StylePropertyAnimationSystem__ValuesDiscrete_1;
}
namespace UnityEngine {
class Font;
}
namespace UnityEngine::UIElements {
class __StylePropertyAnimationSystem__ValuesScale;
}
namespace UnityEngine::UIElements {
class IStylePropertyAnimationSystem;
}
namespace UnityEngine::UIElements {
struct __StylePropertyAnimationSystem__TransitionState;
}
namespace UnityEngine::UIElements {
class __StylePropertyAnimationSystem__ValuesInt;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine::UIElements {
template<typename TTimingData,typename TStyleData>
struct __StylePropertyAnimationSystem__AnimationDataSet_2;
}
namespace UnityEngine::UIElements {
class __StylePropertyAnimationSystem__ValuesColor;
}
namespace UnityEngine::UIElements {
class __StylePropertyAnimationSystem__ValuesLength;
}
namespace UnityEngine::UIElements {
struct __StylePropertyAnimationSystem__ElementPropertyPair;
}
namespace UnityEngine::UIElements {
class __StylePropertyAnimationSystem__ValuesTransformOrigin;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace UnityEngine::UIElements {
class __StylePropertyAnimationSystem__ValuesRotate;
}
namespace UnityEngine::UIElements::StyleSheets {
struct StylePropertyId;
}
namespace UnityEngine::UIElements {
class __StylePropertyAnimationSystem__ValuesFont;
}
namespace System {
template<typename T1,typename T2,typename TResult>
class Func_3;
}
namespace GlobalNamespace {
template<typename T>
struct __StylePropertyAnimationSystem__Values_1__EmptyData;
}
namespace GlobalNamespace {
template<typename T>
struct __StylePropertyAnimationSystem__Values_1__TimingData;
}
namespace GlobalNamespace {
template<typename T>
class __StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState;
}
namespace GlobalNamespace {
template<typename T>
struct __StylePropertyAnimationSystem__Values_1__StyleData;
}
namespace System {
class Object;
}
namespace GlobalNamespace {
class __StylePropertyAnimationSystem__ElementPropertyPair__EqualityComparer;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
class __StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState;
}
namespace GlobalNamespace {
template<typename T>
class __StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c;
}
namespace UnityEngine::UIElements {
template<typename T>
class __StylePropertyAnimationSystem__ValuesDiscrete_1;
}
namespace UnityEngine::UIElements {
template<typename T>
class __StylePropertyAnimationSystem__Values_1;
}
namespace UnityEngine::UIElements {
struct __StylePropertyAnimationSystem__TransitionState;
}
namespace GlobalNamespace {
class __StylePropertyAnimationSystem__ElementPropertyPair__EqualityComparer;
}
namespace GlobalNamespace {
template<>
class __StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<::UnityEngine::Color>;
}
namespace GlobalNamespace {
template<>
class __StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<::UnityEngine::UIElements::Background>;
}
namespace GlobalNamespace {
template<>
class __StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<::UnityEngine::UIElements::FontDefinition>;
}
namespace GlobalNamespace {
template<>
class __StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<::UnityEngine::UIElements::Length>;
}
namespace GlobalNamespace {
template<>
class __StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<::UnityEngine::UIElements::Rotate>;
}
namespace GlobalNamespace {
template<>
class __StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<::UnityEngine::UIElements::Scale>;
}
namespace GlobalNamespace {
template<>
class __StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<::UnityEngine::UIElements::TextShadow>;
}
namespace GlobalNamespace {
template<>
class __StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<::UnityEngine::UIElements::TransformOrigin>;
}
namespace GlobalNamespace {
template<>
class __StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<::UnityEngine::UIElements::Translate>;
}
namespace GlobalNamespace {
template<::il2cpp_utils::il2cpp_reference_type T>
class __StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<T>;
}
namespace GlobalNamespace {
template<>
class __StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<float_t>;
}
namespace GlobalNamespace {
template<>
class __StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<int32_t>;
}
namespace GlobalNamespace {
template<>
class __StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c<::UnityEngine::Color>;
}
namespace GlobalNamespace {
template<>
class __StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c<::UnityEngine::UIElements::Background>;
}
namespace GlobalNamespace {
template<>
class __StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c<::UnityEngine::UIElements::FontDefinition>;
}
namespace GlobalNamespace {
template<>
class __StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c<::UnityEngine::UIElements::Length>;
}
namespace GlobalNamespace {
template<>
class __StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c<::UnityEngine::UIElements::Rotate>;
}
namespace GlobalNamespace {
template<>
class __StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c<::UnityEngine::UIElements::Scale>;
}
namespace GlobalNamespace {
template<>
class __StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c<::UnityEngine::UIElements::TextShadow>;
}
namespace GlobalNamespace {
template<>
class __StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c<::UnityEngine::UIElements::TransformOrigin>;
}
namespace GlobalNamespace {
template<>
class __StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c<::UnityEngine::UIElements::Translate>;
}
namespace GlobalNamespace {
template<::il2cpp_utils::il2cpp_reference_type T>
class __StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c<T>;
}
namespace GlobalNamespace {
template<>
class __StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c<float_t>;
}
namespace GlobalNamespace {
template<>
class __StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c<int32_t>;
}
namespace UnityEngine::UIElements {
class StylePropertyAnimationSystem;
}
namespace UnityEngine::UIElements {
class __StylePropertyAnimationSystem__Values;
}
namespace UnityEngine::UIElements {
class __StylePropertyAnimationSystem__ValuesBackground;
}
namespace UnityEngine::UIElements {
class __StylePropertyAnimationSystem__ValuesColor;
}
namespace UnityEngine::UIElements {
template<>
class __StylePropertyAnimationSystem__ValuesDiscrete_1<::UnityEngine::UIElements::Background>;
}
namespace UnityEngine::UIElements {
template<>
class __StylePropertyAnimationSystem__ValuesDiscrete_1<::UnityEngine::UIElements::FontDefinition>;
}
namespace UnityEngine::UIElements {
template<::il2cpp_utils::il2cpp_reference_type T>
class __StylePropertyAnimationSystem__ValuesDiscrete_1<T>;
}
namespace UnityEngine::UIElements {
class __StylePropertyAnimationSystem__ValuesFloat;
}
namespace UnityEngine::UIElements {
class __StylePropertyAnimationSystem__ValuesFont;
}
namespace UnityEngine::UIElements {
class __StylePropertyAnimationSystem__ValuesFontDefinition;
}
namespace UnityEngine::UIElements {
class __StylePropertyAnimationSystem__ValuesInt;
}
namespace UnityEngine::UIElements {
class __StylePropertyAnimationSystem__ValuesLength;
}
namespace UnityEngine::UIElements {
class __StylePropertyAnimationSystem__ValuesRotate;
}
namespace UnityEngine::UIElements {
class __StylePropertyAnimationSystem__ValuesScale;
}
namespace UnityEngine::UIElements {
class __StylePropertyAnimationSystem__ValuesTextShadow;
}
namespace UnityEngine::UIElements {
class __StylePropertyAnimationSystem__ValuesTransformOrigin;
}
namespace UnityEngine::UIElements {
class __StylePropertyAnimationSystem__ValuesTranslate;
}
namespace UnityEngine::UIElements {
template<>
class __StylePropertyAnimationSystem__Values_1<::UnityEngine::Color>;
}
namespace UnityEngine::UIElements {
template<>
class __StylePropertyAnimationSystem__Values_1<::UnityEngine::UIElements::Background>;
}
namespace UnityEngine::UIElements {
template<>
class __StylePropertyAnimationSystem__Values_1<::UnityEngine::UIElements::FontDefinition>;
}
namespace UnityEngine::UIElements {
template<>
class __StylePropertyAnimationSystem__Values_1<::UnityEngine::UIElements::Length>;
}
namespace UnityEngine::UIElements {
template<>
class __StylePropertyAnimationSystem__Values_1<::UnityEngine::UIElements::Rotate>;
}
namespace UnityEngine::UIElements {
template<>
class __StylePropertyAnimationSystem__Values_1<::UnityEngine::UIElements::Scale>;
}
namespace UnityEngine::UIElements {
template<>
class __StylePropertyAnimationSystem__Values_1<::UnityEngine::UIElements::TextShadow>;
}
namespace UnityEngine::UIElements {
template<>
class __StylePropertyAnimationSystem__Values_1<::UnityEngine::UIElements::TransformOrigin>;
}
namespace UnityEngine::UIElements {
template<>
class __StylePropertyAnimationSystem__Values_1<::UnityEngine::UIElements::Translate>;
}
namespace UnityEngine::UIElements {
template<::il2cpp_utils::il2cpp_reference_type T>
class __StylePropertyAnimationSystem__Values_1<T>;
}
namespace UnityEngine::UIElements {
template<>
class __StylePropertyAnimationSystem__Values_1<float_t>;
}
namespace UnityEngine::UIElements {
template<>
class __StylePropertyAnimationSystem__Values_1<int32_t>;
}
namespace GlobalNamespace {
template<typename T>
struct __StylePropertyAnimationSystem__Values_1__EmptyData;
}
namespace UnityEngine::UIElements {
template<typename TTimingData,typename TStyleData>
struct __StylePropertyAnimationSystem__AnimationDataSet_2;
}
namespace GlobalNamespace {
template<>
struct __StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::Color>;
}
namespace GlobalNamespace {
template<>
struct __StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::Background>;
}
namespace GlobalNamespace {
template<>
struct __StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::FontDefinition>;
}
namespace GlobalNamespace {
template<>
struct __StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::Length>;
}
namespace GlobalNamespace {
template<>
struct __StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::Rotate>;
}
namespace GlobalNamespace {
template<>
struct __StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::Scale>;
}
namespace GlobalNamespace {
template<>
struct __StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::TextShadow>;
}
namespace GlobalNamespace {
template<>
struct __StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::TransformOrigin>;
}
namespace GlobalNamespace {
template<>
struct __StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::Translate>;
}
namespace GlobalNamespace {
template<::il2cpp_utils::il2cpp_reference_type T>
struct __StylePropertyAnimationSystem__Values_1__EmptyData<T>;
}
namespace GlobalNamespace {
template<>
struct __StylePropertyAnimationSystem__Values_1__EmptyData<float_t>;
}
namespace GlobalNamespace {
template<>
struct __StylePropertyAnimationSystem__Values_1__EmptyData<int32_t>;
}
namespace GlobalNamespace {
template<typename T>
struct __StylePropertyAnimationSystem__Values_1__StyleData;
}
namespace GlobalNamespace {
template<typename T>
struct __StylePropertyAnimationSystem__Values_1__TimingData;
}
namespace UnityEngine::UIElements {
template<>
struct __StylePropertyAnimationSystem__AnimationDataSet_2<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::Color>,::UnityEngine::Color>;
}
namespace UnityEngine::UIElements {
template<>
struct __StylePropertyAnimationSystem__AnimationDataSet_2<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::Background>,::UnityEngine::UIElements::Background>;
}
namespace UnityEngine::UIElements {
template<>
struct __StylePropertyAnimationSystem__AnimationDataSet_2<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::FontDefinition>,::UnityEngine::UIElements::FontDefinition>;
}
namespace UnityEngine::UIElements {
template<>
struct __StylePropertyAnimationSystem__AnimationDataSet_2<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::Length>,::UnityEngine::UIElements::Length>;
}
namespace UnityEngine::UIElements {
template<>
struct __StylePropertyAnimationSystem__AnimationDataSet_2<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::Rotate>,::UnityEngine::UIElements::Rotate>;
}
namespace UnityEngine::UIElements {
template<>
struct __StylePropertyAnimationSystem__AnimationDataSet_2<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::Scale>,::UnityEngine::UIElements::Scale>;
}
namespace UnityEngine::UIElements {
template<>
struct __StylePropertyAnimationSystem__AnimationDataSet_2<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::TextShadow>,::UnityEngine::UIElements::TextShadow>;
}
namespace UnityEngine::UIElements {
template<>
struct __StylePropertyAnimationSystem__AnimationDataSet_2<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::TransformOrigin>,::UnityEngine::UIElements::TransformOrigin>;
}
namespace UnityEngine::UIElements {
template<>
struct __StylePropertyAnimationSystem__AnimationDataSet_2<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::Translate>,::UnityEngine::UIElements::Translate>;
}
namespace UnityEngine::UIElements {
template<::il2cpp_utils::il2cpp_reference_type T_cordlgen_0,::il2cpp_utils::il2cpp_reference_type TStyleData>
struct __StylePropertyAnimationSystem__AnimationDataSet_2<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<T_cordlgen_0>,TStyleData>;
}
namespace UnityEngine::UIElements {
template<>
struct __StylePropertyAnimationSystem__AnimationDataSet_2<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<float_t>,float_t>;
}
namespace UnityEngine::UIElements {
template<>
struct __StylePropertyAnimationSystem__AnimationDataSet_2<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<int32_t>,int32_t>;
}
namespace UnityEngine::UIElements {
template<>
struct __StylePropertyAnimationSystem__AnimationDataSet_2<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<::UnityEngine::Color>,::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<::UnityEngine::Color>>;
}
namespace UnityEngine::UIElements {
template<>
struct __StylePropertyAnimationSystem__AnimationDataSet_2<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<::UnityEngine::UIElements::Background>,::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<::UnityEngine::UIElements::Background>>;
}
namespace UnityEngine::UIElements {
template<>
struct __StylePropertyAnimationSystem__AnimationDataSet_2<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<::UnityEngine::UIElements::FontDefinition>,::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<::UnityEngine::UIElements::FontDefinition>>;
}
namespace UnityEngine::UIElements {
template<>
struct __StylePropertyAnimationSystem__AnimationDataSet_2<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<::UnityEngine::UIElements::Length>,::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<::UnityEngine::UIElements::Length>>;
}
namespace UnityEngine::UIElements {
template<>
struct __StylePropertyAnimationSystem__AnimationDataSet_2<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<::UnityEngine::UIElements::Rotate>,::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<::UnityEngine::UIElements::Rotate>>;
}
namespace UnityEngine::UIElements {
template<>
struct __StylePropertyAnimationSystem__AnimationDataSet_2<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<::UnityEngine::UIElements::Scale>,::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<::UnityEngine::UIElements::Scale>>;
}
namespace UnityEngine::UIElements {
template<>
struct __StylePropertyAnimationSystem__AnimationDataSet_2<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<::UnityEngine::UIElements::TextShadow>,::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<::UnityEngine::UIElements::TextShadow>>;
}
namespace UnityEngine::UIElements {
template<>
struct __StylePropertyAnimationSystem__AnimationDataSet_2<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<::UnityEngine::UIElements::TransformOrigin>,::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<::UnityEngine::UIElements::TransformOrigin>>;
}
namespace UnityEngine::UIElements {
template<>
struct __StylePropertyAnimationSystem__AnimationDataSet_2<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<::UnityEngine::UIElements::Translate>,::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<::UnityEngine::UIElements::Translate>>;
}
namespace UnityEngine::UIElements {
template<::il2cpp_utils::il2cpp_reference_type T_cordlgen_0,::il2cpp_utils::il2cpp_reference_type T_cordlgen_1>
struct __StylePropertyAnimationSystem__AnimationDataSet_2<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<T_cordlgen_0>,::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<T_cordlgen_1>>;
}
namespace UnityEngine::UIElements {
template<>
struct __StylePropertyAnimationSystem__AnimationDataSet_2<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<float_t>,::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<float_t>>;
}
namespace UnityEngine::UIElements {
template<>
struct __StylePropertyAnimationSystem__AnimationDataSet_2<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<int32_t>,::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<int32_t>>;
}
namespace UnityEngine::UIElements {
template<::il2cpp_utils::il2cpp_reference_type TTimingData,::il2cpp_utils::il2cpp_reference_type TStyleData>
struct __StylePropertyAnimationSystem__AnimationDataSet_2<TTimingData,TStyleData>;
}
namespace UnityEngine::UIElements {
struct __StylePropertyAnimationSystem__ElementPropertyPair;
}
// Write type traits
MARK_GEN_REF_PTR_T(::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState);
MARK_GEN_REF_PTR_T(::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c);
MARK_GEN_REF_PTR_T(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesDiscrete_1);
MARK_GEN_REF_PTR_T(::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values_1);
MARK_VAL_T(::UnityEngine::UIElements::__StylePropertyAnimationSystem__TransitionState);
MARK_REF_PTR_T(::GlobalNamespace::__StylePropertyAnimationSystem__ElementPropertyPair__EqualityComparer);
MARK_REF_PTR_T(::UnityEngine::UIElements::StylePropertyAnimationSystem);
MARK_REF_PTR_T(::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values);
MARK_REF_PTR_T(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesBackground);
MARK_REF_PTR_T(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesColor);
MARK_REF_PTR_T(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesFloat);
MARK_REF_PTR_T(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesFont);
MARK_REF_PTR_T(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesFontDefinition);
MARK_REF_PTR_T(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesInt);
MARK_REF_PTR_T(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesLength);
MARK_REF_PTR_T(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesRotate);
MARK_REF_PTR_T(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesScale);
MARK_REF_PTR_T(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTextShadow);
MARK_REF_PTR_T(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTransformOrigin);
MARK_REF_PTR_T(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTranslate);
MARK_GEN_VAL_T(::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData);
MARK_GEN_VAL_T(::UnityEngine::UIElements::__StylePropertyAnimationSystem__AnimationDataSet_2);
MARK_GEN_VAL_T(::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData);
MARK_GEN_VAL_T(::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData);
MARK_VAL_T(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair);
// Type: ::TransitionState
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6832))
// CS Name: ::StylePropertyAnimationSystem::TransitionState
struct CORDL_TYPE __StylePropertyAnimationSystem__TransitionState : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct ____StylePropertyAnimationSystem__TransitionState_Unwrapped
enum struct ____StylePropertyAnimationSystem__TransitionState_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Running = static_cast<int32_t>(0x1),
__E_Started = static_cast<int32_t>(0x2),
__E_Ended = static_cast<int32_t>(0x4),
__E_Canceled = static_cast<int32_t>(0x8),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field None value: static_cast<int32_t>(0x0)
static ::UnityEngine::UIElements::__StylePropertyAnimationSystem__TransitionState const None;

/// @brief Field Running value: static_cast<int32_t>(0x1)
static ::UnityEngine::UIElements::__StylePropertyAnimationSystem__TransitionState const Running;

/// @brief Field Started value: static_cast<int32_t>(0x2)
static ::UnityEngine::UIElements::__StylePropertyAnimationSystem__TransitionState const Started;

/// @brief Field Ended value: static_cast<int32_t>(0x4)
static ::UnityEngine::UIElements::__StylePropertyAnimationSystem__TransitionState const Ended;

/// @brief Field Canceled value: static_cast<int32_t>(0x8)
static ::UnityEngine::UIElements::__StylePropertyAnimationSystem__TransitionState const Canceled;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator ____StylePropertyAnimationSystem__TransitionState_Unwrapped () const noexcept {
return std::bit_cast<____StylePropertyAnimationSystem__TransitionState_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __StylePropertyAnimationSystem__TransitionState(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __StylePropertyAnimationSystem__TransitionState(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __StylePropertyAnimationSystem__TransitionState()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__StylePropertyAnimationSystem__TransitionState, 0x4>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// Type: ::AnimationDataSet`2
// Type: ::EqualityComparer
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6834))
// CS Name: ::StylePropertyAnimationSystem::ElementPropertyPair::EqualityComparer*
class CORDL_TYPE __StylePropertyAnimationSystem__ElementPropertyPair__EqualityComparer : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Convert operator to "::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair>"
constexpr operator  ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair>*() noexcept;

/// @brief Method Equals addr 0x2dc57b4 size 0x18 virtual true final true
inline bool Equals(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair  x, ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair  y) ;

/// @brief Method GetHashCode addr 0x2dc57cc size 0x34 virtual true final true
inline int32_t GetHashCode(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair  obj) ;

static inline ::GlobalNamespace::__StylePropertyAnimationSystem__ElementPropertyPair__EqualityComparer* New_ctor() ;

/// @brief Method .ctor addr 0x2dc57ac size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__StylePropertyAnimationSystem__ElementPropertyPair__EqualityComparer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__StylePropertyAnimationSystem__ElementPropertyPair__EqualityComparer(__StylePropertyAnimationSystem__ElementPropertyPair__EqualityComparer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__StylePropertyAnimationSystem__ElementPropertyPair__EqualityComparer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__StylePropertyAnimationSystem__ElementPropertyPair__EqualityComparer(__StylePropertyAnimationSystem__ElementPropertyPair__EqualityComparer const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __StylePropertyAnimationSystem__ElementPropertyPair__EqualityComparer()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__StylePropertyAnimationSystem__ElementPropertyPair__EqualityComparer, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::ElementPropertyPair
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6835))
// CS Name: ::StylePropertyAnimationSystem::ElementPropertyPair
struct CORDL_TYPE __StylePropertyAnimationSystem__ElementPropertyPair : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
using EqualityComparer = ::GlobalNamespace::__StylePropertyAnimationSystem__ElementPropertyPair__EqualityComparer;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field element offset 0x0
 __declspec(property(get=__get_element, put=__set_element)) ::UnityEngine::UIElements::VisualElement*  element;

/// @brief Field property offset 0x8
 __declspec(property(get=__get_property, put=__set_property)) ::UnityEngine::UIElements::StyleSheets::StylePropertyId  property;

static inline void setStaticF_Comparer(::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair>*  value) ;

static inline ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair>* getStaticF_Comparer() ;

constexpr void __set_element(::UnityEngine::UIElements::VisualElement*  value) ;

constexpr ::UnityEngine::UIElements::VisualElement* __get_element() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VisualElement*> __get_element() const;

constexpr void __set_property(::UnityEngine::UIElements::StyleSheets::StylePropertyId  value) ;

constexpr ::UnityEngine::UIElements::StyleSheets::StylePropertyId& __get_property() ;

constexpr ::UnityEngine::UIElements::StyleSheets::StylePropertyId const& __get_property() const;

/// @brief Method .ctor addr 0x2dc5728 size 0xc virtual false final false
inline void _ctor(::UnityEngine::UIElements::VisualElement*  element, ::UnityEngine::UIElements::StyleSheets::StylePropertyId  property) ;

// Ctor Parameters [CppParam { name: "element", ty: "::UnityEngine::UIElements::VisualElement*", modifiers: "", def_value: None }, CppParam { name: "property", ty: "::UnityEngine::UIElements::StyleSheets::StylePropertyId", modifiers: "", def_value: None }]
constexpr __StylePropertyAnimationSystem__ElementPropertyPair(::UnityEngine::UIElements::VisualElement*  element, ::UnityEngine::UIElements::StyleSheets::StylePropertyId  property) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __StylePropertyAnimationSystem__ElementPropertyPair(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __StylePropertyAnimationSystem__ElementPropertyPair()  = default;


// Fields

// Static field Comparer


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// Type: ::Values
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6836))
// CS Name: ::StylePropertyAnimationSystem::Values*
class CORDL_TYPE __StylePropertyAnimationSystem__Values : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Method CancelAllAnimations addr 0x0 size 0xffffffffffffffff virtual true final false
inline void CancelAllAnimations() ;

/// @brief Method CancelAllAnimations addr 0x0 size 0xffffffffffffffff virtual true final false
inline void CancelAllAnimations(::UnityEngine::UIElements::VisualElement*  ve) ;

/// @brief Method CancelAnimation addr 0x0 size 0xffffffffffffffff virtual true final false
inline void CancelAnimation(::UnityEngine::UIElements::VisualElement*  ve, ::UnityEngine::UIElements::StyleSheets::StylePropertyId  id) ;

/// @brief Method UpdateAnimation addr 0x0 size 0xffffffffffffffff virtual true final false
inline void UpdateAnimation(::UnityEngine::UIElements::VisualElement*  ve, ::UnityEngine::UIElements::StyleSheets::StylePropertyId  id) ;

/// @brief Method GetAllAnimations addr 0x0 size 0xffffffffffffffff virtual true final false
inline void GetAllAnimations(::UnityEngine::UIElements::VisualElement*  ve, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*  outPropertyIds) ;

/// @brief Method Update addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Update(int64_t  currentTimeMs) ;

/// @brief Method UpdateValues addr 0x0 size 0xffffffffffffffff virtual true final false
inline void UpdateValues() ;

/// @brief Method UpdateComputedStyle addr 0x0 size 0xffffffffffffffff virtual true final false
inline void UpdateComputedStyle() ;

/// @brief Method UpdateComputedStyle addr 0x0 size 0xffffffffffffffff virtual true final false
inline void UpdateComputedStyle(int32_t  i) ;

static inline ::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values* New_ctor() ;

/// @brief Method .ctor addr 0x2dc5800 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__StylePropertyAnimationSystem__Values", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__StylePropertyAnimationSystem__Values(__StylePropertyAnimationSystem__Values && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__StylePropertyAnimationSystem__Values", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__StylePropertyAnimationSystem__Values(__StylePropertyAnimationSystem__Values const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __StylePropertyAnimationSystem__Values()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// Type: ::<>c
// Type: ::TransitionEventsFrameState
// Type: ::TimingData
namespace GlobalNamespace {
// cpp template
template<typename T>
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6839))
// CS Name: ::StylePropertyAnimationSystem::Values`1::TimingData<T>
struct CORDL_TYPE __StylePropertyAnimationSystem__Values_1__TimingData : public ::bs_hook::ValueTypeWrapper<0x28> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field startTimeMs offset 0x0
 __declspec(property(get=__get_startTimeMs, put=__set_startTimeMs)) int64_t  startTimeMs;

/// @brief Field durationMs offset 0x8
 __declspec(property(get=__get_durationMs, put=__set_durationMs)) int32_t  durationMs;

/// @brief Field easingCurve offset 0x10
 __declspec(property(get=__get_easingCurve, put=__set_easingCurve)) ::System::Func_2<float_t,float_t>*  easingCurve;

/// @brief Field easedProgress offset 0x18
 __declspec(property(get=__get_easedProgress, put=__set_easedProgress)) float_t  easedProgress;

/// @brief Field reversingShorteningFactor offset 0x1c
 __declspec(property(get=__get_reversingShorteningFactor, put=__set_reversingShorteningFactor)) float_t  reversingShorteningFactor;

/// @brief Field isStarted offset 0x20
 __declspec(property(get=__get_isStarted, put=__set_isStarted)) bool  isStarted;

/// @brief Field delayMs offset 0x24
 __declspec(property(get=__get_delayMs, put=__set_delayMs)) int32_t  delayMs;

constexpr void __set_startTimeMs(int64_t  value) ;

constexpr int64_t& __get_startTimeMs() ;

constexpr int64_t const& __get_startTimeMs() const;

constexpr void __set_durationMs(int32_t  value) ;

constexpr int32_t& __get_durationMs() ;

constexpr int32_t const& __get_durationMs() const;

constexpr void __set_easingCurve(::System::Func_2<float_t,float_t>*  value) ;

constexpr ::System::Func_2<float_t,float_t>* __get_easingCurve() ;

constexpr ::cordl_internals::to_const_pointer<::System::Func_2<float_t,float_t>*> __get_easingCurve() const;

constexpr void __set_easedProgress(float_t  value) ;

constexpr float_t& __get_easedProgress() ;

constexpr float_t const& __get_easedProgress() const;

constexpr void __set_reversingShorteningFactor(float_t  value) ;

constexpr float_t& __get_reversingShorteningFactor() ;

constexpr float_t const& __get_reversingShorteningFactor() const;

constexpr void __set_isStarted(bool  value) ;

constexpr bool& __get_isStarted() ;

constexpr bool const& __get_isStarted() const;

constexpr void __set_delayMs(int32_t  value) ;

constexpr int32_t& __get_delayMs() ;

constexpr int32_t const& __get_delayMs() const;

// Ctor Parameters [CppParam { name: "startTimeMs", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "durationMs", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "easingCurve", ty: "::System::Func_2<float_t,float_t>*", modifiers: "", def_value: None }, CppParam { name: "easedProgress", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "reversingShorteningFactor", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "isStarted", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "delayMs", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __StylePropertyAnimationSystem__Values_1__TimingData(int64_t  startTimeMs, int32_t  durationMs, ::System::Func_2<float_t,float_t>*  easingCurve, float_t  easedProgress, float_t  reversingShorteningFactor, bool  isStarted, int32_t  delayMs) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __StylePropertyAnimationSystem__Values_1__TimingData(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x28>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __StylePropertyAnimationSystem__Values_1__TimingData()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::StyleData
namespace GlobalNamespace {
// cpp template
template<typename T>
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6840))
// CS Name: ::StylePropertyAnimationSystem::Values`1::StyleData<T>
struct CORDL_TYPE __StylePropertyAnimationSystem__Values_1__StyleData : public ::bs_hook::ValueTypeWrapper<0x20> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field startValue offset 0x0
 __declspec(property(get=__get_startValue, put=__set_startValue)) T  startValue;

/// @brief Field endValue offset 0x8
 __declspec(property(get=__get_endValue, put=__set_endValue)) T  endValue;

/// @brief Field reversingAdjustedStartValue offset 0x10
 __declspec(property(get=__get_reversingAdjustedStartValue, put=__set_reversingAdjustedStartValue)) T  reversingAdjustedStartValue;

/// @brief Field currentValue offset 0x18
 __declspec(property(get=__get_currentValue, put=__set_currentValue)) T  currentValue;

constexpr void __set_startValue(T  value) ;

constexpr T& __get_startValue() ;

constexpr T const& __get_startValue() const;

constexpr void __set_endValue(T  value) ;

constexpr T& __get_endValue() ;

constexpr T const& __get_endValue() const;

constexpr void __set_reversingAdjustedStartValue(T  value) ;

constexpr T& __get_reversingAdjustedStartValue() ;

constexpr T const& __get_reversingAdjustedStartValue() const;

constexpr void __set_currentValue(T  value) ;

constexpr T& __get_currentValue() ;

constexpr T const& __get_currentValue() const;

// Ctor Parameters [CppParam { name: "startValue", ty: "T", modifiers: "", def_value: None }, CppParam { name: "endValue", ty: "T", modifiers: "", def_value: None }, CppParam { name: "reversingAdjustedStartValue", ty: "T", modifiers: "", def_value: None }, CppParam { name: "currentValue", ty: "T", modifiers: "", def_value: None }]
constexpr __StylePropertyAnimationSystem__Values_1__StyleData(T  startValue, T  endValue, T  reversingAdjustedStartValue, T  currentValue) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __StylePropertyAnimationSystem__Values_1__StyleData(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x20>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __StylePropertyAnimationSystem__Values_1__StyleData()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::EmptyData
// Type: ::Values`1
// Type: ::Values`1
namespace UnityEngine::UIElements {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6842)), TypeDefinitionIndex(TypeDefinitionIndex(6836))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6842), inst: 1575 })
// CS Name: ::StylePropertyAnimationSystem::Values`1<T>*
class CORDL_TYPE __StylePropertyAnimationSystem__Values_1<::UnityEngine::UIElements::Translate> : public ::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values {
public:
// Declarations
using EmptyData = ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::Translate>;

using StyleData = ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<::UnityEngine::UIElements::Translate>;

using TimingData = ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<::UnityEngine::UIElements::Translate>;

using TransitionEventsFrameState = ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<::UnityEngine::UIElements::Translate>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x88};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x88 - sizeof(::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values)]{};

/// @brief Field m_CurrentTimeMs offset 0x10
 __declspec(property(get=__get_m_CurrentTimeMs, put=__set_m_CurrentTimeMs)) int64_t  m_CurrentTimeMs;

/// @brief Field m_CurrentFrameEventsState offset 0x18
 __declspec(property(get=__get_m_CurrentFrameEventsState, put=__set_m_CurrentFrameEventsState)) ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<::UnityEngine::UIElements::Translate>*  m_CurrentFrameEventsState;

/// @brief Field m_NextFrameEventsState offset 0x20
 __declspec(property(get=__get_m_NextFrameEventsState, put=__set_m_NextFrameEventsState)) ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<::UnityEngine::UIElements::Translate>*  m_NextFrameEventsState;

/// @brief Field running offset 0x28
 __declspec(property(get=__get_running, put=__set_running)) ::UnityEngine::UIElements::__StylePropertyAnimationSystem__AnimationDataSet_2<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<::UnityEngine::UIElements::Translate>,::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<::UnityEngine::UIElements::Translate>>  running;

/// @brief Field completed offset 0x58
 __declspec(property(get=__get_completed, put=__set_completed)) ::UnityEngine::UIElements::__StylePropertyAnimationSystem__AnimationDataSet_2<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::Translate>,::UnityEngine::UIElements::Translate>  completed;

 __declspec(property(get=get_isEmpty)) bool  isEmpty;

 __declspec(property(get=get_SameFunc)) ::System::Func_3<::UnityEngine::UIElements::Translate,::UnityEngine::UIElements::Translate,bool>*  SameFunc;

constexpr void __set_m_CurrentTimeMs(int64_t  value) ;

constexpr int64_t& __get_m_CurrentTimeMs() ;

constexpr int64_t const& __get_m_CurrentTimeMs() const;

constexpr void __set_m_CurrentFrameEventsState(::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<::UnityEngine::UIElements::Translate>*  value) ;

constexpr ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<::UnityEngine::UIElements::Translate>* __get_m_CurrentFrameEventsState() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<::UnityEngine::UIElements::Translate>*> __get_m_CurrentFrameEventsState() const;

constexpr void __set_m_NextFrameEventsState(::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<::UnityEngine::UIElements::Translate>*  value) ;

constexpr ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<::UnityEngine::UIElements::Translate>* __get_m_NextFrameEventsState() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<::UnityEngine::UIElements::Translate>*> __get_m_NextFrameEventsState() const;

constexpr void __set_running(::UnityEngine::UIElements::__StylePropertyAnimationSystem__AnimationDataSet_2<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<::UnityEngine::UIElements::Translate>,::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<::UnityEngine::UIElements::Translate>>  value) ;

constexpr ::UnityEngine::UIElements::__StylePropertyAnimationSystem__AnimationDataSet_2<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<::UnityEngine::UIElements::Translate>,::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<::UnityEngine::UIElements::Translate>>& __get_running() ;

constexpr ::UnityEngine::UIElements::__StylePropertyAnimationSystem__AnimationDataSet_2<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<::UnityEngine::UIElements::Translate>,::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<::UnityEngine::UIElements::Translate>> const& __get_running() const;

constexpr void __set_completed(::UnityEngine::UIElements::__StylePropertyAnimationSystem__AnimationDataSet_2<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::Translate>,::UnityEngine::UIElements::Translate>  value) ;

constexpr ::UnityEngine::UIElements::__StylePropertyAnimationSystem__AnimationDataSet_2<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::Translate>,::UnityEngine::UIElements::Translate>& __get_completed() ;

constexpr ::UnityEngine::UIElements::__StylePropertyAnimationSystem__AnimationDataSet_2<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::Translate>,::UnityEngine::UIElements::Translate> const& __get_completed() const;

/// @brief Method get_isEmpty addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_isEmpty() ;

/// @brief Method get_SameFunc addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::Func_3<::UnityEngine::UIElements::Translate,::UnityEngine::UIElements::Translate,bool>* get_SameFunc() ;

static inline ::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values_1<::UnityEngine::UIElements::Translate>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method SwapFrameStates addr 0x0 size 0xffffffffffffffff virtual false final false
inline void SwapFrameStates() ;

/// @brief Method QueueEvent addr 0x0 size 0xffffffffffffffff virtual false final false
inline void QueueEvent(::UnityEngine::UIElements::EventBase*  evt, ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair  epp) ;

/// @brief Method ClearEventQueue addr 0x0 size 0xffffffffffffffff virtual false final false
inline void ClearEventQueue(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair  epp) ;

/// @brief Method QueueTransitionRunEvent addr 0x0 size 0xffffffffffffffff virtual false final false
inline void QueueTransitionRunEvent(::UnityEngine::UIElements::VisualElement*  ve, int32_t  runningIndex) ;

/// @brief Method QueueTransitionStartEvent addr 0x0 size 0xffffffffffffffff virtual false final false
inline void QueueTransitionStartEvent(::UnityEngine::UIElements::VisualElement*  ve, int32_t  runningIndex) ;

/// @brief Method QueueTransitionEndEvent addr 0x0 size 0xffffffffffffffff virtual false final false
inline void QueueTransitionEndEvent(::UnityEngine::UIElements::VisualElement*  ve, int32_t  runningIndex) ;

/// @brief Method QueueTransitionCancelEvent addr 0x0 size 0xffffffffffffffff virtual false final false
inline void QueueTransitionCancelEvent(::UnityEngine::UIElements::VisualElement*  ve, int32_t  runningIndex, int64_t  panelElapsedMs) ;

/// @brief Method SendTransitionCancelEvent addr 0x0 size 0xffffffffffffffff virtual false final false
inline void SendTransitionCancelEvent(::UnityEngine::UIElements::VisualElement*  ve, int32_t  runningIndex, int64_t  panelElapsedMs) ;

/// @brief Method CancelAllAnimations addr 0x0 size 0xffffffffffffffff virtual true final true
inline void CancelAllAnimations() ;

/// @brief Method CancelAllAnimations addr 0x0 size 0xffffffffffffffff virtual true final true
inline void CancelAllAnimations(::UnityEngine::UIElements::VisualElement*  ve) ;

/// @brief Method CancelAnimation addr 0x0 size 0xffffffffffffffff virtual true final true
inline void CancelAnimation(::UnityEngine::UIElements::VisualElement*  ve, ::UnityEngine::UIElements::StyleSheets::StylePropertyId  id) ;

/// @brief Method UpdateAnimation addr 0x0 size 0xffffffffffffffff virtual true final true
inline void UpdateAnimation(::UnityEngine::UIElements::VisualElement*  ve, ::UnityEngine::UIElements::StyleSheets::StylePropertyId  id) ;

/// @brief Method GetAllAnimations addr 0x0 size 0xffffffffffffffff virtual true final true
inline void GetAllAnimations(::UnityEngine::UIElements::VisualElement*  ve, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*  outPropertyIds) ;

/// @brief Method ComputeReversingShorteningFactor addr 0x0 size 0xffffffffffffffff virtual false final false
inline float_t ComputeReversingShorteningFactor(int32_t  oldIndex) ;

/// @brief Method ComputeReversingDuration addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t ComputeReversingDuration(int32_t  newTransitionDurationMs, float_t  newReversingShorteningFactor) ;

/// @brief Method ComputeReversingDelay addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t ComputeReversingDelay(int32_t  delayMs, float_t  newReversingShorteningFactor) ;

/// @brief Method StartTransition addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool StartTransition(::UnityEngine::UIElements::VisualElement*  owner, ::UnityEngine::UIElements::StyleSheets::StylePropertyId  prop, ::UnityEngine::UIElements::Translate  startValue, ::UnityEngine::UIElements::Translate  endValue, int32_t  durationMs, int32_t  delayMs, ::System::Func_2<float_t,float_t>*  easingCurve, int64_t  currentTimeMs) ;

/// @brief Method ForceComputedStyleEndValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline void ForceComputedStyleEndValue(int32_t  runningIndex) ;

/// @brief Method Update addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Update(int64_t  currentTimeMs) ;

/// @brief Method ProcessEventQueue addr 0x0 size 0xffffffffffffffff virtual false final false
inline void ProcessEventQueue() ;

/// @brief Method UpdateProgress addr 0x0 size 0xffffffffffffffff virtual false final false
inline void UpdateProgress(int64_t  currentTimeMs) ;

// Ctor Parameters [CppParam { name: "", ty: "__StylePropertyAnimationSystem__Values_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__StylePropertyAnimationSystem__Values_1(__StylePropertyAnimationSystem__Values_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__StylePropertyAnimationSystem__Values_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__StylePropertyAnimationSystem__Values_1(__StylePropertyAnimationSystem__Values_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __StylePropertyAnimationSystem__Values_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: ::Values`1
namespace UnityEngine::UIElements {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6842)), TypeDefinitionIndex(TypeDefinitionIndex(6836))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6842), inst: 1574 })
// CS Name: ::StylePropertyAnimationSystem::Values`1<T>*
class CORDL_TYPE __StylePropertyAnimationSystem__Values_1<::UnityEngine::UIElements::TransformOrigin> : public ::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values {
public:
// Declarations
using EmptyData = ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::TransformOrigin>;

using StyleData = ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<::UnityEngine::UIElements::TransformOrigin>;

using TimingData = ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<::UnityEngine::UIElements::TransformOrigin>;

using TransitionEventsFrameState = ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<::UnityEngine::UIElements::TransformOrigin>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x88};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x88 - sizeof(::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values)]{};

/// @brief Field m_CurrentTimeMs offset 0x10
 __declspec(property(get=__get_m_CurrentTimeMs, put=__set_m_CurrentTimeMs)) int64_t  m_CurrentTimeMs;

/// @brief Field m_CurrentFrameEventsState offset 0x18
 __declspec(property(get=__get_m_CurrentFrameEventsState, put=__set_m_CurrentFrameEventsState)) ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<::UnityEngine::UIElements::TransformOrigin>*  m_CurrentFrameEventsState;

/// @brief Field m_NextFrameEventsState offset 0x20
 __declspec(property(get=__get_m_NextFrameEventsState, put=__set_m_NextFrameEventsState)) ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<::UnityEngine::UIElements::TransformOrigin>*  m_NextFrameEventsState;

/// @brief Field running offset 0x28
 __declspec(property(get=__get_running, put=__set_running)) ::UnityEngine::UIElements::__StylePropertyAnimationSystem__AnimationDataSet_2<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<::UnityEngine::UIElements::TransformOrigin>,::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<::UnityEngine::UIElements::TransformOrigin>>  running;

/// @brief Field completed offset 0x58
 __declspec(property(get=__get_completed, put=__set_completed)) ::UnityEngine::UIElements::__StylePropertyAnimationSystem__AnimationDataSet_2<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::TransformOrigin>,::UnityEngine::UIElements::TransformOrigin>  completed;

 __declspec(property(get=get_isEmpty)) bool  isEmpty;

 __declspec(property(get=get_SameFunc)) ::System::Func_3<::UnityEngine::UIElements::TransformOrigin,::UnityEngine::UIElements::TransformOrigin,bool>*  SameFunc;

constexpr void __set_m_CurrentTimeMs(int64_t  value) ;

constexpr int64_t& __get_m_CurrentTimeMs() ;

constexpr int64_t const& __get_m_CurrentTimeMs() const;

constexpr void __set_m_CurrentFrameEventsState(::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<::UnityEngine::UIElements::TransformOrigin>*  value) ;

constexpr ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<::UnityEngine::UIElements::TransformOrigin>* __get_m_CurrentFrameEventsState() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<::UnityEngine::UIElements::TransformOrigin>*> __get_m_CurrentFrameEventsState() const;

constexpr void __set_m_NextFrameEventsState(::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<::UnityEngine::UIElements::TransformOrigin>*  value) ;

constexpr ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<::UnityEngine::UIElements::TransformOrigin>* __get_m_NextFrameEventsState() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<::UnityEngine::UIElements::TransformOrigin>*> __get_m_NextFrameEventsState() const;

constexpr void __set_running(::UnityEngine::UIElements::__StylePropertyAnimationSystem__AnimationDataSet_2<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<::UnityEngine::UIElements::TransformOrigin>,::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<::UnityEngine::UIElements::TransformOrigin>>  value) ;

constexpr ::UnityEngine::UIElements::__StylePropertyAnimationSystem__AnimationDataSet_2<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<::UnityEngine::UIElements::TransformOrigin>,::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<::UnityEngine::UIElements::TransformOrigin>>& __get_running() ;

constexpr ::UnityEngine::UIElements::__StylePropertyAnimationSystem__AnimationDataSet_2<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<::UnityEngine::UIElements::TransformOrigin>,::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<::UnityEngine::UIElements::TransformOrigin>> const& __get_running() const;

constexpr void __set_completed(::UnityEngine::UIElements::__StylePropertyAnimationSystem__AnimationDataSet_2<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::TransformOrigin>,::UnityEngine::UIElements::TransformOrigin>  value) ;

constexpr ::UnityEngine::UIElements::__StylePropertyAnimationSystem__AnimationDataSet_2<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::TransformOrigin>,::UnityEngine::UIElements::TransformOrigin>& __get_completed() ;

constexpr ::UnityEngine::UIElements::__StylePropertyAnimationSystem__AnimationDataSet_2<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::TransformOrigin>,::UnityEngine::UIElements::TransformOrigin> const& __get_completed() const;

/// @brief Method get_isEmpty addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_isEmpty() ;

/// @brief Method get_SameFunc addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::Func_3<::UnityEngine::UIElements::TransformOrigin,::UnityEngine::UIElements::TransformOrigin,bool>* get_SameFunc() ;

static inline ::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values_1<::UnityEngine::UIElements::TransformOrigin>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method SwapFrameStates addr 0x0 size 0xffffffffffffffff virtual false final false
inline void SwapFrameStates() ;

/// @brief Method QueueEvent addr 0x0 size 0xffffffffffffffff virtual false final false
inline void QueueEvent(::UnityEngine::UIElements::EventBase*  evt, ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair  epp) ;

/// @brief Method ClearEventQueue addr 0x0 size 0xffffffffffffffff virtual false final false
inline void ClearEventQueue(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair  epp) ;

/// @brief Method QueueTransitionRunEvent addr 0x0 size 0xffffffffffffffff virtual false final false
inline void QueueTransitionRunEvent(::UnityEngine::UIElements::VisualElement*  ve, int32_t  runningIndex) ;

/// @brief Method QueueTransitionStartEvent addr 0x0 size 0xffffffffffffffff virtual false final false
inline void QueueTransitionStartEvent(::UnityEngine::UIElements::VisualElement*  ve, int32_t  runningIndex) ;

/// @brief Method QueueTransitionEndEvent addr 0x0 size 0xffffffffffffffff virtual false final false
inline void QueueTransitionEndEvent(::UnityEngine::UIElements::VisualElement*  ve, int32_t  runningIndex) ;

/// @brief Method QueueTransitionCancelEvent addr 0x0 size 0xffffffffffffffff virtual false final false
inline void QueueTransitionCancelEvent(::UnityEngine::UIElements::VisualElement*  ve, int32_t  runningIndex, int64_t  panelElapsedMs) ;

/// @brief Method SendTransitionCancelEvent addr 0x0 size 0xffffffffffffffff virtual false final false
inline void SendTransitionCancelEvent(::UnityEngine::UIElements::VisualElement*  ve, int32_t  runningIndex, int64_t  panelElapsedMs) ;

/// @brief Method CancelAllAnimations addr 0x0 size 0xffffffffffffffff virtual true final true
inline void CancelAllAnimations() ;

/// @brief Method CancelAllAnimations addr 0x0 size 0xffffffffffffffff virtual true final true
inline void CancelAllAnimations(::UnityEngine::UIElements::VisualElement*  ve) ;

/// @brief Method CancelAnimation addr 0x0 size 0xffffffffffffffff virtual true final true
inline void CancelAnimation(::UnityEngine::UIElements::VisualElement*  ve, ::UnityEngine::UIElements::StyleSheets::StylePropertyId  id) ;

/// @brief Method UpdateAnimation addr 0x0 size 0xffffffffffffffff virtual true final true
inline void UpdateAnimation(::UnityEngine::UIElements::VisualElement*  ve, ::UnityEngine::UIElements::StyleSheets::StylePropertyId  id) ;

/// @brief Method GetAllAnimations addr 0x0 size 0xffffffffffffffff virtual true final true
inline void GetAllAnimations(::UnityEngine::UIElements::VisualElement*  ve, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*  outPropertyIds) ;

/// @brief Method ComputeReversingShorteningFactor addr 0x0 size 0xffffffffffffffff virtual false final false
inline float_t ComputeReversingShorteningFactor(int32_t  oldIndex) ;

/// @brief Method ComputeReversingDuration addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t ComputeReversingDuration(int32_t  newTransitionDurationMs, float_t  newReversingShorteningFactor) ;

/// @brief Method ComputeReversingDelay addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t ComputeReversingDelay(int32_t  delayMs, float_t  newReversingShorteningFactor) ;

/// @brief Method StartTransition addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool StartTransition(::UnityEngine::UIElements::VisualElement*  owner, ::UnityEngine::UIElements::StyleSheets::StylePropertyId  prop, ::UnityEngine::UIElements::TransformOrigin  startValue, ::UnityEngine::UIElements::TransformOrigin  endValue, int32_t  durationMs, int32_t  delayMs, ::System::Func_2<float_t,float_t>*  easingCurve, int64_t  currentTimeMs) ;

/// @brief Method ForceComputedStyleEndValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline void ForceComputedStyleEndValue(int32_t  runningIndex) ;

/// @brief Method Update addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Update(int64_t  currentTimeMs) ;

/// @brief Method ProcessEventQueue addr 0x0 size 0xffffffffffffffff virtual false final false
inline void ProcessEventQueue() ;

/// @brief Method UpdateProgress addr 0x0 size 0xffffffffffffffff virtual false final false
inline void UpdateProgress(int64_t  currentTimeMs) ;

// Ctor Parameters [CppParam { name: "", ty: "__StylePropertyAnimationSystem__Values_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__StylePropertyAnimationSystem__Values_1(__StylePropertyAnimationSystem__Values_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__StylePropertyAnimationSystem__Values_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__StylePropertyAnimationSystem__Values_1(__StylePropertyAnimationSystem__Values_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __StylePropertyAnimationSystem__Values_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: ::Values`1
namespace UnityEngine::UIElements {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6836)), TypeDefinitionIndex(TypeDefinitionIndex(6842))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6842), inst: 1573 })
// CS Name: ::StylePropertyAnimationSystem::Values`1<T>*
class CORDL_TYPE __StylePropertyAnimationSystem__Values_1<::UnityEngine::UIElements::TextShadow> : public ::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values {
public:
// Declarations
using EmptyData = ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::TextShadow>;

using StyleData = ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<::UnityEngine::UIElements::TextShadow>;

using TimingData = ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<::UnityEngine::UIElements::TextShadow>;

using TransitionEventsFrameState = ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<::UnityEngine::UIElements::TextShadow>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x88};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x88 - sizeof(::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values)]{};

/// @brief Field m_CurrentTimeMs offset 0x10
 __declspec(property(get=__get_m_CurrentTimeMs, put=__set_m_CurrentTimeMs)) int64_t  m_CurrentTimeMs;

/// @brief Field m_CurrentFrameEventsState offset 0x18
 __declspec(property(get=__get_m_CurrentFrameEventsState, put=__set_m_CurrentFrameEventsState)) ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<::UnityEngine::UIElements::TextShadow>*  m_CurrentFrameEventsState;

/// @brief Field m_NextFrameEventsState offset 0x20
 __declspec(property(get=__get_m_NextFrameEventsState, put=__set_m_NextFrameEventsState)) ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<::UnityEngine::UIElements::TextShadow>*  m_NextFrameEventsState;

/// @brief Field running offset 0x28
 __declspec(property(get=__get_running, put=__set_running)) ::UnityEngine::UIElements::__StylePropertyAnimationSystem__AnimationDataSet_2<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<::UnityEngine::UIElements::TextShadow>,::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<::UnityEngine::UIElements::TextShadow>>  running;

/// @brief Field completed offset 0x58
 __declspec(property(get=__get_completed, put=__set_completed)) ::UnityEngine::UIElements::__StylePropertyAnimationSystem__AnimationDataSet_2<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::TextShadow>,::UnityEngine::UIElements::TextShadow>  completed;

 __declspec(property(get=get_isEmpty)) bool  isEmpty;

 __declspec(property(get=get_SameFunc)) ::System::Func_3<::UnityEngine::UIElements::TextShadow,::UnityEngine::UIElements::TextShadow,bool>*  SameFunc;

constexpr void __set_m_CurrentTimeMs(int64_t  value) ;

constexpr int64_t& __get_m_CurrentTimeMs() ;

constexpr int64_t const& __get_m_CurrentTimeMs() const;

constexpr void __set_m_CurrentFrameEventsState(::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<::UnityEngine::UIElements::TextShadow>*  value) ;

constexpr ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<::UnityEngine::UIElements::TextShadow>* __get_m_CurrentFrameEventsState() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<::UnityEngine::UIElements::TextShadow>*> __get_m_CurrentFrameEventsState() const;

constexpr void __set_m_NextFrameEventsState(::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<::UnityEngine::UIElements::TextShadow>*  value) ;

constexpr ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<::UnityEngine::UIElements::TextShadow>* __get_m_NextFrameEventsState() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<::UnityEngine::UIElements::TextShadow>*> __get_m_NextFrameEventsState() const;

constexpr void __set_running(::UnityEngine::UIElements::__StylePropertyAnimationSystem__AnimationDataSet_2<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<::UnityEngine::UIElements::TextShadow>,::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<::UnityEngine::UIElements::TextShadow>>  value) ;

constexpr ::UnityEngine::UIElements::__StylePropertyAnimationSystem__AnimationDataSet_2<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<::UnityEngine::UIElements::TextShadow>,::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<::UnityEngine::UIElements::TextShadow>>& __get_running() ;

constexpr ::UnityEngine::UIElements::__StylePropertyAnimationSystem__AnimationDataSet_2<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<::UnityEngine::UIElements::TextShadow>,::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<::UnityEngine::UIElements::TextShadow>> const& __get_running() const;

constexpr void __set_completed(::UnityEngine::UIElements::__StylePropertyAnimationSystem__AnimationDataSet_2<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::TextShadow>,::UnityEngine::UIElements::TextShadow>  value) ;

constexpr ::UnityEngine::UIElements::__StylePropertyAnimationSystem__AnimationDataSet_2<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::TextShadow>,::UnityEngine::UIElements::TextShadow>& __get_completed() ;

constexpr ::UnityEngine::UIElements::__StylePropertyAnimationSystem__AnimationDataSet_2<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::TextShadow>,::UnityEngine::UIElements::TextShadow> const& __get_completed() const;

/// @brief Method get_isEmpty addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_isEmpty() ;

/// @brief Method get_SameFunc addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::Func_3<::UnityEngine::UIElements::TextShadow,::UnityEngine::UIElements::TextShadow,bool>* get_SameFunc() ;

static inline ::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values_1<::UnityEngine::UIElements::TextShadow>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method SwapFrameStates addr 0x0 size 0xffffffffffffffff virtual false final false
inline void SwapFrameStates() ;

/// @brief Method QueueEvent addr 0x0 size 0xffffffffffffffff virtual false final false
inline void QueueEvent(::UnityEngine::UIElements::EventBase*  evt, ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair  epp) ;

/// @brief Method ClearEventQueue addr 0x0 size 0xffffffffffffffff virtual false final false
inline void ClearEventQueue(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair  epp) ;

/// @brief Method QueueTransitionRunEvent addr 0x0 size 0xffffffffffffffff virtual false final false
inline void QueueTransitionRunEvent(::UnityEngine::UIElements::VisualElement*  ve, int32_t  runningIndex) ;

/// @brief Method QueueTransitionStartEvent addr 0x0 size 0xffffffffffffffff virtual false final false
inline void QueueTransitionStartEvent(::UnityEngine::UIElements::VisualElement*  ve, int32_t  runningIndex) ;

/// @brief Method QueueTransitionEndEvent addr 0x0 size 0xffffffffffffffff virtual false final false
inline void QueueTransitionEndEvent(::UnityEngine::UIElements::VisualElement*  ve, int32_t  runningIndex) ;

/// @brief Method QueueTransitionCancelEvent addr 0x0 size 0xffffffffffffffff virtual false final false
inline void QueueTransitionCancelEvent(::UnityEngine::UIElements::VisualElement*  ve, int32_t  runningIndex, int64_t  panelElapsedMs) ;

/// @brief Method SendTransitionCancelEvent addr 0x0 size 0xffffffffffffffff virtual false final false
inline void SendTransitionCancelEvent(::UnityEngine::UIElements::VisualElement*  ve, int32_t  runningIndex, int64_t  panelElapsedMs) ;

/// @brief Method CancelAllAnimations addr 0x0 size 0xffffffffffffffff virtual true final true
inline void CancelAllAnimations() ;

/// @brief Method CancelAllAnimations addr 0x0 size 0xffffffffffffffff virtual true final true
inline void CancelAllAnimations(::UnityEngine::UIElements::VisualElement*  ve) ;

/// @brief Method CancelAnimation addr 0x0 size 0xffffffffffffffff virtual true final true
inline void CancelAnimation(::UnityEngine::UIElements::VisualElement*  ve, ::UnityEngine::UIElements::StyleSheets::StylePropertyId  id) ;

/// @brief Method UpdateAnimation addr 0x0 size 0xffffffffffffffff virtual true final true
inline void UpdateAnimation(::UnityEngine::UIElements::VisualElement*  ve, ::UnityEngine::UIElements::StyleSheets::StylePropertyId  id) ;

/// @brief Method GetAllAnimations addr 0x0 size 0xffffffffffffffff virtual true final true
inline void GetAllAnimations(::UnityEngine::UIElements::VisualElement*  ve, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*  outPropertyIds) ;

/// @brief Method ComputeReversingShorteningFactor addr 0x0 size 0xffffffffffffffff virtual false final false
inline float_t ComputeReversingShorteningFactor(int32_t  oldIndex) ;

/// @brief Method ComputeReversingDuration addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t ComputeReversingDuration(int32_t  newTransitionDurationMs, float_t  newReversingShorteningFactor) ;

/// @brief Method ComputeReversingDelay addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t ComputeReversingDelay(int32_t  delayMs, float_t  newReversingShorteningFactor) ;

/// @brief Method StartTransition addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool StartTransition(::UnityEngine::UIElements::VisualElement*  owner, ::UnityEngine::UIElements::StyleSheets::StylePropertyId  prop, ::UnityEngine::UIElements::TextShadow  startValue, ::UnityEngine::UIElements::TextShadow  endValue, int32_t  durationMs, int32_t  delayMs, ::System::Func_2<float_t,float_t>*  easingCurve, int64_t  currentTimeMs) ;

/// @brief Method ForceComputedStyleEndValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline void ForceComputedStyleEndValue(int32_t  runningIndex) ;

/// @brief Method Update addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Update(int64_t  currentTimeMs) ;

/// @brief Method ProcessEventQueue addr 0x0 size 0xffffffffffffffff virtual false final false
inline void ProcessEventQueue() ;

/// @brief Method UpdateProgress addr 0x0 size 0xffffffffffffffff virtual false final false
inline void UpdateProgress(int64_t  currentTimeMs) ;

// Ctor Parameters [CppParam { name: "", ty: "__StylePropertyAnimationSystem__Values_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__StylePropertyAnimationSystem__Values_1(__StylePropertyAnimationSystem__Values_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__StylePropertyAnimationSystem__Values_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__StylePropertyAnimationSystem__Values_1(__StylePropertyAnimationSystem__Values_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __StylePropertyAnimationSystem__Values_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: ::Values`1
namespace UnityEngine::UIElements {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6842)), TypeDefinitionIndex(TypeDefinitionIndex(6836))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6842), inst: 1572 })
// CS Name: ::StylePropertyAnimationSystem::Values`1<T>*
class CORDL_TYPE __StylePropertyAnimationSystem__Values_1<::UnityEngine::UIElements::Scale> : public ::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values {
public:
// Declarations
using EmptyData = ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::Scale>;

using StyleData = ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<::UnityEngine::UIElements::Scale>;

using TimingData = ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<::UnityEngine::UIElements::Scale>;

using TransitionEventsFrameState = ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<::UnityEngine::UIElements::Scale>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x88};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x88 - sizeof(::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values)]{};

/// @brief Field m_CurrentTimeMs offset 0x10
 __declspec(property(get=__get_m_CurrentTimeMs, put=__set_m_CurrentTimeMs)) int64_t  m_CurrentTimeMs;

/// @brief Field m_CurrentFrameEventsState offset 0x18
 __declspec(property(get=__get_m_CurrentFrameEventsState, put=__set_m_CurrentFrameEventsState)) ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<::UnityEngine::UIElements::Scale>*  m_CurrentFrameEventsState;

/// @brief Field m_NextFrameEventsState offset 0x20
 __declspec(property(get=__get_m_NextFrameEventsState, put=__set_m_NextFrameEventsState)) ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<::UnityEngine::UIElements::Scale>*  m_NextFrameEventsState;

/// @brief Field running offset 0x28
 __declspec(property(get=__get_running, put=__set_running)) ::UnityEngine::UIElements::__StylePropertyAnimationSystem__AnimationDataSet_2<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<::UnityEngine::UIElements::Scale>,::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<::UnityEngine::UIElements::Scale>>  running;

/// @brief Field completed offset 0x58
 __declspec(property(get=__get_completed, put=__set_completed)) ::UnityEngine::UIElements::__StylePropertyAnimationSystem__AnimationDataSet_2<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::Scale>,::UnityEngine::UIElements::Scale>  completed;

 __declspec(property(get=get_isEmpty)) bool  isEmpty;

 __declspec(property(get=get_SameFunc)) ::System::Func_3<::UnityEngine::UIElements::Scale,::UnityEngine::UIElements::Scale,bool>*  SameFunc;

constexpr void __set_m_CurrentTimeMs(int64_t  value) ;

constexpr int64_t& __get_m_CurrentTimeMs() ;

constexpr int64_t const& __get_m_CurrentTimeMs() const;

constexpr void __set_m_CurrentFrameEventsState(::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<::UnityEngine::UIElements::Scale>*  value) ;

constexpr ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<::UnityEngine::UIElements::Scale>* __get_m_CurrentFrameEventsState() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<::UnityEngine::UIElements::Scale>*> __get_m_CurrentFrameEventsState() const;

constexpr void __set_m_NextFrameEventsState(::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<::UnityEngine::UIElements::Scale>*  value) ;

constexpr ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<::UnityEngine::UIElements::Scale>* __get_m_NextFrameEventsState() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<::UnityEngine::UIElements::Scale>*> __get_m_NextFrameEventsState() const;

constexpr void __set_running(::UnityEngine::UIElements::__StylePropertyAnimationSystem__AnimationDataSet_2<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<::UnityEngine::UIElements::Scale>,::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<::UnityEngine::UIElements::Scale>>  value) ;

constexpr ::UnityEngine::UIElements::__StylePropertyAnimationSystem__AnimationDataSet_2<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<::UnityEngine::UIElements::Scale>,::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<::UnityEngine::UIElements::Scale>>& __get_running() ;

constexpr ::UnityEngine::UIElements::__StylePropertyAnimationSystem__AnimationDataSet_2<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<::UnityEngine::UIElements::Scale>,::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<::UnityEngine::UIElements::Scale>> const& __get_running() const;

constexpr void __set_completed(::UnityEngine::UIElements::__StylePropertyAnimationSystem__AnimationDataSet_2<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::Scale>,::UnityEngine::UIElements::Scale>  value) ;

constexpr ::UnityEngine::UIElements::__StylePropertyAnimationSystem__AnimationDataSet_2<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::Scale>,::UnityEngine::UIElements::Scale>& __get_completed() ;

constexpr ::UnityEngine::UIElements::__StylePropertyAnimationSystem__AnimationDataSet_2<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::Scale>,::UnityEngine::UIElements::Scale> const& __get_completed() const;

/// @brief Method get_isEmpty addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_isEmpty() ;

/// @brief Method get_SameFunc addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::Func_3<::UnityEngine::UIElements::Scale,::UnityEngine::UIElements::Scale,bool>* get_SameFunc() ;

static inline ::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values_1<::UnityEngine::UIElements::Scale>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method SwapFrameStates addr 0x0 size 0xffffffffffffffff virtual false final false
inline void SwapFrameStates() ;

/// @brief Method QueueEvent addr 0x0 size 0xffffffffffffffff virtual false final false
inline void QueueEvent(::UnityEngine::UIElements::EventBase*  evt, ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair  epp) ;

/// @brief Method ClearEventQueue addr 0x0 size 0xffffffffffffffff virtual false final false
inline void ClearEventQueue(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair  epp) ;

/// @brief Method QueueTransitionRunEvent addr 0x0 size 0xffffffffffffffff virtual false final false
inline void QueueTransitionRunEvent(::UnityEngine::UIElements::VisualElement*  ve, int32_t  runningIndex) ;

/// @brief Method QueueTransitionStartEvent addr 0x0 size 0xffffffffffffffff virtual false final false
inline void QueueTransitionStartEvent(::UnityEngine::UIElements::VisualElement*  ve, int32_t  runningIndex) ;

/// @brief Method QueueTransitionEndEvent addr 0x0 size 0xffffffffffffffff virtual false final false
inline void QueueTransitionEndEvent(::UnityEngine::UIElements::VisualElement*  ve, int32_t  runningIndex) ;

/// @brief Method QueueTransitionCancelEvent addr 0x0 size 0xffffffffffffffff virtual false final false
inline void QueueTransitionCancelEvent(::UnityEngine::UIElements::VisualElement*  ve, int32_t  runningIndex, int64_t  panelElapsedMs) ;

/// @brief Method SendTransitionCancelEvent addr 0x0 size 0xffffffffffffffff virtual false final false
inline void SendTransitionCancelEvent(::UnityEngine::UIElements::VisualElement*  ve, int32_t  runningIndex, int64_t  panelElapsedMs) ;

/// @brief Method CancelAllAnimations addr 0x0 size 0xffffffffffffffff virtual true final true
inline void CancelAllAnimations() ;

/// @brief Method CancelAllAnimations addr 0x0 size 0xffffffffffffffff virtual true final true
inline void CancelAllAnimations(::UnityEngine::UIElements::VisualElement*  ve) ;

/// @brief Method CancelAnimation addr 0x0 size 0xffffffffffffffff virtual true final true
inline void CancelAnimation(::UnityEngine::UIElements::VisualElement*  ve, ::UnityEngine::UIElements::StyleSheets::StylePropertyId  id) ;

/// @brief Method UpdateAnimation addr 0x0 size 0xffffffffffffffff virtual true final true
inline void UpdateAnimation(::UnityEngine::UIElements::VisualElement*  ve, ::UnityEngine::UIElements::StyleSheets::StylePropertyId  id) ;

/// @brief Method GetAllAnimations addr 0x0 size 0xffffffffffffffff virtual true final true
inline void GetAllAnimations(::UnityEngine::UIElements::VisualElement*  ve, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*  outPropertyIds) ;

/// @brief Method ComputeReversingShorteningFactor addr 0x0 size 0xffffffffffffffff virtual false final false
inline float_t ComputeReversingShorteningFactor(int32_t  oldIndex) ;

/// @brief Method ComputeReversingDuration addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t ComputeReversingDuration(int32_t  newTransitionDurationMs, float_t  newReversingShorteningFactor) ;

/// @brief Method ComputeReversingDelay addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t ComputeReversingDelay(int32_t  delayMs, float_t  newReversingShorteningFactor) ;

/// @brief Method StartTransition addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool StartTransition(::UnityEngine::UIElements::VisualElement*  owner, ::UnityEngine::UIElements::StyleSheets::StylePropertyId  prop, ::UnityEngine::UIElements::Scale  startValue, ::UnityEngine::UIElements::Scale  endValue, int32_t  durationMs, int32_t  delayMs, ::System::Func_2<float_t,float_t>*  easingCurve, int64_t  currentTimeMs) ;

/// @brief Method ForceComputedStyleEndValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline void ForceComputedStyleEndValue(int32_t  runningIndex) ;

/// @brief Method Update addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Update(int64_t  currentTimeMs) ;

/// @brief Method ProcessEventQueue addr 0x0 size 0xffffffffffffffff virtual false final false
inline void ProcessEventQueue() ;

/// @brief Method UpdateProgress addr 0x0 size 0xffffffffffffffff virtual false final false
inline void UpdateProgress(int64_t  currentTimeMs) ;

// Ctor Parameters [CppParam { name: "", ty: "__StylePropertyAnimationSystem__Values_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__StylePropertyAnimationSystem__Values_1(__StylePropertyAnimationSystem__Values_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__StylePropertyAnimationSystem__Values_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__StylePropertyAnimationSystem__Values_1(__StylePropertyAnimationSystem__Values_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __StylePropertyAnimationSystem__Values_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: ::Values`1
namespace UnityEngine::UIElements {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6836)), TypeDefinitionIndex(TypeDefinitionIndex(6842))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6842), inst: 1571 })
// CS Name: ::StylePropertyAnimationSystem::Values`1<T>*
class CORDL_TYPE __StylePropertyAnimationSystem__Values_1<::UnityEngine::UIElements::Rotate> : public ::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values {
public:
// Declarations
using EmptyData = ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::Rotate>;

using StyleData = ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<::UnityEngine::UIElements::Rotate>;

using TimingData = ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<::UnityEngine::UIElements::Rotate>;

using TransitionEventsFrameState = ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<::UnityEngine::UIElements::Rotate>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x88};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x88 - sizeof(::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values)]{};

/// @brief Field m_CurrentTimeMs offset 0x10
 __declspec(property(get=__get_m_CurrentTimeMs, put=__set_m_CurrentTimeMs)) int64_t  m_CurrentTimeMs;

/// @brief Field m_CurrentFrameEventsState offset 0x18
 __declspec(property(get=__get_m_CurrentFrameEventsState, put=__set_m_CurrentFrameEventsState)) ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<::UnityEngine::UIElements::Rotate>*  m_CurrentFrameEventsState;

/// @brief Field m_NextFrameEventsState offset 0x20
 __declspec(property(get=__get_m_NextFrameEventsState, put=__set_m_NextFrameEventsState)) ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<::UnityEngine::UIElements::Rotate>*  m_NextFrameEventsState;

/// @brief Field running offset 0x28
 __declspec(property(get=__get_running, put=__set_running)) ::UnityEngine::UIElements::__StylePropertyAnimationSystem__AnimationDataSet_2<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<::UnityEngine::UIElements::Rotate>,::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<::UnityEngine::UIElements::Rotate>>  running;

/// @brief Field completed offset 0x58
 __declspec(property(get=__get_completed, put=__set_completed)) ::UnityEngine::UIElements::__StylePropertyAnimationSystem__AnimationDataSet_2<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::Rotate>,::UnityEngine::UIElements::Rotate>  completed;

 __declspec(property(get=get_isEmpty)) bool  isEmpty;

 __declspec(property(get=get_SameFunc)) ::System::Func_3<::UnityEngine::UIElements::Rotate,::UnityEngine::UIElements::Rotate,bool>*  SameFunc;

constexpr void __set_m_CurrentTimeMs(int64_t  value) ;

constexpr int64_t& __get_m_CurrentTimeMs() ;

constexpr int64_t const& __get_m_CurrentTimeMs() const;

constexpr void __set_m_CurrentFrameEventsState(::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<::UnityEngine::UIElements::Rotate>*  value) ;

constexpr ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<::UnityEngine::UIElements::Rotate>* __get_m_CurrentFrameEventsState() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<::UnityEngine::UIElements::Rotate>*> __get_m_CurrentFrameEventsState() const;

constexpr void __set_m_NextFrameEventsState(::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<::UnityEngine::UIElements::Rotate>*  value) ;

constexpr ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<::UnityEngine::UIElements::Rotate>* __get_m_NextFrameEventsState() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<::UnityEngine::UIElements::Rotate>*> __get_m_NextFrameEventsState() const;

constexpr void __set_running(::UnityEngine::UIElements::__StylePropertyAnimationSystem__AnimationDataSet_2<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<::UnityEngine::UIElements::Rotate>,::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<::UnityEngine::UIElements::Rotate>>  value) ;

constexpr ::UnityEngine::UIElements::__StylePropertyAnimationSystem__AnimationDataSet_2<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<::UnityEngine::UIElements::Rotate>,::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<::UnityEngine::UIElements::Rotate>>& __get_running() ;

constexpr ::UnityEngine::UIElements::__StylePropertyAnimationSystem__AnimationDataSet_2<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<::UnityEngine::UIElements::Rotate>,::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<::UnityEngine::UIElements::Rotate>> const& __get_running() const;

constexpr void __set_completed(::UnityEngine::UIElements::__StylePropertyAnimationSystem__AnimationDataSet_2<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::Rotate>,::UnityEngine::UIElements::Rotate>  value) ;

constexpr ::UnityEngine::UIElements::__StylePropertyAnimationSystem__AnimationDataSet_2<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::Rotate>,::UnityEngine::UIElements::Rotate>& __get_completed() ;

constexpr ::UnityEngine::UIElements::__StylePropertyAnimationSystem__AnimationDataSet_2<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::Rotate>,::UnityEngine::UIElements::Rotate> const& __get_completed() const;

/// @brief Method get_isEmpty addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_isEmpty() ;

/// @brief Method get_SameFunc addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::Func_3<::UnityEngine::UIElements::Rotate,::UnityEngine::UIElements::Rotate,bool>* get_SameFunc() ;

static inline ::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values_1<::UnityEngine::UIElements::Rotate>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method SwapFrameStates addr 0x0 size 0xffffffffffffffff virtual false final false
inline void SwapFrameStates() ;

/// @brief Method QueueEvent addr 0x0 size 0xffffffffffffffff virtual false final false
inline void QueueEvent(::UnityEngine::UIElements::EventBase*  evt, ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair  epp) ;

/// @brief Method ClearEventQueue addr 0x0 size 0xffffffffffffffff virtual false final false
inline void ClearEventQueue(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair  epp) ;

/// @brief Method QueueTransitionRunEvent addr 0x0 size 0xffffffffffffffff virtual false final false
inline void QueueTransitionRunEvent(::UnityEngine::UIElements::VisualElement*  ve, int32_t  runningIndex) ;

/// @brief Method QueueTransitionStartEvent addr 0x0 size 0xffffffffffffffff virtual false final false
inline void QueueTransitionStartEvent(::UnityEngine::UIElements::VisualElement*  ve, int32_t  runningIndex) ;

/// @brief Method QueueTransitionEndEvent addr 0x0 size 0xffffffffffffffff virtual false final false
inline void QueueTransitionEndEvent(::UnityEngine::UIElements::VisualElement*  ve, int32_t  runningIndex) ;

/// @brief Method QueueTransitionCancelEvent addr 0x0 size 0xffffffffffffffff virtual false final false
inline void QueueTransitionCancelEvent(::UnityEngine::UIElements::VisualElement*  ve, int32_t  runningIndex, int64_t  panelElapsedMs) ;

/// @brief Method SendTransitionCancelEvent addr 0x0 size 0xffffffffffffffff virtual false final false
inline void SendTransitionCancelEvent(::UnityEngine::UIElements::VisualElement*  ve, int32_t  runningIndex, int64_t  panelElapsedMs) ;

/// @brief Method CancelAllAnimations addr 0x0 size 0xffffffffffffffff virtual true final true
inline void CancelAllAnimations() ;

/// @brief Method CancelAllAnimations addr 0x0 size 0xffffffffffffffff virtual true final true
inline void CancelAllAnimations(::UnityEngine::UIElements::VisualElement*  ve) ;

/// @brief Method CancelAnimation addr 0x0 size 0xffffffffffffffff virtual true final true
inline void CancelAnimation(::UnityEngine::UIElements::VisualElement*  ve, ::UnityEngine::UIElements::StyleSheets::StylePropertyId  id) ;

/// @brief Method UpdateAnimation addr 0x0 size 0xffffffffffffffff virtual true final true
inline void UpdateAnimation(::UnityEngine::UIElements::VisualElement*  ve, ::UnityEngine::UIElements::StyleSheets::StylePropertyId  id) ;

/// @brief Method GetAllAnimations addr 0x0 size 0xffffffffffffffff virtual true final true
inline void GetAllAnimations(::UnityEngine::UIElements::VisualElement*  ve, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*  outPropertyIds) ;

/// @brief Method ComputeReversingShorteningFactor addr 0x0 size 0xffffffffffffffff virtual false final false
inline float_t ComputeReversingShorteningFactor(int32_t  oldIndex) ;

/// @brief Method ComputeReversingDuration addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t ComputeReversingDuration(int32_t  newTransitionDurationMs, float_t  newReversingShorteningFactor) ;

/// @brief Method ComputeReversingDelay addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t ComputeReversingDelay(int32_t  delayMs, float_t  newReversingShorteningFactor) ;

/// @brief Method StartTransition addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool StartTransition(::UnityEngine::UIElements::VisualElement*  owner, ::UnityEngine::UIElements::StyleSheets::StylePropertyId  prop, ::UnityEngine::UIElements::Rotate  startValue, ::UnityEngine::UIElements::Rotate  endValue, int32_t  durationMs, int32_t  delayMs, ::System::Func_2<float_t,float_t>*  easingCurve, int64_t  currentTimeMs) ;

/// @brief Method ForceComputedStyleEndValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline void ForceComputedStyleEndValue(int32_t  runningIndex) ;

/// @brief Method Update addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Update(int64_t  currentTimeMs) ;

/// @brief Method ProcessEventQueue addr 0x0 size 0xffffffffffffffff virtual false final false
inline void ProcessEventQueue() ;

/// @brief Method UpdateProgress addr 0x0 size 0xffffffffffffffff virtual false final false
inline void UpdateProgress(int64_t  currentTimeMs) ;

// Ctor Parameters [CppParam { name: "", ty: "__StylePropertyAnimationSystem__Values_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__StylePropertyAnimationSystem__Values_1(__StylePropertyAnimationSystem__Values_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__StylePropertyAnimationSystem__Values_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__StylePropertyAnimationSystem__Values_1(__StylePropertyAnimationSystem__Values_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __StylePropertyAnimationSystem__Values_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: ::Values`1
namespace UnityEngine::UIElements {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6836)), TypeDefinitionIndex(TypeDefinitionIndex(6842))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6842), inst: 1570 })
// CS Name: ::StylePropertyAnimationSystem::Values`1<T>*
class CORDL_TYPE __StylePropertyAnimationSystem__Values_1<::UnityEngine::UIElements::Length> : public ::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values {
public:
// Declarations
using EmptyData = ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::Length>;

using StyleData = ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<::UnityEngine::UIElements::Length>;

using TimingData = ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<::UnityEngine::UIElements::Length>;

using TransitionEventsFrameState = ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<::UnityEngine::UIElements::Length>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x88};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x88 - sizeof(::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values)]{};

/// @brief Field m_CurrentTimeMs offset 0x10
 __declspec(property(get=__get_m_CurrentTimeMs, put=__set_m_CurrentTimeMs)) int64_t  m_CurrentTimeMs;

/// @brief Field m_CurrentFrameEventsState offset 0x18
 __declspec(property(get=__get_m_CurrentFrameEventsState, put=__set_m_CurrentFrameEventsState)) ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<::UnityEngine::UIElements::Length>*  m_CurrentFrameEventsState;

/// @brief Field m_NextFrameEventsState offset 0x20
 __declspec(property(get=__get_m_NextFrameEventsState, put=__set_m_NextFrameEventsState)) ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<::UnityEngine::UIElements::Length>*  m_NextFrameEventsState;

/// @brief Field running offset 0x28
 __declspec(property(get=__get_running, put=__set_running)) ::UnityEngine::UIElements::__StylePropertyAnimationSystem__AnimationDataSet_2<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<::UnityEngine::UIElements::Length>,::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<::UnityEngine::UIElements::Length>>  running;

/// @brief Field completed offset 0x58
 __declspec(property(get=__get_completed, put=__set_completed)) ::UnityEngine::UIElements::__StylePropertyAnimationSystem__AnimationDataSet_2<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::Length>,::UnityEngine::UIElements::Length>  completed;

 __declspec(property(get=get_isEmpty)) bool  isEmpty;

 __declspec(property(get=get_SameFunc)) ::System::Func_3<::UnityEngine::UIElements::Length,::UnityEngine::UIElements::Length,bool>*  SameFunc;

constexpr void __set_m_CurrentTimeMs(int64_t  value) ;

constexpr int64_t& __get_m_CurrentTimeMs() ;

constexpr int64_t const& __get_m_CurrentTimeMs() const;

constexpr void __set_m_CurrentFrameEventsState(::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<::UnityEngine::UIElements::Length>*  value) ;

constexpr ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<::UnityEngine::UIElements::Length>* __get_m_CurrentFrameEventsState() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<::UnityEngine::UIElements::Length>*> __get_m_CurrentFrameEventsState() const;

constexpr void __set_m_NextFrameEventsState(::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<::UnityEngine::UIElements::Length>*  value) ;

constexpr ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<::UnityEngine::UIElements::Length>* __get_m_NextFrameEventsState() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<::UnityEngine::UIElements::Length>*> __get_m_NextFrameEventsState() const;

constexpr void __set_running(::UnityEngine::UIElements::__StylePropertyAnimationSystem__AnimationDataSet_2<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<::UnityEngine::UIElements::Length>,::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<::UnityEngine::UIElements::Length>>  value) ;

constexpr ::UnityEngine::UIElements::__StylePropertyAnimationSystem__AnimationDataSet_2<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<::UnityEngine::UIElements::Length>,::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<::UnityEngine::UIElements::Length>>& __get_running() ;

constexpr ::UnityEngine::UIElements::__StylePropertyAnimationSystem__AnimationDataSet_2<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<::UnityEngine::UIElements::Length>,::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<::UnityEngine::UIElements::Length>> const& __get_running() const;

constexpr void __set_completed(::UnityEngine::UIElements::__StylePropertyAnimationSystem__AnimationDataSet_2<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::Length>,::UnityEngine::UIElements::Length>  value) ;

constexpr ::UnityEngine::UIElements::__StylePropertyAnimationSystem__AnimationDataSet_2<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::Length>,::UnityEngine::UIElements::Length>& __get_completed() ;

constexpr ::UnityEngine::UIElements::__StylePropertyAnimationSystem__AnimationDataSet_2<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::Length>,::UnityEngine::UIElements::Length> const& __get_completed() const;

/// @brief Method get_isEmpty addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_isEmpty() ;

/// @brief Method get_SameFunc addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::Func_3<::UnityEngine::UIElements::Length,::UnityEngine::UIElements::Length,bool>* get_SameFunc() ;

static inline ::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values_1<::UnityEngine::UIElements::Length>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method SwapFrameStates addr 0x0 size 0xffffffffffffffff virtual false final false
inline void SwapFrameStates() ;

/// @brief Method QueueEvent addr 0x0 size 0xffffffffffffffff virtual false final false
inline void QueueEvent(::UnityEngine::UIElements::EventBase*  evt, ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair  epp) ;

/// @brief Method ClearEventQueue addr 0x0 size 0xffffffffffffffff virtual false final false
inline void ClearEventQueue(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair  epp) ;

/// @brief Method QueueTransitionRunEvent addr 0x0 size 0xffffffffffffffff virtual false final false
inline void QueueTransitionRunEvent(::UnityEngine::UIElements::VisualElement*  ve, int32_t  runningIndex) ;

/// @brief Method QueueTransitionStartEvent addr 0x0 size 0xffffffffffffffff virtual false final false
inline void QueueTransitionStartEvent(::UnityEngine::UIElements::VisualElement*  ve, int32_t  runningIndex) ;

/// @brief Method QueueTransitionEndEvent addr 0x0 size 0xffffffffffffffff virtual false final false
inline void QueueTransitionEndEvent(::UnityEngine::UIElements::VisualElement*  ve, int32_t  runningIndex) ;

/// @brief Method QueueTransitionCancelEvent addr 0x0 size 0xffffffffffffffff virtual false final false
inline void QueueTransitionCancelEvent(::UnityEngine::UIElements::VisualElement*  ve, int32_t  runningIndex, int64_t  panelElapsedMs) ;

/// @brief Method SendTransitionCancelEvent addr 0x0 size 0xffffffffffffffff virtual false final false
inline void SendTransitionCancelEvent(::UnityEngine::UIElements::VisualElement*  ve, int32_t  runningIndex, int64_t  panelElapsedMs) ;

/// @brief Method CancelAllAnimations addr 0x0 size 0xffffffffffffffff virtual true final true
inline void CancelAllAnimations() ;

/// @brief Method CancelAllAnimations addr 0x0 size 0xffffffffffffffff virtual true final true
inline void CancelAllAnimations(::UnityEngine::UIElements::VisualElement*  ve) ;

/// @brief Method CancelAnimation addr 0x0 size 0xffffffffffffffff virtual true final true
inline void CancelAnimation(::UnityEngine::UIElements::VisualElement*  ve, ::UnityEngine::UIElements::StyleSheets::StylePropertyId  id) ;

/// @brief Method UpdateAnimation addr 0x0 size 0xffffffffffffffff virtual true final true
inline void UpdateAnimation(::UnityEngine::UIElements::VisualElement*  ve, ::UnityEngine::UIElements::StyleSheets::StylePropertyId  id) ;

/// @brief Method GetAllAnimations addr 0x0 size 0xffffffffffffffff virtual true final true
inline void GetAllAnimations(::UnityEngine::UIElements::VisualElement*  ve, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*  outPropertyIds) ;

/// @brief Method ComputeReversingShorteningFactor addr 0x0 size 0xffffffffffffffff virtual false final false
inline float_t ComputeReversingShorteningFactor(int32_t  oldIndex) ;

/// @brief Method ComputeReversingDuration addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t ComputeReversingDuration(int32_t  newTransitionDurationMs, float_t  newReversingShorteningFactor) ;

/// @brief Method ComputeReversingDelay addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t ComputeReversingDelay(int32_t  delayMs, float_t  newReversingShorteningFactor) ;

/// @brief Method StartTransition addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool StartTransition(::UnityEngine::UIElements::VisualElement*  owner, ::UnityEngine::UIElements::StyleSheets::StylePropertyId  prop, ::UnityEngine::UIElements::Length  startValue, ::UnityEngine::UIElements::Length  endValue, int32_t  durationMs, int32_t  delayMs, ::System::Func_2<float_t,float_t>*  easingCurve, int64_t  currentTimeMs) ;

/// @brief Method ForceComputedStyleEndValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline void ForceComputedStyleEndValue(int32_t  runningIndex) ;

/// @brief Method Update addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Update(int64_t  currentTimeMs) ;

/// @brief Method ProcessEventQueue addr 0x0 size 0xffffffffffffffff virtual false final false
inline void ProcessEventQueue() ;

/// @brief Method UpdateProgress addr 0x0 size 0xffffffffffffffff virtual false final false
inline void UpdateProgress(int64_t  currentTimeMs) ;

// Ctor Parameters [CppParam { name: "", ty: "__StylePropertyAnimationSystem__Values_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__StylePropertyAnimationSystem__Values_1(__StylePropertyAnimationSystem__Values_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__StylePropertyAnimationSystem__Values_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__StylePropertyAnimationSystem__Values_1(__StylePropertyAnimationSystem__Values_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __StylePropertyAnimationSystem__Values_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: ::Values`1
namespace UnityEngine::UIElements {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6836)), TypeDefinitionIndex(TypeDefinitionIndex(6842))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6842), inst: 1569 })
// CS Name: ::StylePropertyAnimationSystem::Values`1<T>*
class CORDL_TYPE __StylePropertyAnimationSystem__Values_1<::UnityEngine::UIElements::FontDefinition> : public ::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values {
public:
// Declarations
using EmptyData = ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::FontDefinition>;

using StyleData = ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<::UnityEngine::UIElements::FontDefinition>;

using TimingData = ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<::UnityEngine::UIElements::FontDefinition>;

using TransitionEventsFrameState = ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<::UnityEngine::UIElements::FontDefinition>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x88};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x88 - sizeof(::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values)]{};

/// @brief Field m_CurrentTimeMs offset 0x10
 __declspec(property(get=__get_m_CurrentTimeMs, put=__set_m_CurrentTimeMs)) int64_t  m_CurrentTimeMs;

/// @brief Field m_CurrentFrameEventsState offset 0x18
 __declspec(property(get=__get_m_CurrentFrameEventsState, put=__set_m_CurrentFrameEventsState)) ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<::UnityEngine::UIElements::FontDefinition>*  m_CurrentFrameEventsState;

/// @brief Field m_NextFrameEventsState offset 0x20
 __declspec(property(get=__get_m_NextFrameEventsState, put=__set_m_NextFrameEventsState)) ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<::UnityEngine::UIElements::FontDefinition>*  m_NextFrameEventsState;

/// @brief Field running offset 0x28
 __declspec(property(get=__get_running, put=__set_running)) ::UnityEngine::UIElements::__StylePropertyAnimationSystem__AnimationDataSet_2<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<::UnityEngine::UIElements::FontDefinition>,::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<::UnityEngine::UIElements::FontDefinition>>  running;

/// @brief Field completed offset 0x58
 __declspec(property(get=__get_completed, put=__set_completed)) ::UnityEngine::UIElements::__StylePropertyAnimationSystem__AnimationDataSet_2<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::FontDefinition>,::UnityEngine::UIElements::FontDefinition>  completed;

 __declspec(property(get=get_isEmpty)) bool  isEmpty;

 __declspec(property(get=get_SameFunc)) ::System::Func_3<::UnityEngine::UIElements::FontDefinition,::UnityEngine::UIElements::FontDefinition,bool>*  SameFunc;

constexpr void __set_m_CurrentTimeMs(int64_t  value) ;

constexpr int64_t& __get_m_CurrentTimeMs() ;

constexpr int64_t const& __get_m_CurrentTimeMs() const;

constexpr void __set_m_CurrentFrameEventsState(::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<::UnityEngine::UIElements::FontDefinition>*  value) ;

constexpr ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<::UnityEngine::UIElements::FontDefinition>* __get_m_CurrentFrameEventsState() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<::UnityEngine::UIElements::FontDefinition>*> __get_m_CurrentFrameEventsState() const;

constexpr void __set_m_NextFrameEventsState(::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<::UnityEngine::UIElements::FontDefinition>*  value) ;

constexpr ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<::UnityEngine::UIElements::FontDefinition>* __get_m_NextFrameEventsState() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<::UnityEngine::UIElements::FontDefinition>*> __get_m_NextFrameEventsState() const;

constexpr void __set_running(::UnityEngine::UIElements::__StylePropertyAnimationSystem__AnimationDataSet_2<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<::UnityEngine::UIElements::FontDefinition>,::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<::UnityEngine::UIElements::FontDefinition>>  value) ;

constexpr ::UnityEngine::UIElements::__StylePropertyAnimationSystem__AnimationDataSet_2<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<::UnityEngine::UIElements::FontDefinition>,::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<::UnityEngine::UIElements::FontDefinition>>& __get_running() ;

constexpr ::UnityEngine::UIElements::__StylePropertyAnimationSystem__AnimationDataSet_2<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<::UnityEngine::UIElements::FontDefinition>,::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<::UnityEngine::UIElements::FontDefinition>> const& __get_running() const;

constexpr void __set_completed(::UnityEngine::UIElements::__StylePropertyAnimationSystem__AnimationDataSet_2<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::FontDefinition>,::UnityEngine::UIElements::FontDefinition>  value) ;

constexpr ::UnityEngine::UIElements::__StylePropertyAnimationSystem__AnimationDataSet_2<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::FontDefinition>,::UnityEngine::UIElements::FontDefinition>& __get_completed() ;

constexpr ::UnityEngine::UIElements::__StylePropertyAnimationSystem__AnimationDataSet_2<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::FontDefinition>,::UnityEngine::UIElements::FontDefinition> const& __get_completed() const;

/// @brief Method get_isEmpty addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_isEmpty() ;

/// @brief Method get_SameFunc addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::Func_3<::UnityEngine::UIElements::FontDefinition,::UnityEngine::UIElements::FontDefinition,bool>* get_SameFunc() ;

static inline ::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values_1<::UnityEngine::UIElements::FontDefinition>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method SwapFrameStates addr 0x0 size 0xffffffffffffffff virtual false final false
inline void SwapFrameStates() ;

/// @brief Method QueueEvent addr 0x0 size 0xffffffffffffffff virtual false final false
inline void QueueEvent(::UnityEngine::UIElements::EventBase*  evt, ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair  epp) ;

/// @brief Method ClearEventQueue addr 0x0 size 0xffffffffffffffff virtual false final false
inline void ClearEventQueue(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair  epp) ;

/// @brief Method QueueTransitionRunEvent addr 0x0 size 0xffffffffffffffff virtual false final false
inline void QueueTransitionRunEvent(::UnityEngine::UIElements::VisualElement*  ve, int32_t  runningIndex) ;

/// @brief Method QueueTransitionStartEvent addr 0x0 size 0xffffffffffffffff virtual false final false
inline void QueueTransitionStartEvent(::UnityEngine::UIElements::VisualElement*  ve, int32_t  runningIndex) ;

/// @brief Method QueueTransitionEndEvent addr 0x0 size 0xffffffffffffffff virtual false final false
inline void QueueTransitionEndEvent(::UnityEngine::UIElements::VisualElement*  ve, int32_t  runningIndex) ;

/// @brief Method QueueTransitionCancelEvent addr 0x0 size 0xffffffffffffffff virtual false final false
inline void QueueTransitionCancelEvent(::UnityEngine::UIElements::VisualElement*  ve, int32_t  runningIndex, int64_t  panelElapsedMs) ;

/// @brief Method SendTransitionCancelEvent addr 0x0 size 0xffffffffffffffff virtual false final false
inline void SendTransitionCancelEvent(::UnityEngine::UIElements::VisualElement*  ve, int32_t  runningIndex, int64_t  panelElapsedMs) ;

/// @brief Method CancelAllAnimations addr 0x0 size 0xffffffffffffffff virtual true final true
inline void CancelAllAnimations() ;

/// @brief Method CancelAllAnimations addr 0x0 size 0xffffffffffffffff virtual true final true
inline void CancelAllAnimations(::UnityEngine::UIElements::VisualElement*  ve) ;

/// @brief Method CancelAnimation addr 0x0 size 0xffffffffffffffff virtual true final true
inline void CancelAnimation(::UnityEngine::UIElements::VisualElement*  ve, ::UnityEngine::UIElements::StyleSheets::StylePropertyId  id) ;

/// @brief Method UpdateAnimation addr 0x0 size 0xffffffffffffffff virtual true final true
inline void UpdateAnimation(::UnityEngine::UIElements::VisualElement*  ve, ::UnityEngine::UIElements::StyleSheets::StylePropertyId  id) ;

/// @brief Method GetAllAnimations addr 0x0 size 0xffffffffffffffff virtual true final true
inline void GetAllAnimations(::UnityEngine::UIElements::VisualElement*  ve, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*  outPropertyIds) ;

/// @brief Method ComputeReversingShorteningFactor addr 0x0 size 0xffffffffffffffff virtual false final false
inline float_t ComputeReversingShorteningFactor(int32_t  oldIndex) ;

/// @brief Method ComputeReversingDuration addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t ComputeReversingDuration(int32_t  newTransitionDurationMs, float_t  newReversingShorteningFactor) ;

/// @brief Method ComputeReversingDelay addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t ComputeReversingDelay(int32_t  delayMs, float_t  newReversingShorteningFactor) ;

/// @brief Method StartTransition addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool StartTransition(::UnityEngine::UIElements::VisualElement*  owner, ::UnityEngine::UIElements::StyleSheets::StylePropertyId  prop, ::UnityEngine::UIElements::FontDefinition  startValue, ::UnityEngine::UIElements::FontDefinition  endValue, int32_t  durationMs, int32_t  delayMs, ::System::Func_2<float_t,float_t>*  easingCurve, int64_t  currentTimeMs) ;

/// @brief Method ForceComputedStyleEndValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline void ForceComputedStyleEndValue(int32_t  runningIndex) ;

/// @brief Method Update addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Update(int64_t  currentTimeMs) ;

/// @brief Method ProcessEventQueue addr 0x0 size 0xffffffffffffffff virtual false final false
inline void ProcessEventQueue() ;

/// @brief Method UpdateProgress addr 0x0 size 0xffffffffffffffff virtual false final false
inline void UpdateProgress(int64_t  currentTimeMs) ;

// Ctor Parameters [CppParam { name: "", ty: "__StylePropertyAnimationSystem__Values_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__StylePropertyAnimationSystem__Values_1(__StylePropertyAnimationSystem__Values_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__StylePropertyAnimationSystem__Values_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__StylePropertyAnimationSystem__Values_1(__StylePropertyAnimationSystem__Values_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __StylePropertyAnimationSystem__Values_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: ::Values`1
namespace UnityEngine::UIElements {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6842)), TypeDefinitionIndex(TypeDefinitionIndex(6836))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6842), inst: 1568 })
// CS Name: ::StylePropertyAnimationSystem::Values`1<T>*
class CORDL_TYPE __StylePropertyAnimationSystem__Values_1<::UnityEngine::UIElements::Background> : public ::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values {
public:
// Declarations
using EmptyData = ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::Background>;

using StyleData = ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<::UnityEngine::UIElements::Background>;

using TimingData = ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<::UnityEngine::UIElements::Background>;

using TransitionEventsFrameState = ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<::UnityEngine::UIElements::Background>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x88};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x88 - sizeof(::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values)]{};

/// @brief Field m_CurrentTimeMs offset 0x10
 __declspec(property(get=__get_m_CurrentTimeMs, put=__set_m_CurrentTimeMs)) int64_t  m_CurrentTimeMs;

/// @brief Field m_CurrentFrameEventsState offset 0x18
 __declspec(property(get=__get_m_CurrentFrameEventsState, put=__set_m_CurrentFrameEventsState)) ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<::UnityEngine::UIElements::Background>*  m_CurrentFrameEventsState;

/// @brief Field m_NextFrameEventsState offset 0x20
 __declspec(property(get=__get_m_NextFrameEventsState, put=__set_m_NextFrameEventsState)) ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<::UnityEngine::UIElements::Background>*  m_NextFrameEventsState;

/// @brief Field running offset 0x28
 __declspec(property(get=__get_running, put=__set_running)) ::UnityEngine::UIElements::__StylePropertyAnimationSystem__AnimationDataSet_2<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<::UnityEngine::UIElements::Background>,::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<::UnityEngine::UIElements::Background>>  running;

/// @brief Field completed offset 0x58
 __declspec(property(get=__get_completed, put=__set_completed)) ::UnityEngine::UIElements::__StylePropertyAnimationSystem__AnimationDataSet_2<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::Background>,::UnityEngine::UIElements::Background>  completed;

 __declspec(property(get=get_isEmpty)) bool  isEmpty;

 __declspec(property(get=get_SameFunc)) ::System::Func_3<::UnityEngine::UIElements::Background,::UnityEngine::UIElements::Background,bool>*  SameFunc;

constexpr void __set_m_CurrentTimeMs(int64_t  value) ;

constexpr int64_t& __get_m_CurrentTimeMs() ;

constexpr int64_t const& __get_m_CurrentTimeMs() const;

constexpr void __set_m_CurrentFrameEventsState(::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<::UnityEngine::UIElements::Background>*  value) ;

constexpr ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<::UnityEngine::UIElements::Background>* __get_m_CurrentFrameEventsState() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<::UnityEngine::UIElements::Background>*> __get_m_CurrentFrameEventsState() const;

constexpr void __set_m_NextFrameEventsState(::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<::UnityEngine::UIElements::Background>*  value) ;

constexpr ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<::UnityEngine::UIElements::Background>* __get_m_NextFrameEventsState() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<::UnityEngine::UIElements::Background>*> __get_m_NextFrameEventsState() const;

constexpr void __set_running(::UnityEngine::UIElements::__StylePropertyAnimationSystem__AnimationDataSet_2<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<::UnityEngine::UIElements::Background>,::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<::UnityEngine::UIElements::Background>>  value) ;

constexpr ::UnityEngine::UIElements::__StylePropertyAnimationSystem__AnimationDataSet_2<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<::UnityEngine::UIElements::Background>,::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<::UnityEngine::UIElements::Background>>& __get_running() ;

constexpr ::UnityEngine::UIElements::__StylePropertyAnimationSystem__AnimationDataSet_2<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<::UnityEngine::UIElements::Background>,::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<::UnityEngine::UIElements::Background>> const& __get_running() const;

constexpr void __set_completed(::UnityEngine::UIElements::__StylePropertyAnimationSystem__AnimationDataSet_2<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::Background>,::UnityEngine::UIElements::Background>  value) ;

constexpr ::UnityEngine::UIElements::__StylePropertyAnimationSystem__AnimationDataSet_2<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::Background>,::UnityEngine::UIElements::Background>& __get_completed() ;

constexpr ::UnityEngine::UIElements::__StylePropertyAnimationSystem__AnimationDataSet_2<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::Background>,::UnityEngine::UIElements::Background> const& __get_completed() const;

/// @brief Method get_isEmpty addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_isEmpty() ;

/// @brief Method get_SameFunc addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::Func_3<::UnityEngine::UIElements::Background,::UnityEngine::UIElements::Background,bool>* get_SameFunc() ;

static inline ::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values_1<::UnityEngine::UIElements::Background>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method SwapFrameStates addr 0x0 size 0xffffffffffffffff virtual false final false
inline void SwapFrameStates() ;

/// @brief Method QueueEvent addr 0x0 size 0xffffffffffffffff virtual false final false
inline void QueueEvent(::UnityEngine::UIElements::EventBase*  evt, ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair  epp) ;

/// @brief Method ClearEventQueue addr 0x0 size 0xffffffffffffffff virtual false final false
inline void ClearEventQueue(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair  epp) ;

/// @brief Method QueueTransitionRunEvent addr 0x0 size 0xffffffffffffffff virtual false final false
inline void QueueTransitionRunEvent(::UnityEngine::UIElements::VisualElement*  ve, int32_t  runningIndex) ;

/// @brief Method QueueTransitionStartEvent addr 0x0 size 0xffffffffffffffff virtual false final false
inline void QueueTransitionStartEvent(::UnityEngine::UIElements::VisualElement*  ve, int32_t  runningIndex) ;

/// @brief Method QueueTransitionEndEvent addr 0x0 size 0xffffffffffffffff virtual false final false
inline void QueueTransitionEndEvent(::UnityEngine::UIElements::VisualElement*  ve, int32_t  runningIndex) ;

/// @brief Method QueueTransitionCancelEvent addr 0x0 size 0xffffffffffffffff virtual false final false
inline void QueueTransitionCancelEvent(::UnityEngine::UIElements::VisualElement*  ve, int32_t  runningIndex, int64_t  panelElapsedMs) ;

/// @brief Method SendTransitionCancelEvent addr 0x0 size 0xffffffffffffffff virtual false final false
inline void SendTransitionCancelEvent(::UnityEngine::UIElements::VisualElement*  ve, int32_t  runningIndex, int64_t  panelElapsedMs) ;

/// @brief Method CancelAllAnimations addr 0x0 size 0xffffffffffffffff virtual true final true
inline void CancelAllAnimations() ;

/// @brief Method CancelAllAnimations addr 0x0 size 0xffffffffffffffff virtual true final true
inline void CancelAllAnimations(::UnityEngine::UIElements::VisualElement*  ve) ;

/// @brief Method CancelAnimation addr 0x0 size 0xffffffffffffffff virtual true final true
inline void CancelAnimation(::UnityEngine::UIElements::VisualElement*  ve, ::UnityEngine::UIElements::StyleSheets::StylePropertyId  id) ;

/// @brief Method UpdateAnimation addr 0x0 size 0xffffffffffffffff virtual true final true
inline void UpdateAnimation(::UnityEngine::UIElements::VisualElement*  ve, ::UnityEngine::UIElements::StyleSheets::StylePropertyId  id) ;

/// @brief Method GetAllAnimations addr 0x0 size 0xffffffffffffffff virtual true final true
inline void GetAllAnimations(::UnityEngine::UIElements::VisualElement*  ve, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*  outPropertyIds) ;

/// @brief Method ComputeReversingShorteningFactor addr 0x0 size 0xffffffffffffffff virtual false final false
inline float_t ComputeReversingShorteningFactor(int32_t  oldIndex) ;

/// @brief Method ComputeReversingDuration addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t ComputeReversingDuration(int32_t  newTransitionDurationMs, float_t  newReversingShorteningFactor) ;

/// @brief Method ComputeReversingDelay addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t ComputeReversingDelay(int32_t  delayMs, float_t  newReversingShorteningFactor) ;

/// @brief Method StartTransition addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool StartTransition(::UnityEngine::UIElements::VisualElement*  owner, ::UnityEngine::UIElements::StyleSheets::StylePropertyId  prop, ::UnityEngine::UIElements::Background  startValue, ::UnityEngine::UIElements::Background  endValue, int32_t  durationMs, int32_t  delayMs, ::System::Func_2<float_t,float_t>*  easingCurve, int64_t  currentTimeMs) ;

/// @brief Method ForceComputedStyleEndValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline void ForceComputedStyleEndValue(int32_t  runningIndex) ;

/// @brief Method Update addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Update(int64_t  currentTimeMs) ;

/// @brief Method ProcessEventQueue addr 0x0 size 0xffffffffffffffff virtual false final false
inline void ProcessEventQueue() ;

/// @brief Method UpdateProgress addr 0x0 size 0xffffffffffffffff virtual false final false
inline void UpdateProgress(int64_t  currentTimeMs) ;

// Ctor Parameters [CppParam { name: "", ty: "__StylePropertyAnimationSystem__Values_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__StylePropertyAnimationSystem__Values_1(__StylePropertyAnimationSystem__Values_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__StylePropertyAnimationSystem__Values_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__StylePropertyAnimationSystem__Values_1(__StylePropertyAnimationSystem__Values_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __StylePropertyAnimationSystem__Values_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: ::Values`1
namespace UnityEngine::UIElements {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6836)), TypeDefinitionIndex(TypeDefinitionIndex(6842))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6842), inst: 391 })
// CS Name: ::StylePropertyAnimationSystem::Values`1<T>*
class CORDL_TYPE __StylePropertyAnimationSystem__Values_1<float_t> : public ::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values {
public:
// Declarations
using EmptyData = ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<float_t>;

using StyleData = ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<float_t>;

using TimingData = ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<float_t>;

using TransitionEventsFrameState = ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<float_t>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x88};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x88 - sizeof(::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values)]{};

/// @brief Field m_CurrentTimeMs offset 0x10
 __declspec(property(get=__get_m_CurrentTimeMs, put=__set_m_CurrentTimeMs)) int64_t  m_CurrentTimeMs;

/// @brief Field m_CurrentFrameEventsState offset 0x18
 __declspec(property(get=__get_m_CurrentFrameEventsState, put=__set_m_CurrentFrameEventsState)) ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<float_t>*  m_CurrentFrameEventsState;

/// @brief Field m_NextFrameEventsState offset 0x20
 __declspec(property(get=__get_m_NextFrameEventsState, put=__set_m_NextFrameEventsState)) ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<float_t>*  m_NextFrameEventsState;

/// @brief Field running offset 0x28
 __declspec(property(get=__get_running, put=__set_running)) ::UnityEngine::UIElements::__StylePropertyAnimationSystem__AnimationDataSet_2<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<float_t>,::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<float_t>>  running;

/// @brief Field completed offset 0x58
 __declspec(property(get=__get_completed, put=__set_completed)) ::UnityEngine::UIElements::__StylePropertyAnimationSystem__AnimationDataSet_2<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<float_t>,float_t>  completed;

 __declspec(property(get=get_isEmpty)) bool  isEmpty;

 __declspec(property(get=get_SameFunc)) ::System::Func_3<float_t,float_t,bool>*  SameFunc;

constexpr void __set_m_CurrentTimeMs(int64_t  value) ;

constexpr int64_t& __get_m_CurrentTimeMs() ;

constexpr int64_t const& __get_m_CurrentTimeMs() const;

constexpr void __set_m_CurrentFrameEventsState(::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<float_t>*  value) ;

constexpr ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<float_t>* __get_m_CurrentFrameEventsState() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<float_t>*> __get_m_CurrentFrameEventsState() const;

constexpr void __set_m_NextFrameEventsState(::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<float_t>*  value) ;

constexpr ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<float_t>* __get_m_NextFrameEventsState() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<float_t>*> __get_m_NextFrameEventsState() const;

constexpr void __set_running(::UnityEngine::UIElements::__StylePropertyAnimationSystem__AnimationDataSet_2<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<float_t>,::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<float_t>>  value) ;

constexpr ::UnityEngine::UIElements::__StylePropertyAnimationSystem__AnimationDataSet_2<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<float_t>,::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<float_t>>& __get_running() ;

constexpr ::UnityEngine::UIElements::__StylePropertyAnimationSystem__AnimationDataSet_2<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<float_t>,::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<float_t>> const& __get_running() const;

constexpr void __set_completed(::UnityEngine::UIElements::__StylePropertyAnimationSystem__AnimationDataSet_2<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<float_t>,float_t>  value) ;

constexpr ::UnityEngine::UIElements::__StylePropertyAnimationSystem__AnimationDataSet_2<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<float_t>,float_t>& __get_completed() ;

constexpr ::UnityEngine::UIElements::__StylePropertyAnimationSystem__AnimationDataSet_2<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<float_t>,float_t> const& __get_completed() const;

/// @brief Method get_isEmpty addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_isEmpty() ;

/// @brief Method get_SameFunc addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::Func_3<float_t,float_t,bool>* get_SameFunc() ;

static inline ::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values_1<float_t>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method SwapFrameStates addr 0x0 size 0xffffffffffffffff virtual false final false
inline void SwapFrameStates() ;

/// @brief Method QueueEvent addr 0x0 size 0xffffffffffffffff virtual false final false
inline void QueueEvent(::UnityEngine::UIElements::EventBase*  evt, ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair  epp) ;

/// @brief Method ClearEventQueue addr 0x0 size 0xffffffffffffffff virtual false final false
inline void ClearEventQueue(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair  epp) ;

/// @brief Method QueueTransitionRunEvent addr 0x0 size 0xffffffffffffffff virtual false final false
inline void QueueTransitionRunEvent(::UnityEngine::UIElements::VisualElement*  ve, int32_t  runningIndex) ;

/// @brief Method QueueTransitionStartEvent addr 0x0 size 0xffffffffffffffff virtual false final false
inline void QueueTransitionStartEvent(::UnityEngine::UIElements::VisualElement*  ve, int32_t  runningIndex) ;

/// @brief Method QueueTransitionEndEvent addr 0x0 size 0xffffffffffffffff virtual false final false
inline void QueueTransitionEndEvent(::UnityEngine::UIElements::VisualElement*  ve, int32_t  runningIndex) ;

/// @brief Method QueueTransitionCancelEvent addr 0x0 size 0xffffffffffffffff virtual false final false
inline void QueueTransitionCancelEvent(::UnityEngine::UIElements::VisualElement*  ve, int32_t  runningIndex, int64_t  panelElapsedMs) ;

/// @brief Method SendTransitionCancelEvent addr 0x0 size 0xffffffffffffffff virtual false final false
inline void SendTransitionCancelEvent(::UnityEngine::UIElements::VisualElement*  ve, int32_t  runningIndex, int64_t  panelElapsedMs) ;

/// @brief Method CancelAllAnimations addr 0x0 size 0xffffffffffffffff virtual true final true
inline void CancelAllAnimations() ;

/// @brief Method CancelAllAnimations addr 0x0 size 0xffffffffffffffff virtual true final true
inline void CancelAllAnimations(::UnityEngine::UIElements::VisualElement*  ve) ;

/// @brief Method CancelAnimation addr 0x0 size 0xffffffffffffffff virtual true final true
inline void CancelAnimation(::UnityEngine::UIElements::VisualElement*  ve, ::UnityEngine::UIElements::StyleSheets::StylePropertyId  id) ;

/// @brief Method UpdateAnimation addr 0x0 size 0xffffffffffffffff virtual true final true
inline void UpdateAnimation(::UnityEngine::UIElements::VisualElement*  ve, ::UnityEngine::UIElements::StyleSheets::StylePropertyId  id) ;

/// @brief Method GetAllAnimations addr 0x0 size 0xffffffffffffffff virtual true final true
inline void GetAllAnimations(::UnityEngine::UIElements::VisualElement*  ve, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*  outPropertyIds) ;

/// @brief Method ComputeReversingShorteningFactor addr 0x0 size 0xffffffffffffffff virtual false final false
inline float_t ComputeReversingShorteningFactor(int32_t  oldIndex) ;

/// @brief Method ComputeReversingDuration addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t ComputeReversingDuration(int32_t  newTransitionDurationMs, float_t  newReversingShorteningFactor) ;

/// @brief Method ComputeReversingDelay addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t ComputeReversingDelay(int32_t  delayMs, float_t  newReversingShorteningFactor) ;

/// @brief Method StartTransition addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool StartTransition(::UnityEngine::UIElements::VisualElement*  owner, ::UnityEngine::UIElements::StyleSheets::StylePropertyId  prop, float_t  startValue, float_t  endValue, int32_t  durationMs, int32_t  delayMs, ::System::Func_2<float_t,float_t>*  easingCurve, int64_t  currentTimeMs) ;

/// @brief Method ForceComputedStyleEndValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline void ForceComputedStyleEndValue(int32_t  runningIndex) ;

/// @brief Method Update addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Update(int64_t  currentTimeMs) ;

/// @brief Method ProcessEventQueue addr 0x0 size 0xffffffffffffffff virtual false final false
inline void ProcessEventQueue() ;

/// @brief Method UpdateProgress addr 0x0 size 0xffffffffffffffff virtual false final false
inline void UpdateProgress(int64_t  currentTimeMs) ;

// Ctor Parameters [CppParam { name: "", ty: "__StylePropertyAnimationSystem__Values_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__StylePropertyAnimationSystem__Values_1(__StylePropertyAnimationSystem__Values_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__StylePropertyAnimationSystem__Values_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__StylePropertyAnimationSystem__Values_1(__StylePropertyAnimationSystem__Values_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __StylePropertyAnimationSystem__Values_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: ::Values`1
namespace UnityEngine::UIElements {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6836)), TypeDefinitionIndex(TypeDefinitionIndex(6842))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6842), inst: 293 })
// CS Name: ::StylePropertyAnimationSystem::Values`1<T>*
class CORDL_TYPE __StylePropertyAnimationSystem__Values_1<::UnityEngine::Color> : public ::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values {
public:
// Declarations
using EmptyData = ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::Color>;

using StyleData = ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<::UnityEngine::Color>;

using TimingData = ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<::UnityEngine::Color>;

using TransitionEventsFrameState = ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<::UnityEngine::Color>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x88};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x88 - sizeof(::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values)]{};

/// @brief Field m_CurrentTimeMs offset 0x10
 __declspec(property(get=__get_m_CurrentTimeMs, put=__set_m_CurrentTimeMs)) int64_t  m_CurrentTimeMs;

/// @brief Field m_CurrentFrameEventsState offset 0x18
 __declspec(property(get=__get_m_CurrentFrameEventsState, put=__set_m_CurrentFrameEventsState)) ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<::UnityEngine::Color>*  m_CurrentFrameEventsState;

/// @brief Field m_NextFrameEventsState offset 0x20
 __declspec(property(get=__get_m_NextFrameEventsState, put=__set_m_NextFrameEventsState)) ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<::UnityEngine::Color>*  m_NextFrameEventsState;

/// @brief Field running offset 0x28
 __declspec(property(get=__get_running, put=__set_running)) ::UnityEngine::UIElements::__StylePropertyAnimationSystem__AnimationDataSet_2<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<::UnityEngine::Color>,::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<::UnityEngine::Color>>  running;

/// @brief Field completed offset 0x58
 __declspec(property(get=__get_completed, put=__set_completed)) ::UnityEngine::UIElements::__StylePropertyAnimationSystem__AnimationDataSet_2<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::Color>,::UnityEngine::Color>  completed;

 __declspec(property(get=get_isEmpty)) bool  isEmpty;

 __declspec(property(get=get_SameFunc)) ::System::Func_3<::UnityEngine::Color,::UnityEngine::Color,bool>*  SameFunc;

constexpr void __set_m_CurrentTimeMs(int64_t  value) ;

constexpr int64_t& __get_m_CurrentTimeMs() ;

constexpr int64_t const& __get_m_CurrentTimeMs() const;

constexpr void __set_m_CurrentFrameEventsState(::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<::UnityEngine::Color>*  value) ;

constexpr ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<::UnityEngine::Color>* __get_m_CurrentFrameEventsState() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<::UnityEngine::Color>*> __get_m_CurrentFrameEventsState() const;

constexpr void __set_m_NextFrameEventsState(::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<::UnityEngine::Color>*  value) ;

constexpr ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<::UnityEngine::Color>* __get_m_NextFrameEventsState() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<::UnityEngine::Color>*> __get_m_NextFrameEventsState() const;

constexpr void __set_running(::UnityEngine::UIElements::__StylePropertyAnimationSystem__AnimationDataSet_2<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<::UnityEngine::Color>,::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<::UnityEngine::Color>>  value) ;

constexpr ::UnityEngine::UIElements::__StylePropertyAnimationSystem__AnimationDataSet_2<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<::UnityEngine::Color>,::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<::UnityEngine::Color>>& __get_running() ;

constexpr ::UnityEngine::UIElements::__StylePropertyAnimationSystem__AnimationDataSet_2<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<::UnityEngine::Color>,::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<::UnityEngine::Color>> const& __get_running() const;

constexpr void __set_completed(::UnityEngine::UIElements::__StylePropertyAnimationSystem__AnimationDataSet_2<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::Color>,::UnityEngine::Color>  value) ;

constexpr ::UnityEngine::UIElements::__StylePropertyAnimationSystem__AnimationDataSet_2<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::Color>,::UnityEngine::Color>& __get_completed() ;

constexpr ::UnityEngine::UIElements::__StylePropertyAnimationSystem__AnimationDataSet_2<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::Color>,::UnityEngine::Color> const& __get_completed() const;

/// @brief Method get_isEmpty addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_isEmpty() ;

/// @brief Method get_SameFunc addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::Func_3<::UnityEngine::Color,::UnityEngine::Color,bool>* get_SameFunc() ;

static inline ::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values_1<::UnityEngine::Color>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method SwapFrameStates addr 0x0 size 0xffffffffffffffff virtual false final false
inline void SwapFrameStates() ;

/// @brief Method QueueEvent addr 0x0 size 0xffffffffffffffff virtual false final false
inline void QueueEvent(::UnityEngine::UIElements::EventBase*  evt, ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair  epp) ;

/// @brief Method ClearEventQueue addr 0x0 size 0xffffffffffffffff virtual false final false
inline void ClearEventQueue(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair  epp) ;

/// @brief Method QueueTransitionRunEvent addr 0x0 size 0xffffffffffffffff virtual false final false
inline void QueueTransitionRunEvent(::UnityEngine::UIElements::VisualElement*  ve, int32_t  runningIndex) ;

/// @brief Method QueueTransitionStartEvent addr 0x0 size 0xffffffffffffffff virtual false final false
inline void QueueTransitionStartEvent(::UnityEngine::UIElements::VisualElement*  ve, int32_t  runningIndex) ;

/// @brief Method QueueTransitionEndEvent addr 0x0 size 0xffffffffffffffff virtual false final false
inline void QueueTransitionEndEvent(::UnityEngine::UIElements::VisualElement*  ve, int32_t  runningIndex) ;

/// @brief Method QueueTransitionCancelEvent addr 0x0 size 0xffffffffffffffff virtual false final false
inline void QueueTransitionCancelEvent(::UnityEngine::UIElements::VisualElement*  ve, int32_t  runningIndex, int64_t  panelElapsedMs) ;

/// @brief Method SendTransitionCancelEvent addr 0x0 size 0xffffffffffffffff virtual false final false
inline void SendTransitionCancelEvent(::UnityEngine::UIElements::VisualElement*  ve, int32_t  runningIndex, int64_t  panelElapsedMs) ;

/// @brief Method CancelAllAnimations addr 0x0 size 0xffffffffffffffff virtual true final true
inline void CancelAllAnimations() ;

/// @brief Method CancelAllAnimations addr 0x0 size 0xffffffffffffffff virtual true final true
inline void CancelAllAnimations(::UnityEngine::UIElements::VisualElement*  ve) ;

/// @brief Method CancelAnimation addr 0x0 size 0xffffffffffffffff virtual true final true
inline void CancelAnimation(::UnityEngine::UIElements::VisualElement*  ve, ::UnityEngine::UIElements::StyleSheets::StylePropertyId  id) ;

/// @brief Method UpdateAnimation addr 0x0 size 0xffffffffffffffff virtual true final true
inline void UpdateAnimation(::UnityEngine::UIElements::VisualElement*  ve, ::UnityEngine::UIElements::StyleSheets::StylePropertyId  id) ;

/// @brief Method GetAllAnimations addr 0x0 size 0xffffffffffffffff virtual true final true
inline void GetAllAnimations(::UnityEngine::UIElements::VisualElement*  ve, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*  outPropertyIds) ;

/// @brief Method ComputeReversingShorteningFactor addr 0x0 size 0xffffffffffffffff virtual false final false
inline float_t ComputeReversingShorteningFactor(int32_t  oldIndex) ;

/// @brief Method ComputeReversingDuration addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t ComputeReversingDuration(int32_t  newTransitionDurationMs, float_t  newReversingShorteningFactor) ;

/// @brief Method ComputeReversingDelay addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t ComputeReversingDelay(int32_t  delayMs, float_t  newReversingShorteningFactor) ;

/// @brief Method StartTransition addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool StartTransition(::UnityEngine::UIElements::VisualElement*  owner, ::UnityEngine::UIElements::StyleSheets::StylePropertyId  prop, ::UnityEngine::Color  startValue, ::UnityEngine::Color  endValue, int32_t  durationMs, int32_t  delayMs, ::System::Func_2<float_t,float_t>*  easingCurve, int64_t  currentTimeMs) ;

/// @brief Method ForceComputedStyleEndValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline void ForceComputedStyleEndValue(int32_t  runningIndex) ;

/// @brief Method Update addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Update(int64_t  currentTimeMs) ;

/// @brief Method ProcessEventQueue addr 0x0 size 0xffffffffffffffff virtual false final false
inline void ProcessEventQueue() ;

/// @brief Method UpdateProgress addr 0x0 size 0xffffffffffffffff virtual false final false
inline void UpdateProgress(int64_t  currentTimeMs) ;

// Ctor Parameters [CppParam { name: "", ty: "__StylePropertyAnimationSystem__Values_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__StylePropertyAnimationSystem__Values_1(__StylePropertyAnimationSystem__Values_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__StylePropertyAnimationSystem__Values_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__StylePropertyAnimationSystem__Values_1(__StylePropertyAnimationSystem__Values_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __StylePropertyAnimationSystem__Values_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: ::Values`1
namespace UnityEngine::UIElements {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6836)), TypeDefinitionIndex(TypeDefinitionIndex(6842))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6842), inst: 98 })
// CS Name: ::StylePropertyAnimationSystem::Values`1<T>*
class CORDL_TYPE __StylePropertyAnimationSystem__Values_1<int32_t> : public ::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values {
public:
// Declarations
using EmptyData = ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<int32_t>;

using StyleData = ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<int32_t>;

using TimingData = ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<int32_t>;

using TransitionEventsFrameState = ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<int32_t>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x88};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x88 - sizeof(::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values)]{};

/// @brief Field m_CurrentTimeMs offset 0x10
 __declspec(property(get=__get_m_CurrentTimeMs, put=__set_m_CurrentTimeMs)) int64_t  m_CurrentTimeMs;

/// @brief Field m_CurrentFrameEventsState offset 0x18
 __declspec(property(get=__get_m_CurrentFrameEventsState, put=__set_m_CurrentFrameEventsState)) ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<int32_t>*  m_CurrentFrameEventsState;

/// @brief Field m_NextFrameEventsState offset 0x20
 __declspec(property(get=__get_m_NextFrameEventsState, put=__set_m_NextFrameEventsState)) ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<int32_t>*  m_NextFrameEventsState;

/// @brief Field running offset 0x28
 __declspec(property(get=__get_running, put=__set_running)) ::UnityEngine::UIElements::__StylePropertyAnimationSystem__AnimationDataSet_2<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<int32_t>,::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<int32_t>>  running;

/// @brief Field completed offset 0x58
 __declspec(property(get=__get_completed, put=__set_completed)) ::UnityEngine::UIElements::__StylePropertyAnimationSystem__AnimationDataSet_2<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<int32_t>,int32_t>  completed;

 __declspec(property(get=get_isEmpty)) bool  isEmpty;

 __declspec(property(get=get_SameFunc)) ::System::Func_3<int32_t,int32_t,bool>*  SameFunc;

constexpr void __set_m_CurrentTimeMs(int64_t  value) ;

constexpr int64_t& __get_m_CurrentTimeMs() ;

constexpr int64_t const& __get_m_CurrentTimeMs() const;

constexpr void __set_m_CurrentFrameEventsState(::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<int32_t>*  value) ;

constexpr ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<int32_t>* __get_m_CurrentFrameEventsState() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<int32_t>*> __get_m_CurrentFrameEventsState() const;

constexpr void __set_m_NextFrameEventsState(::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<int32_t>*  value) ;

constexpr ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<int32_t>* __get_m_NextFrameEventsState() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<int32_t>*> __get_m_NextFrameEventsState() const;

constexpr void __set_running(::UnityEngine::UIElements::__StylePropertyAnimationSystem__AnimationDataSet_2<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<int32_t>,::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<int32_t>>  value) ;

constexpr ::UnityEngine::UIElements::__StylePropertyAnimationSystem__AnimationDataSet_2<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<int32_t>,::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<int32_t>>& __get_running() ;

constexpr ::UnityEngine::UIElements::__StylePropertyAnimationSystem__AnimationDataSet_2<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<int32_t>,::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<int32_t>> const& __get_running() const;

constexpr void __set_completed(::UnityEngine::UIElements::__StylePropertyAnimationSystem__AnimationDataSet_2<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<int32_t>,int32_t>  value) ;

constexpr ::UnityEngine::UIElements::__StylePropertyAnimationSystem__AnimationDataSet_2<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<int32_t>,int32_t>& __get_completed() ;

constexpr ::UnityEngine::UIElements::__StylePropertyAnimationSystem__AnimationDataSet_2<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<int32_t>,int32_t> const& __get_completed() const;

/// @brief Method get_isEmpty addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_isEmpty() ;

/// @brief Method get_SameFunc addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::Func_3<int32_t,int32_t,bool>* get_SameFunc() ;

static inline ::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values_1<int32_t>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method SwapFrameStates addr 0x0 size 0xffffffffffffffff virtual false final false
inline void SwapFrameStates() ;

/// @brief Method QueueEvent addr 0x0 size 0xffffffffffffffff virtual false final false
inline void QueueEvent(::UnityEngine::UIElements::EventBase*  evt, ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair  epp) ;

/// @brief Method ClearEventQueue addr 0x0 size 0xffffffffffffffff virtual false final false
inline void ClearEventQueue(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair  epp) ;

/// @brief Method QueueTransitionRunEvent addr 0x0 size 0xffffffffffffffff virtual false final false
inline void QueueTransitionRunEvent(::UnityEngine::UIElements::VisualElement*  ve, int32_t  runningIndex) ;

/// @brief Method QueueTransitionStartEvent addr 0x0 size 0xffffffffffffffff virtual false final false
inline void QueueTransitionStartEvent(::UnityEngine::UIElements::VisualElement*  ve, int32_t  runningIndex) ;

/// @brief Method QueueTransitionEndEvent addr 0x0 size 0xffffffffffffffff virtual false final false
inline void QueueTransitionEndEvent(::UnityEngine::UIElements::VisualElement*  ve, int32_t  runningIndex) ;

/// @brief Method QueueTransitionCancelEvent addr 0x0 size 0xffffffffffffffff virtual false final false
inline void QueueTransitionCancelEvent(::UnityEngine::UIElements::VisualElement*  ve, int32_t  runningIndex, int64_t  panelElapsedMs) ;

/// @brief Method SendTransitionCancelEvent addr 0x0 size 0xffffffffffffffff virtual false final false
inline void SendTransitionCancelEvent(::UnityEngine::UIElements::VisualElement*  ve, int32_t  runningIndex, int64_t  panelElapsedMs) ;

/// @brief Method CancelAllAnimations addr 0x0 size 0xffffffffffffffff virtual true final true
inline void CancelAllAnimations() ;

/// @brief Method CancelAllAnimations addr 0x0 size 0xffffffffffffffff virtual true final true
inline void CancelAllAnimations(::UnityEngine::UIElements::VisualElement*  ve) ;

/// @brief Method CancelAnimation addr 0x0 size 0xffffffffffffffff virtual true final true
inline void CancelAnimation(::UnityEngine::UIElements::VisualElement*  ve, ::UnityEngine::UIElements::StyleSheets::StylePropertyId  id) ;

/// @brief Method UpdateAnimation addr 0x0 size 0xffffffffffffffff virtual true final true
inline void UpdateAnimation(::UnityEngine::UIElements::VisualElement*  ve, ::UnityEngine::UIElements::StyleSheets::StylePropertyId  id) ;

/// @brief Method GetAllAnimations addr 0x0 size 0xffffffffffffffff virtual true final true
inline void GetAllAnimations(::UnityEngine::UIElements::VisualElement*  ve, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*  outPropertyIds) ;

/// @brief Method ComputeReversingShorteningFactor addr 0x0 size 0xffffffffffffffff virtual false final false
inline float_t ComputeReversingShorteningFactor(int32_t  oldIndex) ;

/// @brief Method ComputeReversingDuration addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t ComputeReversingDuration(int32_t  newTransitionDurationMs, float_t  newReversingShorteningFactor) ;

/// @brief Method ComputeReversingDelay addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t ComputeReversingDelay(int32_t  delayMs, float_t  newReversingShorteningFactor) ;

/// @brief Method StartTransition addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool StartTransition(::UnityEngine::UIElements::VisualElement*  owner, ::UnityEngine::UIElements::StyleSheets::StylePropertyId  prop, int32_t  startValue, int32_t  endValue, int32_t  durationMs, int32_t  delayMs, ::System::Func_2<float_t,float_t>*  easingCurve, int64_t  currentTimeMs) ;

/// @brief Method ForceComputedStyleEndValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline void ForceComputedStyleEndValue(int32_t  runningIndex) ;

/// @brief Method Update addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Update(int64_t  currentTimeMs) ;

/// @brief Method ProcessEventQueue addr 0x0 size 0xffffffffffffffff virtual false final false
inline void ProcessEventQueue() ;

/// @brief Method UpdateProgress addr 0x0 size 0xffffffffffffffff virtual false final false
inline void UpdateProgress(int64_t  currentTimeMs) ;

// Ctor Parameters [CppParam { name: "", ty: "__StylePropertyAnimationSystem__Values_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__StylePropertyAnimationSystem__Values_1(__StylePropertyAnimationSystem__Values_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__StylePropertyAnimationSystem__Values_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__StylePropertyAnimationSystem__Values_1(__StylePropertyAnimationSystem__Values_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __StylePropertyAnimationSystem__Values_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: ::Values`1
namespace UnityEngine::UIElements {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6842)), TypeDefinitionIndex(TypeDefinitionIndex(6836))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6842), inst: 2 })
// CS Name: ::StylePropertyAnimationSystem::Values`1<T>*
class CORDL_TYPE __StylePropertyAnimationSystem__Values_1<T> : public ::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values {
public:
// Declarations
using EmptyData = ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<T>;

using StyleData = ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<T>;

using TimingData = ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<T>;

using TransitionEventsFrameState = ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<T>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x88};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x88 - sizeof(::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values)]{};

/// @brief Field m_CurrentTimeMs offset 0x10
 __declspec(property(get=__get_m_CurrentTimeMs, put=__set_m_CurrentTimeMs)) int64_t  m_CurrentTimeMs;

/// @brief Field m_CurrentFrameEventsState offset 0x18
 __declspec(property(get=__get_m_CurrentFrameEventsState, put=__set_m_CurrentFrameEventsState)) ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<T>*  m_CurrentFrameEventsState;

/// @brief Field m_NextFrameEventsState offset 0x20
 __declspec(property(get=__get_m_NextFrameEventsState, put=__set_m_NextFrameEventsState)) ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<T>*  m_NextFrameEventsState;

/// @brief Field running offset 0x28
 __declspec(property(get=__get_running, put=__set_running)) ::UnityEngine::UIElements::__StylePropertyAnimationSystem__AnimationDataSet_2<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<T>,::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<T>>  running;

/// @brief Field completed offset 0x58
 __declspec(property(get=__get_completed, put=__set_completed)) ::UnityEngine::UIElements::__StylePropertyAnimationSystem__AnimationDataSet_2<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<T>,T>  completed;

 __declspec(property(get=get_isEmpty)) bool  isEmpty;

 __declspec(property(get=get_SameFunc)) ::System::Func_3<T,T,bool>*  SameFunc;

constexpr void __set_m_CurrentTimeMs(int64_t  value) ;

constexpr int64_t& __get_m_CurrentTimeMs() ;

constexpr int64_t const& __get_m_CurrentTimeMs() const;

constexpr void __set_m_CurrentFrameEventsState(::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<T>*  value) ;

constexpr ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<T>* __get_m_CurrentFrameEventsState() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<T>*> __get_m_CurrentFrameEventsState() const;

constexpr void __set_m_NextFrameEventsState(::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<T>*  value) ;

constexpr ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<T>* __get_m_NextFrameEventsState() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<T>*> __get_m_NextFrameEventsState() const;

constexpr void __set_running(::UnityEngine::UIElements::__StylePropertyAnimationSystem__AnimationDataSet_2<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<T>,::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<T>>  value) ;

constexpr ::UnityEngine::UIElements::__StylePropertyAnimationSystem__AnimationDataSet_2<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<T>,::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<T>>& __get_running() ;

constexpr ::UnityEngine::UIElements::__StylePropertyAnimationSystem__AnimationDataSet_2<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<T>,::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<T>> const& __get_running() const;

constexpr void __set_completed(::UnityEngine::UIElements::__StylePropertyAnimationSystem__AnimationDataSet_2<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<T>,T>  value) ;

constexpr ::UnityEngine::UIElements::__StylePropertyAnimationSystem__AnimationDataSet_2<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<T>,T>& __get_completed() ;

constexpr ::UnityEngine::UIElements::__StylePropertyAnimationSystem__AnimationDataSet_2<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<T>,T> const& __get_completed() const;

/// @brief Method get_isEmpty addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_isEmpty() ;

/// @brief Method get_SameFunc addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::Func_3<T,T,bool>* get_SameFunc() ;

static inline ::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values_1<T>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method SwapFrameStates addr 0x0 size 0xffffffffffffffff virtual false final false
inline void SwapFrameStates() ;

/// @brief Method QueueEvent addr 0x0 size 0xffffffffffffffff virtual false final false
inline void QueueEvent(::UnityEngine::UIElements::EventBase*  evt, ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair  epp) ;

/// @brief Method ClearEventQueue addr 0x0 size 0xffffffffffffffff virtual false final false
inline void ClearEventQueue(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair  epp) ;

/// @brief Method QueueTransitionRunEvent addr 0x0 size 0xffffffffffffffff virtual false final false
inline void QueueTransitionRunEvent(::UnityEngine::UIElements::VisualElement*  ve, int32_t  runningIndex) ;

/// @brief Method QueueTransitionStartEvent addr 0x0 size 0xffffffffffffffff virtual false final false
inline void QueueTransitionStartEvent(::UnityEngine::UIElements::VisualElement*  ve, int32_t  runningIndex) ;

/// @brief Method QueueTransitionEndEvent addr 0x0 size 0xffffffffffffffff virtual false final false
inline void QueueTransitionEndEvent(::UnityEngine::UIElements::VisualElement*  ve, int32_t  runningIndex) ;

/// @brief Method QueueTransitionCancelEvent addr 0x0 size 0xffffffffffffffff virtual false final false
inline void QueueTransitionCancelEvent(::UnityEngine::UIElements::VisualElement*  ve, int32_t  runningIndex, int64_t  panelElapsedMs) ;

/// @brief Method SendTransitionCancelEvent addr 0x0 size 0xffffffffffffffff virtual false final false
inline void SendTransitionCancelEvent(::UnityEngine::UIElements::VisualElement*  ve, int32_t  runningIndex, int64_t  panelElapsedMs) ;

/// @brief Method CancelAllAnimations addr 0x0 size 0xffffffffffffffff virtual true final true
inline void CancelAllAnimations() ;

/// @brief Method CancelAllAnimations addr 0x0 size 0xffffffffffffffff virtual true final true
inline void CancelAllAnimations(::UnityEngine::UIElements::VisualElement*  ve) ;

/// @brief Method CancelAnimation addr 0x0 size 0xffffffffffffffff virtual true final true
inline void CancelAnimation(::UnityEngine::UIElements::VisualElement*  ve, ::UnityEngine::UIElements::StyleSheets::StylePropertyId  id) ;

/// @brief Method UpdateAnimation addr 0x0 size 0xffffffffffffffff virtual true final true
inline void UpdateAnimation(::UnityEngine::UIElements::VisualElement*  ve, ::UnityEngine::UIElements::StyleSheets::StylePropertyId  id) ;

/// @brief Method GetAllAnimations addr 0x0 size 0xffffffffffffffff virtual true final true
inline void GetAllAnimations(::UnityEngine::UIElements::VisualElement*  ve, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*  outPropertyIds) ;

/// @brief Method ComputeReversingShorteningFactor addr 0x0 size 0xffffffffffffffff virtual false final false
inline float_t ComputeReversingShorteningFactor(int32_t  oldIndex) ;

/// @brief Method ComputeReversingDuration addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t ComputeReversingDuration(int32_t  newTransitionDurationMs, float_t  newReversingShorteningFactor) ;

/// @brief Method ComputeReversingDelay addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t ComputeReversingDelay(int32_t  delayMs, float_t  newReversingShorteningFactor) ;

/// @brief Method StartTransition addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool StartTransition(::UnityEngine::UIElements::VisualElement*  owner, ::UnityEngine::UIElements::StyleSheets::StylePropertyId  prop, T  startValue, T  endValue, int32_t  durationMs, int32_t  delayMs, ::System::Func_2<float_t,float_t>*  easingCurve, int64_t  currentTimeMs) ;

/// @brief Method ForceComputedStyleEndValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline void ForceComputedStyleEndValue(int32_t  runningIndex) ;

/// @brief Method Update addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Update(int64_t  currentTimeMs) ;

/// @brief Method ProcessEventQueue addr 0x0 size 0xffffffffffffffff virtual false final false
inline void ProcessEventQueue() ;

/// @brief Method UpdateProgress addr 0x0 size 0xffffffffffffffff virtual false final false
inline void UpdateProgress(int64_t  currentTimeMs) ;

// Ctor Parameters [CppParam { name: "", ty: "__StylePropertyAnimationSystem__Values_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__StylePropertyAnimationSystem__Values_1(__StylePropertyAnimationSystem__Values_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__StylePropertyAnimationSystem__Values_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__StylePropertyAnimationSystem__Values_1(__StylePropertyAnimationSystem__Values_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __StylePropertyAnimationSystem__Values_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: ::ValuesFloat
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6842)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6842), inst: 391 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6843))
// CS Name: ::StylePropertyAnimationSystem::ValuesFloat*
class CORDL_TYPE __StylePropertyAnimationSystem__ValuesFloat : public ::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values_1<float_t> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x90};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x90 - sizeof(::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values_1<float_t>)]{};

/// @brief Field <SameFunc>k__BackingField offset 0x88
 __declspec(property(get=__get__SameFunc_k__BackingField, put=__set__SameFunc_k__BackingField)) ::System::Func_3<float_t,float_t,bool>*  _SameFunc_k__BackingField;

 __declspec(property(get=get_SameFunc)) ::System::Func_3<float_t,float_t,bool>*  SameFunc;

constexpr void __set__SameFunc_k__BackingField(::System::Func_3<float_t,float_t,bool>*  value) ;

constexpr ::System::Func_3<float_t,float_t,bool>* __get__SameFunc_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::System::Func_3<float_t,float_t,bool>*> __get__SameFunc_k__BackingField() const;

/// @brief Method get_SameFunc addr 0x2dc5808 size 0x8 virtual true final false
inline ::System::Func_3<float_t,float_t,bool>* get_SameFunc() ;

/// @brief Method IsSame addr 0x2dc5810 size 0x88 virtual false final false
static inline bool IsSame(float_t  a, float_t  b) ;

/// @brief Method Lerp addr 0x2dc5898 size 0x10 virtual false final false
static inline float_t Lerp(float_t  a, float_t  b, float_t  t) ;

/// @brief Method UpdateValues addr 0x2dc58a8 size 0x80 virtual true final true
inline void UpdateValues() ;

/// @brief Method UpdateComputedStyle addr 0x2dc5928 size 0xcc virtual true final true
inline void UpdateComputedStyle() ;

/// @brief Method UpdateComputedStyle addr 0x2dc59f4 size 0xa8 virtual true final true
inline void UpdateComputedStyle(int32_t  i) ;

static inline ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesFloat* New_ctor() ;

/// @brief Method .ctor addr 0x2dc5a9c size 0x98 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__StylePropertyAnimationSystem__ValuesFloat", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__StylePropertyAnimationSystem__ValuesFloat(__StylePropertyAnimationSystem__ValuesFloat && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__StylePropertyAnimationSystem__ValuesFloat", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__StylePropertyAnimationSystem__ValuesFloat(__StylePropertyAnimationSystem__ValuesFloat const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __StylePropertyAnimationSystem__ValuesFloat()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesFloat, 0x90>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// Type: ::ValuesInt
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6842)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6842), inst: 98 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6844))
// CS Name: ::StylePropertyAnimationSystem::ValuesInt*
class CORDL_TYPE __StylePropertyAnimationSystem__ValuesInt : public ::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values_1<int32_t> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x90};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x90 - sizeof(::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values_1<int32_t>)]{};

/// @brief Field <SameFunc>k__BackingField offset 0x88
 __declspec(property(get=__get__SameFunc_k__BackingField, put=__set__SameFunc_k__BackingField)) ::System::Func_3<int32_t,int32_t,bool>*  _SameFunc_k__BackingField;

 __declspec(property(get=get_SameFunc)) ::System::Func_3<int32_t,int32_t,bool>*  SameFunc;

constexpr void __set__SameFunc_k__BackingField(::System::Func_3<int32_t,int32_t,bool>*  value) ;

constexpr ::System::Func_3<int32_t,int32_t,bool>* __get__SameFunc_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::System::Func_3<int32_t,int32_t,bool>*> __get__SameFunc_k__BackingField() const;

/// @brief Method get_SameFunc addr 0x2dc5b34 size 0x8 virtual true final false
inline ::System::Func_3<int32_t,int32_t,bool>* get_SameFunc() ;

/// @brief Method IsSame addr 0x2dc5b3c size 0xc virtual false final false
static inline bool IsSame(int32_t  a, int32_t  b) ;

/// @brief Method Lerp addr 0x2dc5b48 size 0xec virtual false final false
static inline int32_t Lerp(int32_t  a, int32_t  b, float_t  t) ;

/// @brief Method UpdateValues addr 0x2dc5c34 size 0x98 virtual true final true
inline void UpdateValues() ;

/// @brief Method UpdateComputedStyle addr 0x2dc5ccc size 0xcc virtual true final true
inline void UpdateComputedStyle() ;

/// @brief Method UpdateComputedStyle addr 0x2dc5d98 size 0xa8 virtual true final true
inline void UpdateComputedStyle(int32_t  i) ;

static inline ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesInt* New_ctor() ;

/// @brief Method .ctor addr 0x2dc5e40 size 0x98 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__StylePropertyAnimationSystem__ValuesInt", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__StylePropertyAnimationSystem__ValuesInt(__StylePropertyAnimationSystem__ValuesInt && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__StylePropertyAnimationSystem__ValuesInt", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__StylePropertyAnimationSystem__ValuesInt(__StylePropertyAnimationSystem__ValuesInt const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __StylePropertyAnimationSystem__ValuesInt()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesInt, 0x90>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// Type: ::ValuesLength
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6842)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6842), inst: 1570 }), TypeDefinitionIndex(TypeDefinitionIndex(7313))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6845))
// CS Name: ::StylePropertyAnimationSystem::ValuesLength*
class CORDL_TYPE __StylePropertyAnimationSystem__ValuesLength : public ::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values_1<::UnityEngine::UIElements::Length> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x90};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x90 - sizeof(::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values_1<::UnityEngine::UIElements::Length>)]{};

/// @brief Field <SameFunc>k__BackingField offset 0x88
 __declspec(property(get=__get__SameFunc_k__BackingField, put=__set__SameFunc_k__BackingField)) ::System::Func_3<::UnityEngine::UIElements::Length,::UnityEngine::UIElements::Length,bool>*  _SameFunc_k__BackingField;

 __declspec(property(get=get_SameFunc)) ::System::Func_3<::UnityEngine::UIElements::Length,::UnityEngine::UIElements::Length,bool>*  SameFunc;

constexpr void __set__SameFunc_k__BackingField(::System::Func_3<::UnityEngine::UIElements::Length,::UnityEngine::UIElements::Length,bool>*  value) ;

constexpr ::System::Func_3<::UnityEngine::UIElements::Length,::UnityEngine::UIElements::Length,bool>* __get__SameFunc_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::System::Func_3<::UnityEngine::UIElements::Length,::UnityEngine::UIElements::Length,bool>*> __get__SameFunc_k__BackingField() const;

/// @brief Method get_SameFunc addr 0x2dc5ed8 size 0x8 virtual true final false
inline ::System::Func_3<::UnityEngine::UIElements::Length,::UnityEngine::UIElements::Length,bool>* get_SameFunc() ;

/// @brief Method IsSame addr 0x2dc5ee0 size 0xa0 virtual false final false
static inline bool IsSame(::UnityEngine::UIElements::Length  a, ::UnityEngine::UIElements::Length  b) ;

/// @brief Method Lerp addr 0x2dc5f80 size 0x3c virtual false final false
static inline ::UnityEngine::UIElements::Length Lerp(::UnityEngine::UIElements::Length  a, ::UnityEngine::UIElements::Length  b, float_t  t) ;

/// @brief Method UpdateValues addr 0x2dc5fbc size 0xbc virtual true final true
inline void UpdateValues() ;

/// @brief Method UpdateComputedStyle addr 0x2dc6078 size 0xcc virtual true final true
inline void UpdateComputedStyle() ;

/// @brief Method UpdateComputedStyle addr 0x2dc6144 size 0xa8 virtual true final true
inline void UpdateComputedStyle(int32_t  i) ;

static inline ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesLength* New_ctor() ;

/// @brief Method .ctor addr 0x2dc61ec size 0x98 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__StylePropertyAnimationSystem__ValuesLength", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__StylePropertyAnimationSystem__ValuesLength(__StylePropertyAnimationSystem__ValuesLength && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__StylePropertyAnimationSystem__ValuesLength", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__StylePropertyAnimationSystem__ValuesLength(__StylePropertyAnimationSystem__ValuesLength const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __StylePropertyAnimationSystem__ValuesLength()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesLength, 0x90>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// Type: ::ValuesColor
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10251)), TypeDefinitionIndex(TypeDefinitionIndex(6842)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6842), inst: 293 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6846))
// CS Name: ::StylePropertyAnimationSystem::ValuesColor*
class CORDL_TYPE __StylePropertyAnimationSystem__ValuesColor : public ::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values_1<::UnityEngine::Color> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x90};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x90 - sizeof(::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values_1<::UnityEngine::Color>)]{};

/// @brief Field <SameFunc>k__BackingField offset 0x88
 __declspec(property(get=__get__SameFunc_k__BackingField, put=__set__SameFunc_k__BackingField)) ::System::Func_3<::UnityEngine::Color,::UnityEngine::Color,bool>*  _SameFunc_k__BackingField;

 __declspec(property(get=get_SameFunc)) ::System::Func_3<::UnityEngine::Color,::UnityEngine::Color,bool>*  SameFunc;

constexpr void __set__SameFunc_k__BackingField(::System::Func_3<::UnityEngine::Color,::UnityEngine::Color,bool>*  value) ;

constexpr ::System::Func_3<::UnityEngine::Color,::UnityEngine::Color,bool>* __get__SameFunc_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::System::Func_3<::UnityEngine::Color,::UnityEngine::Color,bool>*> __get__SameFunc_k__BackingField() const;

/// @brief Method get_SameFunc addr 0x2dc6284 size 0x8 virtual true final false
inline ::System::Func_3<::UnityEngine::Color,::UnityEngine::Color,bool>* get_SameFunc() ;

/// @brief Method IsSame addr 0x2dc628c size 0x138 virtual false final false
static inline bool IsSame(::UnityEngine::Color  c, ::UnityEngine::Color  d) ;

/// @brief Method Lerp addr 0x2dc63c4 size 0x38 virtual false final false
static inline ::UnityEngine::Color Lerp(::UnityEngine::Color  a, ::UnityEngine::Color  b, float_t  t) ;

/// @brief Method UpdateValues addr 0x2dc63fc size 0x84 virtual true final true
inline void UpdateValues() ;

/// @brief Method UpdateComputedStyle addr 0x2dc6480 size 0xd0 virtual true final true
inline void UpdateComputedStyle() ;

/// @brief Method UpdateComputedStyle addr 0x2dc6550 size 0xac virtual true final true
inline void UpdateComputedStyle(int32_t  i) ;

static inline ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesColor* New_ctor() ;

/// @brief Method .ctor addr 0x2dc65fc size 0x98 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__StylePropertyAnimationSystem__ValuesColor", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__StylePropertyAnimationSystem__ValuesColor(__StylePropertyAnimationSystem__ValuesColor && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__StylePropertyAnimationSystem__ValuesColor", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__StylePropertyAnimationSystem__ValuesColor(__StylePropertyAnimationSystem__ValuesColor const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __StylePropertyAnimationSystem__ValuesColor()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesColor, 0x90>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// Type: ::ValuesDiscrete`1
// Type: ::ValuesDiscrete`1
namespace UnityEngine::UIElements {
// cpp template
template<>
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6842), inst: 5344 }), TypeDefinitionIndex(TypeDefinitionIndex(6847)), TypeDefinitionIndex(TypeDefinitionIndex(6842))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6847), inst: 1569 })
// CS Name: ::StylePropertyAnimationSystem::ValuesDiscrete`1<T>*
class CORDL_TYPE __StylePropertyAnimationSystem__ValuesDiscrete_1<::UnityEngine::UIElements::FontDefinition> : public ::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values_1<::UnityEngine::UIElements::FontDefinition> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x90};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x90 - sizeof(::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values_1<::UnityEngine::UIElements::FontDefinition>)]{};

/// @brief Field <SameFunc>k__BackingField offset 0x88
 __declspec(property(get=__get__SameFunc_k__BackingField, put=__set__SameFunc_k__BackingField)) ::System::Func_3<::UnityEngine::UIElements::FontDefinition,::UnityEngine::UIElements::FontDefinition,bool>*  _SameFunc_k__BackingField;

 __declspec(property(get=get_SameFunc)) ::System::Func_3<::UnityEngine::UIElements::FontDefinition,::UnityEngine::UIElements::FontDefinition,bool>*  SameFunc;

constexpr void __set__SameFunc_k__BackingField(::System::Func_3<::UnityEngine::UIElements::FontDefinition,::UnityEngine::UIElements::FontDefinition,bool>*  value) ;

constexpr ::System::Func_3<::UnityEngine::UIElements::FontDefinition,::UnityEngine::UIElements::FontDefinition,bool>* __get__SameFunc_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::System::Func_3<::UnityEngine::UIElements::FontDefinition,::UnityEngine::UIElements::FontDefinition,bool>*> __get__SameFunc_k__BackingField() const;

/// @brief Method get_SameFunc addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::Func_3<::UnityEngine::UIElements::FontDefinition,::UnityEngine::UIElements::FontDefinition,bool>* get_SameFunc() ;

/// @brief Method IsSame addr 0x0 size 0xffffffffffffffff virtual false final false
static inline bool IsSame(::UnityEngine::UIElements::FontDefinition  a, ::UnityEngine::UIElements::FontDefinition  b) ;

/// @brief Method Lerp addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::UnityEngine::UIElements::FontDefinition Lerp(::UnityEngine::UIElements::FontDefinition  a, ::UnityEngine::UIElements::FontDefinition  b, float_t  t) ;

/// @brief Method UpdateValues addr 0x0 size 0xffffffffffffffff virtual true final true
inline void UpdateValues() ;

static inline ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesDiscrete_1<::UnityEngine::UIElements::FontDefinition>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__StylePropertyAnimationSystem__ValuesDiscrete_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__StylePropertyAnimationSystem__ValuesDiscrete_1(__StylePropertyAnimationSystem__ValuesDiscrete_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__StylePropertyAnimationSystem__ValuesDiscrete_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__StylePropertyAnimationSystem__ValuesDiscrete_1(__StylePropertyAnimationSystem__ValuesDiscrete_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __StylePropertyAnimationSystem__ValuesDiscrete_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: ::ValuesDiscrete`1
namespace UnityEngine::UIElements {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6842)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6842), inst: 5344 }), TypeDefinitionIndex(TypeDefinitionIndex(6847))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6847), inst: 1568 })
// CS Name: ::StylePropertyAnimationSystem::ValuesDiscrete`1<T>*
class CORDL_TYPE __StylePropertyAnimationSystem__ValuesDiscrete_1<::UnityEngine::UIElements::Background> : public ::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values_1<::UnityEngine::UIElements::Background> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x90};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x90 - sizeof(::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values_1<::UnityEngine::UIElements::Background>)]{};

/// @brief Field <SameFunc>k__BackingField offset 0x88
 __declspec(property(get=__get__SameFunc_k__BackingField, put=__set__SameFunc_k__BackingField)) ::System::Func_3<::UnityEngine::UIElements::Background,::UnityEngine::UIElements::Background,bool>*  _SameFunc_k__BackingField;

 __declspec(property(get=get_SameFunc)) ::System::Func_3<::UnityEngine::UIElements::Background,::UnityEngine::UIElements::Background,bool>*  SameFunc;

constexpr void __set__SameFunc_k__BackingField(::System::Func_3<::UnityEngine::UIElements::Background,::UnityEngine::UIElements::Background,bool>*  value) ;

constexpr ::System::Func_3<::UnityEngine::UIElements::Background,::UnityEngine::UIElements::Background,bool>* __get__SameFunc_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::System::Func_3<::UnityEngine::UIElements::Background,::UnityEngine::UIElements::Background,bool>*> __get__SameFunc_k__BackingField() const;

/// @brief Method get_SameFunc addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::Func_3<::UnityEngine::UIElements::Background,::UnityEngine::UIElements::Background,bool>* get_SameFunc() ;

/// @brief Method IsSame addr 0x0 size 0xffffffffffffffff virtual false final false
static inline bool IsSame(::UnityEngine::UIElements::Background  a, ::UnityEngine::UIElements::Background  b) ;

/// @brief Method Lerp addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::UnityEngine::UIElements::Background Lerp(::UnityEngine::UIElements::Background  a, ::UnityEngine::UIElements::Background  b, float_t  t) ;

/// @brief Method UpdateValues addr 0x0 size 0xffffffffffffffff virtual true final true
inline void UpdateValues() ;

static inline ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesDiscrete_1<::UnityEngine::UIElements::Background>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__StylePropertyAnimationSystem__ValuesDiscrete_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__StylePropertyAnimationSystem__ValuesDiscrete_1(__StylePropertyAnimationSystem__ValuesDiscrete_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__StylePropertyAnimationSystem__ValuesDiscrete_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__StylePropertyAnimationSystem__ValuesDiscrete_1(__StylePropertyAnimationSystem__ValuesDiscrete_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __StylePropertyAnimationSystem__ValuesDiscrete_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: ::ValuesDiscrete`1
namespace UnityEngine::UIElements {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6847)), TypeDefinitionIndex(TypeDefinitionIndex(6842)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6842), inst: 5344 })}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6847), inst: 2 })
// CS Name: ::StylePropertyAnimationSystem::ValuesDiscrete`1<T>*
class CORDL_TYPE __StylePropertyAnimationSystem__ValuesDiscrete_1<T> : public ::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values_1<T> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x90};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x90 - sizeof(::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values_1<T>)]{};

/// @brief Field <SameFunc>k__BackingField offset 0x88
 __declspec(property(get=__get__SameFunc_k__BackingField, put=__set__SameFunc_k__BackingField)) ::System::Func_3<T,T,bool>*  _SameFunc_k__BackingField;

 __declspec(property(get=get_SameFunc)) ::System::Func_3<T,T,bool>*  SameFunc;

constexpr void __set__SameFunc_k__BackingField(::System::Func_3<T,T,bool>*  value) ;

constexpr ::System::Func_3<T,T,bool>* __get__SameFunc_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::System::Func_3<T,T,bool>*> __get__SameFunc_k__BackingField() const;

/// @brief Method get_SameFunc addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::Func_3<T,T,bool>* get_SameFunc() ;

/// @brief Method IsSame addr 0x0 size 0xffffffffffffffff virtual false final false
static inline bool IsSame(T  a, T  b) ;

/// @brief Method Lerp addr 0x0 size 0xffffffffffffffff virtual false final false
static inline T Lerp(T  a, T  b, float_t  t) ;

/// @brief Method UpdateValues addr 0x0 size 0xffffffffffffffff virtual true final true
inline void UpdateValues() ;

static inline ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesDiscrete_1<T>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__StylePropertyAnimationSystem__ValuesDiscrete_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__StylePropertyAnimationSystem__ValuesDiscrete_1(__StylePropertyAnimationSystem__ValuesDiscrete_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__StylePropertyAnimationSystem__ValuesDiscrete_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__StylePropertyAnimationSystem__ValuesDiscrete_1(__StylePropertyAnimationSystem__ValuesDiscrete_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __StylePropertyAnimationSystem__ValuesDiscrete_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: ::ValuesBackground
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6847)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6847), inst: 1568 }), TypeDefinitionIndex(TypeDefinitionIndex(7293))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6848))
// CS Name: ::StylePropertyAnimationSystem::ValuesBackground*
class CORDL_TYPE __StylePropertyAnimationSystem__ValuesBackground : public ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesDiscrete_1<::UnityEngine::UIElements::Background> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x90};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x90 - sizeof(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesDiscrete_1<::UnityEngine::UIElements::Background>)]{};

/// @brief Method UpdateComputedStyle addr 0x2dc6694 size 0xdc virtual true final true
inline void UpdateComputedStyle() ;

/// @brief Method UpdateComputedStyle addr 0x2dc6770 size 0xbc virtual true final true
inline void UpdateComputedStyle(int32_t  i) ;

static inline ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesBackground* New_ctor() ;

/// @brief Method .ctor addr 0x2dc682c size 0x48 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__StylePropertyAnimationSystem__ValuesBackground", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__StylePropertyAnimationSystem__ValuesBackground(__StylePropertyAnimationSystem__ValuesBackground && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__StylePropertyAnimationSystem__ValuesBackground", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__StylePropertyAnimationSystem__ValuesBackground(__StylePropertyAnimationSystem__ValuesBackground const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __StylePropertyAnimationSystem__ValuesBackground()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesBackground, 0x90>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// Type: ::ValuesFontDefinition
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6847)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6847), inst: 1569 }), TypeDefinitionIndex(TypeDefinitionIndex(7284))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6849))
// CS Name: ::StylePropertyAnimationSystem::ValuesFontDefinition*
class CORDL_TYPE __StylePropertyAnimationSystem__ValuesFontDefinition : public ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesDiscrete_1<::UnityEngine::UIElements::FontDefinition> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x90};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x90 - sizeof(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesDiscrete_1<::UnityEngine::UIElements::FontDefinition>)]{};

/// @brief Method UpdateComputedStyle addr 0x2dc6874 size 0xcc virtual true final true
inline void UpdateComputedStyle() ;

/// @brief Method UpdateComputedStyle addr 0x2dc6940 size 0xa8 virtual true final true
inline void UpdateComputedStyle(int32_t  i) ;

static inline ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesFontDefinition* New_ctor() ;

/// @brief Method .ctor addr 0x2dc69e8 size 0x48 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__StylePropertyAnimationSystem__ValuesFontDefinition", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__StylePropertyAnimationSystem__ValuesFontDefinition(__StylePropertyAnimationSystem__ValuesFontDefinition && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__StylePropertyAnimationSystem__ValuesFontDefinition", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__StylePropertyAnimationSystem__ValuesFontDefinition(__StylePropertyAnimationSystem__ValuesFontDefinition const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __StylePropertyAnimationSystem__ValuesFontDefinition()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesFontDefinition, 0x90>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// Type: ::ValuesFont
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15909)), TypeDefinitionIndex(TypeDefinitionIndex(6847)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6847), inst: 309 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6850))
// CS Name: ::StylePropertyAnimationSystem::ValuesFont*
class CORDL_TYPE __StylePropertyAnimationSystem__ValuesFont : public ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesDiscrete_1<::UnityEngine::Font*> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x90};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x90 - sizeof(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesDiscrete_1<::UnityEngine::Font*>)]{};

/// @brief Method UpdateComputedStyle addr 0x2dc6a30 size 0xcc virtual true final true
inline void UpdateComputedStyle() ;

/// @brief Method UpdateComputedStyle addr 0x2dc6afc size 0xa8 virtual true final true
inline void UpdateComputedStyle(int32_t  i) ;

static inline ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesFont* New_ctor() ;

/// @brief Method .ctor addr 0x2dc6ba4 size 0x48 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__StylePropertyAnimationSystem__ValuesFont", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__StylePropertyAnimationSystem__ValuesFont(__StylePropertyAnimationSystem__ValuesFont && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__StylePropertyAnimationSystem__ValuesFont", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__StylePropertyAnimationSystem__ValuesFont(__StylePropertyAnimationSystem__ValuesFont const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __StylePropertyAnimationSystem__ValuesFont()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesFont, 0x90>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// Type: ::ValuesTextShadow
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6790)), TypeDefinitionIndex(TypeDefinitionIndex(6842)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6842), inst: 1573 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6851))
// CS Name: ::StylePropertyAnimationSystem::ValuesTextShadow*
class CORDL_TYPE __StylePropertyAnimationSystem__ValuesTextShadow : public ::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values_1<::UnityEngine::UIElements::TextShadow> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x90};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x90 - sizeof(::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values_1<::UnityEngine::UIElements::TextShadow>)]{};

/// @brief Field <SameFunc>k__BackingField offset 0x88
 __declspec(property(get=__get__SameFunc_k__BackingField, put=__set__SameFunc_k__BackingField)) ::System::Func_3<::UnityEngine::UIElements::TextShadow,::UnityEngine::UIElements::TextShadow,bool>*  _SameFunc_k__BackingField;

 __declspec(property(get=get_SameFunc)) ::System::Func_3<::UnityEngine::UIElements::TextShadow,::UnityEngine::UIElements::TextShadow,bool>*  SameFunc;

constexpr void __set__SameFunc_k__BackingField(::System::Func_3<::UnityEngine::UIElements::TextShadow,::UnityEngine::UIElements::TextShadow,bool>*  value) ;

constexpr ::System::Func_3<::UnityEngine::UIElements::TextShadow,::UnityEngine::UIElements::TextShadow,bool>* __get__SameFunc_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::System::Func_3<::UnityEngine::UIElements::TextShadow,::UnityEngine::UIElements::TextShadow,bool>*> __get__SameFunc_k__BackingField() const;

/// @brief Method get_SameFunc addr 0x2dc6bec size 0x8 virtual true final false
inline ::System::Func_3<::UnityEngine::UIElements::TextShadow,::UnityEngine::UIElements::TextShadow,bool>* get_SameFunc() ;

/// @brief Method IsSame addr 0x2dc6bf4 size 0x44 virtual false final false
static inline bool IsSame(::UnityEngine::UIElements::TextShadow  a, ::UnityEngine::UIElements::TextShadow  b) ;

/// @brief Method Lerp addr 0x2dc6c38 size 0x58 virtual false final false
static inline ::UnityEngine::UIElements::TextShadow Lerp(::UnityEngine::UIElements::TextShadow  a, ::UnityEngine::UIElements::TextShadow  b, float_t  t) ;

/// @brief Method UpdateValues addr 0x2dc6c90 size 0xcc virtual true final true
inline void UpdateValues() ;

/// @brief Method UpdateComputedStyle addr 0x2dc6d5c size 0xf0 virtual true final true
inline void UpdateComputedStyle() ;

/// @brief Method UpdateComputedStyle addr 0x2dc6e4c size 0xd4 virtual true final true
inline void UpdateComputedStyle(int32_t  i) ;

static inline ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTextShadow* New_ctor() ;

/// @brief Method .ctor addr 0x2dc6f20 size 0x98 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__StylePropertyAnimationSystem__ValuesTextShadow", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__StylePropertyAnimationSystem__ValuesTextShadow(__StylePropertyAnimationSystem__ValuesTextShadow && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__StylePropertyAnimationSystem__ValuesTextShadow", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__StylePropertyAnimationSystem__ValuesTextShadow(__StylePropertyAnimationSystem__ValuesTextShadow const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __StylePropertyAnimationSystem__ValuesTextShadow()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTextShadow, 0x90>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// Type: ::ValuesScale
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6842)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6842), inst: 1572 }), TypeDefinitionIndex(TypeDefinitionIndex(7318))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6852))
// CS Name: ::StylePropertyAnimationSystem::ValuesScale*
class CORDL_TYPE __StylePropertyAnimationSystem__ValuesScale : public ::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values_1<::UnityEngine::UIElements::Scale> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x90};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x90 - sizeof(::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values_1<::UnityEngine::UIElements::Scale>)]{};

/// @brief Field <SameFunc>k__BackingField offset 0x88
 __declspec(property(get=__get__SameFunc_k__BackingField, put=__set__SameFunc_k__BackingField)) ::System::Func_3<::UnityEngine::UIElements::Scale,::UnityEngine::UIElements::Scale,bool>*  _SameFunc_k__BackingField;

 __declspec(property(get=get_SameFunc)) ::System::Func_3<::UnityEngine::UIElements::Scale,::UnityEngine::UIElements::Scale,bool>*  SameFunc;

constexpr void __set__SameFunc_k__BackingField(::System::Func_3<::UnityEngine::UIElements::Scale,::UnityEngine::UIElements::Scale,bool>*  value) ;

constexpr ::System::Func_3<::UnityEngine::UIElements::Scale,::UnityEngine::UIElements::Scale,bool>* __get__SameFunc_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::System::Func_3<::UnityEngine::UIElements::Scale,::UnityEngine::UIElements::Scale,bool>*> __get__SameFunc_k__BackingField() const;

/// @brief Method get_SameFunc addr 0x2dc6fb8 size 0x8 virtual true final false
inline ::System::Func_3<::UnityEngine::UIElements::Scale,::UnityEngine::UIElements::Scale,bool>* get_SameFunc() ;

/// @brief Method IsSame addr 0x2dc6fc0 size 0x8 virtual false final false
static inline bool IsSame(::UnityEngine::UIElements::Scale  a, ::UnityEngine::UIElements::Scale  b) ;

/// @brief Method UpdateComputedStyle addr 0x2dc6fc8 size 0xcc virtual true final true
inline void UpdateComputedStyle() ;

/// @brief Method UpdateComputedStyle addr 0x2dc7094 size 0xa8 virtual true final true
inline void UpdateComputedStyle(int32_t  i) ;

/// @brief Method Lerp addr 0x2dc713c size 0x70 virtual false final false
static inline ::UnityEngine::UIElements::Scale Lerp(::UnityEngine::UIElements::Scale  a, ::UnityEngine::UIElements::Scale  b, float_t  t) ;

/// @brief Method UpdateValues addr 0x2dc71ac size 0x9c virtual true final true
inline void UpdateValues() ;

static inline ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesScale* New_ctor() ;

/// @brief Method .ctor addr 0x2dc7248 size 0x98 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__StylePropertyAnimationSystem__ValuesScale", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__StylePropertyAnimationSystem__ValuesScale(__StylePropertyAnimationSystem__ValuesScale && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__StylePropertyAnimationSystem__ValuesScale", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__StylePropertyAnimationSystem__ValuesScale(__StylePropertyAnimationSystem__ValuesScale const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __StylePropertyAnimationSystem__ValuesScale()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesScale, 0x90>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// Type: ::ValuesRotate
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7295)), TypeDefinitionIndex(TypeDefinitionIndex(6842)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6842), inst: 1571 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6853))
// CS Name: ::StylePropertyAnimationSystem::ValuesRotate*
class CORDL_TYPE __StylePropertyAnimationSystem__ValuesRotate : public ::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values_1<::UnityEngine::UIElements::Rotate> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x90};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x90 - sizeof(::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values_1<::UnityEngine::UIElements::Rotate>)]{};

/// @brief Field <SameFunc>k__BackingField offset 0x88
 __declspec(property(get=__get__SameFunc_k__BackingField, put=__set__SameFunc_k__BackingField)) ::System::Func_3<::UnityEngine::UIElements::Rotate,::UnityEngine::UIElements::Rotate,bool>*  _SameFunc_k__BackingField;

 __declspec(property(get=get_SameFunc)) ::System::Func_3<::UnityEngine::UIElements::Rotate,::UnityEngine::UIElements::Rotate,bool>*  SameFunc;

constexpr void __set__SameFunc_k__BackingField(::System::Func_3<::UnityEngine::UIElements::Rotate,::UnityEngine::UIElements::Rotate,bool>*  value) ;

constexpr ::System::Func_3<::UnityEngine::UIElements::Rotate,::UnityEngine::UIElements::Rotate,bool>* __get__SameFunc_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::System::Func_3<::UnityEngine::UIElements::Rotate,::UnityEngine::UIElements::Rotate,bool>*> __get__SameFunc_k__BackingField() const;

/// @brief Method get_SameFunc addr 0x2dc72e0 size 0x8 virtual true final false
inline ::System::Func_3<::UnityEngine::UIElements::Rotate,::UnityEngine::UIElements::Rotate,bool>* get_SameFunc() ;

/// @brief Method IsSame addr 0x2dc72e8 size 0x48 virtual false final false
static inline bool IsSame(::UnityEngine::UIElements::Rotate  a, ::UnityEngine::UIElements::Rotate  b) ;

/// @brief Method UpdateComputedStyle addr 0x2dc7330 size 0xe8 virtual true final true
inline void UpdateComputedStyle() ;

/// @brief Method UpdateComputedStyle addr 0x2dc7418 size 0xcc virtual true final true
inline void UpdateComputedStyle(int32_t  i) ;

/// @brief Method Lerp addr 0x2dc74e4 size 0x80 virtual false final false
static inline ::UnityEngine::UIElements::Rotate Lerp(::UnityEngine::UIElements::Rotate  a, ::UnityEngine::UIElements::Rotate  b, float_t  t) ;

/// @brief Method UpdateValues addr 0x2dc7564 size 0xdc virtual true final true
inline void UpdateValues() ;

static inline ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesRotate* New_ctor() ;

/// @brief Method .ctor addr 0x2dc7640 size 0x98 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__StylePropertyAnimationSystem__ValuesRotate", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__StylePropertyAnimationSystem__ValuesRotate(__StylePropertyAnimationSystem__ValuesRotate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__StylePropertyAnimationSystem__ValuesRotate", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__StylePropertyAnimationSystem__ValuesRotate(__StylePropertyAnimationSystem__ValuesRotate const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __StylePropertyAnimationSystem__ValuesRotate()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesRotate, 0x90>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// Type: ::ValuesTranslate
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6842), inst: 1575 }), TypeDefinitionIndex(TypeDefinitionIndex(6842)), TypeDefinitionIndex(TypeDefinitionIndex(7302))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6854))
// CS Name: ::StylePropertyAnimationSystem::ValuesTranslate*
class CORDL_TYPE __StylePropertyAnimationSystem__ValuesTranslate : public ::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values_1<::UnityEngine::UIElements::Translate> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x90};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x90 - sizeof(::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values_1<::UnityEngine::UIElements::Translate>)]{};

/// @brief Field <SameFunc>k__BackingField offset 0x88
 __declspec(property(get=__get__SameFunc_k__BackingField, put=__set__SameFunc_k__BackingField)) ::System::Func_3<::UnityEngine::UIElements::Translate,::UnityEngine::UIElements::Translate,bool>*  _SameFunc_k__BackingField;

 __declspec(property(get=get_SameFunc)) ::System::Func_3<::UnityEngine::UIElements::Translate,::UnityEngine::UIElements::Translate,bool>*  SameFunc;

constexpr void __set__SameFunc_k__BackingField(::System::Func_3<::UnityEngine::UIElements::Translate,::UnityEngine::UIElements::Translate,bool>*  value) ;

constexpr ::System::Func_3<::UnityEngine::UIElements::Translate,::UnityEngine::UIElements::Translate,bool>* __get__SameFunc_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::System::Func_3<::UnityEngine::UIElements::Translate,::UnityEngine::UIElements::Translate,bool>*> __get__SameFunc_k__BackingField() const;

/// @brief Method get_SameFunc addr 0x2dc76d8 size 0x8 virtual true final false
inline ::System::Func_3<::UnityEngine::UIElements::Translate,::UnityEngine::UIElements::Translate,bool>* get_SameFunc() ;

/// @brief Method IsSame addr 0x2dc76e0 size 0x48 virtual false final false
static inline bool IsSame(::UnityEngine::UIElements::Translate  a, ::UnityEngine::UIElements::Translate  b) ;

/// @brief Method UpdateComputedStyle addr 0x2dc7728 size 0xe8 virtual true final true
inline void UpdateComputedStyle() ;

/// @brief Method UpdateComputedStyle addr 0x2dc7810 size 0xcc virtual true final true
inline void UpdateComputedStyle(int32_t  i) ;

/// @brief Method Lerp addr 0x2dc78dc size 0xd4 virtual false final false
static inline ::UnityEngine::UIElements::Translate Lerp(::UnityEngine::UIElements::Translate  a, ::UnityEngine::UIElements::Translate  b, float_t  t) ;

/// @brief Method UpdateValues addr 0x2dc79b0 size 0xdc virtual true final true
inline void UpdateValues() ;

static inline ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTranslate* New_ctor() ;

/// @brief Method .ctor addr 0x2dc7a8c size 0x98 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__StylePropertyAnimationSystem__ValuesTranslate", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__StylePropertyAnimationSystem__ValuesTranslate(__StylePropertyAnimationSystem__ValuesTranslate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__StylePropertyAnimationSystem__ValuesTranslate", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__StylePropertyAnimationSystem__ValuesTranslate(__StylePropertyAnimationSystem__ValuesTranslate const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __StylePropertyAnimationSystem__ValuesTranslate()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTranslate, 0x90>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// Type: ::ValuesTransformOrigin
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6842), inst: 1574 }), TypeDefinitionIndex(TypeDefinitionIndex(6842)), TypeDefinitionIndex(TypeDefinitionIndex(7317))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6855))
// CS Name: ::StylePropertyAnimationSystem::ValuesTransformOrigin*
class CORDL_TYPE __StylePropertyAnimationSystem__ValuesTransformOrigin : public ::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values_1<::UnityEngine::UIElements::TransformOrigin> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x90};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x90 - sizeof(::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values_1<::UnityEngine::UIElements::TransformOrigin>)]{};

/// @brief Field <SameFunc>k__BackingField offset 0x88
 __declspec(property(get=__get__SameFunc_k__BackingField, put=__set__SameFunc_k__BackingField)) ::System::Func_3<::UnityEngine::UIElements::TransformOrigin,::UnityEngine::UIElements::TransformOrigin,bool>*  _SameFunc_k__BackingField;

 __declspec(property(get=get_SameFunc)) ::System::Func_3<::UnityEngine::UIElements::TransformOrigin,::UnityEngine::UIElements::TransformOrigin,bool>*  SameFunc;

constexpr void __set__SameFunc_k__BackingField(::System::Func_3<::UnityEngine::UIElements::TransformOrigin,::UnityEngine::UIElements::TransformOrigin,bool>*  value) ;

constexpr ::System::Func_3<::UnityEngine::UIElements::TransformOrigin,::UnityEngine::UIElements::TransformOrigin,bool>* __get__SameFunc_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::System::Func_3<::UnityEngine::UIElements::TransformOrigin,::UnityEngine::UIElements::TransformOrigin,bool>*> __get__SameFunc_k__BackingField() const;

/// @brief Method get_SameFunc addr 0x2dc7b24 size 0x8 virtual true final false
inline ::System::Func_3<::UnityEngine::UIElements::TransformOrigin,::UnityEngine::UIElements::TransformOrigin,bool>* get_SameFunc() ;

/// @brief Method IsSame addr 0x2dc7b2c size 0x48 virtual false final false
static inline bool IsSame(::UnityEngine::UIElements::TransformOrigin  a, ::UnityEngine::UIElements::TransformOrigin  b) ;

/// @brief Method UpdateComputedStyle addr 0x2dc7b74 size 0xe8 virtual true final true
inline void UpdateComputedStyle() ;

/// @brief Method UpdateComputedStyle addr 0x2dc7c5c size 0xcc virtual true final true
inline void UpdateComputedStyle(int32_t  i) ;

/// @brief Method Lerp addr 0x2dc7d28 size 0xd4 virtual false final false
static inline ::UnityEngine::UIElements::TransformOrigin Lerp(::UnityEngine::UIElements::TransformOrigin  a, ::UnityEngine::UIElements::TransformOrigin  b, float_t  t) ;

/// @brief Method UpdateValues addr 0x2dc7dfc size 0xdc virtual true final true
inline void UpdateValues() ;

static inline ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTransformOrigin* New_ctor() ;

/// @brief Method .ctor addr 0x2dc7ed8 size 0x98 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__StylePropertyAnimationSystem__ValuesTransformOrigin", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__StylePropertyAnimationSystem__ValuesTransformOrigin(__StylePropertyAnimationSystem__ValuesTransformOrigin && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__StylePropertyAnimationSystem__ValuesTransformOrigin", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__StylePropertyAnimationSystem__ValuesTransformOrigin(__StylePropertyAnimationSystem__ValuesTransformOrigin const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __StylePropertyAnimationSystem__ValuesTransformOrigin()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTransformOrigin, 0x90>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// Type: UnityEngine.UIElements::StylePropertyAnimationSystem
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6856))
// CS Name: ::UnityEngine.UIElements::StylePropertyAnimationSystem*
class CORDL_TYPE StylePropertyAnimationSystem : public ::System::Object {
public:
// Declarations
using ValuesTransformOrigin = ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTransformOrigin;

using ValuesTranslate = ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTranslate;

using ValuesRotate = ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesRotate;

using ValuesScale = ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesScale;

using ValuesTextShadow = ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTextShadow;

using ValuesFont = ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesFont;

using ValuesFontDefinition = ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesFontDefinition;

using ValuesBackground = ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesBackground;

template<typename T>
using ValuesDiscrete_1 = ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesDiscrete_1<T>;

using ValuesColor = ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesColor;

using ValuesLength = ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesLength;

using ValuesInt = ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesInt;

using ValuesFloat = ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesFloat;

template<typename T>
using Values_1 = ::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values_1<T>;

using Values = ::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values;

using ElementPropertyPair = ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair;

template<typename TTimingData,typename TStyleData>
using AnimationDataSet_2 = ::UnityEngine::UIElements::__StylePropertyAnimationSystem__AnimationDataSet_2<TTimingData, TStyleData>;

using TransitionState = ::UnityEngine::UIElements::__StylePropertyAnimationSystem__TransitionState;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x88};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x88 - sizeof(::System::Object)]{};

/// @brief Field m_CurrentTimeMs offset 0x10
 __declspec(property(get=__get_m_CurrentTimeMs, put=__set_m_CurrentTimeMs)) int64_t  m_CurrentTimeMs;

/// @brief Field m_Floats offset 0x18
 __declspec(property(get=__get_m_Floats, put=__set_m_Floats)) ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesFloat*  m_Floats;

/// @brief Field m_Ints offset 0x20
 __declspec(property(get=__get_m_Ints, put=__set_m_Ints)) ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesInt*  m_Ints;

/// @brief Field m_Lengths offset 0x28
 __declspec(property(get=__get_m_Lengths, put=__set_m_Lengths)) ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesLength*  m_Lengths;

/// @brief Field m_Colors offset 0x30
 __declspec(property(get=__get_m_Colors, put=__set_m_Colors)) ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesColor*  m_Colors;

/// @brief Field m_Backgrounds offset 0x38
 __declspec(property(get=__get_m_Backgrounds, put=__set_m_Backgrounds)) ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesBackground*  m_Backgrounds;

/// @brief Field m_FontDefinitions offset 0x40
 __declspec(property(get=__get_m_FontDefinitions, put=__set_m_FontDefinitions)) ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesFontDefinition*  m_FontDefinitions;

/// @brief Field m_Fonts offset 0x48
 __declspec(property(get=__get_m_Fonts, put=__set_m_Fonts)) ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesFont*  m_Fonts;

/// @brief Field m_TextShadows offset 0x50
 __declspec(property(get=__get_m_TextShadows, put=__set_m_TextShadows)) ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTextShadow*  m_TextShadows;

/// @brief Field m_Scale offset 0x58
 __declspec(property(get=__get_m_Scale, put=__set_m_Scale)) ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesScale*  m_Scale;

/// @brief Field m_Rotate offset 0x60
 __declspec(property(get=__get_m_Rotate, put=__set_m_Rotate)) ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesRotate*  m_Rotate;

/// @brief Field m_Translate offset 0x68
 __declspec(property(get=__get_m_Translate, put=__set_m_Translate)) ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTranslate*  m_Translate;

/// @brief Field m_TransformOrigin offset 0x70
 __declspec(property(get=__get_m_TransformOrigin, put=__set_m_TransformOrigin)) ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTransformOrigin*  m_TransformOrigin;

/// @brief Field m_AllValues offset 0x78
 __declspec(property(get=__get_m_AllValues, put=__set_m_AllValues)) ::System::Collections::Generic::List_1<::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values*>*  m_AllValues;

/// @brief Field m_PropertyToValues offset 0x80
 __declspec(property(get=__get_m_PropertyToValues, put=__set_m_PropertyToValues)) ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::StyleSheets::StylePropertyId,::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values*>*  m_PropertyToValues;

/// @brief Convert operator to "::UnityEngine::UIElements::IStylePropertyAnimationSystem"
constexpr operator  ::UnityEngine::UIElements::IStylePropertyAnimationSystem*() noexcept;

constexpr void __set_m_CurrentTimeMs(int64_t  value) ;

constexpr int64_t& __get_m_CurrentTimeMs() ;

constexpr int64_t const& __get_m_CurrentTimeMs() const;

constexpr void __set_m_Floats(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesFloat*  value) ;

constexpr ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesFloat* __get_m_Floats() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesFloat*> __get_m_Floats() const;

constexpr void __set_m_Ints(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesInt*  value) ;

constexpr ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesInt* __get_m_Ints() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesInt*> __get_m_Ints() const;

constexpr void __set_m_Lengths(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesLength*  value) ;

constexpr ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesLength* __get_m_Lengths() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesLength*> __get_m_Lengths() const;

constexpr void __set_m_Colors(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesColor*  value) ;

constexpr ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesColor* __get_m_Colors() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesColor*> __get_m_Colors() const;

constexpr void __set_m_Backgrounds(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesBackground*  value) ;

constexpr ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesBackground* __get_m_Backgrounds() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesBackground*> __get_m_Backgrounds() const;

constexpr void __set_m_FontDefinitions(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesFontDefinition*  value) ;

constexpr ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesFontDefinition* __get_m_FontDefinitions() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesFontDefinition*> __get_m_FontDefinitions() const;

constexpr void __set_m_Fonts(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesFont*  value) ;

constexpr ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesFont* __get_m_Fonts() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesFont*> __get_m_Fonts() const;

constexpr void __set_m_TextShadows(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTextShadow*  value) ;

constexpr ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTextShadow* __get_m_TextShadows() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTextShadow*> __get_m_TextShadows() const;

constexpr void __set_m_Scale(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesScale*  value) ;

constexpr ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesScale* __get_m_Scale() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesScale*> __get_m_Scale() const;

constexpr void __set_m_Rotate(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesRotate*  value) ;

constexpr ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesRotate* __get_m_Rotate() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesRotate*> __get_m_Rotate() const;

constexpr void __set_m_Translate(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTranslate*  value) ;

constexpr ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTranslate* __get_m_Translate() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTranslate*> __get_m_Translate() const;

constexpr void __set_m_TransformOrigin(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTransformOrigin*  value) ;

constexpr ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTransformOrigin* __get_m_TransformOrigin() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTransformOrigin*> __get_m_TransformOrigin() const;

constexpr void __set_m_AllValues(::System::Collections::Generic::List_1<::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values*>*  value) ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values*>* __get_m_AllValues() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values*>*> __get_m_AllValues() const;

constexpr void __set_m_PropertyToValues(::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::StyleSheets::StylePropertyId,::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values*>*  value) ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::StyleSheets::StylePropertyId,::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values*>* __get_m_PropertyToValues() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::StyleSheets::StylePropertyId,::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values*>*> __get_m_PropertyToValues() const;

static inline ::UnityEngine::UIElements::StylePropertyAnimationSystem* New_ctor() ;

/// @brief Method .ctor addr 0x2dc4344 size 0xf4 virtual false final false
inline void _ctor() ;

/// @brief Method GetOrCreate addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
inline T GetOrCreate(ByRef<T>  values) ;

/// @brief Method StartTransition addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
inline bool StartTransition(::UnityEngine::UIElements::VisualElement*  owner, ::UnityEngine::UIElements::StyleSheets::StylePropertyId  prop, T  startValue, T  endValue, int32_t  durationMs, int32_t  delayMs, ::System::Func_2<float_t,float_t>*  easingCurve, ::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values_1<T>*  values) ;

/// @brief Method StartTransition addr 0x2dc4438 size 0xc8 virtual true final true
inline bool StartTransition(::UnityEngine::UIElements::VisualElement*  owner, ::UnityEngine::UIElements::StyleSheets::StylePropertyId  prop, float_t  startValue, float_t  endValue, int32_t  durationMs, int32_t  delayMs, ::System::Func_2<float_t,float_t>*  easingCurve) ;

/// @brief Method StartTransition addr 0x2dc4500 size 0xd8 virtual true final true
inline bool StartTransition(::UnityEngine::UIElements::VisualElement*  owner, ::UnityEngine::UIElements::StyleSheets::StylePropertyId  prop, int32_t  startValue, int32_t  endValue, int32_t  durationMs, int32_t  delayMs, ::System::Func_2<float_t,float_t>*  easingCurve) ;

/// @brief Method StartTransition addr 0x2dc45d8 size 0xd8 virtual true final true
inline bool StartTransition(::UnityEngine::UIElements::VisualElement*  owner, ::UnityEngine::UIElements::StyleSheets::StylePropertyId  prop, ::UnityEngine::UIElements::Length  startValue, ::UnityEngine::UIElements::Length  endValue, int32_t  durationMs, int32_t  delayMs, ::System::Func_2<float_t,float_t>*  easingCurve) ;

/// @brief Method StartTransition addr 0x2dc46b0 size 0x110 virtual true final true
inline bool StartTransition(::UnityEngine::UIElements::VisualElement*  owner, ::UnityEngine::UIElements::StyleSheets::StylePropertyId  prop, ::UnityEngine::Color  startValue, ::UnityEngine::Color  endValue, int32_t  durationMs, int32_t  delayMs, ::System::Func_2<float_t,float_t>*  easingCurve) ;

/// @brief Method StartTransition addr 0x2dc47c0 size 0xf8 virtual true final true
inline bool StartTransition(::UnityEngine::UIElements::VisualElement*  owner, ::UnityEngine::UIElements::StyleSheets::StylePropertyId  prop, ::UnityEngine::UIElements::Background  startValue, ::UnityEngine::UIElements::Background  endValue, int32_t  durationMs, int32_t  delayMs, ::System::Func_2<float_t,float_t>*  easingCurve) ;

/// @brief Method StartTransition addr 0x2dc48b8 size 0xf0 virtual true final true
inline bool StartTransition(::UnityEngine::UIElements::VisualElement*  owner, ::UnityEngine::UIElements::StyleSheets::StylePropertyId  prop, ::UnityEngine::UIElements::FontDefinition  startValue, ::UnityEngine::UIElements::FontDefinition  endValue, int32_t  durationMs, int32_t  delayMs, ::System::Func_2<float_t,float_t>*  easingCurve) ;

/// @brief Method StartTransition addr 0x2dc49a8 size 0xd8 virtual true final true
inline bool StartTransition(::UnityEngine::UIElements::VisualElement*  owner, ::UnityEngine::UIElements::StyleSheets::StylePropertyId  prop, ::UnityEngine::Font*  startValue, ::UnityEngine::Font*  endValue, int32_t  durationMs, int32_t  delayMs, ::System::Func_2<float_t,float_t>*  easingCurve) ;

/// @brief Method StartTransition addr 0x2dc4a80 size 0x118 virtual true final true
inline bool StartTransition(::UnityEngine::UIElements::VisualElement*  owner, ::UnityEngine::UIElements::StyleSheets::StylePropertyId  prop, ::UnityEngine::UIElements::TextShadow  startValue, ::UnityEngine::UIElements::TextShadow  endValue, int32_t  durationMs, int32_t  delayMs, ::System::Func_2<float_t,float_t>*  easingCurve) ;

/// @brief Method StartTransition addr 0x2dc4b98 size 0xf0 virtual true final true
inline bool StartTransition(::UnityEngine::UIElements::VisualElement*  owner, ::UnityEngine::UIElements::StyleSheets::StylePropertyId  prop, ::UnityEngine::UIElements::Scale  startValue, ::UnityEngine::UIElements::Scale  endValue, int32_t  durationMs, int32_t  delayMs, ::System::Func_2<float_t,float_t>*  easingCurve) ;

/// @brief Method StartTransition addr 0x2dc4c88 size 0x118 virtual true final true
inline bool StartTransition(::UnityEngine::UIElements::VisualElement*  owner, ::UnityEngine::UIElements::StyleSheets::StylePropertyId  prop, ::UnityEngine::UIElements::Rotate  startValue, ::UnityEngine::UIElements::Rotate  endValue, int32_t  durationMs, int32_t  delayMs, ::System::Func_2<float_t,float_t>*  easingCurve) ;

/// @brief Method StartTransition addr 0x2dc4da0 size 0x118 virtual true final true
inline bool StartTransition(::UnityEngine::UIElements::VisualElement*  owner, ::UnityEngine::UIElements::StyleSheets::StylePropertyId  prop, ::UnityEngine::UIElements::Translate  startValue, ::UnityEngine::UIElements::Translate  endValue, int32_t  durationMs, int32_t  delayMs, ::System::Func_2<float_t,float_t>*  easingCurve) ;

/// @brief Method StartTransition addr 0x2dc4eb8 size 0x118 virtual true final true
inline bool StartTransition(::UnityEngine::UIElements::VisualElement*  owner, ::UnityEngine::UIElements::StyleSheets::StylePropertyId  prop, ::UnityEngine::UIElements::TransformOrigin  startValue, ::UnityEngine::UIElements::TransformOrigin  endValue, int32_t  durationMs, int32_t  delayMs, ::System::Func_2<float_t,float_t>*  easingCurve) ;

/// @brief Method CancelAllAnimations addr 0x2dc4fd0 size 0x150 virtual true final true
inline void CancelAllAnimations() ;

/// @brief Method CancelAllAnimations addr 0x2dc5120 size 0x2b4 virtual true final true
inline void CancelAllAnimations(::UnityEngine::UIElements::VisualElement*  owner) ;

/// @brief Method CancelAnimation addr 0x2dc53d4 size 0x90 virtual true final true
inline void CancelAnimation(::UnityEngine::UIElements::VisualElement*  owner, ::UnityEngine::UIElements::StyleSheets::StylePropertyId  id) ;

/// @brief Method UpdateAnimation addr 0x2dc5464 size 0x90 virtual true final true
inline void UpdateAnimation(::UnityEngine::UIElements::VisualElement*  owner, ::UnityEngine::UIElements::StyleSheets::StylePropertyId  id) ;

/// @brief Method GetAllAnimations addr 0x2dc54f4 size 0x158 virtual true final true
inline void GetAllAnimations(::UnityEngine::UIElements::VisualElement*  owner, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*  propertyIds) ;

/// @brief Method UpdateTracking addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
inline void UpdateTracking(::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values_1<T>*  values) ;

/// @brief Method CurrentTimeMs addr 0x2dc564c size 0x8 virtual false final false
inline int64_t CurrentTimeMs() ;

/// @brief Method Update addr 0x2dc5654 size 0xd4 virtual true final true
inline void Update() ;

// Ctor Parameters [CppParam { name: "", ty: "StylePropertyAnimationSystem", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
StylePropertyAnimationSystem(StylePropertyAnimationSystem && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StylePropertyAnimationSystem", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
StylePropertyAnimationSystem(StylePropertyAnimationSystem const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 StylePropertyAnimationSystem()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::StylePropertyAnimationSystem, 0x88>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// Type: ::AnimationDataSet`2
namespace UnityEngine::UIElements {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6833))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6833), inst: 6511 })
// CS Name: ::StylePropertyAnimationSystem::AnimationDataSet`2<TTimingData,TStyleData>
struct CORDL_TYPE __StylePropertyAnimationSystem__AnimationDataSet_2<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<::UnityEngine::UIElements::Translate>,::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<::UnityEngine::UIElements::Translate>> : public ::bs_hook::ValueTypeWrapper<0x30> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field elements offset 0x0
 __declspec(property(get=__get_elements, put=__set_elements)) ::ArrayW<::UnityEngine::UIElements::VisualElement*,::Array<::UnityEngine::UIElements::VisualElement*>*>  elements;

/// @brief Field properties offset 0x8
 __declspec(property(get=__get_properties, put=__set_properties)) ::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId,::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*>  properties;

/// @brief Field timing offset 0x10
 __declspec(property(get=__get_timing, put=__set_timing)) ::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<::UnityEngine::UIElements::Translate>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<::UnityEngine::UIElements::Translate>>*>  timing;

/// @brief Field style offset 0x18
 __declspec(property(get=__get_style, put=__set_style)) ::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<::UnityEngine::UIElements::Translate>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<::UnityEngine::UIElements::Translate>>*>  style;

/// @brief Field count offset 0x20
 __declspec(property(get=__get_count, put=__set_count)) int32_t  count;

/// @brief Field indices offset 0x28
 __declspec(property(get=__get_indices, put=__set_indices)) ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>*  indices;

 __declspec(property(get=get_capacity, put=set_capacity)) int32_t  capacity;

constexpr void __set_elements(::ArrayW<::UnityEngine::UIElements::VisualElement*,::Array<::UnityEngine::UIElements::VisualElement*>*>  value) ;

constexpr ::ArrayW<::UnityEngine::UIElements::VisualElement*,::Array<::UnityEngine::UIElements::VisualElement*>*>& __get_elements() ;

constexpr ::ArrayW<::UnityEngine::UIElements::VisualElement*,::Array<::UnityEngine::UIElements::VisualElement*>*> const& __get_elements() const;

constexpr void __set_properties(::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId,::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*>  value) ;

constexpr ::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId,::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*>& __get_properties() ;

constexpr ::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId,::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*> const& __get_properties() const;

constexpr void __set_timing(::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<::UnityEngine::UIElements::Translate>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<::UnityEngine::UIElements::Translate>>*>  value) ;

constexpr ::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<::UnityEngine::UIElements::Translate>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<::UnityEngine::UIElements::Translate>>*>& __get_timing() ;

constexpr ::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<::UnityEngine::UIElements::Translate>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<::UnityEngine::UIElements::Translate>>*> const& __get_timing() const;

constexpr void __set_style(::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<::UnityEngine::UIElements::Translate>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<::UnityEngine::UIElements::Translate>>*>  value) ;

constexpr ::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<::UnityEngine::UIElements::Translate>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<::UnityEngine::UIElements::Translate>>*>& __get_style() ;

constexpr ::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<::UnityEngine::UIElements::Translate>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<::UnityEngine::UIElements::Translate>>*> const& __get_style() const;

constexpr void __set_count(int32_t  value) ;

constexpr int32_t& __get_count() ;

constexpr int32_t const& __get_count() const;

constexpr void __set_indices(::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>*  value) ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>* __get_indices() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>*> __get_indices() const;

/// @brief Method get_capacity addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t get_capacity() ;

/// @brief Method set_capacity addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_capacity(int32_t  value) ;

/// @brief Method LocalInit addr 0x0 size 0xffffffffffffffff virtual false final false
inline void LocalInit() ;

/// @brief Method Create addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::UnityEngine::UIElements::__StylePropertyAnimationSystem__AnimationDataSet_2<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<::UnityEngine::UIElements::Translate>,::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<::UnityEngine::UIElements::Translate>> Create() ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool IndexOf(::UnityEngine::UIElements::VisualElement*  ve, ::UnityEngine::UIElements::StyleSheets::StylePropertyId  prop, ByRef<int32_t>  index) ;

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Add(::UnityEngine::UIElements::VisualElement*  owner, ::UnityEngine::UIElements::StyleSheets::StylePropertyId  prop, ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<::UnityEngine::UIElements::Translate>  timingData, ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<::UnityEngine::UIElements::Translate>  styleData) ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Remove(int32_t  cancelledIndex) ;

/// @brief Method Replace addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Replace(int32_t  index, ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<::UnityEngine::UIElements::Translate>  timingData, ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<::UnityEngine::UIElements::Translate>  styleData) ;

/// @brief Method RemoveAll addr 0x0 size 0xffffffffffffffff virtual false final false
inline void RemoveAll(::UnityEngine::UIElements::VisualElement*  ve) ;

/// @brief Method RemoveAll addr 0x0 size 0xffffffffffffffff virtual false final false
inline void RemoveAll() ;

/// @brief Method GetActivePropertiesForElement addr 0x0 size 0xffffffffffffffff virtual false final false
inline void GetActivePropertiesForElement(::UnityEngine::UIElements::VisualElement*  ve, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*  outProperties) ;

// Ctor Parameters [CppParam { name: "elements", ty: "::ArrayW<::UnityEngine::UIElements::VisualElement*,::Array<::UnityEngine::UIElements::VisualElement*>*>", modifiers: "", def_value: None }, CppParam { name: "properties", ty: "::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId,::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*>", modifiers: "", def_value: None }, CppParam { name: "timing", ty: "::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<::UnityEngine::UIElements::Translate>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<::UnityEngine::UIElements::Translate>>*>", modifiers: "", def_value: None }, CppParam { name: "style", ty: "::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<::UnityEngine::UIElements::Translate>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<::UnityEngine::UIElements::Translate>>*>", modifiers: "", def_value: None }, CppParam { name: "count", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "indices", ty: "::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>*", modifiers: "", def_value: None }]
constexpr __StylePropertyAnimationSystem__AnimationDataSet_2(::ArrayW<::UnityEngine::UIElements::VisualElement*,::Array<::UnityEngine::UIElements::VisualElement*>*>  elements, ::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId,::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*>  properties, ::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<::UnityEngine::UIElements::Translate>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<::UnityEngine::UIElements::Translate>>*>  timing, ::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<::UnityEngine::UIElements::Translate>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<::UnityEngine::UIElements::Translate>>*>  style, int32_t  count, ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>*  indices) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __StylePropertyAnimationSystem__AnimationDataSet_2(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x30>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __StylePropertyAnimationSystem__AnimationDataSet_2()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: ::AnimationDataSet`2
namespace UnityEngine::UIElements {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6833))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6833), inst: 6510 })
// CS Name: ::StylePropertyAnimationSystem::AnimationDataSet`2<TTimingData,TStyleData>
struct CORDL_TYPE __StylePropertyAnimationSystem__AnimationDataSet_2<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<::UnityEngine::UIElements::TransformOrigin>,::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<::UnityEngine::UIElements::TransformOrigin>> : public ::bs_hook::ValueTypeWrapper<0x30> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field elements offset 0x0
 __declspec(property(get=__get_elements, put=__set_elements)) ::ArrayW<::UnityEngine::UIElements::VisualElement*,::Array<::UnityEngine::UIElements::VisualElement*>*>  elements;

/// @brief Field properties offset 0x8
 __declspec(property(get=__get_properties, put=__set_properties)) ::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId,::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*>  properties;

/// @brief Field timing offset 0x10
 __declspec(property(get=__get_timing, put=__set_timing)) ::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<::UnityEngine::UIElements::TransformOrigin>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<::UnityEngine::UIElements::TransformOrigin>>*>  timing;

/// @brief Field style offset 0x18
 __declspec(property(get=__get_style, put=__set_style)) ::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<::UnityEngine::UIElements::TransformOrigin>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<::UnityEngine::UIElements::TransformOrigin>>*>  style;

/// @brief Field count offset 0x20
 __declspec(property(get=__get_count, put=__set_count)) int32_t  count;

/// @brief Field indices offset 0x28
 __declspec(property(get=__get_indices, put=__set_indices)) ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>*  indices;

 __declspec(property(get=get_capacity, put=set_capacity)) int32_t  capacity;

constexpr void __set_elements(::ArrayW<::UnityEngine::UIElements::VisualElement*,::Array<::UnityEngine::UIElements::VisualElement*>*>  value) ;

constexpr ::ArrayW<::UnityEngine::UIElements::VisualElement*,::Array<::UnityEngine::UIElements::VisualElement*>*>& __get_elements() ;

constexpr ::ArrayW<::UnityEngine::UIElements::VisualElement*,::Array<::UnityEngine::UIElements::VisualElement*>*> const& __get_elements() const;

constexpr void __set_properties(::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId,::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*>  value) ;

constexpr ::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId,::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*>& __get_properties() ;

constexpr ::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId,::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*> const& __get_properties() const;

constexpr void __set_timing(::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<::UnityEngine::UIElements::TransformOrigin>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<::UnityEngine::UIElements::TransformOrigin>>*>  value) ;

constexpr ::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<::UnityEngine::UIElements::TransformOrigin>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<::UnityEngine::UIElements::TransformOrigin>>*>& __get_timing() ;

constexpr ::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<::UnityEngine::UIElements::TransformOrigin>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<::UnityEngine::UIElements::TransformOrigin>>*> const& __get_timing() const;

constexpr void __set_style(::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<::UnityEngine::UIElements::TransformOrigin>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<::UnityEngine::UIElements::TransformOrigin>>*>  value) ;

constexpr ::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<::UnityEngine::UIElements::TransformOrigin>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<::UnityEngine::UIElements::TransformOrigin>>*>& __get_style() ;

constexpr ::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<::UnityEngine::UIElements::TransformOrigin>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<::UnityEngine::UIElements::TransformOrigin>>*> const& __get_style() const;

constexpr void __set_count(int32_t  value) ;

constexpr int32_t& __get_count() ;

constexpr int32_t const& __get_count() const;

constexpr void __set_indices(::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>*  value) ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>* __get_indices() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>*> __get_indices() const;

/// @brief Method get_capacity addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t get_capacity() ;

/// @brief Method set_capacity addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_capacity(int32_t  value) ;

/// @brief Method LocalInit addr 0x0 size 0xffffffffffffffff virtual false final false
inline void LocalInit() ;

/// @brief Method Create addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::UnityEngine::UIElements::__StylePropertyAnimationSystem__AnimationDataSet_2<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<::UnityEngine::UIElements::TransformOrigin>,::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<::UnityEngine::UIElements::TransformOrigin>> Create() ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool IndexOf(::UnityEngine::UIElements::VisualElement*  ve, ::UnityEngine::UIElements::StyleSheets::StylePropertyId  prop, ByRef<int32_t>  index) ;

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Add(::UnityEngine::UIElements::VisualElement*  owner, ::UnityEngine::UIElements::StyleSheets::StylePropertyId  prop, ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<::UnityEngine::UIElements::TransformOrigin>  timingData, ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<::UnityEngine::UIElements::TransformOrigin>  styleData) ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Remove(int32_t  cancelledIndex) ;

/// @brief Method Replace addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Replace(int32_t  index, ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<::UnityEngine::UIElements::TransformOrigin>  timingData, ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<::UnityEngine::UIElements::TransformOrigin>  styleData) ;

/// @brief Method RemoveAll addr 0x0 size 0xffffffffffffffff virtual false final false
inline void RemoveAll(::UnityEngine::UIElements::VisualElement*  ve) ;

/// @brief Method RemoveAll addr 0x0 size 0xffffffffffffffff virtual false final false
inline void RemoveAll() ;

/// @brief Method GetActivePropertiesForElement addr 0x0 size 0xffffffffffffffff virtual false final false
inline void GetActivePropertiesForElement(::UnityEngine::UIElements::VisualElement*  ve, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*  outProperties) ;

// Ctor Parameters [CppParam { name: "elements", ty: "::ArrayW<::UnityEngine::UIElements::VisualElement*,::Array<::UnityEngine::UIElements::VisualElement*>*>", modifiers: "", def_value: None }, CppParam { name: "properties", ty: "::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId,::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*>", modifiers: "", def_value: None }, CppParam { name: "timing", ty: "::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<::UnityEngine::UIElements::TransformOrigin>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<::UnityEngine::UIElements::TransformOrigin>>*>", modifiers: "", def_value: None }, CppParam { name: "style", ty: "::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<::UnityEngine::UIElements::TransformOrigin>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<::UnityEngine::UIElements::TransformOrigin>>*>", modifiers: "", def_value: None }, CppParam { name: "count", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "indices", ty: "::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>*", modifiers: "", def_value: None }]
constexpr __StylePropertyAnimationSystem__AnimationDataSet_2(::ArrayW<::UnityEngine::UIElements::VisualElement*,::Array<::UnityEngine::UIElements::VisualElement*>*>  elements, ::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId,::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*>  properties, ::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<::UnityEngine::UIElements::TransformOrigin>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<::UnityEngine::UIElements::TransformOrigin>>*>  timing, ::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<::UnityEngine::UIElements::TransformOrigin>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<::UnityEngine::UIElements::TransformOrigin>>*>  style, int32_t  count, ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>*  indices) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __StylePropertyAnimationSystem__AnimationDataSet_2(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x30>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __StylePropertyAnimationSystem__AnimationDataSet_2()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: ::AnimationDataSet`2
namespace UnityEngine::UIElements {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6833))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6833), inst: 6509 })
// CS Name: ::StylePropertyAnimationSystem::AnimationDataSet`2<TTimingData,TStyleData>
struct CORDL_TYPE __StylePropertyAnimationSystem__AnimationDataSet_2<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<::UnityEngine::UIElements::TextShadow>,::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<::UnityEngine::UIElements::TextShadow>> : public ::bs_hook::ValueTypeWrapper<0x30> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field elements offset 0x0
 __declspec(property(get=__get_elements, put=__set_elements)) ::ArrayW<::UnityEngine::UIElements::VisualElement*,::Array<::UnityEngine::UIElements::VisualElement*>*>  elements;

/// @brief Field properties offset 0x8
 __declspec(property(get=__get_properties, put=__set_properties)) ::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId,::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*>  properties;

/// @brief Field timing offset 0x10
 __declspec(property(get=__get_timing, put=__set_timing)) ::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<::UnityEngine::UIElements::TextShadow>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<::UnityEngine::UIElements::TextShadow>>*>  timing;

/// @brief Field style offset 0x18
 __declspec(property(get=__get_style, put=__set_style)) ::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<::UnityEngine::UIElements::TextShadow>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<::UnityEngine::UIElements::TextShadow>>*>  style;

/// @brief Field count offset 0x20
 __declspec(property(get=__get_count, put=__set_count)) int32_t  count;

/// @brief Field indices offset 0x28
 __declspec(property(get=__get_indices, put=__set_indices)) ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>*  indices;

 __declspec(property(get=get_capacity, put=set_capacity)) int32_t  capacity;

constexpr void __set_elements(::ArrayW<::UnityEngine::UIElements::VisualElement*,::Array<::UnityEngine::UIElements::VisualElement*>*>  value) ;

constexpr ::ArrayW<::UnityEngine::UIElements::VisualElement*,::Array<::UnityEngine::UIElements::VisualElement*>*>& __get_elements() ;

constexpr ::ArrayW<::UnityEngine::UIElements::VisualElement*,::Array<::UnityEngine::UIElements::VisualElement*>*> const& __get_elements() const;

constexpr void __set_properties(::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId,::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*>  value) ;

constexpr ::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId,::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*>& __get_properties() ;

constexpr ::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId,::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*> const& __get_properties() const;

constexpr void __set_timing(::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<::UnityEngine::UIElements::TextShadow>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<::UnityEngine::UIElements::TextShadow>>*>  value) ;

constexpr ::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<::UnityEngine::UIElements::TextShadow>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<::UnityEngine::UIElements::TextShadow>>*>& __get_timing() ;

constexpr ::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<::UnityEngine::UIElements::TextShadow>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<::UnityEngine::UIElements::TextShadow>>*> const& __get_timing() const;

constexpr void __set_style(::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<::UnityEngine::UIElements::TextShadow>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<::UnityEngine::UIElements::TextShadow>>*>  value) ;

constexpr ::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<::UnityEngine::UIElements::TextShadow>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<::UnityEngine::UIElements::TextShadow>>*>& __get_style() ;

constexpr ::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<::UnityEngine::UIElements::TextShadow>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<::UnityEngine::UIElements::TextShadow>>*> const& __get_style() const;

constexpr void __set_count(int32_t  value) ;

constexpr int32_t& __get_count() ;

constexpr int32_t const& __get_count() const;

constexpr void __set_indices(::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>*  value) ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>* __get_indices() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>*> __get_indices() const;

/// @brief Method get_capacity addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t get_capacity() ;

/// @brief Method set_capacity addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_capacity(int32_t  value) ;

/// @brief Method LocalInit addr 0x0 size 0xffffffffffffffff virtual false final false
inline void LocalInit() ;

/// @brief Method Create addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::UnityEngine::UIElements::__StylePropertyAnimationSystem__AnimationDataSet_2<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<::UnityEngine::UIElements::TextShadow>,::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<::UnityEngine::UIElements::TextShadow>> Create() ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool IndexOf(::UnityEngine::UIElements::VisualElement*  ve, ::UnityEngine::UIElements::StyleSheets::StylePropertyId  prop, ByRef<int32_t>  index) ;

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Add(::UnityEngine::UIElements::VisualElement*  owner, ::UnityEngine::UIElements::StyleSheets::StylePropertyId  prop, ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<::UnityEngine::UIElements::TextShadow>  timingData, ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<::UnityEngine::UIElements::TextShadow>  styleData) ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Remove(int32_t  cancelledIndex) ;

/// @brief Method Replace addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Replace(int32_t  index, ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<::UnityEngine::UIElements::TextShadow>  timingData, ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<::UnityEngine::UIElements::TextShadow>  styleData) ;

/// @brief Method RemoveAll addr 0x0 size 0xffffffffffffffff virtual false final false
inline void RemoveAll(::UnityEngine::UIElements::VisualElement*  ve) ;

/// @brief Method RemoveAll addr 0x0 size 0xffffffffffffffff virtual false final false
inline void RemoveAll() ;

/// @brief Method GetActivePropertiesForElement addr 0x0 size 0xffffffffffffffff virtual false final false
inline void GetActivePropertiesForElement(::UnityEngine::UIElements::VisualElement*  ve, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*  outProperties) ;

// Ctor Parameters [CppParam { name: "elements", ty: "::ArrayW<::UnityEngine::UIElements::VisualElement*,::Array<::UnityEngine::UIElements::VisualElement*>*>", modifiers: "", def_value: None }, CppParam { name: "properties", ty: "::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId,::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*>", modifiers: "", def_value: None }, CppParam { name: "timing", ty: "::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<::UnityEngine::UIElements::TextShadow>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<::UnityEngine::UIElements::TextShadow>>*>", modifiers: "", def_value: None }, CppParam { name: "style", ty: "::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<::UnityEngine::UIElements::TextShadow>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<::UnityEngine::UIElements::TextShadow>>*>", modifiers: "", def_value: None }, CppParam { name: "count", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "indices", ty: "::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>*", modifiers: "", def_value: None }]
constexpr __StylePropertyAnimationSystem__AnimationDataSet_2(::ArrayW<::UnityEngine::UIElements::VisualElement*,::Array<::UnityEngine::UIElements::VisualElement*>*>  elements, ::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId,::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*>  properties, ::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<::UnityEngine::UIElements::TextShadow>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<::UnityEngine::UIElements::TextShadow>>*>  timing, ::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<::UnityEngine::UIElements::TextShadow>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<::UnityEngine::UIElements::TextShadow>>*>  style, int32_t  count, ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>*  indices) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __StylePropertyAnimationSystem__AnimationDataSet_2(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x30>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __StylePropertyAnimationSystem__AnimationDataSet_2()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: ::AnimationDataSet`2
namespace UnityEngine::UIElements {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6833))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6833), inst: 6508 })
// CS Name: ::StylePropertyAnimationSystem::AnimationDataSet`2<TTimingData,TStyleData>
struct CORDL_TYPE __StylePropertyAnimationSystem__AnimationDataSet_2<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<float_t>,::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<float_t>> : public ::bs_hook::ValueTypeWrapper<0x30> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field elements offset 0x0
 __declspec(property(get=__get_elements, put=__set_elements)) ::ArrayW<::UnityEngine::UIElements::VisualElement*,::Array<::UnityEngine::UIElements::VisualElement*>*>  elements;

/// @brief Field properties offset 0x8
 __declspec(property(get=__get_properties, put=__set_properties)) ::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId,::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*>  properties;

/// @brief Field timing offset 0x10
 __declspec(property(get=__get_timing, put=__set_timing)) ::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<float_t>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<float_t>>*>  timing;

/// @brief Field style offset 0x18
 __declspec(property(get=__get_style, put=__set_style)) ::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<float_t>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<float_t>>*>  style;

/// @brief Field count offset 0x20
 __declspec(property(get=__get_count, put=__set_count)) int32_t  count;

/// @brief Field indices offset 0x28
 __declspec(property(get=__get_indices, put=__set_indices)) ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>*  indices;

 __declspec(property(get=get_capacity, put=set_capacity)) int32_t  capacity;

constexpr void __set_elements(::ArrayW<::UnityEngine::UIElements::VisualElement*,::Array<::UnityEngine::UIElements::VisualElement*>*>  value) ;

constexpr ::ArrayW<::UnityEngine::UIElements::VisualElement*,::Array<::UnityEngine::UIElements::VisualElement*>*>& __get_elements() ;

constexpr ::ArrayW<::UnityEngine::UIElements::VisualElement*,::Array<::UnityEngine::UIElements::VisualElement*>*> const& __get_elements() const;

constexpr void __set_properties(::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId,::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*>  value) ;

constexpr ::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId,::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*>& __get_properties() ;

constexpr ::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId,::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*> const& __get_properties() const;

constexpr void __set_timing(::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<float_t>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<float_t>>*>  value) ;

constexpr ::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<float_t>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<float_t>>*>& __get_timing() ;

constexpr ::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<float_t>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<float_t>>*> const& __get_timing() const;

constexpr void __set_style(::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<float_t>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<float_t>>*>  value) ;

constexpr ::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<float_t>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<float_t>>*>& __get_style() ;

constexpr ::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<float_t>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<float_t>>*> const& __get_style() const;

constexpr void __set_count(int32_t  value) ;

constexpr int32_t& __get_count() ;

constexpr int32_t const& __get_count() const;

constexpr void __set_indices(::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>*  value) ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>* __get_indices() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>*> __get_indices() const;

/// @brief Method get_capacity addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t get_capacity() ;

/// @brief Method set_capacity addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_capacity(int32_t  value) ;

/// @brief Method LocalInit addr 0x0 size 0xffffffffffffffff virtual false final false
inline void LocalInit() ;

/// @brief Method Create addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::UnityEngine::UIElements::__StylePropertyAnimationSystem__AnimationDataSet_2<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<float_t>,::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<float_t>> Create() ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool IndexOf(::UnityEngine::UIElements::VisualElement*  ve, ::UnityEngine::UIElements::StyleSheets::StylePropertyId  prop, ByRef<int32_t>  index) ;

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Add(::UnityEngine::UIElements::VisualElement*  owner, ::UnityEngine::UIElements::StyleSheets::StylePropertyId  prop, ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<float_t>  timingData, ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<float_t>  styleData) ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Remove(int32_t  cancelledIndex) ;

/// @brief Method Replace addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Replace(int32_t  index, ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<float_t>  timingData, ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<float_t>  styleData) ;

/// @brief Method RemoveAll addr 0x0 size 0xffffffffffffffff virtual false final false
inline void RemoveAll(::UnityEngine::UIElements::VisualElement*  ve) ;

/// @brief Method RemoveAll addr 0x0 size 0xffffffffffffffff virtual false final false
inline void RemoveAll() ;

/// @brief Method GetActivePropertiesForElement addr 0x0 size 0xffffffffffffffff virtual false final false
inline void GetActivePropertiesForElement(::UnityEngine::UIElements::VisualElement*  ve, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*  outProperties) ;

// Ctor Parameters [CppParam { name: "elements", ty: "::ArrayW<::UnityEngine::UIElements::VisualElement*,::Array<::UnityEngine::UIElements::VisualElement*>*>", modifiers: "", def_value: None }, CppParam { name: "properties", ty: "::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId,::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*>", modifiers: "", def_value: None }, CppParam { name: "timing", ty: "::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<float_t>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<float_t>>*>", modifiers: "", def_value: None }, CppParam { name: "style", ty: "::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<float_t>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<float_t>>*>", modifiers: "", def_value: None }, CppParam { name: "count", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "indices", ty: "::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>*", modifiers: "", def_value: None }]
constexpr __StylePropertyAnimationSystem__AnimationDataSet_2(::ArrayW<::UnityEngine::UIElements::VisualElement*,::Array<::UnityEngine::UIElements::VisualElement*>*>  elements, ::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId,::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*>  properties, ::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<float_t>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<float_t>>*>  timing, ::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<float_t>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<float_t>>*>  style, int32_t  count, ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>*  indices) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __StylePropertyAnimationSystem__AnimationDataSet_2(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x30>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __StylePropertyAnimationSystem__AnimationDataSet_2()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: ::AnimationDataSet`2
namespace UnityEngine::UIElements {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6833))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6833), inst: 6507 })
// CS Name: ::StylePropertyAnimationSystem::AnimationDataSet`2<TTimingData,TStyleData>
struct CORDL_TYPE __StylePropertyAnimationSystem__AnimationDataSet_2<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<::UnityEngine::UIElements::Scale>,::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<::UnityEngine::UIElements::Scale>> : public ::bs_hook::ValueTypeWrapper<0x30> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field elements offset 0x0
 __declspec(property(get=__get_elements, put=__set_elements)) ::ArrayW<::UnityEngine::UIElements::VisualElement*,::Array<::UnityEngine::UIElements::VisualElement*>*>  elements;

/// @brief Field properties offset 0x8
 __declspec(property(get=__get_properties, put=__set_properties)) ::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId,::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*>  properties;

/// @brief Field timing offset 0x10
 __declspec(property(get=__get_timing, put=__set_timing)) ::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<::UnityEngine::UIElements::Scale>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<::UnityEngine::UIElements::Scale>>*>  timing;

/// @brief Field style offset 0x18
 __declspec(property(get=__get_style, put=__set_style)) ::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<::UnityEngine::UIElements::Scale>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<::UnityEngine::UIElements::Scale>>*>  style;

/// @brief Field count offset 0x20
 __declspec(property(get=__get_count, put=__set_count)) int32_t  count;

/// @brief Field indices offset 0x28
 __declspec(property(get=__get_indices, put=__set_indices)) ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>*  indices;

 __declspec(property(get=get_capacity, put=set_capacity)) int32_t  capacity;

constexpr void __set_elements(::ArrayW<::UnityEngine::UIElements::VisualElement*,::Array<::UnityEngine::UIElements::VisualElement*>*>  value) ;

constexpr ::ArrayW<::UnityEngine::UIElements::VisualElement*,::Array<::UnityEngine::UIElements::VisualElement*>*>& __get_elements() ;

constexpr ::ArrayW<::UnityEngine::UIElements::VisualElement*,::Array<::UnityEngine::UIElements::VisualElement*>*> const& __get_elements() const;

constexpr void __set_properties(::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId,::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*>  value) ;

constexpr ::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId,::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*>& __get_properties() ;

constexpr ::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId,::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*> const& __get_properties() const;

constexpr void __set_timing(::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<::UnityEngine::UIElements::Scale>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<::UnityEngine::UIElements::Scale>>*>  value) ;

constexpr ::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<::UnityEngine::UIElements::Scale>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<::UnityEngine::UIElements::Scale>>*>& __get_timing() ;

constexpr ::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<::UnityEngine::UIElements::Scale>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<::UnityEngine::UIElements::Scale>>*> const& __get_timing() const;

constexpr void __set_style(::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<::UnityEngine::UIElements::Scale>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<::UnityEngine::UIElements::Scale>>*>  value) ;

constexpr ::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<::UnityEngine::UIElements::Scale>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<::UnityEngine::UIElements::Scale>>*>& __get_style() ;

constexpr ::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<::UnityEngine::UIElements::Scale>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<::UnityEngine::UIElements::Scale>>*> const& __get_style() const;

constexpr void __set_count(int32_t  value) ;

constexpr int32_t& __get_count() ;

constexpr int32_t const& __get_count() const;

constexpr void __set_indices(::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>*  value) ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>* __get_indices() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>*> __get_indices() const;

/// @brief Method get_capacity addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t get_capacity() ;

/// @brief Method set_capacity addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_capacity(int32_t  value) ;

/// @brief Method LocalInit addr 0x0 size 0xffffffffffffffff virtual false final false
inline void LocalInit() ;

/// @brief Method Create addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::UnityEngine::UIElements::__StylePropertyAnimationSystem__AnimationDataSet_2<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<::UnityEngine::UIElements::Scale>,::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<::UnityEngine::UIElements::Scale>> Create() ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool IndexOf(::UnityEngine::UIElements::VisualElement*  ve, ::UnityEngine::UIElements::StyleSheets::StylePropertyId  prop, ByRef<int32_t>  index) ;

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Add(::UnityEngine::UIElements::VisualElement*  owner, ::UnityEngine::UIElements::StyleSheets::StylePropertyId  prop, ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<::UnityEngine::UIElements::Scale>  timingData, ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<::UnityEngine::UIElements::Scale>  styleData) ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Remove(int32_t  cancelledIndex) ;

/// @brief Method Replace addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Replace(int32_t  index, ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<::UnityEngine::UIElements::Scale>  timingData, ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<::UnityEngine::UIElements::Scale>  styleData) ;

/// @brief Method RemoveAll addr 0x0 size 0xffffffffffffffff virtual false final false
inline void RemoveAll(::UnityEngine::UIElements::VisualElement*  ve) ;

/// @brief Method RemoveAll addr 0x0 size 0xffffffffffffffff virtual false final false
inline void RemoveAll() ;

/// @brief Method GetActivePropertiesForElement addr 0x0 size 0xffffffffffffffff virtual false final false
inline void GetActivePropertiesForElement(::UnityEngine::UIElements::VisualElement*  ve, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*  outProperties) ;

// Ctor Parameters [CppParam { name: "elements", ty: "::ArrayW<::UnityEngine::UIElements::VisualElement*,::Array<::UnityEngine::UIElements::VisualElement*>*>", modifiers: "", def_value: None }, CppParam { name: "properties", ty: "::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId,::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*>", modifiers: "", def_value: None }, CppParam { name: "timing", ty: "::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<::UnityEngine::UIElements::Scale>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<::UnityEngine::UIElements::Scale>>*>", modifiers: "", def_value: None }, CppParam { name: "style", ty: "::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<::UnityEngine::UIElements::Scale>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<::UnityEngine::UIElements::Scale>>*>", modifiers: "", def_value: None }, CppParam { name: "count", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "indices", ty: "::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>*", modifiers: "", def_value: None }]
constexpr __StylePropertyAnimationSystem__AnimationDataSet_2(::ArrayW<::UnityEngine::UIElements::VisualElement*,::Array<::UnityEngine::UIElements::VisualElement*>*>  elements, ::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId,::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*>  properties, ::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<::UnityEngine::UIElements::Scale>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<::UnityEngine::UIElements::Scale>>*>  timing, ::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<::UnityEngine::UIElements::Scale>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<::UnityEngine::UIElements::Scale>>*>  style, int32_t  count, ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>*  indices) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __StylePropertyAnimationSystem__AnimationDataSet_2(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x30>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __StylePropertyAnimationSystem__AnimationDataSet_2()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: ::AnimationDataSet`2
namespace UnityEngine::UIElements {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6833))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6833), inst: 6506 })
// CS Name: ::StylePropertyAnimationSystem::AnimationDataSet`2<TTimingData,TStyleData>
struct CORDL_TYPE __StylePropertyAnimationSystem__AnimationDataSet_2<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<::UnityEngine::UIElements::Rotate>,::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<::UnityEngine::UIElements::Rotate>> : public ::bs_hook::ValueTypeWrapper<0x30> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field elements offset 0x0
 __declspec(property(get=__get_elements, put=__set_elements)) ::ArrayW<::UnityEngine::UIElements::VisualElement*,::Array<::UnityEngine::UIElements::VisualElement*>*>  elements;

/// @brief Field properties offset 0x8
 __declspec(property(get=__get_properties, put=__set_properties)) ::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId,::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*>  properties;

/// @brief Field timing offset 0x10
 __declspec(property(get=__get_timing, put=__set_timing)) ::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<::UnityEngine::UIElements::Rotate>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<::UnityEngine::UIElements::Rotate>>*>  timing;

/// @brief Field style offset 0x18
 __declspec(property(get=__get_style, put=__set_style)) ::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<::UnityEngine::UIElements::Rotate>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<::UnityEngine::UIElements::Rotate>>*>  style;

/// @brief Field count offset 0x20
 __declspec(property(get=__get_count, put=__set_count)) int32_t  count;

/// @brief Field indices offset 0x28
 __declspec(property(get=__get_indices, put=__set_indices)) ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>*  indices;

 __declspec(property(get=get_capacity, put=set_capacity)) int32_t  capacity;

constexpr void __set_elements(::ArrayW<::UnityEngine::UIElements::VisualElement*,::Array<::UnityEngine::UIElements::VisualElement*>*>  value) ;

constexpr ::ArrayW<::UnityEngine::UIElements::VisualElement*,::Array<::UnityEngine::UIElements::VisualElement*>*>& __get_elements() ;

constexpr ::ArrayW<::UnityEngine::UIElements::VisualElement*,::Array<::UnityEngine::UIElements::VisualElement*>*> const& __get_elements() const;

constexpr void __set_properties(::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId,::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*>  value) ;

constexpr ::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId,::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*>& __get_properties() ;

constexpr ::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId,::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*> const& __get_properties() const;

constexpr void __set_timing(::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<::UnityEngine::UIElements::Rotate>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<::UnityEngine::UIElements::Rotate>>*>  value) ;

constexpr ::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<::UnityEngine::UIElements::Rotate>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<::UnityEngine::UIElements::Rotate>>*>& __get_timing() ;

constexpr ::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<::UnityEngine::UIElements::Rotate>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<::UnityEngine::UIElements::Rotate>>*> const& __get_timing() const;

constexpr void __set_style(::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<::UnityEngine::UIElements::Rotate>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<::UnityEngine::UIElements::Rotate>>*>  value) ;

constexpr ::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<::UnityEngine::UIElements::Rotate>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<::UnityEngine::UIElements::Rotate>>*>& __get_style() ;

constexpr ::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<::UnityEngine::UIElements::Rotate>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<::UnityEngine::UIElements::Rotate>>*> const& __get_style() const;

constexpr void __set_count(int32_t  value) ;

constexpr int32_t& __get_count() ;

constexpr int32_t const& __get_count() const;

constexpr void __set_indices(::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>*  value) ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>* __get_indices() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>*> __get_indices() const;

/// @brief Method get_capacity addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t get_capacity() ;

/// @brief Method set_capacity addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_capacity(int32_t  value) ;

/// @brief Method LocalInit addr 0x0 size 0xffffffffffffffff virtual false final false
inline void LocalInit() ;

/// @brief Method Create addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::UnityEngine::UIElements::__StylePropertyAnimationSystem__AnimationDataSet_2<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<::UnityEngine::UIElements::Rotate>,::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<::UnityEngine::UIElements::Rotate>> Create() ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool IndexOf(::UnityEngine::UIElements::VisualElement*  ve, ::UnityEngine::UIElements::StyleSheets::StylePropertyId  prop, ByRef<int32_t>  index) ;

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Add(::UnityEngine::UIElements::VisualElement*  owner, ::UnityEngine::UIElements::StyleSheets::StylePropertyId  prop, ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<::UnityEngine::UIElements::Rotate>  timingData, ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<::UnityEngine::UIElements::Rotate>  styleData) ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Remove(int32_t  cancelledIndex) ;

/// @brief Method Replace addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Replace(int32_t  index, ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<::UnityEngine::UIElements::Rotate>  timingData, ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<::UnityEngine::UIElements::Rotate>  styleData) ;

/// @brief Method RemoveAll addr 0x0 size 0xffffffffffffffff virtual false final false
inline void RemoveAll(::UnityEngine::UIElements::VisualElement*  ve) ;

/// @brief Method RemoveAll addr 0x0 size 0xffffffffffffffff virtual false final false
inline void RemoveAll() ;

/// @brief Method GetActivePropertiesForElement addr 0x0 size 0xffffffffffffffff virtual false final false
inline void GetActivePropertiesForElement(::UnityEngine::UIElements::VisualElement*  ve, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*  outProperties) ;

// Ctor Parameters [CppParam { name: "elements", ty: "::ArrayW<::UnityEngine::UIElements::VisualElement*,::Array<::UnityEngine::UIElements::VisualElement*>*>", modifiers: "", def_value: None }, CppParam { name: "properties", ty: "::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId,::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*>", modifiers: "", def_value: None }, CppParam { name: "timing", ty: "::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<::UnityEngine::UIElements::Rotate>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<::UnityEngine::UIElements::Rotate>>*>", modifiers: "", def_value: None }, CppParam { name: "style", ty: "::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<::UnityEngine::UIElements::Rotate>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<::UnityEngine::UIElements::Rotate>>*>", modifiers: "", def_value: None }, CppParam { name: "count", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "indices", ty: "::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>*", modifiers: "", def_value: None }]
constexpr __StylePropertyAnimationSystem__AnimationDataSet_2(::ArrayW<::UnityEngine::UIElements::VisualElement*,::Array<::UnityEngine::UIElements::VisualElement*>*>  elements, ::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId,::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*>  properties, ::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<::UnityEngine::UIElements::Rotate>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<::UnityEngine::UIElements::Rotate>>*>  timing, ::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<::UnityEngine::UIElements::Rotate>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<::UnityEngine::UIElements::Rotate>>*>  style, int32_t  count, ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>*  indices) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __StylePropertyAnimationSystem__AnimationDataSet_2(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x30>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __StylePropertyAnimationSystem__AnimationDataSet_2()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: ::AnimationDataSet`2
namespace UnityEngine::UIElements {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T_cordlgen_0,::il2cpp_utils::il2cpp_reference_type T_cordlgen_1>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6833))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6833), inst: 6505 })
// CS Name: ::StylePropertyAnimationSystem::AnimationDataSet`2<TTimingData,TStyleData>
struct CORDL_TYPE __StylePropertyAnimationSystem__AnimationDataSet_2<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<T_cordlgen_0>,::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<T_cordlgen_1>> : public ::bs_hook::ValueTypeWrapper<0x30> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field elements offset 0x0
 __declspec(property(get=__get_elements, put=__set_elements)) ::ArrayW<::UnityEngine::UIElements::VisualElement*,::Array<::UnityEngine::UIElements::VisualElement*>*>  elements;

/// @brief Field properties offset 0x8
 __declspec(property(get=__get_properties, put=__set_properties)) ::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId,::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*>  properties;

/// @brief Field timing offset 0x10
 __declspec(property(get=__get_timing, put=__set_timing)) ::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<T_cordlgen_0>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<T_cordlgen_0>>*>  timing;

/// @brief Field style offset 0x18
 __declspec(property(get=__get_style, put=__set_style)) ::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<T_cordlgen_1>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<T_cordlgen_1>>*>  style;

/// @brief Field count offset 0x20
 __declspec(property(get=__get_count, put=__set_count)) int32_t  count;

/// @brief Field indices offset 0x28
 __declspec(property(get=__get_indices, put=__set_indices)) ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>*  indices;

 __declspec(property(get=get_capacity, put=set_capacity)) int32_t  capacity;

constexpr void __set_elements(::ArrayW<::UnityEngine::UIElements::VisualElement*,::Array<::UnityEngine::UIElements::VisualElement*>*>  value) ;

constexpr ::ArrayW<::UnityEngine::UIElements::VisualElement*,::Array<::UnityEngine::UIElements::VisualElement*>*>& __get_elements() ;

constexpr ::ArrayW<::UnityEngine::UIElements::VisualElement*,::Array<::UnityEngine::UIElements::VisualElement*>*> const& __get_elements() const;

constexpr void __set_properties(::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId,::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*>  value) ;

constexpr ::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId,::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*>& __get_properties() ;

constexpr ::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId,::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*> const& __get_properties() const;

constexpr void __set_timing(::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<T_cordlgen_0>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<T_cordlgen_0>>*>  value) ;

constexpr ::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<T_cordlgen_0>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<T_cordlgen_0>>*>& __get_timing() ;

constexpr ::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<T_cordlgen_0>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<T_cordlgen_0>>*> const& __get_timing() const;

constexpr void __set_style(::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<T_cordlgen_1>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<T_cordlgen_1>>*>  value) ;

constexpr ::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<T_cordlgen_1>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<T_cordlgen_1>>*>& __get_style() ;

constexpr ::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<T_cordlgen_1>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<T_cordlgen_1>>*> const& __get_style() const;

constexpr void __set_count(int32_t  value) ;

constexpr int32_t& __get_count() ;

constexpr int32_t const& __get_count() const;

constexpr void __set_indices(::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>*  value) ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>* __get_indices() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>*> __get_indices() const;

/// @brief Method get_capacity addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t get_capacity() ;

/// @brief Method set_capacity addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_capacity(int32_t  value) ;

/// @brief Method LocalInit addr 0x0 size 0xffffffffffffffff virtual false final false
inline void LocalInit() ;

/// @brief Method Create addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::UnityEngine::UIElements::__StylePropertyAnimationSystem__AnimationDataSet_2<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<T_cordlgen_0>,::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<T_cordlgen_1>> Create() ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool IndexOf(::UnityEngine::UIElements::VisualElement*  ve, ::UnityEngine::UIElements::StyleSheets::StylePropertyId  prop, ByRef<int32_t>  index) ;

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Add(::UnityEngine::UIElements::VisualElement*  owner, ::UnityEngine::UIElements::StyleSheets::StylePropertyId  prop, ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<T_cordlgen_0>  timingData, ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<T_cordlgen_1>  styleData) ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Remove(int32_t  cancelledIndex) ;

/// @brief Method Replace addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Replace(int32_t  index, ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<T_cordlgen_0>  timingData, ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<T_cordlgen_1>  styleData) ;

/// @brief Method RemoveAll addr 0x0 size 0xffffffffffffffff virtual false final false
inline void RemoveAll(::UnityEngine::UIElements::VisualElement*  ve) ;

/// @brief Method RemoveAll addr 0x0 size 0xffffffffffffffff virtual false final false
inline void RemoveAll() ;

/// @brief Method GetActivePropertiesForElement addr 0x0 size 0xffffffffffffffff virtual false final false
inline void GetActivePropertiesForElement(::UnityEngine::UIElements::VisualElement*  ve, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*  outProperties) ;

// Ctor Parameters [CppParam { name: "elements", ty: "::ArrayW<::UnityEngine::UIElements::VisualElement*,::Array<::UnityEngine::UIElements::VisualElement*>*>", modifiers: "", def_value: None }, CppParam { name: "properties", ty: "::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId,::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*>", modifiers: "", def_value: None }, CppParam { name: "timing", ty: "::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<T_cordlgen_0>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<T_cordlgen_0>>*>", modifiers: "", def_value: None }, CppParam { name: "style", ty: "::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<T_cordlgen_1>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<T_cordlgen_1>>*>", modifiers: "", def_value: None }, CppParam { name: "count", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "indices", ty: "::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>*", modifiers: "", def_value: None }]
constexpr __StylePropertyAnimationSystem__AnimationDataSet_2(::ArrayW<::UnityEngine::UIElements::VisualElement*,::Array<::UnityEngine::UIElements::VisualElement*>*>  elements, ::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId,::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*>  properties, ::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<T_cordlgen_0>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<T_cordlgen_0>>*>  timing, ::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<T_cordlgen_1>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<T_cordlgen_1>>*>  style, int32_t  count, ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>*  indices) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __StylePropertyAnimationSystem__AnimationDataSet_2(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x30>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __StylePropertyAnimationSystem__AnimationDataSet_2()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: ::AnimationDataSet`2
namespace UnityEngine::UIElements {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6833))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6833), inst: 6504 })
// CS Name: ::StylePropertyAnimationSystem::AnimationDataSet`2<TTimingData,TStyleData>
struct CORDL_TYPE __StylePropertyAnimationSystem__AnimationDataSet_2<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<::UnityEngine::UIElements::Length>,::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<::UnityEngine::UIElements::Length>> : public ::bs_hook::ValueTypeWrapper<0x30> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field elements offset 0x0
 __declspec(property(get=__get_elements, put=__set_elements)) ::ArrayW<::UnityEngine::UIElements::VisualElement*,::Array<::UnityEngine::UIElements::VisualElement*>*>  elements;

/// @brief Field properties offset 0x8
 __declspec(property(get=__get_properties, put=__set_properties)) ::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId,::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*>  properties;

/// @brief Field timing offset 0x10
 __declspec(property(get=__get_timing, put=__set_timing)) ::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<::UnityEngine::UIElements::Length>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<::UnityEngine::UIElements::Length>>*>  timing;

/// @brief Field style offset 0x18
 __declspec(property(get=__get_style, put=__set_style)) ::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<::UnityEngine::UIElements::Length>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<::UnityEngine::UIElements::Length>>*>  style;

/// @brief Field count offset 0x20
 __declspec(property(get=__get_count, put=__set_count)) int32_t  count;

/// @brief Field indices offset 0x28
 __declspec(property(get=__get_indices, put=__set_indices)) ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>*  indices;

 __declspec(property(get=get_capacity, put=set_capacity)) int32_t  capacity;

constexpr void __set_elements(::ArrayW<::UnityEngine::UIElements::VisualElement*,::Array<::UnityEngine::UIElements::VisualElement*>*>  value) ;

constexpr ::ArrayW<::UnityEngine::UIElements::VisualElement*,::Array<::UnityEngine::UIElements::VisualElement*>*>& __get_elements() ;

constexpr ::ArrayW<::UnityEngine::UIElements::VisualElement*,::Array<::UnityEngine::UIElements::VisualElement*>*> const& __get_elements() const;

constexpr void __set_properties(::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId,::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*>  value) ;

constexpr ::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId,::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*>& __get_properties() ;

constexpr ::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId,::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*> const& __get_properties() const;

constexpr void __set_timing(::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<::UnityEngine::UIElements::Length>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<::UnityEngine::UIElements::Length>>*>  value) ;

constexpr ::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<::UnityEngine::UIElements::Length>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<::UnityEngine::UIElements::Length>>*>& __get_timing() ;

constexpr ::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<::UnityEngine::UIElements::Length>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<::UnityEngine::UIElements::Length>>*> const& __get_timing() const;

constexpr void __set_style(::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<::UnityEngine::UIElements::Length>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<::UnityEngine::UIElements::Length>>*>  value) ;

constexpr ::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<::UnityEngine::UIElements::Length>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<::UnityEngine::UIElements::Length>>*>& __get_style() ;

constexpr ::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<::UnityEngine::UIElements::Length>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<::UnityEngine::UIElements::Length>>*> const& __get_style() const;

constexpr void __set_count(int32_t  value) ;

constexpr int32_t& __get_count() ;

constexpr int32_t const& __get_count() const;

constexpr void __set_indices(::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>*  value) ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>* __get_indices() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>*> __get_indices() const;

/// @brief Method get_capacity addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t get_capacity() ;

/// @brief Method set_capacity addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_capacity(int32_t  value) ;

/// @brief Method LocalInit addr 0x0 size 0xffffffffffffffff virtual false final false
inline void LocalInit() ;

/// @brief Method Create addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::UnityEngine::UIElements::__StylePropertyAnimationSystem__AnimationDataSet_2<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<::UnityEngine::UIElements::Length>,::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<::UnityEngine::UIElements::Length>> Create() ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool IndexOf(::UnityEngine::UIElements::VisualElement*  ve, ::UnityEngine::UIElements::StyleSheets::StylePropertyId  prop, ByRef<int32_t>  index) ;

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Add(::UnityEngine::UIElements::VisualElement*  owner, ::UnityEngine::UIElements::StyleSheets::StylePropertyId  prop, ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<::UnityEngine::UIElements::Length>  timingData, ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<::UnityEngine::UIElements::Length>  styleData) ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Remove(int32_t  cancelledIndex) ;

/// @brief Method Replace addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Replace(int32_t  index, ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<::UnityEngine::UIElements::Length>  timingData, ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<::UnityEngine::UIElements::Length>  styleData) ;

/// @brief Method RemoveAll addr 0x0 size 0xffffffffffffffff virtual false final false
inline void RemoveAll(::UnityEngine::UIElements::VisualElement*  ve) ;

/// @brief Method RemoveAll addr 0x0 size 0xffffffffffffffff virtual false final false
inline void RemoveAll() ;

/// @brief Method GetActivePropertiesForElement addr 0x0 size 0xffffffffffffffff virtual false final false
inline void GetActivePropertiesForElement(::UnityEngine::UIElements::VisualElement*  ve, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*  outProperties) ;

// Ctor Parameters [CppParam { name: "elements", ty: "::ArrayW<::UnityEngine::UIElements::VisualElement*,::Array<::UnityEngine::UIElements::VisualElement*>*>", modifiers: "", def_value: None }, CppParam { name: "properties", ty: "::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId,::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*>", modifiers: "", def_value: None }, CppParam { name: "timing", ty: "::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<::UnityEngine::UIElements::Length>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<::UnityEngine::UIElements::Length>>*>", modifiers: "", def_value: None }, CppParam { name: "style", ty: "::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<::UnityEngine::UIElements::Length>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<::UnityEngine::UIElements::Length>>*>", modifiers: "", def_value: None }, CppParam { name: "count", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "indices", ty: "::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>*", modifiers: "", def_value: None }]
constexpr __StylePropertyAnimationSystem__AnimationDataSet_2(::ArrayW<::UnityEngine::UIElements::VisualElement*,::Array<::UnityEngine::UIElements::VisualElement*>*>  elements, ::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId,::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*>  properties, ::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<::UnityEngine::UIElements::Length>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<::UnityEngine::UIElements::Length>>*>  timing, ::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<::UnityEngine::UIElements::Length>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<::UnityEngine::UIElements::Length>>*>  style, int32_t  count, ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>*  indices) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __StylePropertyAnimationSystem__AnimationDataSet_2(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x30>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __StylePropertyAnimationSystem__AnimationDataSet_2()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: ::AnimationDataSet`2
namespace UnityEngine::UIElements {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6833))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6833), inst: 6503 })
// CS Name: ::StylePropertyAnimationSystem::AnimationDataSet`2<TTimingData,TStyleData>
struct CORDL_TYPE __StylePropertyAnimationSystem__AnimationDataSet_2<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<int32_t>,::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<int32_t>> : public ::bs_hook::ValueTypeWrapper<0x30> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field elements offset 0x0
 __declspec(property(get=__get_elements, put=__set_elements)) ::ArrayW<::UnityEngine::UIElements::VisualElement*,::Array<::UnityEngine::UIElements::VisualElement*>*>  elements;

/// @brief Field properties offset 0x8
 __declspec(property(get=__get_properties, put=__set_properties)) ::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId,::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*>  properties;

/// @brief Field timing offset 0x10
 __declspec(property(get=__get_timing, put=__set_timing)) ::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<int32_t>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<int32_t>>*>  timing;

/// @brief Field style offset 0x18
 __declspec(property(get=__get_style, put=__set_style)) ::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<int32_t>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<int32_t>>*>  style;

/// @brief Field count offset 0x20
 __declspec(property(get=__get_count, put=__set_count)) int32_t  count;

/// @brief Field indices offset 0x28
 __declspec(property(get=__get_indices, put=__set_indices)) ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>*  indices;

 __declspec(property(get=get_capacity, put=set_capacity)) int32_t  capacity;

constexpr void __set_elements(::ArrayW<::UnityEngine::UIElements::VisualElement*,::Array<::UnityEngine::UIElements::VisualElement*>*>  value) ;

constexpr ::ArrayW<::UnityEngine::UIElements::VisualElement*,::Array<::UnityEngine::UIElements::VisualElement*>*>& __get_elements() ;

constexpr ::ArrayW<::UnityEngine::UIElements::VisualElement*,::Array<::UnityEngine::UIElements::VisualElement*>*> const& __get_elements() const;

constexpr void __set_properties(::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId,::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*>  value) ;

constexpr ::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId,::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*>& __get_properties() ;

constexpr ::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId,::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*> const& __get_properties() const;

constexpr void __set_timing(::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<int32_t>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<int32_t>>*>  value) ;

constexpr ::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<int32_t>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<int32_t>>*>& __get_timing() ;

constexpr ::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<int32_t>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<int32_t>>*> const& __get_timing() const;

constexpr void __set_style(::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<int32_t>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<int32_t>>*>  value) ;

constexpr ::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<int32_t>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<int32_t>>*>& __get_style() ;

constexpr ::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<int32_t>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<int32_t>>*> const& __get_style() const;

constexpr void __set_count(int32_t  value) ;

constexpr int32_t& __get_count() ;

constexpr int32_t const& __get_count() const;

constexpr void __set_indices(::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>*  value) ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>* __get_indices() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>*> __get_indices() const;

/// @brief Method get_capacity addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t get_capacity() ;

/// @brief Method set_capacity addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_capacity(int32_t  value) ;

/// @brief Method LocalInit addr 0x0 size 0xffffffffffffffff virtual false final false
inline void LocalInit() ;

/// @brief Method Create addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::UnityEngine::UIElements::__StylePropertyAnimationSystem__AnimationDataSet_2<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<int32_t>,::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<int32_t>> Create() ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool IndexOf(::UnityEngine::UIElements::VisualElement*  ve, ::UnityEngine::UIElements::StyleSheets::StylePropertyId  prop, ByRef<int32_t>  index) ;

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Add(::UnityEngine::UIElements::VisualElement*  owner, ::UnityEngine::UIElements::StyleSheets::StylePropertyId  prop, ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<int32_t>  timingData, ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<int32_t>  styleData) ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Remove(int32_t  cancelledIndex) ;

/// @brief Method Replace addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Replace(int32_t  index, ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<int32_t>  timingData, ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<int32_t>  styleData) ;

/// @brief Method RemoveAll addr 0x0 size 0xffffffffffffffff virtual false final false
inline void RemoveAll(::UnityEngine::UIElements::VisualElement*  ve) ;

/// @brief Method RemoveAll addr 0x0 size 0xffffffffffffffff virtual false final false
inline void RemoveAll() ;

/// @brief Method GetActivePropertiesForElement addr 0x0 size 0xffffffffffffffff virtual false final false
inline void GetActivePropertiesForElement(::UnityEngine::UIElements::VisualElement*  ve, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*  outProperties) ;

// Ctor Parameters [CppParam { name: "elements", ty: "::ArrayW<::UnityEngine::UIElements::VisualElement*,::Array<::UnityEngine::UIElements::VisualElement*>*>", modifiers: "", def_value: None }, CppParam { name: "properties", ty: "::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId,::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*>", modifiers: "", def_value: None }, CppParam { name: "timing", ty: "::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<int32_t>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<int32_t>>*>", modifiers: "", def_value: None }, CppParam { name: "style", ty: "::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<int32_t>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<int32_t>>*>", modifiers: "", def_value: None }, CppParam { name: "count", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "indices", ty: "::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>*", modifiers: "", def_value: None }]
constexpr __StylePropertyAnimationSystem__AnimationDataSet_2(::ArrayW<::UnityEngine::UIElements::VisualElement*,::Array<::UnityEngine::UIElements::VisualElement*>*>  elements, ::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId,::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*>  properties, ::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<int32_t>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<int32_t>>*>  timing, ::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<int32_t>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<int32_t>>*>  style, int32_t  count, ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>*  indices) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __StylePropertyAnimationSystem__AnimationDataSet_2(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x30>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __StylePropertyAnimationSystem__AnimationDataSet_2()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: ::AnimationDataSet`2
namespace UnityEngine::UIElements {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6833))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6833), inst: 6502 })
// CS Name: ::StylePropertyAnimationSystem::AnimationDataSet`2<TTimingData,TStyleData>
struct CORDL_TYPE __StylePropertyAnimationSystem__AnimationDataSet_2<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<::UnityEngine::UIElements::FontDefinition>,::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<::UnityEngine::UIElements::FontDefinition>> : public ::bs_hook::ValueTypeWrapper<0x30> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field elements offset 0x0
 __declspec(property(get=__get_elements, put=__set_elements)) ::ArrayW<::UnityEngine::UIElements::VisualElement*,::Array<::UnityEngine::UIElements::VisualElement*>*>  elements;

/// @brief Field properties offset 0x8
 __declspec(property(get=__get_properties, put=__set_properties)) ::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId,::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*>  properties;

/// @brief Field timing offset 0x10
 __declspec(property(get=__get_timing, put=__set_timing)) ::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<::UnityEngine::UIElements::FontDefinition>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<::UnityEngine::UIElements::FontDefinition>>*>  timing;

/// @brief Field style offset 0x18
 __declspec(property(get=__get_style, put=__set_style)) ::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<::UnityEngine::UIElements::FontDefinition>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<::UnityEngine::UIElements::FontDefinition>>*>  style;

/// @brief Field count offset 0x20
 __declspec(property(get=__get_count, put=__set_count)) int32_t  count;

/// @brief Field indices offset 0x28
 __declspec(property(get=__get_indices, put=__set_indices)) ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>*  indices;

 __declspec(property(get=get_capacity, put=set_capacity)) int32_t  capacity;

constexpr void __set_elements(::ArrayW<::UnityEngine::UIElements::VisualElement*,::Array<::UnityEngine::UIElements::VisualElement*>*>  value) ;

constexpr ::ArrayW<::UnityEngine::UIElements::VisualElement*,::Array<::UnityEngine::UIElements::VisualElement*>*>& __get_elements() ;

constexpr ::ArrayW<::UnityEngine::UIElements::VisualElement*,::Array<::UnityEngine::UIElements::VisualElement*>*> const& __get_elements() const;

constexpr void __set_properties(::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId,::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*>  value) ;

constexpr ::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId,::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*>& __get_properties() ;

constexpr ::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId,::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*> const& __get_properties() const;

constexpr void __set_timing(::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<::UnityEngine::UIElements::FontDefinition>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<::UnityEngine::UIElements::FontDefinition>>*>  value) ;

constexpr ::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<::UnityEngine::UIElements::FontDefinition>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<::UnityEngine::UIElements::FontDefinition>>*>& __get_timing() ;

constexpr ::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<::UnityEngine::UIElements::FontDefinition>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<::UnityEngine::UIElements::FontDefinition>>*> const& __get_timing() const;

constexpr void __set_style(::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<::UnityEngine::UIElements::FontDefinition>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<::UnityEngine::UIElements::FontDefinition>>*>  value) ;

constexpr ::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<::UnityEngine::UIElements::FontDefinition>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<::UnityEngine::UIElements::FontDefinition>>*>& __get_style() ;

constexpr ::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<::UnityEngine::UIElements::FontDefinition>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<::UnityEngine::UIElements::FontDefinition>>*> const& __get_style() const;

constexpr void __set_count(int32_t  value) ;

constexpr int32_t& __get_count() ;

constexpr int32_t const& __get_count() const;

constexpr void __set_indices(::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>*  value) ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>* __get_indices() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>*> __get_indices() const;

/// @brief Method get_capacity addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t get_capacity() ;

/// @brief Method set_capacity addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_capacity(int32_t  value) ;

/// @brief Method LocalInit addr 0x0 size 0xffffffffffffffff virtual false final false
inline void LocalInit() ;

/// @brief Method Create addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::UnityEngine::UIElements::__StylePropertyAnimationSystem__AnimationDataSet_2<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<::UnityEngine::UIElements::FontDefinition>,::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<::UnityEngine::UIElements::FontDefinition>> Create() ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool IndexOf(::UnityEngine::UIElements::VisualElement*  ve, ::UnityEngine::UIElements::StyleSheets::StylePropertyId  prop, ByRef<int32_t>  index) ;

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Add(::UnityEngine::UIElements::VisualElement*  owner, ::UnityEngine::UIElements::StyleSheets::StylePropertyId  prop, ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<::UnityEngine::UIElements::FontDefinition>  timingData, ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<::UnityEngine::UIElements::FontDefinition>  styleData) ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Remove(int32_t  cancelledIndex) ;

/// @brief Method Replace addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Replace(int32_t  index, ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<::UnityEngine::UIElements::FontDefinition>  timingData, ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<::UnityEngine::UIElements::FontDefinition>  styleData) ;

/// @brief Method RemoveAll addr 0x0 size 0xffffffffffffffff virtual false final false
inline void RemoveAll(::UnityEngine::UIElements::VisualElement*  ve) ;

/// @brief Method RemoveAll addr 0x0 size 0xffffffffffffffff virtual false final false
inline void RemoveAll() ;

/// @brief Method GetActivePropertiesForElement addr 0x0 size 0xffffffffffffffff virtual false final false
inline void GetActivePropertiesForElement(::UnityEngine::UIElements::VisualElement*  ve, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*  outProperties) ;

// Ctor Parameters [CppParam { name: "elements", ty: "::ArrayW<::UnityEngine::UIElements::VisualElement*,::Array<::UnityEngine::UIElements::VisualElement*>*>", modifiers: "", def_value: None }, CppParam { name: "properties", ty: "::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId,::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*>", modifiers: "", def_value: None }, CppParam { name: "timing", ty: "::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<::UnityEngine::UIElements::FontDefinition>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<::UnityEngine::UIElements::FontDefinition>>*>", modifiers: "", def_value: None }, CppParam { name: "style", ty: "::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<::UnityEngine::UIElements::FontDefinition>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<::UnityEngine::UIElements::FontDefinition>>*>", modifiers: "", def_value: None }, CppParam { name: "count", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "indices", ty: "::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>*", modifiers: "", def_value: None }]
constexpr __StylePropertyAnimationSystem__AnimationDataSet_2(::ArrayW<::UnityEngine::UIElements::VisualElement*,::Array<::UnityEngine::UIElements::VisualElement*>*>  elements, ::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId,::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*>  properties, ::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<::UnityEngine::UIElements::FontDefinition>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<::UnityEngine::UIElements::FontDefinition>>*>  timing, ::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<::UnityEngine::UIElements::FontDefinition>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<::UnityEngine::UIElements::FontDefinition>>*>  style, int32_t  count, ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>*  indices) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __StylePropertyAnimationSystem__AnimationDataSet_2(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x30>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __StylePropertyAnimationSystem__AnimationDataSet_2()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: ::AnimationDataSet`2
namespace UnityEngine::UIElements {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6833))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6833), inst: 6501 })
// CS Name: ::StylePropertyAnimationSystem::AnimationDataSet`2<TTimingData,TStyleData>
struct CORDL_TYPE __StylePropertyAnimationSystem__AnimationDataSet_2<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<::UnityEngine::Color>,::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<::UnityEngine::Color>> : public ::bs_hook::ValueTypeWrapper<0x30> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field elements offset 0x0
 __declspec(property(get=__get_elements, put=__set_elements)) ::ArrayW<::UnityEngine::UIElements::VisualElement*,::Array<::UnityEngine::UIElements::VisualElement*>*>  elements;

/// @brief Field properties offset 0x8
 __declspec(property(get=__get_properties, put=__set_properties)) ::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId,::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*>  properties;

/// @brief Field timing offset 0x10
 __declspec(property(get=__get_timing, put=__set_timing)) ::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<::UnityEngine::Color>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<::UnityEngine::Color>>*>  timing;

/// @brief Field style offset 0x18
 __declspec(property(get=__get_style, put=__set_style)) ::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<::UnityEngine::Color>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<::UnityEngine::Color>>*>  style;

/// @brief Field count offset 0x20
 __declspec(property(get=__get_count, put=__set_count)) int32_t  count;

/// @brief Field indices offset 0x28
 __declspec(property(get=__get_indices, put=__set_indices)) ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>*  indices;

 __declspec(property(get=get_capacity, put=set_capacity)) int32_t  capacity;

constexpr void __set_elements(::ArrayW<::UnityEngine::UIElements::VisualElement*,::Array<::UnityEngine::UIElements::VisualElement*>*>  value) ;

constexpr ::ArrayW<::UnityEngine::UIElements::VisualElement*,::Array<::UnityEngine::UIElements::VisualElement*>*>& __get_elements() ;

constexpr ::ArrayW<::UnityEngine::UIElements::VisualElement*,::Array<::UnityEngine::UIElements::VisualElement*>*> const& __get_elements() const;

constexpr void __set_properties(::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId,::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*>  value) ;

constexpr ::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId,::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*>& __get_properties() ;

constexpr ::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId,::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*> const& __get_properties() const;

constexpr void __set_timing(::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<::UnityEngine::Color>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<::UnityEngine::Color>>*>  value) ;

constexpr ::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<::UnityEngine::Color>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<::UnityEngine::Color>>*>& __get_timing() ;

constexpr ::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<::UnityEngine::Color>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<::UnityEngine::Color>>*> const& __get_timing() const;

constexpr void __set_style(::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<::UnityEngine::Color>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<::UnityEngine::Color>>*>  value) ;

constexpr ::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<::UnityEngine::Color>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<::UnityEngine::Color>>*>& __get_style() ;

constexpr ::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<::UnityEngine::Color>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<::UnityEngine::Color>>*> const& __get_style() const;

constexpr void __set_count(int32_t  value) ;

constexpr int32_t& __get_count() ;

constexpr int32_t const& __get_count() const;

constexpr void __set_indices(::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>*  value) ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>* __get_indices() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>*> __get_indices() const;

/// @brief Method get_capacity addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t get_capacity() ;

/// @brief Method set_capacity addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_capacity(int32_t  value) ;

/// @brief Method LocalInit addr 0x0 size 0xffffffffffffffff virtual false final false
inline void LocalInit() ;

/// @brief Method Create addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::UnityEngine::UIElements::__StylePropertyAnimationSystem__AnimationDataSet_2<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<::UnityEngine::Color>,::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<::UnityEngine::Color>> Create() ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool IndexOf(::UnityEngine::UIElements::VisualElement*  ve, ::UnityEngine::UIElements::StyleSheets::StylePropertyId  prop, ByRef<int32_t>  index) ;

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Add(::UnityEngine::UIElements::VisualElement*  owner, ::UnityEngine::UIElements::StyleSheets::StylePropertyId  prop, ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<::UnityEngine::Color>  timingData, ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<::UnityEngine::Color>  styleData) ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Remove(int32_t  cancelledIndex) ;

/// @brief Method Replace addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Replace(int32_t  index, ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<::UnityEngine::Color>  timingData, ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<::UnityEngine::Color>  styleData) ;

/// @brief Method RemoveAll addr 0x0 size 0xffffffffffffffff virtual false final false
inline void RemoveAll(::UnityEngine::UIElements::VisualElement*  ve) ;

/// @brief Method RemoveAll addr 0x0 size 0xffffffffffffffff virtual false final false
inline void RemoveAll() ;

/// @brief Method GetActivePropertiesForElement addr 0x0 size 0xffffffffffffffff virtual false final false
inline void GetActivePropertiesForElement(::UnityEngine::UIElements::VisualElement*  ve, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*  outProperties) ;

// Ctor Parameters [CppParam { name: "elements", ty: "::ArrayW<::UnityEngine::UIElements::VisualElement*,::Array<::UnityEngine::UIElements::VisualElement*>*>", modifiers: "", def_value: None }, CppParam { name: "properties", ty: "::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId,::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*>", modifiers: "", def_value: None }, CppParam { name: "timing", ty: "::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<::UnityEngine::Color>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<::UnityEngine::Color>>*>", modifiers: "", def_value: None }, CppParam { name: "style", ty: "::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<::UnityEngine::Color>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<::UnityEngine::Color>>*>", modifiers: "", def_value: None }, CppParam { name: "count", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "indices", ty: "::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>*", modifiers: "", def_value: None }]
constexpr __StylePropertyAnimationSystem__AnimationDataSet_2(::ArrayW<::UnityEngine::UIElements::VisualElement*,::Array<::UnityEngine::UIElements::VisualElement*>*>  elements, ::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId,::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*>  properties, ::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<::UnityEngine::Color>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<::UnityEngine::Color>>*>  timing, ::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<::UnityEngine::Color>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<::UnityEngine::Color>>*>  style, int32_t  count, ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>*  indices) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __StylePropertyAnimationSystem__AnimationDataSet_2(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x30>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __StylePropertyAnimationSystem__AnimationDataSet_2()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: ::AnimationDataSet`2
namespace UnityEngine::UIElements {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6833))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6833), inst: 6500 })
// CS Name: ::StylePropertyAnimationSystem::AnimationDataSet`2<TTimingData,TStyleData>
struct CORDL_TYPE __StylePropertyAnimationSystem__AnimationDataSet_2<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<::UnityEngine::UIElements::Background>,::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<::UnityEngine::UIElements::Background>> : public ::bs_hook::ValueTypeWrapper<0x30> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field elements offset 0x0
 __declspec(property(get=__get_elements, put=__set_elements)) ::ArrayW<::UnityEngine::UIElements::VisualElement*,::Array<::UnityEngine::UIElements::VisualElement*>*>  elements;

/// @brief Field properties offset 0x8
 __declspec(property(get=__get_properties, put=__set_properties)) ::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId,::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*>  properties;

/// @brief Field timing offset 0x10
 __declspec(property(get=__get_timing, put=__set_timing)) ::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<::UnityEngine::UIElements::Background>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<::UnityEngine::UIElements::Background>>*>  timing;

/// @brief Field style offset 0x18
 __declspec(property(get=__get_style, put=__set_style)) ::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<::UnityEngine::UIElements::Background>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<::UnityEngine::UIElements::Background>>*>  style;

/// @brief Field count offset 0x20
 __declspec(property(get=__get_count, put=__set_count)) int32_t  count;

/// @brief Field indices offset 0x28
 __declspec(property(get=__get_indices, put=__set_indices)) ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>*  indices;

 __declspec(property(get=get_capacity, put=set_capacity)) int32_t  capacity;

constexpr void __set_elements(::ArrayW<::UnityEngine::UIElements::VisualElement*,::Array<::UnityEngine::UIElements::VisualElement*>*>  value) ;

constexpr ::ArrayW<::UnityEngine::UIElements::VisualElement*,::Array<::UnityEngine::UIElements::VisualElement*>*>& __get_elements() ;

constexpr ::ArrayW<::UnityEngine::UIElements::VisualElement*,::Array<::UnityEngine::UIElements::VisualElement*>*> const& __get_elements() const;

constexpr void __set_properties(::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId,::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*>  value) ;

constexpr ::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId,::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*>& __get_properties() ;

constexpr ::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId,::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*> const& __get_properties() const;

constexpr void __set_timing(::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<::UnityEngine::UIElements::Background>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<::UnityEngine::UIElements::Background>>*>  value) ;

constexpr ::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<::UnityEngine::UIElements::Background>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<::UnityEngine::UIElements::Background>>*>& __get_timing() ;

constexpr ::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<::UnityEngine::UIElements::Background>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<::UnityEngine::UIElements::Background>>*> const& __get_timing() const;

constexpr void __set_style(::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<::UnityEngine::UIElements::Background>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<::UnityEngine::UIElements::Background>>*>  value) ;

constexpr ::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<::UnityEngine::UIElements::Background>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<::UnityEngine::UIElements::Background>>*>& __get_style() ;

constexpr ::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<::UnityEngine::UIElements::Background>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<::UnityEngine::UIElements::Background>>*> const& __get_style() const;

constexpr void __set_count(int32_t  value) ;

constexpr int32_t& __get_count() ;

constexpr int32_t const& __get_count() const;

constexpr void __set_indices(::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>*  value) ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>* __get_indices() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>*> __get_indices() const;

/// @brief Method get_capacity addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t get_capacity() ;

/// @brief Method set_capacity addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_capacity(int32_t  value) ;

/// @brief Method LocalInit addr 0x0 size 0xffffffffffffffff virtual false final false
inline void LocalInit() ;

/// @brief Method Create addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::UnityEngine::UIElements::__StylePropertyAnimationSystem__AnimationDataSet_2<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<::UnityEngine::UIElements::Background>,::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<::UnityEngine::UIElements::Background>> Create() ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool IndexOf(::UnityEngine::UIElements::VisualElement*  ve, ::UnityEngine::UIElements::StyleSheets::StylePropertyId  prop, ByRef<int32_t>  index) ;

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Add(::UnityEngine::UIElements::VisualElement*  owner, ::UnityEngine::UIElements::StyleSheets::StylePropertyId  prop, ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<::UnityEngine::UIElements::Background>  timingData, ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<::UnityEngine::UIElements::Background>  styleData) ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Remove(int32_t  cancelledIndex) ;

/// @brief Method Replace addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Replace(int32_t  index, ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<::UnityEngine::UIElements::Background>  timingData, ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<::UnityEngine::UIElements::Background>  styleData) ;

/// @brief Method RemoveAll addr 0x0 size 0xffffffffffffffff virtual false final false
inline void RemoveAll(::UnityEngine::UIElements::VisualElement*  ve) ;

/// @brief Method RemoveAll addr 0x0 size 0xffffffffffffffff virtual false final false
inline void RemoveAll() ;

/// @brief Method GetActivePropertiesForElement addr 0x0 size 0xffffffffffffffff virtual false final false
inline void GetActivePropertiesForElement(::UnityEngine::UIElements::VisualElement*  ve, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*  outProperties) ;

// Ctor Parameters [CppParam { name: "elements", ty: "::ArrayW<::UnityEngine::UIElements::VisualElement*,::Array<::UnityEngine::UIElements::VisualElement*>*>", modifiers: "", def_value: None }, CppParam { name: "properties", ty: "::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId,::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*>", modifiers: "", def_value: None }, CppParam { name: "timing", ty: "::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<::UnityEngine::UIElements::Background>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<::UnityEngine::UIElements::Background>>*>", modifiers: "", def_value: None }, CppParam { name: "style", ty: "::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<::UnityEngine::UIElements::Background>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<::UnityEngine::UIElements::Background>>*>", modifiers: "", def_value: None }, CppParam { name: "count", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "indices", ty: "::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>*", modifiers: "", def_value: None }]
constexpr __StylePropertyAnimationSystem__AnimationDataSet_2(::ArrayW<::UnityEngine::UIElements::VisualElement*,::Array<::UnityEngine::UIElements::VisualElement*>*>  elements, ::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId,::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*>  properties, ::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<::UnityEngine::UIElements::Background>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<::UnityEngine::UIElements::Background>>*>  timing, ::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<::UnityEngine::UIElements::Background>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<::UnityEngine::UIElements::Background>>*>  style, int32_t  count, ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>*  indices) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __StylePropertyAnimationSystem__AnimationDataSet_2(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x30>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __StylePropertyAnimationSystem__AnimationDataSet_2()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: ::AnimationDataSet`2
namespace UnityEngine::UIElements {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6833))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6833), inst: 6499 })
// CS Name: ::StylePropertyAnimationSystem::AnimationDataSet`2<TTimingData,TStyleData>
struct CORDL_TYPE __StylePropertyAnimationSystem__AnimationDataSet_2<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::Translate>,::UnityEngine::UIElements::Translate> : public ::bs_hook::ValueTypeWrapper<0x30> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field elements offset 0x0
 __declspec(property(get=__get_elements, put=__set_elements)) ::ArrayW<::UnityEngine::UIElements::VisualElement*,::Array<::UnityEngine::UIElements::VisualElement*>*>  elements;

/// @brief Field properties offset 0x8
 __declspec(property(get=__get_properties, put=__set_properties)) ::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId,::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*>  properties;

/// @brief Field timing offset 0x10
 __declspec(property(get=__get_timing, put=__set_timing)) ::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::Translate>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::Translate>>*>  timing;

/// @brief Field style offset 0x18
 __declspec(property(get=__get_style, put=__set_style)) ::ArrayW<::UnityEngine::UIElements::Translate,::Array<::UnityEngine::UIElements::Translate>*>  style;

/// @brief Field count offset 0x20
 __declspec(property(get=__get_count, put=__set_count)) int32_t  count;

/// @brief Field indices offset 0x28
 __declspec(property(get=__get_indices, put=__set_indices)) ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>*  indices;

 __declspec(property(get=get_capacity, put=set_capacity)) int32_t  capacity;

constexpr void __set_elements(::ArrayW<::UnityEngine::UIElements::VisualElement*,::Array<::UnityEngine::UIElements::VisualElement*>*>  value) ;

constexpr ::ArrayW<::UnityEngine::UIElements::VisualElement*,::Array<::UnityEngine::UIElements::VisualElement*>*>& __get_elements() ;

constexpr ::ArrayW<::UnityEngine::UIElements::VisualElement*,::Array<::UnityEngine::UIElements::VisualElement*>*> const& __get_elements() const;

constexpr void __set_properties(::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId,::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*>  value) ;

constexpr ::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId,::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*>& __get_properties() ;

constexpr ::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId,::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*> const& __get_properties() const;

constexpr void __set_timing(::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::Translate>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::Translate>>*>  value) ;

constexpr ::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::Translate>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::Translate>>*>& __get_timing() ;

constexpr ::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::Translate>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::Translate>>*> const& __get_timing() const;

constexpr void __set_style(::ArrayW<::UnityEngine::UIElements::Translate,::Array<::UnityEngine::UIElements::Translate>*>  value) ;

constexpr ::ArrayW<::UnityEngine::UIElements::Translate,::Array<::UnityEngine::UIElements::Translate>*>& __get_style() ;

constexpr ::ArrayW<::UnityEngine::UIElements::Translate,::Array<::UnityEngine::UIElements::Translate>*> const& __get_style() const;

constexpr void __set_count(int32_t  value) ;

constexpr int32_t& __get_count() ;

constexpr int32_t const& __get_count() const;

constexpr void __set_indices(::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>*  value) ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>* __get_indices() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>*> __get_indices() const;

/// @brief Method get_capacity addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t get_capacity() ;

/// @brief Method set_capacity addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_capacity(int32_t  value) ;

/// @brief Method LocalInit addr 0x0 size 0xffffffffffffffff virtual false final false
inline void LocalInit() ;

/// @brief Method Create addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::UnityEngine::UIElements::__StylePropertyAnimationSystem__AnimationDataSet_2<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::Translate>,::UnityEngine::UIElements::Translate> Create() ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool IndexOf(::UnityEngine::UIElements::VisualElement*  ve, ::UnityEngine::UIElements::StyleSheets::StylePropertyId  prop, ByRef<int32_t>  index) ;

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Add(::UnityEngine::UIElements::VisualElement*  owner, ::UnityEngine::UIElements::StyleSheets::StylePropertyId  prop, ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::Translate>  timingData, ::UnityEngine::UIElements::Translate  styleData) ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Remove(int32_t  cancelledIndex) ;

/// @brief Method Replace addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Replace(int32_t  index, ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::Translate>  timingData, ::UnityEngine::UIElements::Translate  styleData) ;

/// @brief Method RemoveAll addr 0x0 size 0xffffffffffffffff virtual false final false
inline void RemoveAll(::UnityEngine::UIElements::VisualElement*  ve) ;

/// @brief Method RemoveAll addr 0x0 size 0xffffffffffffffff virtual false final false
inline void RemoveAll() ;

/// @brief Method GetActivePropertiesForElement addr 0x0 size 0xffffffffffffffff virtual false final false
inline void GetActivePropertiesForElement(::UnityEngine::UIElements::VisualElement*  ve, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*  outProperties) ;

// Ctor Parameters [CppParam { name: "elements", ty: "::ArrayW<::UnityEngine::UIElements::VisualElement*,::Array<::UnityEngine::UIElements::VisualElement*>*>", modifiers: "", def_value: None }, CppParam { name: "properties", ty: "::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId,::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*>", modifiers: "", def_value: None }, CppParam { name: "timing", ty: "::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::Translate>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::Translate>>*>", modifiers: "", def_value: None }, CppParam { name: "style", ty: "::ArrayW<::UnityEngine::UIElements::Translate,::Array<::UnityEngine::UIElements::Translate>*>", modifiers: "", def_value: None }, CppParam { name: "count", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "indices", ty: "::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>*", modifiers: "", def_value: None }]
constexpr __StylePropertyAnimationSystem__AnimationDataSet_2(::ArrayW<::UnityEngine::UIElements::VisualElement*,::Array<::UnityEngine::UIElements::VisualElement*>*>  elements, ::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId,::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*>  properties, ::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::Translate>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::Translate>>*>  timing, ::ArrayW<::UnityEngine::UIElements::Translate,::Array<::UnityEngine::UIElements::Translate>*>  style, int32_t  count, ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>*  indices) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __StylePropertyAnimationSystem__AnimationDataSet_2(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x30>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __StylePropertyAnimationSystem__AnimationDataSet_2()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: ::AnimationDataSet`2
namespace UnityEngine::UIElements {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6833))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6833), inst: 6498 })
// CS Name: ::StylePropertyAnimationSystem::AnimationDataSet`2<TTimingData,TStyleData>
struct CORDL_TYPE __StylePropertyAnimationSystem__AnimationDataSet_2<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::TransformOrigin>,::UnityEngine::UIElements::TransformOrigin> : public ::bs_hook::ValueTypeWrapper<0x30> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field elements offset 0x0
 __declspec(property(get=__get_elements, put=__set_elements)) ::ArrayW<::UnityEngine::UIElements::VisualElement*,::Array<::UnityEngine::UIElements::VisualElement*>*>  elements;

/// @brief Field properties offset 0x8
 __declspec(property(get=__get_properties, put=__set_properties)) ::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId,::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*>  properties;

/// @brief Field timing offset 0x10
 __declspec(property(get=__get_timing, put=__set_timing)) ::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::TransformOrigin>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::TransformOrigin>>*>  timing;

/// @brief Field style offset 0x18
 __declspec(property(get=__get_style, put=__set_style)) ::ArrayW<::UnityEngine::UIElements::TransformOrigin,::Array<::UnityEngine::UIElements::TransformOrigin>*>  style;

/// @brief Field count offset 0x20
 __declspec(property(get=__get_count, put=__set_count)) int32_t  count;

/// @brief Field indices offset 0x28
 __declspec(property(get=__get_indices, put=__set_indices)) ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>*  indices;

 __declspec(property(get=get_capacity, put=set_capacity)) int32_t  capacity;

constexpr void __set_elements(::ArrayW<::UnityEngine::UIElements::VisualElement*,::Array<::UnityEngine::UIElements::VisualElement*>*>  value) ;

constexpr ::ArrayW<::UnityEngine::UIElements::VisualElement*,::Array<::UnityEngine::UIElements::VisualElement*>*>& __get_elements() ;

constexpr ::ArrayW<::UnityEngine::UIElements::VisualElement*,::Array<::UnityEngine::UIElements::VisualElement*>*> const& __get_elements() const;

constexpr void __set_properties(::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId,::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*>  value) ;

constexpr ::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId,::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*>& __get_properties() ;

constexpr ::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId,::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*> const& __get_properties() const;

constexpr void __set_timing(::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::TransformOrigin>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::TransformOrigin>>*>  value) ;

constexpr ::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::TransformOrigin>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::TransformOrigin>>*>& __get_timing() ;

constexpr ::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::TransformOrigin>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::TransformOrigin>>*> const& __get_timing() const;

constexpr void __set_style(::ArrayW<::UnityEngine::UIElements::TransformOrigin,::Array<::UnityEngine::UIElements::TransformOrigin>*>  value) ;

constexpr ::ArrayW<::UnityEngine::UIElements::TransformOrigin,::Array<::UnityEngine::UIElements::TransformOrigin>*>& __get_style() ;

constexpr ::ArrayW<::UnityEngine::UIElements::TransformOrigin,::Array<::UnityEngine::UIElements::TransformOrigin>*> const& __get_style() const;

constexpr void __set_count(int32_t  value) ;

constexpr int32_t& __get_count() ;

constexpr int32_t const& __get_count() const;

constexpr void __set_indices(::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>*  value) ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>* __get_indices() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>*> __get_indices() const;

/// @brief Method get_capacity addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t get_capacity() ;

/// @brief Method set_capacity addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_capacity(int32_t  value) ;

/// @brief Method LocalInit addr 0x0 size 0xffffffffffffffff virtual false final false
inline void LocalInit() ;

/// @brief Method Create addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::UnityEngine::UIElements::__StylePropertyAnimationSystem__AnimationDataSet_2<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::TransformOrigin>,::UnityEngine::UIElements::TransformOrigin> Create() ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool IndexOf(::UnityEngine::UIElements::VisualElement*  ve, ::UnityEngine::UIElements::StyleSheets::StylePropertyId  prop, ByRef<int32_t>  index) ;

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Add(::UnityEngine::UIElements::VisualElement*  owner, ::UnityEngine::UIElements::StyleSheets::StylePropertyId  prop, ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::TransformOrigin>  timingData, ::UnityEngine::UIElements::TransformOrigin  styleData) ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Remove(int32_t  cancelledIndex) ;

/// @brief Method Replace addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Replace(int32_t  index, ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::TransformOrigin>  timingData, ::UnityEngine::UIElements::TransformOrigin  styleData) ;

/// @brief Method RemoveAll addr 0x0 size 0xffffffffffffffff virtual false final false
inline void RemoveAll(::UnityEngine::UIElements::VisualElement*  ve) ;

/// @brief Method RemoveAll addr 0x0 size 0xffffffffffffffff virtual false final false
inline void RemoveAll() ;

/// @brief Method GetActivePropertiesForElement addr 0x0 size 0xffffffffffffffff virtual false final false
inline void GetActivePropertiesForElement(::UnityEngine::UIElements::VisualElement*  ve, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*  outProperties) ;

// Ctor Parameters [CppParam { name: "elements", ty: "::ArrayW<::UnityEngine::UIElements::VisualElement*,::Array<::UnityEngine::UIElements::VisualElement*>*>", modifiers: "", def_value: None }, CppParam { name: "properties", ty: "::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId,::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*>", modifiers: "", def_value: None }, CppParam { name: "timing", ty: "::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::TransformOrigin>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::TransformOrigin>>*>", modifiers: "", def_value: None }, CppParam { name: "style", ty: "::ArrayW<::UnityEngine::UIElements::TransformOrigin,::Array<::UnityEngine::UIElements::TransformOrigin>*>", modifiers: "", def_value: None }, CppParam { name: "count", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "indices", ty: "::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>*", modifiers: "", def_value: None }]
constexpr __StylePropertyAnimationSystem__AnimationDataSet_2(::ArrayW<::UnityEngine::UIElements::VisualElement*,::Array<::UnityEngine::UIElements::VisualElement*>*>  elements, ::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId,::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*>  properties, ::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::TransformOrigin>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::TransformOrigin>>*>  timing, ::ArrayW<::UnityEngine::UIElements::TransformOrigin,::Array<::UnityEngine::UIElements::TransformOrigin>*>  style, int32_t  count, ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>*  indices) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __StylePropertyAnimationSystem__AnimationDataSet_2(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x30>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __StylePropertyAnimationSystem__AnimationDataSet_2()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: ::AnimationDataSet`2
namespace UnityEngine::UIElements {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6833))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6833), inst: 6497 })
// CS Name: ::StylePropertyAnimationSystem::AnimationDataSet`2<TTimingData,TStyleData>
struct CORDL_TYPE __StylePropertyAnimationSystem__AnimationDataSet_2<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::TextShadow>,::UnityEngine::UIElements::TextShadow> : public ::bs_hook::ValueTypeWrapper<0x30> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field elements offset 0x0
 __declspec(property(get=__get_elements, put=__set_elements)) ::ArrayW<::UnityEngine::UIElements::VisualElement*,::Array<::UnityEngine::UIElements::VisualElement*>*>  elements;

/// @brief Field properties offset 0x8
 __declspec(property(get=__get_properties, put=__set_properties)) ::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId,::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*>  properties;

/// @brief Field timing offset 0x10
 __declspec(property(get=__get_timing, put=__set_timing)) ::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::TextShadow>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::TextShadow>>*>  timing;

/// @brief Field style offset 0x18
 __declspec(property(get=__get_style, put=__set_style)) ::ArrayW<::UnityEngine::UIElements::TextShadow,::Array<::UnityEngine::UIElements::TextShadow>*>  style;

/// @brief Field count offset 0x20
 __declspec(property(get=__get_count, put=__set_count)) int32_t  count;

/// @brief Field indices offset 0x28
 __declspec(property(get=__get_indices, put=__set_indices)) ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>*  indices;

 __declspec(property(get=get_capacity, put=set_capacity)) int32_t  capacity;

constexpr void __set_elements(::ArrayW<::UnityEngine::UIElements::VisualElement*,::Array<::UnityEngine::UIElements::VisualElement*>*>  value) ;

constexpr ::ArrayW<::UnityEngine::UIElements::VisualElement*,::Array<::UnityEngine::UIElements::VisualElement*>*>& __get_elements() ;

constexpr ::ArrayW<::UnityEngine::UIElements::VisualElement*,::Array<::UnityEngine::UIElements::VisualElement*>*> const& __get_elements() const;

constexpr void __set_properties(::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId,::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*>  value) ;

constexpr ::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId,::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*>& __get_properties() ;

constexpr ::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId,::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*> const& __get_properties() const;

constexpr void __set_timing(::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::TextShadow>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::TextShadow>>*>  value) ;

constexpr ::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::TextShadow>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::TextShadow>>*>& __get_timing() ;

constexpr ::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::TextShadow>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::TextShadow>>*> const& __get_timing() const;

constexpr void __set_style(::ArrayW<::UnityEngine::UIElements::TextShadow,::Array<::UnityEngine::UIElements::TextShadow>*>  value) ;

constexpr ::ArrayW<::UnityEngine::UIElements::TextShadow,::Array<::UnityEngine::UIElements::TextShadow>*>& __get_style() ;

constexpr ::ArrayW<::UnityEngine::UIElements::TextShadow,::Array<::UnityEngine::UIElements::TextShadow>*> const& __get_style() const;

constexpr void __set_count(int32_t  value) ;

constexpr int32_t& __get_count() ;

constexpr int32_t const& __get_count() const;

constexpr void __set_indices(::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>*  value) ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>* __get_indices() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>*> __get_indices() const;

/// @brief Method get_capacity addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t get_capacity() ;

/// @brief Method set_capacity addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_capacity(int32_t  value) ;

/// @brief Method LocalInit addr 0x0 size 0xffffffffffffffff virtual false final false
inline void LocalInit() ;

/// @brief Method Create addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::UnityEngine::UIElements::__StylePropertyAnimationSystem__AnimationDataSet_2<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::TextShadow>,::UnityEngine::UIElements::TextShadow> Create() ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool IndexOf(::UnityEngine::UIElements::VisualElement*  ve, ::UnityEngine::UIElements::StyleSheets::StylePropertyId  prop, ByRef<int32_t>  index) ;

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Add(::UnityEngine::UIElements::VisualElement*  owner, ::UnityEngine::UIElements::StyleSheets::StylePropertyId  prop, ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::TextShadow>  timingData, ::UnityEngine::UIElements::TextShadow  styleData) ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Remove(int32_t  cancelledIndex) ;

/// @brief Method Replace addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Replace(int32_t  index, ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::TextShadow>  timingData, ::UnityEngine::UIElements::TextShadow  styleData) ;

/// @brief Method RemoveAll addr 0x0 size 0xffffffffffffffff virtual false final false
inline void RemoveAll(::UnityEngine::UIElements::VisualElement*  ve) ;

/// @brief Method RemoveAll addr 0x0 size 0xffffffffffffffff virtual false final false
inline void RemoveAll() ;

/// @brief Method GetActivePropertiesForElement addr 0x0 size 0xffffffffffffffff virtual false final false
inline void GetActivePropertiesForElement(::UnityEngine::UIElements::VisualElement*  ve, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*  outProperties) ;

// Ctor Parameters [CppParam { name: "elements", ty: "::ArrayW<::UnityEngine::UIElements::VisualElement*,::Array<::UnityEngine::UIElements::VisualElement*>*>", modifiers: "", def_value: None }, CppParam { name: "properties", ty: "::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId,::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*>", modifiers: "", def_value: None }, CppParam { name: "timing", ty: "::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::TextShadow>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::TextShadow>>*>", modifiers: "", def_value: None }, CppParam { name: "style", ty: "::ArrayW<::UnityEngine::UIElements::TextShadow,::Array<::UnityEngine::UIElements::TextShadow>*>", modifiers: "", def_value: None }, CppParam { name: "count", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "indices", ty: "::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>*", modifiers: "", def_value: None }]
constexpr __StylePropertyAnimationSystem__AnimationDataSet_2(::ArrayW<::UnityEngine::UIElements::VisualElement*,::Array<::UnityEngine::UIElements::VisualElement*>*>  elements, ::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId,::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*>  properties, ::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::TextShadow>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::TextShadow>>*>  timing, ::ArrayW<::UnityEngine::UIElements::TextShadow,::Array<::UnityEngine::UIElements::TextShadow>*>  style, int32_t  count, ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>*  indices) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __StylePropertyAnimationSystem__AnimationDataSet_2(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x30>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __StylePropertyAnimationSystem__AnimationDataSet_2()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: ::AnimationDataSet`2
namespace UnityEngine::UIElements {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6833))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6833), inst: 6496 })
// CS Name: ::StylePropertyAnimationSystem::AnimationDataSet`2<TTimingData,TStyleData>
struct CORDL_TYPE __StylePropertyAnimationSystem__AnimationDataSet_2<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<float_t>,float_t> : public ::bs_hook::ValueTypeWrapper<0x30> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field elements offset 0x0
 __declspec(property(get=__get_elements, put=__set_elements)) ::ArrayW<::UnityEngine::UIElements::VisualElement*,::Array<::UnityEngine::UIElements::VisualElement*>*>  elements;

/// @brief Field properties offset 0x8
 __declspec(property(get=__get_properties, put=__set_properties)) ::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId,::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*>  properties;

/// @brief Field timing offset 0x10
 __declspec(property(get=__get_timing, put=__set_timing)) ::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<float_t>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<float_t>>*>  timing;

/// @brief Field style offset 0x18
 __declspec(property(get=__get_style, put=__set_style)) ::ArrayW<float_t,::Array<float_t>*>  style;

/// @brief Field count offset 0x20
 __declspec(property(get=__get_count, put=__set_count)) int32_t  count;

/// @brief Field indices offset 0x28
 __declspec(property(get=__get_indices, put=__set_indices)) ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>*  indices;

 __declspec(property(get=get_capacity, put=set_capacity)) int32_t  capacity;

constexpr void __set_elements(::ArrayW<::UnityEngine::UIElements::VisualElement*,::Array<::UnityEngine::UIElements::VisualElement*>*>  value) ;

constexpr ::ArrayW<::UnityEngine::UIElements::VisualElement*,::Array<::UnityEngine::UIElements::VisualElement*>*>& __get_elements() ;

constexpr ::ArrayW<::UnityEngine::UIElements::VisualElement*,::Array<::UnityEngine::UIElements::VisualElement*>*> const& __get_elements() const;

constexpr void __set_properties(::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId,::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*>  value) ;

constexpr ::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId,::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*>& __get_properties() ;

constexpr ::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId,::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*> const& __get_properties() const;

constexpr void __set_timing(::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<float_t>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<float_t>>*>  value) ;

constexpr ::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<float_t>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<float_t>>*>& __get_timing() ;

constexpr ::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<float_t>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<float_t>>*> const& __get_timing() const;

constexpr void __set_style(::ArrayW<float_t,::Array<float_t>*>  value) ;

constexpr ::ArrayW<float_t,::Array<float_t>*>& __get_style() ;

constexpr ::ArrayW<float_t,::Array<float_t>*> const& __get_style() const;

constexpr void __set_count(int32_t  value) ;

constexpr int32_t& __get_count() ;

constexpr int32_t const& __get_count() const;

constexpr void __set_indices(::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>*  value) ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>* __get_indices() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>*> __get_indices() const;

/// @brief Method get_capacity addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t get_capacity() ;

/// @brief Method set_capacity addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_capacity(int32_t  value) ;

/// @brief Method LocalInit addr 0x0 size 0xffffffffffffffff virtual false final false
inline void LocalInit() ;

/// @brief Method Create addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::UnityEngine::UIElements::__StylePropertyAnimationSystem__AnimationDataSet_2<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<float_t>,float_t> Create() ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool IndexOf(::UnityEngine::UIElements::VisualElement*  ve, ::UnityEngine::UIElements::StyleSheets::StylePropertyId  prop, ByRef<int32_t>  index) ;

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Add(::UnityEngine::UIElements::VisualElement*  owner, ::UnityEngine::UIElements::StyleSheets::StylePropertyId  prop, ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<float_t>  timingData, float_t  styleData) ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Remove(int32_t  cancelledIndex) ;

/// @brief Method Replace addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Replace(int32_t  index, ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<float_t>  timingData, float_t  styleData) ;

/// @brief Method RemoveAll addr 0x0 size 0xffffffffffffffff virtual false final false
inline void RemoveAll(::UnityEngine::UIElements::VisualElement*  ve) ;

/// @brief Method RemoveAll addr 0x0 size 0xffffffffffffffff virtual false final false
inline void RemoveAll() ;

/// @brief Method GetActivePropertiesForElement addr 0x0 size 0xffffffffffffffff virtual false final false
inline void GetActivePropertiesForElement(::UnityEngine::UIElements::VisualElement*  ve, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*  outProperties) ;

// Ctor Parameters [CppParam { name: "elements", ty: "::ArrayW<::UnityEngine::UIElements::VisualElement*,::Array<::UnityEngine::UIElements::VisualElement*>*>", modifiers: "", def_value: None }, CppParam { name: "properties", ty: "::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId,::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*>", modifiers: "", def_value: None }, CppParam { name: "timing", ty: "::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<float_t>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<float_t>>*>", modifiers: "", def_value: None }, CppParam { name: "style", ty: "::ArrayW<float_t,::Array<float_t>*>", modifiers: "", def_value: None }, CppParam { name: "count", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "indices", ty: "::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>*", modifiers: "", def_value: None }]
constexpr __StylePropertyAnimationSystem__AnimationDataSet_2(::ArrayW<::UnityEngine::UIElements::VisualElement*,::Array<::UnityEngine::UIElements::VisualElement*>*>  elements, ::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId,::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*>  properties, ::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<float_t>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<float_t>>*>  timing, ::ArrayW<float_t,::Array<float_t>*>  style, int32_t  count, ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>*  indices) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __StylePropertyAnimationSystem__AnimationDataSet_2(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x30>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __StylePropertyAnimationSystem__AnimationDataSet_2()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: ::AnimationDataSet`2
namespace UnityEngine::UIElements {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6833))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6833), inst: 6495 })
// CS Name: ::StylePropertyAnimationSystem::AnimationDataSet`2<TTimingData,TStyleData>
struct CORDL_TYPE __StylePropertyAnimationSystem__AnimationDataSet_2<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::Scale>,::UnityEngine::UIElements::Scale> : public ::bs_hook::ValueTypeWrapper<0x30> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field elements offset 0x0
 __declspec(property(get=__get_elements, put=__set_elements)) ::ArrayW<::UnityEngine::UIElements::VisualElement*,::Array<::UnityEngine::UIElements::VisualElement*>*>  elements;

/// @brief Field properties offset 0x8
 __declspec(property(get=__get_properties, put=__set_properties)) ::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId,::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*>  properties;

/// @brief Field timing offset 0x10
 __declspec(property(get=__get_timing, put=__set_timing)) ::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::Scale>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::Scale>>*>  timing;

/// @brief Field style offset 0x18
 __declspec(property(get=__get_style, put=__set_style)) ::ArrayW<::UnityEngine::UIElements::Scale,::Array<::UnityEngine::UIElements::Scale>*>  style;

/// @brief Field count offset 0x20
 __declspec(property(get=__get_count, put=__set_count)) int32_t  count;

/// @brief Field indices offset 0x28
 __declspec(property(get=__get_indices, put=__set_indices)) ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>*  indices;

 __declspec(property(get=get_capacity, put=set_capacity)) int32_t  capacity;

constexpr void __set_elements(::ArrayW<::UnityEngine::UIElements::VisualElement*,::Array<::UnityEngine::UIElements::VisualElement*>*>  value) ;

constexpr ::ArrayW<::UnityEngine::UIElements::VisualElement*,::Array<::UnityEngine::UIElements::VisualElement*>*>& __get_elements() ;

constexpr ::ArrayW<::UnityEngine::UIElements::VisualElement*,::Array<::UnityEngine::UIElements::VisualElement*>*> const& __get_elements() const;

constexpr void __set_properties(::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId,::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*>  value) ;

constexpr ::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId,::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*>& __get_properties() ;

constexpr ::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId,::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*> const& __get_properties() const;

constexpr void __set_timing(::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::Scale>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::Scale>>*>  value) ;

constexpr ::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::Scale>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::Scale>>*>& __get_timing() ;

constexpr ::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::Scale>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::Scale>>*> const& __get_timing() const;

constexpr void __set_style(::ArrayW<::UnityEngine::UIElements::Scale,::Array<::UnityEngine::UIElements::Scale>*>  value) ;

constexpr ::ArrayW<::UnityEngine::UIElements::Scale,::Array<::UnityEngine::UIElements::Scale>*>& __get_style() ;

constexpr ::ArrayW<::UnityEngine::UIElements::Scale,::Array<::UnityEngine::UIElements::Scale>*> const& __get_style() const;

constexpr void __set_count(int32_t  value) ;

constexpr int32_t& __get_count() ;

constexpr int32_t const& __get_count() const;

constexpr void __set_indices(::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>*  value) ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>* __get_indices() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>*> __get_indices() const;

/// @brief Method get_capacity addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t get_capacity() ;

/// @brief Method set_capacity addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_capacity(int32_t  value) ;

/// @brief Method LocalInit addr 0x0 size 0xffffffffffffffff virtual false final false
inline void LocalInit() ;

/// @brief Method Create addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::UnityEngine::UIElements::__StylePropertyAnimationSystem__AnimationDataSet_2<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::Scale>,::UnityEngine::UIElements::Scale> Create() ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool IndexOf(::UnityEngine::UIElements::VisualElement*  ve, ::UnityEngine::UIElements::StyleSheets::StylePropertyId  prop, ByRef<int32_t>  index) ;

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Add(::UnityEngine::UIElements::VisualElement*  owner, ::UnityEngine::UIElements::StyleSheets::StylePropertyId  prop, ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::Scale>  timingData, ::UnityEngine::UIElements::Scale  styleData) ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Remove(int32_t  cancelledIndex) ;

/// @brief Method Replace addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Replace(int32_t  index, ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::Scale>  timingData, ::UnityEngine::UIElements::Scale  styleData) ;

/// @brief Method RemoveAll addr 0x0 size 0xffffffffffffffff virtual false final false
inline void RemoveAll(::UnityEngine::UIElements::VisualElement*  ve) ;

/// @brief Method RemoveAll addr 0x0 size 0xffffffffffffffff virtual false final false
inline void RemoveAll() ;

/// @brief Method GetActivePropertiesForElement addr 0x0 size 0xffffffffffffffff virtual false final false
inline void GetActivePropertiesForElement(::UnityEngine::UIElements::VisualElement*  ve, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*  outProperties) ;

// Ctor Parameters [CppParam { name: "elements", ty: "::ArrayW<::UnityEngine::UIElements::VisualElement*,::Array<::UnityEngine::UIElements::VisualElement*>*>", modifiers: "", def_value: None }, CppParam { name: "properties", ty: "::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId,::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*>", modifiers: "", def_value: None }, CppParam { name: "timing", ty: "::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::Scale>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::Scale>>*>", modifiers: "", def_value: None }, CppParam { name: "style", ty: "::ArrayW<::UnityEngine::UIElements::Scale,::Array<::UnityEngine::UIElements::Scale>*>", modifiers: "", def_value: None }, CppParam { name: "count", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "indices", ty: "::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>*", modifiers: "", def_value: None }]
constexpr __StylePropertyAnimationSystem__AnimationDataSet_2(::ArrayW<::UnityEngine::UIElements::VisualElement*,::Array<::UnityEngine::UIElements::VisualElement*>*>  elements, ::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId,::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*>  properties, ::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::Scale>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::Scale>>*>  timing, ::ArrayW<::UnityEngine::UIElements::Scale,::Array<::UnityEngine::UIElements::Scale>*>  style, int32_t  count, ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>*  indices) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __StylePropertyAnimationSystem__AnimationDataSet_2(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x30>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __StylePropertyAnimationSystem__AnimationDataSet_2()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: ::AnimationDataSet`2
namespace UnityEngine::UIElements {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6833))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6833), inst: 6494 })
// CS Name: ::StylePropertyAnimationSystem::AnimationDataSet`2<TTimingData,TStyleData>
struct CORDL_TYPE __StylePropertyAnimationSystem__AnimationDataSet_2<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::Rotate>,::UnityEngine::UIElements::Rotate> : public ::bs_hook::ValueTypeWrapper<0x30> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field elements offset 0x0
 __declspec(property(get=__get_elements, put=__set_elements)) ::ArrayW<::UnityEngine::UIElements::VisualElement*,::Array<::UnityEngine::UIElements::VisualElement*>*>  elements;

/// @brief Field properties offset 0x8
 __declspec(property(get=__get_properties, put=__set_properties)) ::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId,::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*>  properties;

/// @brief Field timing offset 0x10
 __declspec(property(get=__get_timing, put=__set_timing)) ::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::Rotate>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::Rotate>>*>  timing;

/// @brief Field style offset 0x18
 __declspec(property(get=__get_style, put=__set_style)) ::ArrayW<::UnityEngine::UIElements::Rotate,::Array<::UnityEngine::UIElements::Rotate>*>  style;

/// @brief Field count offset 0x20
 __declspec(property(get=__get_count, put=__set_count)) int32_t  count;

/// @brief Field indices offset 0x28
 __declspec(property(get=__get_indices, put=__set_indices)) ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>*  indices;

 __declspec(property(get=get_capacity, put=set_capacity)) int32_t  capacity;

constexpr void __set_elements(::ArrayW<::UnityEngine::UIElements::VisualElement*,::Array<::UnityEngine::UIElements::VisualElement*>*>  value) ;

constexpr ::ArrayW<::UnityEngine::UIElements::VisualElement*,::Array<::UnityEngine::UIElements::VisualElement*>*>& __get_elements() ;

constexpr ::ArrayW<::UnityEngine::UIElements::VisualElement*,::Array<::UnityEngine::UIElements::VisualElement*>*> const& __get_elements() const;

constexpr void __set_properties(::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId,::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*>  value) ;

constexpr ::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId,::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*>& __get_properties() ;

constexpr ::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId,::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*> const& __get_properties() const;

constexpr void __set_timing(::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::Rotate>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::Rotate>>*>  value) ;

constexpr ::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::Rotate>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::Rotate>>*>& __get_timing() ;

constexpr ::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::Rotate>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::Rotate>>*> const& __get_timing() const;

constexpr void __set_style(::ArrayW<::UnityEngine::UIElements::Rotate,::Array<::UnityEngine::UIElements::Rotate>*>  value) ;

constexpr ::ArrayW<::UnityEngine::UIElements::Rotate,::Array<::UnityEngine::UIElements::Rotate>*>& __get_style() ;

constexpr ::ArrayW<::UnityEngine::UIElements::Rotate,::Array<::UnityEngine::UIElements::Rotate>*> const& __get_style() const;

constexpr void __set_count(int32_t  value) ;

constexpr int32_t& __get_count() ;

constexpr int32_t const& __get_count() const;

constexpr void __set_indices(::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>*  value) ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>* __get_indices() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>*> __get_indices() const;

/// @brief Method get_capacity addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t get_capacity() ;

/// @brief Method set_capacity addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_capacity(int32_t  value) ;

/// @brief Method LocalInit addr 0x0 size 0xffffffffffffffff virtual false final false
inline void LocalInit() ;

/// @brief Method Create addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::UnityEngine::UIElements::__StylePropertyAnimationSystem__AnimationDataSet_2<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::Rotate>,::UnityEngine::UIElements::Rotate> Create() ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool IndexOf(::UnityEngine::UIElements::VisualElement*  ve, ::UnityEngine::UIElements::StyleSheets::StylePropertyId  prop, ByRef<int32_t>  index) ;

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Add(::UnityEngine::UIElements::VisualElement*  owner, ::UnityEngine::UIElements::StyleSheets::StylePropertyId  prop, ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::Rotate>  timingData, ::UnityEngine::UIElements::Rotate  styleData) ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Remove(int32_t  cancelledIndex) ;

/// @brief Method Replace addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Replace(int32_t  index, ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::Rotate>  timingData, ::UnityEngine::UIElements::Rotate  styleData) ;

/// @brief Method RemoveAll addr 0x0 size 0xffffffffffffffff virtual false final false
inline void RemoveAll(::UnityEngine::UIElements::VisualElement*  ve) ;

/// @brief Method RemoveAll addr 0x0 size 0xffffffffffffffff virtual false final false
inline void RemoveAll() ;

/// @brief Method GetActivePropertiesForElement addr 0x0 size 0xffffffffffffffff virtual false final false
inline void GetActivePropertiesForElement(::UnityEngine::UIElements::VisualElement*  ve, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*  outProperties) ;

// Ctor Parameters [CppParam { name: "elements", ty: "::ArrayW<::UnityEngine::UIElements::VisualElement*,::Array<::UnityEngine::UIElements::VisualElement*>*>", modifiers: "", def_value: None }, CppParam { name: "properties", ty: "::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId,::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*>", modifiers: "", def_value: None }, CppParam { name: "timing", ty: "::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::Rotate>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::Rotate>>*>", modifiers: "", def_value: None }, CppParam { name: "style", ty: "::ArrayW<::UnityEngine::UIElements::Rotate,::Array<::UnityEngine::UIElements::Rotate>*>", modifiers: "", def_value: None }, CppParam { name: "count", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "indices", ty: "::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>*", modifiers: "", def_value: None }]
constexpr __StylePropertyAnimationSystem__AnimationDataSet_2(::ArrayW<::UnityEngine::UIElements::VisualElement*,::Array<::UnityEngine::UIElements::VisualElement*>*>  elements, ::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId,::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*>  properties, ::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::Rotate>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::Rotate>>*>  timing, ::ArrayW<::UnityEngine::UIElements::Rotate,::Array<::UnityEngine::UIElements::Rotate>*>  style, int32_t  count, ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>*  indices) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __StylePropertyAnimationSystem__AnimationDataSet_2(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x30>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __StylePropertyAnimationSystem__AnimationDataSet_2()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: ::AnimationDataSet`2
namespace UnityEngine::UIElements {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T_cordlgen_0,::il2cpp_utils::il2cpp_reference_type TStyleData>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6833))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6833), inst: 6493 })
// CS Name: ::StylePropertyAnimationSystem::AnimationDataSet`2<TTimingData,TStyleData>
struct CORDL_TYPE __StylePropertyAnimationSystem__AnimationDataSet_2<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<T_cordlgen_0>,TStyleData> : public ::bs_hook::ValueTypeWrapper<0x30> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field elements offset 0x0
 __declspec(property(get=__get_elements, put=__set_elements)) ::ArrayW<::UnityEngine::UIElements::VisualElement*,::Array<::UnityEngine::UIElements::VisualElement*>*>  elements;

/// @brief Field properties offset 0x8
 __declspec(property(get=__get_properties, put=__set_properties)) ::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId,::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*>  properties;

/// @brief Field timing offset 0x10
 __declspec(property(get=__get_timing, put=__set_timing)) ::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<T_cordlgen_0>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<T_cordlgen_0>>*>  timing;

/// @brief Field style offset 0x18
 __declspec(property(get=__get_style, put=__set_style)) ::ArrayW<TStyleData,::Array<TStyleData>*>  style;

/// @brief Field count offset 0x20
 __declspec(property(get=__get_count, put=__set_count)) int32_t  count;

/// @brief Field indices offset 0x28
 __declspec(property(get=__get_indices, put=__set_indices)) ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>*  indices;

 __declspec(property(get=get_capacity, put=set_capacity)) int32_t  capacity;

constexpr void __set_elements(::ArrayW<::UnityEngine::UIElements::VisualElement*,::Array<::UnityEngine::UIElements::VisualElement*>*>  value) ;

constexpr ::ArrayW<::UnityEngine::UIElements::VisualElement*,::Array<::UnityEngine::UIElements::VisualElement*>*>& __get_elements() ;

constexpr ::ArrayW<::UnityEngine::UIElements::VisualElement*,::Array<::UnityEngine::UIElements::VisualElement*>*> const& __get_elements() const;

constexpr void __set_properties(::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId,::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*>  value) ;

constexpr ::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId,::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*>& __get_properties() ;

constexpr ::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId,::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*> const& __get_properties() const;

constexpr void __set_timing(::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<T_cordlgen_0>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<T_cordlgen_0>>*>  value) ;

constexpr ::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<T_cordlgen_0>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<T_cordlgen_0>>*>& __get_timing() ;

constexpr ::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<T_cordlgen_0>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<T_cordlgen_0>>*> const& __get_timing() const;

constexpr void __set_style(::ArrayW<TStyleData,::Array<TStyleData>*>  value) ;

constexpr ::ArrayW<TStyleData,::Array<TStyleData>*>& __get_style() ;

constexpr ::ArrayW<TStyleData,::Array<TStyleData>*> const& __get_style() const;

constexpr void __set_count(int32_t  value) ;

constexpr int32_t& __get_count() ;

constexpr int32_t const& __get_count() const;

constexpr void __set_indices(::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>*  value) ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>* __get_indices() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>*> __get_indices() const;

/// @brief Method get_capacity addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t get_capacity() ;

/// @brief Method set_capacity addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_capacity(int32_t  value) ;

/// @brief Method LocalInit addr 0x0 size 0xffffffffffffffff virtual false final false
inline void LocalInit() ;

/// @brief Method Create addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::UnityEngine::UIElements::__StylePropertyAnimationSystem__AnimationDataSet_2<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<T_cordlgen_0>,TStyleData> Create() ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool IndexOf(::UnityEngine::UIElements::VisualElement*  ve, ::UnityEngine::UIElements::StyleSheets::StylePropertyId  prop, ByRef<int32_t>  index) ;

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Add(::UnityEngine::UIElements::VisualElement*  owner, ::UnityEngine::UIElements::StyleSheets::StylePropertyId  prop, ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<T_cordlgen_0>  timingData, TStyleData  styleData) ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Remove(int32_t  cancelledIndex) ;

/// @brief Method Replace addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Replace(int32_t  index, ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<T_cordlgen_0>  timingData, TStyleData  styleData) ;

/// @brief Method RemoveAll addr 0x0 size 0xffffffffffffffff virtual false final false
inline void RemoveAll(::UnityEngine::UIElements::VisualElement*  ve) ;

/// @brief Method RemoveAll addr 0x0 size 0xffffffffffffffff virtual false final false
inline void RemoveAll() ;

/// @brief Method GetActivePropertiesForElement addr 0x0 size 0xffffffffffffffff virtual false final false
inline void GetActivePropertiesForElement(::UnityEngine::UIElements::VisualElement*  ve, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*  outProperties) ;

// Ctor Parameters [CppParam { name: "elements", ty: "::ArrayW<::UnityEngine::UIElements::VisualElement*,::Array<::UnityEngine::UIElements::VisualElement*>*>", modifiers: "", def_value: None }, CppParam { name: "properties", ty: "::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId,::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*>", modifiers: "", def_value: None }, CppParam { name: "timing", ty: "::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<T_cordlgen_0>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<T_cordlgen_0>>*>", modifiers: "", def_value: None }, CppParam { name: "style", ty: "::ArrayW<TStyleData,::Array<TStyleData>*>", modifiers: "", def_value: None }, CppParam { name: "count", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "indices", ty: "::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>*", modifiers: "", def_value: None }]
constexpr __StylePropertyAnimationSystem__AnimationDataSet_2(::ArrayW<::UnityEngine::UIElements::VisualElement*,::Array<::UnityEngine::UIElements::VisualElement*>*>  elements, ::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId,::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*>  properties, ::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<T_cordlgen_0>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<T_cordlgen_0>>*>  timing, ::ArrayW<TStyleData,::Array<TStyleData>*>  style, int32_t  count, ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>*  indices) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __StylePropertyAnimationSystem__AnimationDataSet_2(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x30>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __StylePropertyAnimationSystem__AnimationDataSet_2()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: ::AnimationDataSet`2
namespace UnityEngine::UIElements {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6833))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6833), inst: 6492 })
// CS Name: ::StylePropertyAnimationSystem::AnimationDataSet`2<TTimingData,TStyleData>
struct CORDL_TYPE __StylePropertyAnimationSystem__AnimationDataSet_2<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::Length>,::UnityEngine::UIElements::Length> : public ::bs_hook::ValueTypeWrapper<0x30> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field elements offset 0x0
 __declspec(property(get=__get_elements, put=__set_elements)) ::ArrayW<::UnityEngine::UIElements::VisualElement*,::Array<::UnityEngine::UIElements::VisualElement*>*>  elements;

/// @brief Field properties offset 0x8
 __declspec(property(get=__get_properties, put=__set_properties)) ::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId,::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*>  properties;

/// @brief Field timing offset 0x10
 __declspec(property(get=__get_timing, put=__set_timing)) ::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::Length>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::Length>>*>  timing;

/// @brief Field style offset 0x18
 __declspec(property(get=__get_style, put=__set_style)) ::ArrayW<::UnityEngine::UIElements::Length,::Array<::UnityEngine::UIElements::Length>*>  style;

/// @brief Field count offset 0x20
 __declspec(property(get=__get_count, put=__set_count)) int32_t  count;

/// @brief Field indices offset 0x28
 __declspec(property(get=__get_indices, put=__set_indices)) ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>*  indices;

 __declspec(property(get=get_capacity, put=set_capacity)) int32_t  capacity;

constexpr void __set_elements(::ArrayW<::UnityEngine::UIElements::VisualElement*,::Array<::UnityEngine::UIElements::VisualElement*>*>  value) ;

constexpr ::ArrayW<::UnityEngine::UIElements::VisualElement*,::Array<::UnityEngine::UIElements::VisualElement*>*>& __get_elements() ;

constexpr ::ArrayW<::UnityEngine::UIElements::VisualElement*,::Array<::UnityEngine::UIElements::VisualElement*>*> const& __get_elements() const;

constexpr void __set_properties(::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId,::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*>  value) ;

constexpr ::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId,::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*>& __get_properties() ;

constexpr ::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId,::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*> const& __get_properties() const;

constexpr void __set_timing(::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::Length>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::Length>>*>  value) ;

constexpr ::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::Length>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::Length>>*>& __get_timing() ;

constexpr ::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::Length>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::Length>>*> const& __get_timing() const;

constexpr void __set_style(::ArrayW<::UnityEngine::UIElements::Length,::Array<::UnityEngine::UIElements::Length>*>  value) ;

constexpr ::ArrayW<::UnityEngine::UIElements::Length,::Array<::UnityEngine::UIElements::Length>*>& __get_style() ;

constexpr ::ArrayW<::UnityEngine::UIElements::Length,::Array<::UnityEngine::UIElements::Length>*> const& __get_style() const;

constexpr void __set_count(int32_t  value) ;

constexpr int32_t& __get_count() ;

constexpr int32_t const& __get_count() const;

constexpr void __set_indices(::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>*  value) ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>* __get_indices() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>*> __get_indices() const;

/// @brief Method get_capacity addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t get_capacity() ;

/// @brief Method set_capacity addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_capacity(int32_t  value) ;

/// @brief Method LocalInit addr 0x0 size 0xffffffffffffffff virtual false final false
inline void LocalInit() ;

/// @brief Method Create addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::UnityEngine::UIElements::__StylePropertyAnimationSystem__AnimationDataSet_2<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::Length>,::UnityEngine::UIElements::Length> Create() ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool IndexOf(::UnityEngine::UIElements::VisualElement*  ve, ::UnityEngine::UIElements::StyleSheets::StylePropertyId  prop, ByRef<int32_t>  index) ;

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Add(::UnityEngine::UIElements::VisualElement*  owner, ::UnityEngine::UIElements::StyleSheets::StylePropertyId  prop, ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::Length>  timingData, ::UnityEngine::UIElements::Length  styleData) ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Remove(int32_t  cancelledIndex) ;

/// @brief Method Replace addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Replace(int32_t  index, ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::Length>  timingData, ::UnityEngine::UIElements::Length  styleData) ;

/// @brief Method RemoveAll addr 0x0 size 0xffffffffffffffff virtual false final false
inline void RemoveAll(::UnityEngine::UIElements::VisualElement*  ve) ;

/// @brief Method RemoveAll addr 0x0 size 0xffffffffffffffff virtual false final false
inline void RemoveAll() ;

/// @brief Method GetActivePropertiesForElement addr 0x0 size 0xffffffffffffffff virtual false final false
inline void GetActivePropertiesForElement(::UnityEngine::UIElements::VisualElement*  ve, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*  outProperties) ;

// Ctor Parameters [CppParam { name: "elements", ty: "::ArrayW<::UnityEngine::UIElements::VisualElement*,::Array<::UnityEngine::UIElements::VisualElement*>*>", modifiers: "", def_value: None }, CppParam { name: "properties", ty: "::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId,::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*>", modifiers: "", def_value: None }, CppParam { name: "timing", ty: "::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::Length>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::Length>>*>", modifiers: "", def_value: None }, CppParam { name: "style", ty: "::ArrayW<::UnityEngine::UIElements::Length,::Array<::UnityEngine::UIElements::Length>*>", modifiers: "", def_value: None }, CppParam { name: "count", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "indices", ty: "::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>*", modifiers: "", def_value: None }]
constexpr __StylePropertyAnimationSystem__AnimationDataSet_2(::ArrayW<::UnityEngine::UIElements::VisualElement*,::Array<::UnityEngine::UIElements::VisualElement*>*>  elements, ::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId,::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*>  properties, ::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::Length>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::Length>>*>  timing, ::ArrayW<::UnityEngine::UIElements::Length,::Array<::UnityEngine::UIElements::Length>*>  style, int32_t  count, ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>*  indices) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __StylePropertyAnimationSystem__AnimationDataSet_2(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x30>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __StylePropertyAnimationSystem__AnimationDataSet_2()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: ::AnimationDataSet`2
namespace UnityEngine::UIElements {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6833))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6833), inst: 6491 })
// CS Name: ::StylePropertyAnimationSystem::AnimationDataSet`2<TTimingData,TStyleData>
struct CORDL_TYPE __StylePropertyAnimationSystem__AnimationDataSet_2<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<int32_t>,int32_t> : public ::bs_hook::ValueTypeWrapper<0x30> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field elements offset 0x0
 __declspec(property(get=__get_elements, put=__set_elements)) ::ArrayW<::UnityEngine::UIElements::VisualElement*,::Array<::UnityEngine::UIElements::VisualElement*>*>  elements;

/// @brief Field properties offset 0x8
 __declspec(property(get=__get_properties, put=__set_properties)) ::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId,::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*>  properties;

/// @brief Field timing offset 0x10
 __declspec(property(get=__get_timing, put=__set_timing)) ::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<int32_t>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<int32_t>>*>  timing;

/// @brief Field style offset 0x18
 __declspec(property(get=__get_style, put=__set_style)) ::ArrayW<int32_t,::Array<int32_t>*>  style;

/// @brief Field count offset 0x20
 __declspec(property(get=__get_count, put=__set_count)) int32_t  count;

/// @brief Field indices offset 0x28
 __declspec(property(get=__get_indices, put=__set_indices)) ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>*  indices;

 __declspec(property(get=get_capacity, put=set_capacity)) int32_t  capacity;

constexpr void __set_elements(::ArrayW<::UnityEngine::UIElements::VisualElement*,::Array<::UnityEngine::UIElements::VisualElement*>*>  value) ;

constexpr ::ArrayW<::UnityEngine::UIElements::VisualElement*,::Array<::UnityEngine::UIElements::VisualElement*>*>& __get_elements() ;

constexpr ::ArrayW<::UnityEngine::UIElements::VisualElement*,::Array<::UnityEngine::UIElements::VisualElement*>*> const& __get_elements() const;

constexpr void __set_properties(::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId,::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*>  value) ;

constexpr ::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId,::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*>& __get_properties() ;

constexpr ::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId,::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*> const& __get_properties() const;

constexpr void __set_timing(::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<int32_t>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<int32_t>>*>  value) ;

constexpr ::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<int32_t>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<int32_t>>*>& __get_timing() ;

constexpr ::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<int32_t>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<int32_t>>*> const& __get_timing() const;

constexpr void __set_style(::ArrayW<int32_t,::Array<int32_t>*>  value) ;

constexpr ::ArrayW<int32_t,::Array<int32_t>*>& __get_style() ;

constexpr ::ArrayW<int32_t,::Array<int32_t>*> const& __get_style() const;

constexpr void __set_count(int32_t  value) ;

constexpr int32_t& __get_count() ;

constexpr int32_t const& __get_count() const;

constexpr void __set_indices(::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>*  value) ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>* __get_indices() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>*> __get_indices() const;

/// @brief Method get_capacity addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t get_capacity() ;

/// @brief Method set_capacity addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_capacity(int32_t  value) ;

/// @brief Method LocalInit addr 0x0 size 0xffffffffffffffff virtual false final false
inline void LocalInit() ;

/// @brief Method Create addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::UnityEngine::UIElements::__StylePropertyAnimationSystem__AnimationDataSet_2<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<int32_t>,int32_t> Create() ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool IndexOf(::UnityEngine::UIElements::VisualElement*  ve, ::UnityEngine::UIElements::StyleSheets::StylePropertyId  prop, ByRef<int32_t>  index) ;

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Add(::UnityEngine::UIElements::VisualElement*  owner, ::UnityEngine::UIElements::StyleSheets::StylePropertyId  prop, ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<int32_t>  timingData, int32_t  styleData) ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Remove(int32_t  cancelledIndex) ;

/// @brief Method Replace addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Replace(int32_t  index, ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<int32_t>  timingData, int32_t  styleData) ;

/// @brief Method RemoveAll addr 0x0 size 0xffffffffffffffff virtual false final false
inline void RemoveAll(::UnityEngine::UIElements::VisualElement*  ve) ;

/// @brief Method RemoveAll addr 0x0 size 0xffffffffffffffff virtual false final false
inline void RemoveAll() ;

/// @brief Method GetActivePropertiesForElement addr 0x0 size 0xffffffffffffffff virtual false final false
inline void GetActivePropertiesForElement(::UnityEngine::UIElements::VisualElement*  ve, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*  outProperties) ;

// Ctor Parameters [CppParam { name: "elements", ty: "::ArrayW<::UnityEngine::UIElements::VisualElement*,::Array<::UnityEngine::UIElements::VisualElement*>*>", modifiers: "", def_value: None }, CppParam { name: "properties", ty: "::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId,::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*>", modifiers: "", def_value: None }, CppParam { name: "timing", ty: "::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<int32_t>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<int32_t>>*>", modifiers: "", def_value: None }, CppParam { name: "style", ty: "::ArrayW<int32_t,::Array<int32_t>*>", modifiers: "", def_value: None }, CppParam { name: "count", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "indices", ty: "::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>*", modifiers: "", def_value: None }]
constexpr __StylePropertyAnimationSystem__AnimationDataSet_2(::ArrayW<::UnityEngine::UIElements::VisualElement*,::Array<::UnityEngine::UIElements::VisualElement*>*>  elements, ::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId,::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*>  properties, ::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<int32_t>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<int32_t>>*>  timing, ::ArrayW<int32_t,::Array<int32_t>*>  style, int32_t  count, ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>*  indices) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __StylePropertyAnimationSystem__AnimationDataSet_2(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x30>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __StylePropertyAnimationSystem__AnimationDataSet_2()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: ::AnimationDataSet`2
namespace UnityEngine::UIElements {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6833))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6833), inst: 6490 })
// CS Name: ::StylePropertyAnimationSystem::AnimationDataSet`2<TTimingData,TStyleData>
struct CORDL_TYPE __StylePropertyAnimationSystem__AnimationDataSet_2<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::FontDefinition>,::UnityEngine::UIElements::FontDefinition> : public ::bs_hook::ValueTypeWrapper<0x30> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field elements offset 0x0
 __declspec(property(get=__get_elements, put=__set_elements)) ::ArrayW<::UnityEngine::UIElements::VisualElement*,::Array<::UnityEngine::UIElements::VisualElement*>*>  elements;

/// @brief Field properties offset 0x8
 __declspec(property(get=__get_properties, put=__set_properties)) ::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId,::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*>  properties;

/// @brief Field timing offset 0x10
 __declspec(property(get=__get_timing, put=__set_timing)) ::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::FontDefinition>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::FontDefinition>>*>  timing;

/// @brief Field style offset 0x18
 __declspec(property(get=__get_style, put=__set_style)) ::ArrayW<::UnityEngine::UIElements::FontDefinition,::Array<::UnityEngine::UIElements::FontDefinition>*>  style;

/// @brief Field count offset 0x20
 __declspec(property(get=__get_count, put=__set_count)) int32_t  count;

/// @brief Field indices offset 0x28
 __declspec(property(get=__get_indices, put=__set_indices)) ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>*  indices;

 __declspec(property(get=get_capacity, put=set_capacity)) int32_t  capacity;

constexpr void __set_elements(::ArrayW<::UnityEngine::UIElements::VisualElement*,::Array<::UnityEngine::UIElements::VisualElement*>*>  value) ;

constexpr ::ArrayW<::UnityEngine::UIElements::VisualElement*,::Array<::UnityEngine::UIElements::VisualElement*>*>& __get_elements() ;

constexpr ::ArrayW<::UnityEngine::UIElements::VisualElement*,::Array<::UnityEngine::UIElements::VisualElement*>*> const& __get_elements() const;

constexpr void __set_properties(::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId,::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*>  value) ;

constexpr ::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId,::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*>& __get_properties() ;

constexpr ::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId,::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*> const& __get_properties() const;

constexpr void __set_timing(::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::FontDefinition>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::FontDefinition>>*>  value) ;

constexpr ::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::FontDefinition>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::FontDefinition>>*>& __get_timing() ;

constexpr ::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::FontDefinition>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::FontDefinition>>*> const& __get_timing() const;

constexpr void __set_style(::ArrayW<::UnityEngine::UIElements::FontDefinition,::Array<::UnityEngine::UIElements::FontDefinition>*>  value) ;

constexpr ::ArrayW<::UnityEngine::UIElements::FontDefinition,::Array<::UnityEngine::UIElements::FontDefinition>*>& __get_style() ;

constexpr ::ArrayW<::UnityEngine::UIElements::FontDefinition,::Array<::UnityEngine::UIElements::FontDefinition>*> const& __get_style() const;

constexpr void __set_count(int32_t  value) ;

constexpr int32_t& __get_count() ;

constexpr int32_t const& __get_count() const;

constexpr void __set_indices(::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>*  value) ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>* __get_indices() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>*> __get_indices() const;

/// @brief Method get_capacity addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t get_capacity() ;

/// @brief Method set_capacity addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_capacity(int32_t  value) ;

/// @brief Method LocalInit addr 0x0 size 0xffffffffffffffff virtual false final false
inline void LocalInit() ;

/// @brief Method Create addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::UnityEngine::UIElements::__StylePropertyAnimationSystem__AnimationDataSet_2<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::FontDefinition>,::UnityEngine::UIElements::FontDefinition> Create() ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool IndexOf(::UnityEngine::UIElements::VisualElement*  ve, ::UnityEngine::UIElements::StyleSheets::StylePropertyId  prop, ByRef<int32_t>  index) ;

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Add(::UnityEngine::UIElements::VisualElement*  owner, ::UnityEngine::UIElements::StyleSheets::StylePropertyId  prop, ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::FontDefinition>  timingData, ::UnityEngine::UIElements::FontDefinition  styleData) ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Remove(int32_t  cancelledIndex) ;

/// @brief Method Replace addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Replace(int32_t  index, ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::FontDefinition>  timingData, ::UnityEngine::UIElements::FontDefinition  styleData) ;

/// @brief Method RemoveAll addr 0x0 size 0xffffffffffffffff virtual false final false
inline void RemoveAll(::UnityEngine::UIElements::VisualElement*  ve) ;

/// @brief Method RemoveAll addr 0x0 size 0xffffffffffffffff virtual false final false
inline void RemoveAll() ;

/// @brief Method GetActivePropertiesForElement addr 0x0 size 0xffffffffffffffff virtual false final false
inline void GetActivePropertiesForElement(::UnityEngine::UIElements::VisualElement*  ve, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*  outProperties) ;

// Ctor Parameters [CppParam { name: "elements", ty: "::ArrayW<::UnityEngine::UIElements::VisualElement*,::Array<::UnityEngine::UIElements::VisualElement*>*>", modifiers: "", def_value: None }, CppParam { name: "properties", ty: "::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId,::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*>", modifiers: "", def_value: None }, CppParam { name: "timing", ty: "::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::FontDefinition>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::FontDefinition>>*>", modifiers: "", def_value: None }, CppParam { name: "style", ty: "::ArrayW<::UnityEngine::UIElements::FontDefinition,::Array<::UnityEngine::UIElements::FontDefinition>*>", modifiers: "", def_value: None }, CppParam { name: "count", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "indices", ty: "::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>*", modifiers: "", def_value: None }]
constexpr __StylePropertyAnimationSystem__AnimationDataSet_2(::ArrayW<::UnityEngine::UIElements::VisualElement*,::Array<::UnityEngine::UIElements::VisualElement*>*>  elements, ::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId,::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*>  properties, ::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::FontDefinition>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::FontDefinition>>*>  timing, ::ArrayW<::UnityEngine::UIElements::FontDefinition,::Array<::UnityEngine::UIElements::FontDefinition>*>  style, int32_t  count, ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>*  indices) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __StylePropertyAnimationSystem__AnimationDataSet_2(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x30>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __StylePropertyAnimationSystem__AnimationDataSet_2()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: ::AnimationDataSet`2
namespace UnityEngine::UIElements {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6833))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6833), inst: 6489 })
// CS Name: ::StylePropertyAnimationSystem::AnimationDataSet`2<TTimingData,TStyleData>
struct CORDL_TYPE __StylePropertyAnimationSystem__AnimationDataSet_2<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::Color>,::UnityEngine::Color> : public ::bs_hook::ValueTypeWrapper<0x30> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field elements offset 0x0
 __declspec(property(get=__get_elements, put=__set_elements)) ::ArrayW<::UnityEngine::UIElements::VisualElement*,::Array<::UnityEngine::UIElements::VisualElement*>*>  elements;

/// @brief Field properties offset 0x8
 __declspec(property(get=__get_properties, put=__set_properties)) ::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId,::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*>  properties;

/// @brief Field timing offset 0x10
 __declspec(property(get=__get_timing, put=__set_timing)) ::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::Color>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::Color>>*>  timing;

/// @brief Field style offset 0x18
 __declspec(property(get=__get_style, put=__set_style)) ::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*>  style;

/// @brief Field count offset 0x20
 __declspec(property(get=__get_count, put=__set_count)) int32_t  count;

/// @brief Field indices offset 0x28
 __declspec(property(get=__get_indices, put=__set_indices)) ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>*  indices;

 __declspec(property(get=get_capacity, put=set_capacity)) int32_t  capacity;

constexpr void __set_elements(::ArrayW<::UnityEngine::UIElements::VisualElement*,::Array<::UnityEngine::UIElements::VisualElement*>*>  value) ;

constexpr ::ArrayW<::UnityEngine::UIElements::VisualElement*,::Array<::UnityEngine::UIElements::VisualElement*>*>& __get_elements() ;

constexpr ::ArrayW<::UnityEngine::UIElements::VisualElement*,::Array<::UnityEngine::UIElements::VisualElement*>*> const& __get_elements() const;

constexpr void __set_properties(::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId,::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*>  value) ;

constexpr ::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId,::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*>& __get_properties() ;

constexpr ::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId,::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*> const& __get_properties() const;

constexpr void __set_timing(::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::Color>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::Color>>*>  value) ;

constexpr ::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::Color>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::Color>>*>& __get_timing() ;

constexpr ::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::Color>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::Color>>*> const& __get_timing() const;

constexpr void __set_style(::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*>  value) ;

constexpr ::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*>& __get_style() ;

constexpr ::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*> const& __get_style() const;

constexpr void __set_count(int32_t  value) ;

constexpr int32_t& __get_count() ;

constexpr int32_t const& __get_count() const;

constexpr void __set_indices(::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>*  value) ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>* __get_indices() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>*> __get_indices() const;

/// @brief Method get_capacity addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t get_capacity() ;

/// @brief Method set_capacity addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_capacity(int32_t  value) ;

/// @brief Method LocalInit addr 0x0 size 0xffffffffffffffff virtual false final false
inline void LocalInit() ;

/// @brief Method Create addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::UnityEngine::UIElements::__StylePropertyAnimationSystem__AnimationDataSet_2<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::Color>,::UnityEngine::Color> Create() ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool IndexOf(::UnityEngine::UIElements::VisualElement*  ve, ::UnityEngine::UIElements::StyleSheets::StylePropertyId  prop, ByRef<int32_t>  index) ;

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Add(::UnityEngine::UIElements::VisualElement*  owner, ::UnityEngine::UIElements::StyleSheets::StylePropertyId  prop, ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::Color>  timingData, ::UnityEngine::Color  styleData) ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Remove(int32_t  cancelledIndex) ;

/// @brief Method Replace addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Replace(int32_t  index, ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::Color>  timingData, ::UnityEngine::Color  styleData) ;

/// @brief Method RemoveAll addr 0x0 size 0xffffffffffffffff virtual false final false
inline void RemoveAll(::UnityEngine::UIElements::VisualElement*  ve) ;

/// @brief Method RemoveAll addr 0x0 size 0xffffffffffffffff virtual false final false
inline void RemoveAll() ;

/// @brief Method GetActivePropertiesForElement addr 0x0 size 0xffffffffffffffff virtual false final false
inline void GetActivePropertiesForElement(::UnityEngine::UIElements::VisualElement*  ve, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*  outProperties) ;

// Ctor Parameters [CppParam { name: "elements", ty: "::ArrayW<::UnityEngine::UIElements::VisualElement*,::Array<::UnityEngine::UIElements::VisualElement*>*>", modifiers: "", def_value: None }, CppParam { name: "properties", ty: "::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId,::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*>", modifiers: "", def_value: None }, CppParam { name: "timing", ty: "::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::Color>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::Color>>*>", modifiers: "", def_value: None }, CppParam { name: "style", ty: "::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*>", modifiers: "", def_value: None }, CppParam { name: "count", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "indices", ty: "::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>*", modifiers: "", def_value: None }]
constexpr __StylePropertyAnimationSystem__AnimationDataSet_2(::ArrayW<::UnityEngine::UIElements::VisualElement*,::Array<::UnityEngine::UIElements::VisualElement*>*>  elements, ::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId,::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*>  properties, ::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::Color>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::Color>>*>  timing, ::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*>  style, int32_t  count, ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>*  indices) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __StylePropertyAnimationSystem__AnimationDataSet_2(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x30>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __StylePropertyAnimationSystem__AnimationDataSet_2()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: ::AnimationDataSet`2
namespace UnityEngine::UIElements {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6833))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6833), inst: 6488 })
// CS Name: ::StylePropertyAnimationSystem::AnimationDataSet`2<TTimingData,TStyleData>
struct CORDL_TYPE __StylePropertyAnimationSystem__AnimationDataSet_2<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::Background>,::UnityEngine::UIElements::Background> : public ::bs_hook::ValueTypeWrapper<0x30> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field elements offset 0x0
 __declspec(property(get=__get_elements, put=__set_elements)) ::ArrayW<::UnityEngine::UIElements::VisualElement*,::Array<::UnityEngine::UIElements::VisualElement*>*>  elements;

/// @brief Field properties offset 0x8
 __declspec(property(get=__get_properties, put=__set_properties)) ::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId,::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*>  properties;

/// @brief Field timing offset 0x10
 __declspec(property(get=__get_timing, put=__set_timing)) ::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::Background>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::Background>>*>  timing;

/// @brief Field style offset 0x18
 __declspec(property(get=__get_style, put=__set_style)) ::ArrayW<::UnityEngine::UIElements::Background,::Array<::UnityEngine::UIElements::Background>*>  style;

/// @brief Field count offset 0x20
 __declspec(property(get=__get_count, put=__set_count)) int32_t  count;

/// @brief Field indices offset 0x28
 __declspec(property(get=__get_indices, put=__set_indices)) ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>*  indices;

 __declspec(property(get=get_capacity, put=set_capacity)) int32_t  capacity;

constexpr void __set_elements(::ArrayW<::UnityEngine::UIElements::VisualElement*,::Array<::UnityEngine::UIElements::VisualElement*>*>  value) ;

constexpr ::ArrayW<::UnityEngine::UIElements::VisualElement*,::Array<::UnityEngine::UIElements::VisualElement*>*>& __get_elements() ;

constexpr ::ArrayW<::UnityEngine::UIElements::VisualElement*,::Array<::UnityEngine::UIElements::VisualElement*>*> const& __get_elements() const;

constexpr void __set_properties(::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId,::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*>  value) ;

constexpr ::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId,::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*>& __get_properties() ;

constexpr ::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId,::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*> const& __get_properties() const;

constexpr void __set_timing(::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::Background>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::Background>>*>  value) ;

constexpr ::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::Background>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::Background>>*>& __get_timing() ;

constexpr ::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::Background>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::Background>>*> const& __get_timing() const;

constexpr void __set_style(::ArrayW<::UnityEngine::UIElements::Background,::Array<::UnityEngine::UIElements::Background>*>  value) ;

constexpr ::ArrayW<::UnityEngine::UIElements::Background,::Array<::UnityEngine::UIElements::Background>*>& __get_style() ;

constexpr ::ArrayW<::UnityEngine::UIElements::Background,::Array<::UnityEngine::UIElements::Background>*> const& __get_style() const;

constexpr void __set_count(int32_t  value) ;

constexpr int32_t& __get_count() ;

constexpr int32_t const& __get_count() const;

constexpr void __set_indices(::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>*  value) ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>* __get_indices() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>*> __get_indices() const;

/// @brief Method get_capacity addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t get_capacity() ;

/// @brief Method set_capacity addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_capacity(int32_t  value) ;

/// @brief Method LocalInit addr 0x0 size 0xffffffffffffffff virtual false final false
inline void LocalInit() ;

/// @brief Method Create addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::UnityEngine::UIElements::__StylePropertyAnimationSystem__AnimationDataSet_2<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::Background>,::UnityEngine::UIElements::Background> Create() ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool IndexOf(::UnityEngine::UIElements::VisualElement*  ve, ::UnityEngine::UIElements::StyleSheets::StylePropertyId  prop, ByRef<int32_t>  index) ;

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Add(::UnityEngine::UIElements::VisualElement*  owner, ::UnityEngine::UIElements::StyleSheets::StylePropertyId  prop, ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::Background>  timingData, ::UnityEngine::UIElements::Background  styleData) ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Remove(int32_t  cancelledIndex) ;

/// @brief Method Replace addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Replace(int32_t  index, ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::Background>  timingData, ::UnityEngine::UIElements::Background  styleData) ;

/// @brief Method RemoveAll addr 0x0 size 0xffffffffffffffff virtual false final false
inline void RemoveAll(::UnityEngine::UIElements::VisualElement*  ve) ;

/// @brief Method RemoveAll addr 0x0 size 0xffffffffffffffff virtual false final false
inline void RemoveAll() ;

/// @brief Method GetActivePropertiesForElement addr 0x0 size 0xffffffffffffffff virtual false final false
inline void GetActivePropertiesForElement(::UnityEngine::UIElements::VisualElement*  ve, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*  outProperties) ;

// Ctor Parameters [CppParam { name: "elements", ty: "::ArrayW<::UnityEngine::UIElements::VisualElement*,::Array<::UnityEngine::UIElements::VisualElement*>*>", modifiers: "", def_value: None }, CppParam { name: "properties", ty: "::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId,::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*>", modifiers: "", def_value: None }, CppParam { name: "timing", ty: "::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::Background>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::Background>>*>", modifiers: "", def_value: None }, CppParam { name: "style", ty: "::ArrayW<::UnityEngine::UIElements::Background,::Array<::UnityEngine::UIElements::Background>*>", modifiers: "", def_value: None }, CppParam { name: "count", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "indices", ty: "::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>*", modifiers: "", def_value: None }]
constexpr __StylePropertyAnimationSystem__AnimationDataSet_2(::ArrayW<::UnityEngine::UIElements::VisualElement*,::Array<::UnityEngine::UIElements::VisualElement*>*>  elements, ::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId,::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*>  properties, ::ArrayW<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::Background>,::Array<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::Background>>*>  timing, ::ArrayW<::UnityEngine::UIElements::Background,::Array<::UnityEngine::UIElements::Background>*>  style, int32_t  count, ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>*  indices) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __StylePropertyAnimationSystem__AnimationDataSet_2(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x30>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __StylePropertyAnimationSystem__AnimationDataSet_2()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: ::AnimationDataSet`2
namespace UnityEngine::UIElements {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TTimingData,::il2cpp_utils::il2cpp_reference_type TStyleData>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6833))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6833), inst: 81 })
// CS Name: ::StylePropertyAnimationSystem::AnimationDataSet`2<TTimingData,TStyleData>
struct CORDL_TYPE __StylePropertyAnimationSystem__AnimationDataSet_2<TTimingData,TStyleData> : public ::bs_hook::ValueTypeWrapper<0x30> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field elements offset 0x0
 __declspec(property(get=__get_elements, put=__set_elements)) ::ArrayW<::UnityEngine::UIElements::VisualElement*,::Array<::UnityEngine::UIElements::VisualElement*>*>  elements;

/// @brief Field properties offset 0x8
 __declspec(property(get=__get_properties, put=__set_properties)) ::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId,::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*>  properties;

/// @brief Field timing offset 0x10
 __declspec(property(get=__get_timing, put=__set_timing)) ::ArrayW<TTimingData,::Array<TTimingData>*>  timing;

/// @brief Field style offset 0x18
 __declspec(property(get=__get_style, put=__set_style)) ::ArrayW<TStyleData,::Array<TStyleData>*>  style;

/// @brief Field count offset 0x20
 __declspec(property(get=__get_count, put=__set_count)) int32_t  count;

/// @brief Field indices offset 0x28
 __declspec(property(get=__get_indices, put=__set_indices)) ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>*  indices;

 __declspec(property(get=get_capacity, put=set_capacity)) int32_t  capacity;

constexpr void __set_elements(::ArrayW<::UnityEngine::UIElements::VisualElement*,::Array<::UnityEngine::UIElements::VisualElement*>*>  value) ;

constexpr ::ArrayW<::UnityEngine::UIElements::VisualElement*,::Array<::UnityEngine::UIElements::VisualElement*>*>& __get_elements() ;

constexpr ::ArrayW<::UnityEngine::UIElements::VisualElement*,::Array<::UnityEngine::UIElements::VisualElement*>*> const& __get_elements() const;

constexpr void __set_properties(::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId,::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*>  value) ;

constexpr ::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId,::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*>& __get_properties() ;

constexpr ::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId,::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*> const& __get_properties() const;

constexpr void __set_timing(::ArrayW<TTimingData,::Array<TTimingData>*>  value) ;

constexpr ::ArrayW<TTimingData,::Array<TTimingData>*>& __get_timing() ;

constexpr ::ArrayW<TTimingData,::Array<TTimingData>*> const& __get_timing() const;

constexpr void __set_style(::ArrayW<TStyleData,::Array<TStyleData>*>  value) ;

constexpr ::ArrayW<TStyleData,::Array<TStyleData>*>& __get_style() ;

constexpr ::ArrayW<TStyleData,::Array<TStyleData>*> const& __get_style() const;

constexpr void __set_count(int32_t  value) ;

constexpr int32_t& __get_count() ;

constexpr int32_t const& __get_count() const;

constexpr void __set_indices(::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>*  value) ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>* __get_indices() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>*> __get_indices() const;

/// @brief Method get_capacity addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t get_capacity() ;

/// @brief Method set_capacity addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_capacity(int32_t  value) ;

/// @brief Method LocalInit addr 0x0 size 0xffffffffffffffff virtual false final false
inline void LocalInit() ;

/// @brief Method Create addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::UnityEngine::UIElements::__StylePropertyAnimationSystem__AnimationDataSet_2<TTimingData,TStyleData> Create() ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool IndexOf(::UnityEngine::UIElements::VisualElement*  ve, ::UnityEngine::UIElements::StyleSheets::StylePropertyId  prop, ByRef<int32_t>  index) ;

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Add(::UnityEngine::UIElements::VisualElement*  owner, ::UnityEngine::UIElements::StyleSheets::StylePropertyId  prop, TTimingData  timingData, TStyleData  styleData) ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Remove(int32_t  cancelledIndex) ;

/// @brief Method Replace addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Replace(int32_t  index, TTimingData  timingData, TStyleData  styleData) ;

/// @brief Method RemoveAll addr 0x0 size 0xffffffffffffffff virtual false final false
inline void RemoveAll(::UnityEngine::UIElements::VisualElement*  ve) ;

/// @brief Method RemoveAll addr 0x0 size 0xffffffffffffffff virtual false final false
inline void RemoveAll() ;

/// @brief Method GetActivePropertiesForElement addr 0x0 size 0xffffffffffffffff virtual false final false
inline void GetActivePropertiesForElement(::UnityEngine::UIElements::VisualElement*  ve, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*  outProperties) ;

// Ctor Parameters [CppParam { name: "elements", ty: "::ArrayW<::UnityEngine::UIElements::VisualElement*,::Array<::UnityEngine::UIElements::VisualElement*>*>", modifiers: "", def_value: None }, CppParam { name: "properties", ty: "::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId,::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*>", modifiers: "", def_value: None }, CppParam { name: "timing", ty: "::ArrayW<TTimingData,::Array<TTimingData>*>", modifiers: "", def_value: None }, CppParam { name: "style", ty: "::ArrayW<TStyleData,::Array<TStyleData>*>", modifiers: "", def_value: None }, CppParam { name: "count", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "indices", ty: "::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>*", modifiers: "", def_value: None }]
constexpr __StylePropertyAnimationSystem__AnimationDataSet_2(::ArrayW<::UnityEngine::UIElements::VisualElement*,::Array<::UnityEngine::UIElements::VisualElement*>*>  elements, ::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId,::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*>  properties, ::ArrayW<TTimingData,::Array<TTimingData>*>  timing, ::ArrayW<TStyleData,::Array<TStyleData>*>  style, int32_t  count, ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>*  indices) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __StylePropertyAnimationSystem__AnimationDataSet_2(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x30>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __StylePropertyAnimationSystem__AnimationDataSet_2()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: ::<>c
namespace GlobalNamespace {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(6837))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6837), inst: 1575 })
// CS Name: ::StylePropertyAnimationSystem::Values`1::TransitionEventsFrameState::<>c<T>*
class CORDL_TYPE __StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c<::UnityEngine::UIElements::Translate> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF___9(::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c<::UnityEngine::UIElements::Translate>*  value) ;

static inline ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c<::UnityEngine::UIElements::Translate>* getStaticF___9() ;

static inline ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c<::UnityEngine::UIElements::Translate>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method <.cctor>b__11_0 addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::EventBase*>* __cctor_b__11_0() ;

// Ctor Parameters [CppParam { name: "", ty: "__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c(__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c(__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c()  = default;
public:


// Fields

// Static field <>9


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<>c
namespace GlobalNamespace {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6837)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6837), inst: 1574 })
// CS Name: ::StylePropertyAnimationSystem::Values`1::TransitionEventsFrameState::<>c<T>*
class CORDL_TYPE __StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c<::UnityEngine::UIElements::TransformOrigin> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF___9(::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c<::UnityEngine::UIElements::TransformOrigin>*  value) ;

static inline ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c<::UnityEngine::UIElements::TransformOrigin>* getStaticF___9() ;

static inline ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c<::UnityEngine::UIElements::TransformOrigin>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method <.cctor>b__11_0 addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::EventBase*>* __cctor_b__11_0() ;

// Ctor Parameters [CppParam { name: "", ty: "__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c(__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c(__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c()  = default;
public:


// Fields

// Static field <>9


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<>c
namespace GlobalNamespace {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(6837))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6837), inst: 1573 })
// CS Name: ::StylePropertyAnimationSystem::Values`1::TransitionEventsFrameState::<>c<T>*
class CORDL_TYPE __StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c<::UnityEngine::UIElements::TextShadow> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF___9(::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c<::UnityEngine::UIElements::TextShadow>*  value) ;

static inline ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c<::UnityEngine::UIElements::TextShadow>* getStaticF___9() ;

static inline ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c<::UnityEngine::UIElements::TextShadow>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method <.cctor>b__11_0 addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::EventBase*>* __cctor_b__11_0() ;

// Ctor Parameters [CppParam { name: "", ty: "__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c(__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c(__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c()  = default;
public:


// Fields

// Static field <>9


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<>c
namespace GlobalNamespace {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(6837))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6837), inst: 1572 })
// CS Name: ::StylePropertyAnimationSystem::Values`1::TransitionEventsFrameState::<>c<T>*
class CORDL_TYPE __StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c<::UnityEngine::UIElements::Scale> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF___9(::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c<::UnityEngine::UIElements::Scale>*  value) ;

static inline ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c<::UnityEngine::UIElements::Scale>* getStaticF___9() ;

static inline ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c<::UnityEngine::UIElements::Scale>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method <.cctor>b__11_0 addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::EventBase*>* __cctor_b__11_0() ;

// Ctor Parameters [CppParam { name: "", ty: "__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c(__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c(__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c()  = default;
public:


// Fields

// Static field <>9


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<>c
namespace GlobalNamespace {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(6837))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6837), inst: 1571 })
// CS Name: ::StylePropertyAnimationSystem::Values`1::TransitionEventsFrameState::<>c<T>*
class CORDL_TYPE __StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c<::UnityEngine::UIElements::Rotate> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF___9(::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c<::UnityEngine::UIElements::Rotate>*  value) ;

static inline ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c<::UnityEngine::UIElements::Rotate>* getStaticF___9() ;

static inline ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c<::UnityEngine::UIElements::Rotate>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method <.cctor>b__11_0 addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::EventBase*>* __cctor_b__11_0() ;

// Ctor Parameters [CppParam { name: "", ty: "__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c(__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c(__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c()  = default;
public:


// Fields

// Static field <>9


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<>c
namespace GlobalNamespace {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6837)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6837), inst: 1570 })
// CS Name: ::StylePropertyAnimationSystem::Values`1::TransitionEventsFrameState::<>c<T>*
class CORDL_TYPE __StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c<::UnityEngine::UIElements::Length> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF___9(::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c<::UnityEngine::UIElements::Length>*  value) ;

static inline ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c<::UnityEngine::UIElements::Length>* getStaticF___9() ;

static inline ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c<::UnityEngine::UIElements::Length>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method <.cctor>b__11_0 addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::EventBase*>* __cctor_b__11_0() ;

// Ctor Parameters [CppParam { name: "", ty: "__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c(__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c(__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c()  = default;
public:


// Fields

// Static field <>9


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<>c
namespace GlobalNamespace {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6837)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6837), inst: 1569 })
// CS Name: ::StylePropertyAnimationSystem::Values`1::TransitionEventsFrameState::<>c<T>*
class CORDL_TYPE __StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c<::UnityEngine::UIElements::FontDefinition> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF___9(::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c<::UnityEngine::UIElements::FontDefinition>*  value) ;

static inline ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c<::UnityEngine::UIElements::FontDefinition>* getStaticF___9() ;

static inline ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c<::UnityEngine::UIElements::FontDefinition>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method <.cctor>b__11_0 addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::EventBase*>* __cctor_b__11_0() ;

// Ctor Parameters [CppParam { name: "", ty: "__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c(__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c(__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c()  = default;
public:


// Fields

// Static field <>9


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<>c
namespace GlobalNamespace {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6837)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6837), inst: 1568 })
// CS Name: ::StylePropertyAnimationSystem::Values`1::TransitionEventsFrameState::<>c<T>*
class CORDL_TYPE __StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c<::UnityEngine::UIElements::Background> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF___9(::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c<::UnityEngine::UIElements::Background>*  value) ;

static inline ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c<::UnityEngine::UIElements::Background>* getStaticF___9() ;

static inline ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c<::UnityEngine::UIElements::Background>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method <.cctor>b__11_0 addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::EventBase*>* __cctor_b__11_0() ;

// Ctor Parameters [CppParam { name: "", ty: "__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c(__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c(__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c()  = default;
public:


// Fields

// Static field <>9


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<>c
namespace GlobalNamespace {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(6837))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6837), inst: 391 })
// CS Name: ::StylePropertyAnimationSystem::Values`1::TransitionEventsFrameState::<>c<T>*
class CORDL_TYPE __StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c<float_t> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF___9(::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c<float_t>*  value) ;

static inline ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c<float_t>* getStaticF___9() ;

static inline ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c<float_t>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method <.cctor>b__11_0 addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::EventBase*>* __cctor_b__11_0() ;

// Ctor Parameters [CppParam { name: "", ty: "__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c(__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c(__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c()  = default;
public:


// Fields

// Static field <>9


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<>c
namespace GlobalNamespace {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(6837))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6837), inst: 293 })
// CS Name: ::StylePropertyAnimationSystem::Values`1::TransitionEventsFrameState::<>c<T>*
class CORDL_TYPE __StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c<::UnityEngine::Color> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF___9(::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c<::UnityEngine::Color>*  value) ;

static inline ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c<::UnityEngine::Color>* getStaticF___9() ;

static inline ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c<::UnityEngine::Color>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method <.cctor>b__11_0 addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::EventBase*>* __cctor_b__11_0() ;

// Ctor Parameters [CppParam { name: "", ty: "__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c(__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c(__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c()  = default;
public:


// Fields

// Static field <>9


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<>c
namespace GlobalNamespace {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6837)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6837), inst: 98 })
// CS Name: ::StylePropertyAnimationSystem::Values`1::TransitionEventsFrameState::<>c<T>*
class CORDL_TYPE __StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c<int32_t> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF___9(::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c<int32_t>*  value) ;

static inline ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c<int32_t>* getStaticF___9() ;

static inline ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c<int32_t>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method <.cctor>b__11_0 addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::EventBase*>* __cctor_b__11_0() ;

// Ctor Parameters [CppParam { name: "", ty: "__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c(__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c(__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c()  = default;
public:


// Fields

// Static field <>9


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<>c
namespace GlobalNamespace {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6837)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6837), inst: 2 })
// CS Name: ::StylePropertyAnimationSystem::Values`1::TransitionEventsFrameState::<>c<T>*
class CORDL_TYPE __StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c<T> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF___9(::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c<T>*  value) ;

static inline ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c<T>* getStaticF___9() ;

static inline ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c<T>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method <.cctor>b__11_0 addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::EventBase*>* __cctor_b__11_0() ;

// Ctor Parameters [CppParam { name: "", ty: "__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c(__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c(__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c()  = default;
public:


// Fields

// Static field <>9


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::TransitionEventsFrameState
namespace GlobalNamespace {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(6838))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6838), inst: 1575 })
// CS Name: ::StylePropertyAnimationSystem::Values`1::TransitionEventsFrameState<T>*
class CORDL_TYPE __StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<::UnityEngine::UIElements::Translate> : public ::System::Object {
public:
// Declarations
using __c = ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c<::UnityEngine::UIElements::Translate>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::System::Object)]{};

/// @brief Field elementPropertyStateDelta offset 0x10
 __declspec(property(get=__get_elementPropertyStateDelta, put=__set_elementPropertyStateDelta)) ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,::UnityEngine::UIElements::__StylePropertyAnimationSystem__TransitionState>*  elementPropertyStateDelta;

/// @brief Field elementPropertyQueuedEvents offset 0x18
 __declspec(property(get=__get_elementPropertyQueuedEvents, put=__set_elementPropertyQueuedEvents)) ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::EventBase*>*>*  elementPropertyQueuedEvents;

/// @brief Field panel offset 0x20
 __declspec(property(get=__get_panel, put=__set_panel)) ::UnityEngine::UIElements::IPanel*  panel;

/// @brief Field m_ChangesCount offset 0x28
 __declspec(property(get=__get_m_ChangesCount, put=__set_m_ChangesCount)) int32_t  m_ChangesCount;

static inline void setStaticF_k_EventQueuePool(::UnityEngine::Pool::ObjectPool_1<::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::EventBase*>*>*  value) ;

static inline ::UnityEngine::Pool::ObjectPool_1<::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::EventBase*>*>* getStaticF_k_EventQueuePool() ;

constexpr void __set_elementPropertyStateDelta(::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,::UnityEngine::UIElements::__StylePropertyAnimationSystem__TransitionState>*  value) ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,::UnityEngine::UIElements::__StylePropertyAnimationSystem__TransitionState>* __get_elementPropertyStateDelta() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,::UnityEngine::UIElements::__StylePropertyAnimationSystem__TransitionState>*> __get_elementPropertyStateDelta() const;

constexpr void __set_elementPropertyQueuedEvents(::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::EventBase*>*>*  value) ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::EventBase*>*>* __get_elementPropertyQueuedEvents() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::EventBase*>*>*> __get_elementPropertyQueuedEvents() const;

constexpr void __set_panel(::UnityEngine::UIElements::IPanel*  value) ;

constexpr ::UnityEngine::UIElements::IPanel* __get_panel() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::IPanel*> __get_panel() const;

constexpr void __set_m_ChangesCount(int32_t  value) ;

constexpr int32_t& __get_m_ChangesCount() ;

constexpr int32_t const& __get_m_ChangesCount() const;

/// @brief Method GetPooledQueue addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::EventBase*>* GetPooledQueue() ;

/// @brief Method RegisterChange addr 0x0 size 0xffffffffffffffff virtual false final false
inline void RegisterChange() ;

/// @brief Method UnregisterChange addr 0x0 size 0xffffffffffffffff virtual false final false
inline void UnregisterChange() ;

/// @brief Method StateChanged addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool StateChanged() ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Clear() ;

static inline ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<::UnityEngine::UIElements::Translate>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState(__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState(__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState()  = default;
public:


// Fields

// Static field k_EventQueuePool


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::TransitionEventsFrameState
namespace GlobalNamespace {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(6838))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6838), inst: 1574 })
// CS Name: ::StylePropertyAnimationSystem::Values`1::TransitionEventsFrameState<T>*
class CORDL_TYPE __StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<::UnityEngine::UIElements::TransformOrigin> : public ::System::Object {
public:
// Declarations
using __c = ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c<::UnityEngine::UIElements::TransformOrigin>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::System::Object)]{};

/// @brief Field elementPropertyStateDelta offset 0x10
 __declspec(property(get=__get_elementPropertyStateDelta, put=__set_elementPropertyStateDelta)) ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,::UnityEngine::UIElements::__StylePropertyAnimationSystem__TransitionState>*  elementPropertyStateDelta;

/// @brief Field elementPropertyQueuedEvents offset 0x18
 __declspec(property(get=__get_elementPropertyQueuedEvents, put=__set_elementPropertyQueuedEvents)) ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::EventBase*>*>*  elementPropertyQueuedEvents;

/// @brief Field panel offset 0x20
 __declspec(property(get=__get_panel, put=__set_panel)) ::UnityEngine::UIElements::IPanel*  panel;

/// @brief Field m_ChangesCount offset 0x28
 __declspec(property(get=__get_m_ChangesCount, put=__set_m_ChangesCount)) int32_t  m_ChangesCount;

static inline void setStaticF_k_EventQueuePool(::UnityEngine::Pool::ObjectPool_1<::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::EventBase*>*>*  value) ;

static inline ::UnityEngine::Pool::ObjectPool_1<::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::EventBase*>*>* getStaticF_k_EventQueuePool() ;

constexpr void __set_elementPropertyStateDelta(::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,::UnityEngine::UIElements::__StylePropertyAnimationSystem__TransitionState>*  value) ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,::UnityEngine::UIElements::__StylePropertyAnimationSystem__TransitionState>* __get_elementPropertyStateDelta() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,::UnityEngine::UIElements::__StylePropertyAnimationSystem__TransitionState>*> __get_elementPropertyStateDelta() const;

constexpr void __set_elementPropertyQueuedEvents(::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::EventBase*>*>*  value) ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::EventBase*>*>* __get_elementPropertyQueuedEvents() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::EventBase*>*>*> __get_elementPropertyQueuedEvents() const;

constexpr void __set_panel(::UnityEngine::UIElements::IPanel*  value) ;

constexpr ::UnityEngine::UIElements::IPanel* __get_panel() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::IPanel*> __get_panel() const;

constexpr void __set_m_ChangesCount(int32_t  value) ;

constexpr int32_t& __get_m_ChangesCount() ;

constexpr int32_t const& __get_m_ChangesCount() const;

/// @brief Method GetPooledQueue addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::EventBase*>* GetPooledQueue() ;

/// @brief Method RegisterChange addr 0x0 size 0xffffffffffffffff virtual false final false
inline void RegisterChange() ;

/// @brief Method UnregisterChange addr 0x0 size 0xffffffffffffffff virtual false final false
inline void UnregisterChange() ;

/// @brief Method StateChanged addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool StateChanged() ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Clear() ;

static inline ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<::UnityEngine::UIElements::TransformOrigin>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState(__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState(__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState()  = default;
public:


// Fields

// Static field k_EventQueuePool


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::TransitionEventsFrameState
namespace GlobalNamespace {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6838)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6838), inst: 1573 })
// CS Name: ::StylePropertyAnimationSystem::Values`1::TransitionEventsFrameState<T>*
class CORDL_TYPE __StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<::UnityEngine::UIElements::TextShadow> : public ::System::Object {
public:
// Declarations
using __c = ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c<::UnityEngine::UIElements::TextShadow>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::System::Object)]{};

/// @brief Field elementPropertyStateDelta offset 0x10
 __declspec(property(get=__get_elementPropertyStateDelta, put=__set_elementPropertyStateDelta)) ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,::UnityEngine::UIElements::__StylePropertyAnimationSystem__TransitionState>*  elementPropertyStateDelta;

/// @brief Field elementPropertyQueuedEvents offset 0x18
 __declspec(property(get=__get_elementPropertyQueuedEvents, put=__set_elementPropertyQueuedEvents)) ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::EventBase*>*>*  elementPropertyQueuedEvents;

/// @brief Field panel offset 0x20
 __declspec(property(get=__get_panel, put=__set_panel)) ::UnityEngine::UIElements::IPanel*  panel;

/// @brief Field m_ChangesCount offset 0x28
 __declspec(property(get=__get_m_ChangesCount, put=__set_m_ChangesCount)) int32_t  m_ChangesCount;

static inline void setStaticF_k_EventQueuePool(::UnityEngine::Pool::ObjectPool_1<::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::EventBase*>*>*  value) ;

static inline ::UnityEngine::Pool::ObjectPool_1<::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::EventBase*>*>* getStaticF_k_EventQueuePool() ;

constexpr void __set_elementPropertyStateDelta(::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,::UnityEngine::UIElements::__StylePropertyAnimationSystem__TransitionState>*  value) ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,::UnityEngine::UIElements::__StylePropertyAnimationSystem__TransitionState>* __get_elementPropertyStateDelta() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,::UnityEngine::UIElements::__StylePropertyAnimationSystem__TransitionState>*> __get_elementPropertyStateDelta() const;

constexpr void __set_elementPropertyQueuedEvents(::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::EventBase*>*>*  value) ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::EventBase*>*>* __get_elementPropertyQueuedEvents() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::EventBase*>*>*> __get_elementPropertyQueuedEvents() const;

constexpr void __set_panel(::UnityEngine::UIElements::IPanel*  value) ;

constexpr ::UnityEngine::UIElements::IPanel* __get_panel() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::IPanel*> __get_panel() const;

constexpr void __set_m_ChangesCount(int32_t  value) ;

constexpr int32_t& __get_m_ChangesCount() ;

constexpr int32_t const& __get_m_ChangesCount() const;

/// @brief Method GetPooledQueue addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::EventBase*>* GetPooledQueue() ;

/// @brief Method RegisterChange addr 0x0 size 0xffffffffffffffff virtual false final false
inline void RegisterChange() ;

/// @brief Method UnregisterChange addr 0x0 size 0xffffffffffffffff virtual false final false
inline void UnregisterChange() ;

/// @brief Method StateChanged addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool StateChanged() ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Clear() ;

static inline ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<::UnityEngine::UIElements::TextShadow>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState(__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState(__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState()  = default;
public:


// Fields

// Static field k_EventQueuePool


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::TransitionEventsFrameState
namespace GlobalNamespace {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6838)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6838), inst: 1572 })
// CS Name: ::StylePropertyAnimationSystem::Values`1::TransitionEventsFrameState<T>*
class CORDL_TYPE __StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<::UnityEngine::UIElements::Scale> : public ::System::Object {
public:
// Declarations
using __c = ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c<::UnityEngine::UIElements::Scale>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::System::Object)]{};

/// @brief Field elementPropertyStateDelta offset 0x10
 __declspec(property(get=__get_elementPropertyStateDelta, put=__set_elementPropertyStateDelta)) ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,::UnityEngine::UIElements::__StylePropertyAnimationSystem__TransitionState>*  elementPropertyStateDelta;

/// @brief Field elementPropertyQueuedEvents offset 0x18
 __declspec(property(get=__get_elementPropertyQueuedEvents, put=__set_elementPropertyQueuedEvents)) ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::EventBase*>*>*  elementPropertyQueuedEvents;

/// @brief Field panel offset 0x20
 __declspec(property(get=__get_panel, put=__set_panel)) ::UnityEngine::UIElements::IPanel*  panel;

/// @brief Field m_ChangesCount offset 0x28
 __declspec(property(get=__get_m_ChangesCount, put=__set_m_ChangesCount)) int32_t  m_ChangesCount;

static inline void setStaticF_k_EventQueuePool(::UnityEngine::Pool::ObjectPool_1<::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::EventBase*>*>*  value) ;

static inline ::UnityEngine::Pool::ObjectPool_1<::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::EventBase*>*>* getStaticF_k_EventQueuePool() ;

constexpr void __set_elementPropertyStateDelta(::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,::UnityEngine::UIElements::__StylePropertyAnimationSystem__TransitionState>*  value) ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,::UnityEngine::UIElements::__StylePropertyAnimationSystem__TransitionState>* __get_elementPropertyStateDelta() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,::UnityEngine::UIElements::__StylePropertyAnimationSystem__TransitionState>*> __get_elementPropertyStateDelta() const;

constexpr void __set_elementPropertyQueuedEvents(::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::EventBase*>*>*  value) ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::EventBase*>*>* __get_elementPropertyQueuedEvents() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::EventBase*>*>*> __get_elementPropertyQueuedEvents() const;

constexpr void __set_panel(::UnityEngine::UIElements::IPanel*  value) ;

constexpr ::UnityEngine::UIElements::IPanel* __get_panel() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::IPanel*> __get_panel() const;

constexpr void __set_m_ChangesCount(int32_t  value) ;

constexpr int32_t& __get_m_ChangesCount() ;

constexpr int32_t const& __get_m_ChangesCount() const;

/// @brief Method GetPooledQueue addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::EventBase*>* GetPooledQueue() ;

/// @brief Method RegisterChange addr 0x0 size 0xffffffffffffffff virtual false final false
inline void RegisterChange() ;

/// @brief Method UnregisterChange addr 0x0 size 0xffffffffffffffff virtual false final false
inline void UnregisterChange() ;

/// @brief Method StateChanged addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool StateChanged() ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Clear() ;

static inline ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<::UnityEngine::UIElements::Scale>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState(__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState(__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState()  = default;
public:


// Fields

// Static field k_EventQueuePool


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::TransitionEventsFrameState
namespace GlobalNamespace {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6838)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6838), inst: 1571 })
// CS Name: ::StylePropertyAnimationSystem::Values`1::TransitionEventsFrameState<T>*
class CORDL_TYPE __StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<::UnityEngine::UIElements::Rotate> : public ::System::Object {
public:
// Declarations
using __c = ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c<::UnityEngine::UIElements::Rotate>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::System::Object)]{};

/// @brief Field elementPropertyStateDelta offset 0x10
 __declspec(property(get=__get_elementPropertyStateDelta, put=__set_elementPropertyStateDelta)) ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,::UnityEngine::UIElements::__StylePropertyAnimationSystem__TransitionState>*  elementPropertyStateDelta;

/// @brief Field elementPropertyQueuedEvents offset 0x18
 __declspec(property(get=__get_elementPropertyQueuedEvents, put=__set_elementPropertyQueuedEvents)) ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::EventBase*>*>*  elementPropertyQueuedEvents;

/// @brief Field panel offset 0x20
 __declspec(property(get=__get_panel, put=__set_panel)) ::UnityEngine::UIElements::IPanel*  panel;

/// @brief Field m_ChangesCount offset 0x28
 __declspec(property(get=__get_m_ChangesCount, put=__set_m_ChangesCount)) int32_t  m_ChangesCount;

static inline void setStaticF_k_EventQueuePool(::UnityEngine::Pool::ObjectPool_1<::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::EventBase*>*>*  value) ;

static inline ::UnityEngine::Pool::ObjectPool_1<::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::EventBase*>*>* getStaticF_k_EventQueuePool() ;

constexpr void __set_elementPropertyStateDelta(::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,::UnityEngine::UIElements::__StylePropertyAnimationSystem__TransitionState>*  value) ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,::UnityEngine::UIElements::__StylePropertyAnimationSystem__TransitionState>* __get_elementPropertyStateDelta() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,::UnityEngine::UIElements::__StylePropertyAnimationSystem__TransitionState>*> __get_elementPropertyStateDelta() const;

constexpr void __set_elementPropertyQueuedEvents(::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::EventBase*>*>*  value) ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::EventBase*>*>* __get_elementPropertyQueuedEvents() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::EventBase*>*>*> __get_elementPropertyQueuedEvents() const;

constexpr void __set_panel(::UnityEngine::UIElements::IPanel*  value) ;

constexpr ::UnityEngine::UIElements::IPanel* __get_panel() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::IPanel*> __get_panel() const;

constexpr void __set_m_ChangesCount(int32_t  value) ;

constexpr int32_t& __get_m_ChangesCount() ;

constexpr int32_t const& __get_m_ChangesCount() const;

/// @brief Method GetPooledQueue addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::EventBase*>* GetPooledQueue() ;

/// @brief Method RegisterChange addr 0x0 size 0xffffffffffffffff virtual false final false
inline void RegisterChange() ;

/// @brief Method UnregisterChange addr 0x0 size 0xffffffffffffffff virtual false final false
inline void UnregisterChange() ;

/// @brief Method StateChanged addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool StateChanged() ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Clear() ;

static inline ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<::UnityEngine::UIElements::Rotate>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState(__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState(__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState()  = default;
public:


// Fields

// Static field k_EventQueuePool


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::TransitionEventsFrameState
namespace GlobalNamespace {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(6838))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6838), inst: 1570 })
// CS Name: ::StylePropertyAnimationSystem::Values`1::TransitionEventsFrameState<T>*
class CORDL_TYPE __StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<::UnityEngine::UIElements::Length> : public ::System::Object {
public:
// Declarations
using __c = ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c<::UnityEngine::UIElements::Length>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::System::Object)]{};

/// @brief Field elementPropertyStateDelta offset 0x10
 __declspec(property(get=__get_elementPropertyStateDelta, put=__set_elementPropertyStateDelta)) ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,::UnityEngine::UIElements::__StylePropertyAnimationSystem__TransitionState>*  elementPropertyStateDelta;

/// @brief Field elementPropertyQueuedEvents offset 0x18
 __declspec(property(get=__get_elementPropertyQueuedEvents, put=__set_elementPropertyQueuedEvents)) ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::EventBase*>*>*  elementPropertyQueuedEvents;

/// @brief Field panel offset 0x20
 __declspec(property(get=__get_panel, put=__set_panel)) ::UnityEngine::UIElements::IPanel*  panel;

/// @brief Field m_ChangesCount offset 0x28
 __declspec(property(get=__get_m_ChangesCount, put=__set_m_ChangesCount)) int32_t  m_ChangesCount;

static inline void setStaticF_k_EventQueuePool(::UnityEngine::Pool::ObjectPool_1<::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::EventBase*>*>*  value) ;

static inline ::UnityEngine::Pool::ObjectPool_1<::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::EventBase*>*>* getStaticF_k_EventQueuePool() ;

constexpr void __set_elementPropertyStateDelta(::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,::UnityEngine::UIElements::__StylePropertyAnimationSystem__TransitionState>*  value) ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,::UnityEngine::UIElements::__StylePropertyAnimationSystem__TransitionState>* __get_elementPropertyStateDelta() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,::UnityEngine::UIElements::__StylePropertyAnimationSystem__TransitionState>*> __get_elementPropertyStateDelta() const;

constexpr void __set_elementPropertyQueuedEvents(::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::EventBase*>*>*  value) ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::EventBase*>*>* __get_elementPropertyQueuedEvents() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::EventBase*>*>*> __get_elementPropertyQueuedEvents() const;

constexpr void __set_panel(::UnityEngine::UIElements::IPanel*  value) ;

constexpr ::UnityEngine::UIElements::IPanel* __get_panel() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::IPanel*> __get_panel() const;

constexpr void __set_m_ChangesCount(int32_t  value) ;

constexpr int32_t& __get_m_ChangesCount() ;

constexpr int32_t const& __get_m_ChangesCount() const;

/// @brief Method GetPooledQueue addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::EventBase*>* GetPooledQueue() ;

/// @brief Method RegisterChange addr 0x0 size 0xffffffffffffffff virtual false final false
inline void RegisterChange() ;

/// @brief Method UnregisterChange addr 0x0 size 0xffffffffffffffff virtual false final false
inline void UnregisterChange() ;

/// @brief Method StateChanged addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool StateChanged() ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Clear() ;

static inline ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<::UnityEngine::UIElements::Length>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState(__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState(__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState()  = default;
public:


// Fields

// Static field k_EventQueuePool


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::TransitionEventsFrameState
namespace GlobalNamespace {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6838)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6838), inst: 1569 })
// CS Name: ::StylePropertyAnimationSystem::Values`1::TransitionEventsFrameState<T>*
class CORDL_TYPE __StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<::UnityEngine::UIElements::FontDefinition> : public ::System::Object {
public:
// Declarations
using __c = ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c<::UnityEngine::UIElements::FontDefinition>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::System::Object)]{};

/// @brief Field elementPropertyStateDelta offset 0x10
 __declspec(property(get=__get_elementPropertyStateDelta, put=__set_elementPropertyStateDelta)) ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,::UnityEngine::UIElements::__StylePropertyAnimationSystem__TransitionState>*  elementPropertyStateDelta;

/// @brief Field elementPropertyQueuedEvents offset 0x18
 __declspec(property(get=__get_elementPropertyQueuedEvents, put=__set_elementPropertyQueuedEvents)) ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::EventBase*>*>*  elementPropertyQueuedEvents;

/// @brief Field panel offset 0x20
 __declspec(property(get=__get_panel, put=__set_panel)) ::UnityEngine::UIElements::IPanel*  panel;

/// @brief Field m_ChangesCount offset 0x28
 __declspec(property(get=__get_m_ChangesCount, put=__set_m_ChangesCount)) int32_t  m_ChangesCount;

static inline void setStaticF_k_EventQueuePool(::UnityEngine::Pool::ObjectPool_1<::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::EventBase*>*>*  value) ;

static inline ::UnityEngine::Pool::ObjectPool_1<::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::EventBase*>*>* getStaticF_k_EventQueuePool() ;

constexpr void __set_elementPropertyStateDelta(::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,::UnityEngine::UIElements::__StylePropertyAnimationSystem__TransitionState>*  value) ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,::UnityEngine::UIElements::__StylePropertyAnimationSystem__TransitionState>* __get_elementPropertyStateDelta() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,::UnityEngine::UIElements::__StylePropertyAnimationSystem__TransitionState>*> __get_elementPropertyStateDelta() const;

constexpr void __set_elementPropertyQueuedEvents(::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::EventBase*>*>*  value) ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::EventBase*>*>* __get_elementPropertyQueuedEvents() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::EventBase*>*>*> __get_elementPropertyQueuedEvents() const;

constexpr void __set_panel(::UnityEngine::UIElements::IPanel*  value) ;

constexpr ::UnityEngine::UIElements::IPanel* __get_panel() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::IPanel*> __get_panel() const;

constexpr void __set_m_ChangesCount(int32_t  value) ;

constexpr int32_t& __get_m_ChangesCount() ;

constexpr int32_t const& __get_m_ChangesCount() const;

/// @brief Method GetPooledQueue addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::EventBase*>* GetPooledQueue() ;

/// @brief Method RegisterChange addr 0x0 size 0xffffffffffffffff virtual false final false
inline void RegisterChange() ;

/// @brief Method UnregisterChange addr 0x0 size 0xffffffffffffffff virtual false final false
inline void UnregisterChange() ;

/// @brief Method StateChanged addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool StateChanged() ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Clear() ;

static inline ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<::UnityEngine::UIElements::FontDefinition>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState(__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState(__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState()  = default;
public:


// Fields

// Static field k_EventQueuePool


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::TransitionEventsFrameState
namespace GlobalNamespace {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(6838))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6838), inst: 1568 })
// CS Name: ::StylePropertyAnimationSystem::Values`1::TransitionEventsFrameState<T>*
class CORDL_TYPE __StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<::UnityEngine::UIElements::Background> : public ::System::Object {
public:
// Declarations
using __c = ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c<::UnityEngine::UIElements::Background>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::System::Object)]{};

/// @brief Field elementPropertyStateDelta offset 0x10
 __declspec(property(get=__get_elementPropertyStateDelta, put=__set_elementPropertyStateDelta)) ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,::UnityEngine::UIElements::__StylePropertyAnimationSystem__TransitionState>*  elementPropertyStateDelta;

/// @brief Field elementPropertyQueuedEvents offset 0x18
 __declspec(property(get=__get_elementPropertyQueuedEvents, put=__set_elementPropertyQueuedEvents)) ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::EventBase*>*>*  elementPropertyQueuedEvents;

/// @brief Field panel offset 0x20
 __declspec(property(get=__get_panel, put=__set_panel)) ::UnityEngine::UIElements::IPanel*  panel;

/// @brief Field m_ChangesCount offset 0x28
 __declspec(property(get=__get_m_ChangesCount, put=__set_m_ChangesCount)) int32_t  m_ChangesCount;

static inline void setStaticF_k_EventQueuePool(::UnityEngine::Pool::ObjectPool_1<::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::EventBase*>*>*  value) ;

static inline ::UnityEngine::Pool::ObjectPool_1<::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::EventBase*>*>* getStaticF_k_EventQueuePool() ;

constexpr void __set_elementPropertyStateDelta(::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,::UnityEngine::UIElements::__StylePropertyAnimationSystem__TransitionState>*  value) ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,::UnityEngine::UIElements::__StylePropertyAnimationSystem__TransitionState>* __get_elementPropertyStateDelta() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,::UnityEngine::UIElements::__StylePropertyAnimationSystem__TransitionState>*> __get_elementPropertyStateDelta() const;

constexpr void __set_elementPropertyQueuedEvents(::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::EventBase*>*>*  value) ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::EventBase*>*>* __get_elementPropertyQueuedEvents() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::EventBase*>*>*> __get_elementPropertyQueuedEvents() const;

constexpr void __set_panel(::UnityEngine::UIElements::IPanel*  value) ;

constexpr ::UnityEngine::UIElements::IPanel* __get_panel() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::IPanel*> __get_panel() const;

constexpr void __set_m_ChangesCount(int32_t  value) ;

constexpr int32_t& __get_m_ChangesCount() ;

constexpr int32_t const& __get_m_ChangesCount() const;

/// @brief Method GetPooledQueue addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::EventBase*>* GetPooledQueue() ;

/// @brief Method RegisterChange addr 0x0 size 0xffffffffffffffff virtual false final false
inline void RegisterChange() ;

/// @brief Method UnregisterChange addr 0x0 size 0xffffffffffffffff virtual false final false
inline void UnregisterChange() ;

/// @brief Method StateChanged addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool StateChanged() ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Clear() ;

static inline ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<::UnityEngine::UIElements::Background>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState(__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState(__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState()  = default;
public:


// Fields

// Static field k_EventQueuePool


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::TransitionEventsFrameState
namespace GlobalNamespace {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(6838))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6838), inst: 391 })
// CS Name: ::StylePropertyAnimationSystem::Values`1::TransitionEventsFrameState<T>*
class CORDL_TYPE __StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<float_t> : public ::System::Object {
public:
// Declarations
using __c = ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c<float_t>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::System::Object)]{};

/// @brief Field elementPropertyStateDelta offset 0x10
 __declspec(property(get=__get_elementPropertyStateDelta, put=__set_elementPropertyStateDelta)) ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,::UnityEngine::UIElements::__StylePropertyAnimationSystem__TransitionState>*  elementPropertyStateDelta;

/// @brief Field elementPropertyQueuedEvents offset 0x18
 __declspec(property(get=__get_elementPropertyQueuedEvents, put=__set_elementPropertyQueuedEvents)) ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::EventBase*>*>*  elementPropertyQueuedEvents;

/// @brief Field panel offset 0x20
 __declspec(property(get=__get_panel, put=__set_panel)) ::UnityEngine::UIElements::IPanel*  panel;

/// @brief Field m_ChangesCount offset 0x28
 __declspec(property(get=__get_m_ChangesCount, put=__set_m_ChangesCount)) int32_t  m_ChangesCount;

static inline void setStaticF_k_EventQueuePool(::UnityEngine::Pool::ObjectPool_1<::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::EventBase*>*>*  value) ;

static inline ::UnityEngine::Pool::ObjectPool_1<::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::EventBase*>*>* getStaticF_k_EventQueuePool() ;

constexpr void __set_elementPropertyStateDelta(::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,::UnityEngine::UIElements::__StylePropertyAnimationSystem__TransitionState>*  value) ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,::UnityEngine::UIElements::__StylePropertyAnimationSystem__TransitionState>* __get_elementPropertyStateDelta() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,::UnityEngine::UIElements::__StylePropertyAnimationSystem__TransitionState>*> __get_elementPropertyStateDelta() const;

constexpr void __set_elementPropertyQueuedEvents(::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::EventBase*>*>*  value) ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::EventBase*>*>* __get_elementPropertyQueuedEvents() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::EventBase*>*>*> __get_elementPropertyQueuedEvents() const;

constexpr void __set_panel(::UnityEngine::UIElements::IPanel*  value) ;

constexpr ::UnityEngine::UIElements::IPanel* __get_panel() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::IPanel*> __get_panel() const;

constexpr void __set_m_ChangesCount(int32_t  value) ;

constexpr int32_t& __get_m_ChangesCount() ;

constexpr int32_t const& __get_m_ChangesCount() const;

/// @brief Method GetPooledQueue addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::EventBase*>* GetPooledQueue() ;

/// @brief Method RegisterChange addr 0x0 size 0xffffffffffffffff virtual false final false
inline void RegisterChange() ;

/// @brief Method UnregisterChange addr 0x0 size 0xffffffffffffffff virtual false final false
inline void UnregisterChange() ;

/// @brief Method StateChanged addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool StateChanged() ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Clear() ;

static inline ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<float_t>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState(__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState(__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState()  = default;
public:


// Fields

// Static field k_EventQueuePool


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::TransitionEventsFrameState
namespace GlobalNamespace {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6838)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6838), inst: 293 })
// CS Name: ::StylePropertyAnimationSystem::Values`1::TransitionEventsFrameState<T>*
class CORDL_TYPE __StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<::UnityEngine::Color> : public ::System::Object {
public:
// Declarations
using __c = ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c<::UnityEngine::Color>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::System::Object)]{};

/// @brief Field elementPropertyStateDelta offset 0x10
 __declspec(property(get=__get_elementPropertyStateDelta, put=__set_elementPropertyStateDelta)) ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,::UnityEngine::UIElements::__StylePropertyAnimationSystem__TransitionState>*  elementPropertyStateDelta;

/// @brief Field elementPropertyQueuedEvents offset 0x18
 __declspec(property(get=__get_elementPropertyQueuedEvents, put=__set_elementPropertyQueuedEvents)) ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::EventBase*>*>*  elementPropertyQueuedEvents;

/// @brief Field panel offset 0x20
 __declspec(property(get=__get_panel, put=__set_panel)) ::UnityEngine::UIElements::IPanel*  panel;

/// @brief Field m_ChangesCount offset 0x28
 __declspec(property(get=__get_m_ChangesCount, put=__set_m_ChangesCount)) int32_t  m_ChangesCount;

static inline void setStaticF_k_EventQueuePool(::UnityEngine::Pool::ObjectPool_1<::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::EventBase*>*>*  value) ;

static inline ::UnityEngine::Pool::ObjectPool_1<::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::EventBase*>*>* getStaticF_k_EventQueuePool() ;

constexpr void __set_elementPropertyStateDelta(::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,::UnityEngine::UIElements::__StylePropertyAnimationSystem__TransitionState>*  value) ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,::UnityEngine::UIElements::__StylePropertyAnimationSystem__TransitionState>* __get_elementPropertyStateDelta() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,::UnityEngine::UIElements::__StylePropertyAnimationSystem__TransitionState>*> __get_elementPropertyStateDelta() const;

constexpr void __set_elementPropertyQueuedEvents(::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::EventBase*>*>*  value) ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::EventBase*>*>* __get_elementPropertyQueuedEvents() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::EventBase*>*>*> __get_elementPropertyQueuedEvents() const;

constexpr void __set_panel(::UnityEngine::UIElements::IPanel*  value) ;

constexpr ::UnityEngine::UIElements::IPanel* __get_panel() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::IPanel*> __get_panel() const;

constexpr void __set_m_ChangesCount(int32_t  value) ;

constexpr int32_t& __get_m_ChangesCount() ;

constexpr int32_t const& __get_m_ChangesCount() const;

/// @brief Method GetPooledQueue addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::EventBase*>* GetPooledQueue() ;

/// @brief Method RegisterChange addr 0x0 size 0xffffffffffffffff virtual false final false
inline void RegisterChange() ;

/// @brief Method UnregisterChange addr 0x0 size 0xffffffffffffffff virtual false final false
inline void UnregisterChange() ;

/// @brief Method StateChanged addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool StateChanged() ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Clear() ;

static inline ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<::UnityEngine::Color>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState(__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState(__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState()  = default;
public:


// Fields

// Static field k_EventQueuePool


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::TransitionEventsFrameState
namespace GlobalNamespace {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(6838))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6838), inst: 98 })
// CS Name: ::StylePropertyAnimationSystem::Values`1::TransitionEventsFrameState<T>*
class CORDL_TYPE __StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<int32_t> : public ::System::Object {
public:
// Declarations
using __c = ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c<int32_t>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::System::Object)]{};

/// @brief Field elementPropertyStateDelta offset 0x10
 __declspec(property(get=__get_elementPropertyStateDelta, put=__set_elementPropertyStateDelta)) ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,::UnityEngine::UIElements::__StylePropertyAnimationSystem__TransitionState>*  elementPropertyStateDelta;

/// @brief Field elementPropertyQueuedEvents offset 0x18
 __declspec(property(get=__get_elementPropertyQueuedEvents, put=__set_elementPropertyQueuedEvents)) ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::EventBase*>*>*  elementPropertyQueuedEvents;

/// @brief Field panel offset 0x20
 __declspec(property(get=__get_panel, put=__set_panel)) ::UnityEngine::UIElements::IPanel*  panel;

/// @brief Field m_ChangesCount offset 0x28
 __declspec(property(get=__get_m_ChangesCount, put=__set_m_ChangesCount)) int32_t  m_ChangesCount;

static inline void setStaticF_k_EventQueuePool(::UnityEngine::Pool::ObjectPool_1<::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::EventBase*>*>*  value) ;

static inline ::UnityEngine::Pool::ObjectPool_1<::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::EventBase*>*>* getStaticF_k_EventQueuePool() ;

constexpr void __set_elementPropertyStateDelta(::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,::UnityEngine::UIElements::__StylePropertyAnimationSystem__TransitionState>*  value) ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,::UnityEngine::UIElements::__StylePropertyAnimationSystem__TransitionState>* __get_elementPropertyStateDelta() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,::UnityEngine::UIElements::__StylePropertyAnimationSystem__TransitionState>*> __get_elementPropertyStateDelta() const;

constexpr void __set_elementPropertyQueuedEvents(::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::EventBase*>*>*  value) ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::EventBase*>*>* __get_elementPropertyQueuedEvents() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::EventBase*>*>*> __get_elementPropertyQueuedEvents() const;

constexpr void __set_panel(::UnityEngine::UIElements::IPanel*  value) ;

constexpr ::UnityEngine::UIElements::IPanel* __get_panel() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::IPanel*> __get_panel() const;

constexpr void __set_m_ChangesCount(int32_t  value) ;

constexpr int32_t& __get_m_ChangesCount() ;

constexpr int32_t const& __get_m_ChangesCount() const;

/// @brief Method GetPooledQueue addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::EventBase*>* GetPooledQueue() ;

/// @brief Method RegisterChange addr 0x0 size 0xffffffffffffffff virtual false final false
inline void RegisterChange() ;

/// @brief Method UnregisterChange addr 0x0 size 0xffffffffffffffff virtual false final false
inline void UnregisterChange() ;

/// @brief Method StateChanged addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool StateChanged() ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Clear() ;

static inline ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<int32_t>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState(__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState(__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState()  = default;
public:


// Fields

// Static field k_EventQueuePool


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::TransitionEventsFrameState
namespace GlobalNamespace {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6838)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6838), inst: 2 })
// CS Name: ::StylePropertyAnimationSystem::Values`1::TransitionEventsFrameState<T>*
class CORDL_TYPE __StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<T> : public ::System::Object {
public:
// Declarations
using __c = ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c<T>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::System::Object)]{};

/// @brief Field elementPropertyStateDelta offset 0x10
 __declspec(property(get=__get_elementPropertyStateDelta, put=__set_elementPropertyStateDelta)) ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,::UnityEngine::UIElements::__StylePropertyAnimationSystem__TransitionState>*  elementPropertyStateDelta;

/// @brief Field elementPropertyQueuedEvents offset 0x18
 __declspec(property(get=__get_elementPropertyQueuedEvents, put=__set_elementPropertyQueuedEvents)) ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::EventBase*>*>*  elementPropertyQueuedEvents;

/// @brief Field panel offset 0x20
 __declspec(property(get=__get_panel, put=__set_panel)) ::UnityEngine::UIElements::IPanel*  panel;

/// @brief Field m_ChangesCount offset 0x28
 __declspec(property(get=__get_m_ChangesCount, put=__set_m_ChangesCount)) int32_t  m_ChangesCount;

static inline void setStaticF_k_EventQueuePool(::UnityEngine::Pool::ObjectPool_1<::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::EventBase*>*>*  value) ;

static inline ::UnityEngine::Pool::ObjectPool_1<::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::EventBase*>*>* getStaticF_k_EventQueuePool() ;

constexpr void __set_elementPropertyStateDelta(::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,::UnityEngine::UIElements::__StylePropertyAnimationSystem__TransitionState>*  value) ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,::UnityEngine::UIElements::__StylePropertyAnimationSystem__TransitionState>* __get_elementPropertyStateDelta() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,::UnityEngine::UIElements::__StylePropertyAnimationSystem__TransitionState>*> __get_elementPropertyStateDelta() const;

constexpr void __set_elementPropertyQueuedEvents(::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::EventBase*>*>*  value) ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::EventBase*>*>* __get_elementPropertyQueuedEvents() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::EventBase*>*>*> __get_elementPropertyQueuedEvents() const;

constexpr void __set_panel(::UnityEngine::UIElements::IPanel*  value) ;

constexpr ::UnityEngine::UIElements::IPanel* __get_panel() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::IPanel*> __get_panel() const;

constexpr void __set_m_ChangesCount(int32_t  value) ;

constexpr int32_t& __get_m_ChangesCount() ;

constexpr int32_t const& __get_m_ChangesCount() const;

/// @brief Method GetPooledQueue addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::EventBase*>* GetPooledQueue() ;

/// @brief Method RegisterChange addr 0x0 size 0xffffffffffffffff virtual false final false
inline void RegisterChange() ;

/// @brief Method UnregisterChange addr 0x0 size 0xffffffffffffffff virtual false final false
inline void UnregisterChange() ;

/// @brief Method StateChanged addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool StateChanged() ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Clear() ;

static inline ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<T>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState(__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState(__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState()  = default;
public:


// Fields

// Static field k_EventQueuePool


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::EmptyData
namespace GlobalNamespace {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6841))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6841), inst: 1575 })
// CS Name: ::StylePropertyAnimationSystem::Values`1::EmptyData<T>
struct CORDL_TYPE __StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::Translate> : public ::bs_hook::ValueTypeWrapper<0x1> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

static inline void setStaticF_Default(::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::Translate>  value) ;

static inline ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::Translate> getStaticF_Default() ;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __StylePropertyAnimationSystem__Values_1__EmptyData(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x1>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __StylePropertyAnimationSystem__Values_1__EmptyData()  = default;


// Fields

// Static field Default


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::EmptyData
namespace GlobalNamespace {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6841))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6841), inst: 1574 })
// CS Name: ::StylePropertyAnimationSystem::Values`1::EmptyData<T>
struct CORDL_TYPE __StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::TransformOrigin> : public ::bs_hook::ValueTypeWrapper<0x1> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

static inline void setStaticF_Default(::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::TransformOrigin>  value) ;

static inline ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::TransformOrigin> getStaticF_Default() ;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __StylePropertyAnimationSystem__Values_1__EmptyData(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x1>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __StylePropertyAnimationSystem__Values_1__EmptyData()  = default;


// Fields

// Static field Default


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::EmptyData
namespace GlobalNamespace {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6841))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6841), inst: 1573 })
// CS Name: ::StylePropertyAnimationSystem::Values`1::EmptyData<T>
struct CORDL_TYPE __StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::TextShadow> : public ::bs_hook::ValueTypeWrapper<0x1> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

static inline void setStaticF_Default(::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::TextShadow>  value) ;

static inline ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::TextShadow> getStaticF_Default() ;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __StylePropertyAnimationSystem__Values_1__EmptyData(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x1>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __StylePropertyAnimationSystem__Values_1__EmptyData()  = default;


// Fields

// Static field Default


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::EmptyData
namespace GlobalNamespace {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6841))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6841), inst: 1572 })
// CS Name: ::StylePropertyAnimationSystem::Values`1::EmptyData<T>
struct CORDL_TYPE __StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::Scale> : public ::bs_hook::ValueTypeWrapper<0x1> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

static inline void setStaticF_Default(::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::Scale>  value) ;

static inline ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::Scale> getStaticF_Default() ;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __StylePropertyAnimationSystem__Values_1__EmptyData(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x1>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __StylePropertyAnimationSystem__Values_1__EmptyData()  = default;


// Fields

// Static field Default


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::EmptyData
namespace GlobalNamespace {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6841))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6841), inst: 1571 })
// CS Name: ::StylePropertyAnimationSystem::Values`1::EmptyData<T>
struct CORDL_TYPE __StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::Rotate> : public ::bs_hook::ValueTypeWrapper<0x1> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

static inline void setStaticF_Default(::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::Rotate>  value) ;

static inline ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::Rotate> getStaticF_Default() ;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __StylePropertyAnimationSystem__Values_1__EmptyData(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x1>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __StylePropertyAnimationSystem__Values_1__EmptyData()  = default;


// Fields

// Static field Default


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::EmptyData
namespace GlobalNamespace {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6841))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6841), inst: 1570 })
// CS Name: ::StylePropertyAnimationSystem::Values`1::EmptyData<T>
struct CORDL_TYPE __StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::Length> : public ::bs_hook::ValueTypeWrapper<0x1> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

static inline void setStaticF_Default(::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::Length>  value) ;

static inline ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::Length> getStaticF_Default() ;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __StylePropertyAnimationSystem__Values_1__EmptyData(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x1>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __StylePropertyAnimationSystem__Values_1__EmptyData()  = default;


// Fields

// Static field Default


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::EmptyData
namespace GlobalNamespace {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6841))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6841), inst: 1569 })
// CS Name: ::StylePropertyAnimationSystem::Values`1::EmptyData<T>
struct CORDL_TYPE __StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::FontDefinition> : public ::bs_hook::ValueTypeWrapper<0x1> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

static inline void setStaticF_Default(::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::FontDefinition>  value) ;

static inline ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::FontDefinition> getStaticF_Default() ;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __StylePropertyAnimationSystem__Values_1__EmptyData(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x1>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __StylePropertyAnimationSystem__Values_1__EmptyData()  = default;


// Fields

// Static field Default


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::EmptyData
namespace GlobalNamespace {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6841))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6841), inst: 1568 })
// CS Name: ::StylePropertyAnimationSystem::Values`1::EmptyData<T>
struct CORDL_TYPE __StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::Background> : public ::bs_hook::ValueTypeWrapper<0x1> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

static inline void setStaticF_Default(::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::Background>  value) ;

static inline ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::UIElements::Background> getStaticF_Default() ;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __StylePropertyAnimationSystem__Values_1__EmptyData(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x1>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __StylePropertyAnimationSystem__Values_1__EmptyData()  = default;


// Fields

// Static field Default


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::EmptyData
namespace GlobalNamespace {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6841))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6841), inst: 391 })
// CS Name: ::StylePropertyAnimationSystem::Values`1::EmptyData<T>
struct CORDL_TYPE __StylePropertyAnimationSystem__Values_1__EmptyData<float_t> : public ::bs_hook::ValueTypeWrapper<0x1> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

static inline void setStaticF_Default(::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<float_t>  value) ;

static inline ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<float_t> getStaticF_Default() ;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __StylePropertyAnimationSystem__Values_1__EmptyData(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x1>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __StylePropertyAnimationSystem__Values_1__EmptyData()  = default;


// Fields

// Static field Default


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::EmptyData
namespace GlobalNamespace {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6841))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6841), inst: 293 })
// CS Name: ::StylePropertyAnimationSystem::Values`1::EmptyData<T>
struct CORDL_TYPE __StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::Color> : public ::bs_hook::ValueTypeWrapper<0x1> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

static inline void setStaticF_Default(::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::Color>  value) ;

static inline ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<::UnityEngine::Color> getStaticF_Default() ;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __StylePropertyAnimationSystem__Values_1__EmptyData(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x1>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __StylePropertyAnimationSystem__Values_1__EmptyData()  = default;


// Fields

// Static field Default


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::EmptyData
namespace GlobalNamespace {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6841))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6841), inst: 98 })
// CS Name: ::StylePropertyAnimationSystem::Values`1::EmptyData<T>
struct CORDL_TYPE __StylePropertyAnimationSystem__Values_1__EmptyData<int32_t> : public ::bs_hook::ValueTypeWrapper<0x1> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

static inline void setStaticF_Default(::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<int32_t>  value) ;

static inline ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<int32_t> getStaticF_Default() ;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __StylePropertyAnimationSystem__Values_1__EmptyData(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x1>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __StylePropertyAnimationSystem__Values_1__EmptyData()  = default;


// Fields

// Static field Default


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::EmptyData
namespace GlobalNamespace {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6841))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6841), inst: 2 })
// CS Name: ::StylePropertyAnimationSystem::Values`1::EmptyData<T>
struct CORDL_TYPE __StylePropertyAnimationSystem__Values_1__EmptyData<T> : public ::bs_hook::ValueTypeWrapper<0x1> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

static inline void setStaticF_Default(::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<T>  value) ;

static inline ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<T> getStaticF_Default() ;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __StylePropertyAnimationSystem__Values_1__EmptyData(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x1>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __StylePropertyAnimationSystem__Values_1__EmptyData()  = default;


// Fields

// Static field Default


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState, "UnityEngine.UIElements", "StylePropertyAnimationSystem/Values`1/TransitionEventsFrameState");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c, "UnityEngine.UIElements", "StylePropertyAnimationSystem/Values`1/TransitionEventsFrameState/<>c");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesDiscrete_1, "UnityEngine.UIElements", "StylePropertyAnimationSystem/ValuesDiscrete`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values_1, "UnityEngine.UIElements", "StylePropertyAnimationSystem/Values`1");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__StylePropertyAnimationSystem__TransitionState, "UnityEngine.UIElements", "StylePropertyAnimationSystem/TransitionState");
NEED_NO_BOX(::GlobalNamespace::__StylePropertyAnimationSystem__ElementPropertyPair__EqualityComparer);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__StylePropertyAnimationSystem__ElementPropertyPair__EqualityComparer*, "UnityEngine.UIElements", "StylePropertyAnimationSystem/ElementPropertyPair/EqualityComparer");
NEED_NO_BOX(::UnityEngine::UIElements::StylePropertyAnimationSystem);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StylePropertyAnimationSystem*, "UnityEngine.UIElements", "StylePropertyAnimationSystem");
NEED_NO_BOX(::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values*, "UnityEngine.UIElements", "StylePropertyAnimationSystem/Values");
NEED_NO_BOX(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesBackground);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesBackground*, "UnityEngine.UIElements", "StylePropertyAnimationSystem/ValuesBackground");
NEED_NO_BOX(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesColor);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesColor*, "UnityEngine.UIElements", "StylePropertyAnimationSystem/ValuesColor");
NEED_NO_BOX(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesFloat);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesFloat*, "UnityEngine.UIElements", "StylePropertyAnimationSystem/ValuesFloat");
NEED_NO_BOX(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesFont);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesFont*, "UnityEngine.UIElements", "StylePropertyAnimationSystem/ValuesFont");
NEED_NO_BOX(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesFontDefinition);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesFontDefinition*, "UnityEngine.UIElements", "StylePropertyAnimationSystem/ValuesFontDefinition");
NEED_NO_BOX(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesInt);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesInt*, "UnityEngine.UIElements", "StylePropertyAnimationSystem/ValuesInt");
NEED_NO_BOX(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesLength);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesLength*, "UnityEngine.UIElements", "StylePropertyAnimationSystem/ValuesLength");
NEED_NO_BOX(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesRotate);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesRotate*, "UnityEngine.UIElements", "StylePropertyAnimationSystem/ValuesRotate");
NEED_NO_BOX(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesScale);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesScale*, "UnityEngine.UIElements", "StylePropertyAnimationSystem/ValuesScale");
NEED_NO_BOX(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTextShadow);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTextShadow*, "UnityEngine.UIElements", "StylePropertyAnimationSystem/ValuesTextShadow");
NEED_NO_BOX(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTransformOrigin);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTransformOrigin*, "UnityEngine.UIElements", "StylePropertyAnimationSystem/ValuesTransformOrigin");
NEED_NO_BOX(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTranslate);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTranslate*, "UnityEngine.UIElements", "StylePropertyAnimationSystem/ValuesTranslate");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData, "UnityEngine.UIElements", "StylePropertyAnimationSystem/Values`1/EmptyData");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::UnityEngine::UIElements::__StylePropertyAnimationSystem__AnimationDataSet_2, "UnityEngine.UIElements", "StylePropertyAnimationSystem/AnimationDataSet`2");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData, "UnityEngine.UIElements", "StylePropertyAnimationSystem/Values`1/StyleData");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData, "UnityEngine.UIElements", "StylePropertyAnimationSystem/Values`1/TimingData");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair, "UnityEngine.UIElements", "StylePropertyAnimationSystem/ElementPropertyPair");
