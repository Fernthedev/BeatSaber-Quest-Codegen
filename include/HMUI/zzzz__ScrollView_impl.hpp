#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "HMUI/zzzz__ScrollView_def.hpp"
#include "HMUI/zzzz__ScrollView_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/EventSystems/zzzz__PointerEventData_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/UI/zzzz__Button_def.hpp"
#include "UnityEngine/zzzz__RectTransform_def.hpp"
#include "GlobalNamespace/zzzz__IVRPlatformHelper_def.hpp"
#include "HMUI/zzzz__ButtonBinder_def.hpp"
#include "HMUI/zzzz__EventSystemListener_def.hpp"
#include "HMUI/zzzz__VerticalScrollIndicator_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "HMUI/zzzz__ItemForFocussedScrolling_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
constexpr void HMUI::__ScrollView__ScrollType::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& HMUI::__ScrollView__ScrollType::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& HMUI::__ScrollView__ScrollType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HMUI::__ScrollView__ScrollType::__ScrollView__ScrollType(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::HMUI::__ScrollView__ScrollType  HMUI::__ScrollView__ScrollType::PageSize{static_cast<int32_t>(0x0)};
constexpr ::HMUI::__ScrollView__ScrollType  HMUI::__ScrollView__ScrollType::FixedCellSize{static_cast<int32_t>(0x1)};
constexpr ::HMUI::__ScrollView__ScrollType  HMUI::__ScrollView__ScrollType::FocusItems{static_cast<int32_t>(0x2)};
constexpr void HMUI::__ScrollView__ScrollDirection::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& HMUI::__ScrollView__ScrollDirection::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& HMUI::__ScrollView__ScrollDirection::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HMUI::__ScrollView__ScrollDirection::__ScrollView__ScrollDirection(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::HMUI::__ScrollView__ScrollDirection  HMUI::__ScrollView__ScrollDirection::None{static_cast<int32_t>(0x0)};
constexpr ::HMUI::__ScrollView__ScrollDirection  HMUI::__ScrollView__ScrollDirection::Up{static_cast<int32_t>(0x1)};
constexpr ::HMUI::__ScrollView__ScrollDirection  HMUI::__ScrollView__ScrollDirection::Down{static_cast<int32_t>(0x2)};
constexpr ::HMUI::__ScrollView__ScrollDirection  HMUI::__ScrollView__ScrollDirection::Left{static_cast<int32_t>(0x3)};
constexpr ::HMUI::__ScrollView__ScrollDirection  HMUI::__ScrollView__ScrollDirection::Right{static_cast<int32_t>(0x4)};
constexpr void HMUI::__ScrollView__ScrollViewDirection::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& HMUI::__ScrollView__ScrollViewDirection::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& HMUI::__ScrollView__ScrollViewDirection::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HMUI::__ScrollView__ScrollViewDirection::__ScrollView__ScrollViewDirection(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::HMUI::__ScrollView__ScrollViewDirection  HMUI::__ScrollView__ScrollViewDirection::Vertical{static_cast<int32_t>(0x0)};
constexpr ::HMUI::__ScrollView__ScrollViewDirection  HMUI::__ScrollView__ScrollViewDirection::Horizontal{static_cast<int32_t>(0x1)};
//  Writing Method size for method: ::HMUI::__ScrollView____c._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::__ScrollView____c::*)()>(&::HMUI::__ScrollView____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2144df4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__ScrollView____c*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::__ScrollView____c._Awake_b__42_1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::HMUI::__ScrollView____c::*)(float_t)>(&::HMUI::__ScrollView____c::_Awake_b__42_1)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2144dfc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__ScrollView____c*>::get(),
                            "<Awake>b__42_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::__ScrollView____c._Awake_b__42_3
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::HMUI::__ScrollView____c::*)(float_t)>(&::HMUI::__ScrollView____c::_Awake_b__42_3)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2144e00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__ScrollView____c*>::get(),
                            "<Awake>b__42_3",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
inline void HMUI::__ScrollView____c::setStaticF___9(::HMUI::__ScrollView____c*  value)  {
::cordl_internals::setStaticField<::HMUI::__ScrollView____c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__ScrollView____c*>::get>(std::forward<::HMUI::__ScrollView____c*>(value));
}
inline ::HMUI::__ScrollView____c* HMUI::__ScrollView____c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::HMUI::__ScrollView____c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__ScrollView____c*>::get>();
}
inline void HMUI::__ScrollView____c::setStaticF___9__42_1(::System::Func_2<float_t,float_t>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<float_t,float_t>*, "<>9__42_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__ScrollView____c*>::get>(std::forward<::System::Func_2<float_t,float_t>*>(value));
}
inline ::System::Func_2<float_t,float_t>* HMUI::__ScrollView____c::getStaticF___9__42_1()  {
return ::cordl_internals::getStaticField<::System::Func_2<float_t,float_t>*, "<>9__42_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__ScrollView____c*>::get>();
}
inline void HMUI::__ScrollView____c::setStaticF___9__42_3(::System::Func_2<float_t,float_t>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<float_t,float_t>*, "<>9__42_3", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__ScrollView____c*>::get>(std::forward<::System::Func_2<float_t,float_t>*>(value));
}
inline ::System::Func_2<float_t,float_t>* HMUI::__ScrollView____c::getStaticF___9__42_3()  {
return ::cordl_internals::getStaticField<::System::Func_2<float_t,float_t>*, "<>9__42_3", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__ScrollView____c*>::get>();
}
inline ::HMUI::__ScrollView____c* HMUI::__ScrollView____c::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::HMUI::__ScrollView____c*>());
}
inline void HMUI::__ScrollView____c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__ScrollView____c*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline float_t HMUI::__ScrollView____c::_Awake_b__42_1(float_t  i)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__ScrollView____c*>::get(),
                            "<Awake>b__42_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method, i);
}
inline float_t HMUI::__ScrollView____c::_Awake_b__42_3(float_t  i)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__ScrollView____c*>::get(),
                            "<Awake>b__42_3",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method, i);
}
//  Writing Method size for method: ::HMUI::__ScrollView____c__DisplayClass55_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::__ScrollView____c__DisplayClass55_0::*)()>(&::HMUI::__ScrollView____c__DisplayClass55_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2144950;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__ScrollView____c__DisplayClass55_0*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::__ScrollView____c__DisplayClass55_0._PageUpButtonPressed_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HMUI::__ScrollView____c__DisplayClass55_0::*)(float_t)>(&::HMUI::__ScrollView____c__DisplayClass55_0::_PageUpButtonPressed_b__0)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2144e04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__ScrollView____c__DisplayClass55_0*>::get(),
                            "<PageUpButtonPressed>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void HMUI::__ScrollView____c__DisplayClass55_0::__set_threshold(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x10>(this, std::forward<float_t>(value));
}
constexpr float_t& HMUI::__ScrollView____c__DisplayClass55_0::__get_threshold()  {
return ::cordl_internals::getInstanceField<float_t, 0x10>(this);
}
constexpr float_t const& HMUI::__ScrollView____c__DisplayClass55_0::__get_threshold() const {
return ::cordl_internals::getInstanceField<float_t, 0x10>(this);
}
inline ::HMUI::__ScrollView____c__DisplayClass55_0* HMUI::__ScrollView____c__DisplayClass55_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::HMUI::__ScrollView____c__DisplayClass55_0*>());
}
inline void HMUI::__ScrollView____c__DisplayClass55_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__ScrollView____c__DisplayClass55_0*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline bool HMUI::__ScrollView____c__DisplayClass55_0::_PageUpButtonPressed_b__0(float_t  pos)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__ScrollView____c__DisplayClass55_0*>::get(),
                            "<PageUpButtonPressed>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, pos);
}
//  Writing Method size for method: ::HMUI::__ScrollView____c__DisplayClass56_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::__ScrollView____c__DisplayClass56_0::*)()>(&::HMUI::__ScrollView____c__DisplayClass56_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2144c6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__ScrollView____c__DisplayClass56_0*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::__ScrollView____c__DisplayClass56_0._PageDownButtonPressed_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HMUI::__ScrollView____c__DisplayClass56_0::*)(float_t)>(&::HMUI::__ScrollView____c__DisplayClass56_0::_PageDownButtonPressed_b__0)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2144e14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__ScrollView____c__DisplayClass56_0*>::get(),
                            "<PageDownButtonPressed>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void HMUI::__ScrollView____c__DisplayClass56_0::__set_threshold(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x10>(this, std::forward<float_t>(value));
}
constexpr float_t& HMUI::__ScrollView____c__DisplayClass56_0::__get_threshold()  {
return ::cordl_internals::getInstanceField<float_t, 0x10>(this);
}
constexpr float_t const& HMUI::__ScrollView____c__DisplayClass56_0::__get_threshold() const {
return ::cordl_internals::getInstanceField<float_t, 0x10>(this);
}
inline ::HMUI::__ScrollView____c__DisplayClass56_0* HMUI::__ScrollView____c__DisplayClass56_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::HMUI::__ScrollView____c__DisplayClass56_0*>());
}
inline void HMUI::__ScrollView____c__DisplayClass56_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__ScrollView____c__DisplayClass56_0*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline bool HMUI::__ScrollView____c__DisplayClass56_0::_PageDownButtonPressed_b__0(float_t  pos)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__ScrollView____c__DisplayClass56_0*>::get(),
                            "<PageDownButtonPressed>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, pos);
}
//  Writing Method size for method: ::HMUI::__ScrollView____c__DisplayClass61_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::__ScrollView____c__DisplayClass61_0::*)()>(&::HMUI::__ScrollView____c__DisplayClass61_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2144ce0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__ScrollView____c__DisplayClass61_0*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::__ScrollView____c__DisplayClass61_0._HandleJoystickWasCenteredThisFrame_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HMUI::__ScrollView____c__DisplayClass61_0::*)(float_t)>(&::HMUI::__ScrollView____c__DisplayClass61_0::_HandleJoystickWasCenteredThisFrame_b__0)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2144e24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__ScrollView____c__DisplayClass61_0*>::get(),
                            "<HandleJoystickWasCenteredThisFrame>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void HMUI::__ScrollView____c__DisplayClass61_0::__set_threshold(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x10>(this, std::forward<float_t>(value));
}
constexpr float_t& HMUI::__ScrollView____c__DisplayClass61_0::__get_threshold()  {
return ::cordl_internals::getInstanceField<float_t, 0x10>(this);
}
constexpr float_t const& HMUI::__ScrollView____c__DisplayClass61_0::__get_threshold() const {
return ::cordl_internals::getInstanceField<float_t, 0x10>(this);
}
inline ::HMUI::__ScrollView____c__DisplayClass61_0* HMUI::__ScrollView____c__DisplayClass61_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::HMUI::__ScrollView____c__DisplayClass61_0*>());
}
inline void HMUI::__ScrollView____c__DisplayClass61_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__ScrollView____c__DisplayClass61_0*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline bool HMUI::__ScrollView____c__DisplayClass61_0::_HandleJoystickWasCenteredThisFrame_b__0(float_t  pos)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__ScrollView____c__DisplayClass61_0*>::get(),
                            "<HandleJoystickWasCenteredThisFrame>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, pos);
}
//  Writing Method size for method: ::HMUI::__ScrollView____c__DisplayClass61_1._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::__ScrollView____c__DisplayClass61_1::*)()>(&::HMUI::__ScrollView____c__DisplayClass61_1::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2144ce8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__ScrollView____c__DisplayClass61_1*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::__ScrollView____c__DisplayClass61_1._HandleJoystickWasCenteredThisFrame_b__1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HMUI::__ScrollView____c__DisplayClass61_1::*)(float_t)>(&::HMUI::__ScrollView____c__DisplayClass61_1::_HandleJoystickWasCenteredThisFrame_b__1)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2144e34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__ScrollView____c__DisplayClass61_1*>::get(),
                            "<HandleJoystickWasCenteredThisFrame>b__1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void HMUI::__ScrollView____c__DisplayClass61_1::__set_threshold(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x10>(this, std::forward<float_t>(value));
}
constexpr float_t& HMUI::__ScrollView____c__DisplayClass61_1::__get_threshold()  {
return ::cordl_internals::getInstanceField<float_t, 0x10>(this);
}
constexpr float_t const& HMUI::__ScrollView____c__DisplayClass61_1::__get_threshold() const {
return ::cordl_internals::getInstanceField<float_t, 0x10>(this);
}
inline ::HMUI::__ScrollView____c__DisplayClass61_1* HMUI::__ScrollView____c__DisplayClass61_1::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::HMUI::__ScrollView____c__DisplayClass61_1*>());
}
inline void HMUI::__ScrollView____c__DisplayClass61_1::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__ScrollView____c__DisplayClass61_1*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline bool HMUI::__ScrollView____c__DisplayClass61_1::_HandleJoystickWasCenteredThisFrame_b__1(float_t  pos)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__ScrollView____c__DisplayClass61_1*>::get(),
                            "<HandleJoystickWasCenteredThisFrame>b__1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, pos);
}
//  Writing Method size for method: ::HMUI::ScrollView.add_scrollPositionChangedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::ScrollView::*)(::System::Action_1<float_t>*)>(&::HMUI::ScrollView::add_scrollPositionChangedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2142edc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ScrollView*>::get(),
                            "add_scrollPositionChangedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<float_t>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ScrollView.remove_scrollPositionChangedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::ScrollView::*)(::System::Action_1<float_t>*)>(&::HMUI::ScrollView::remove_scrollPositionChangedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2142f8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ScrollView*>::get(),
                            "remove_scrollPositionChangedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<float_t>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ScrollView.get_viewportTransform
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::RectTransform* (::HMUI::ScrollView::*)()>(&::HMUI::ScrollView::get_viewportTransform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x214303c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ScrollView*>::get(),
                            "get_viewportTransform",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ScrollView.get_contentTransform
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::RectTransform* (::HMUI::ScrollView::*)()>(&::HMUI::ScrollView::get_contentTransform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2143044;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ScrollView*>::get(),
                            "get_contentTransform",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ScrollView.get_position
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::HMUI::ScrollView::*)()>(&::HMUI::ScrollView::get_position)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x214304c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ScrollView*>::get(),
                            "get_position",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ScrollView.get_scrollableSize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::HMUI::ScrollView::*)()>(&::HMUI::ScrollView::get_scrollableSize)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x214307c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ScrollView*>::get(),
                            "get_scrollableSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ScrollView.get_scrollPageSize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::HMUI::ScrollView::*)()>(&::HMUI::ScrollView::get_scrollPageSize)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2143104;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ScrollView*>::get(),
                            "get_scrollPageSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ScrollView.get_contentSize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::HMUI::ScrollView::*)()>(&::HMUI::ScrollView::get_contentSize)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x21430b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ScrollView*>::get(),
                            "get_contentSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ScrollView.Awake
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::ScrollView::*)()>(&::HMUI::ScrollView::Awake)> {
  constexpr static std::size_t size = 0x4e8;
  constexpr static std::size_t addrs = 0x2143158;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ScrollView*>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ScrollView.OnDestroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::ScrollView::*)()>(&::HMUI::ScrollView::OnDestroy)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x21437e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ScrollView*>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ScrollView.CheckScrollInput
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::ScrollView::*)()>(&::HMUI::ScrollView::CheckScrollInput)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x2143920;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ScrollView*>::get(),
                            "CheckScrollInput",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ScrollView.Update
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::ScrollView::*)()>(&::HMUI::ScrollView::Update)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x2143fc4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ScrollView*>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ScrollView.SetContentSize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::ScrollView::*)(float_t)>(&::HMUI::ScrollView::SetContentSize)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x21441b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ScrollView*>::get(),
                            "SetContentSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ScrollView.UpdateContentSize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::ScrollView::*)()>(&::HMUI::ScrollView::UpdateContentSize)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2143640;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ScrollView*>::get(),
                            "UpdateContentSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ScrollView.ScrollToEnd
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::ScrollView::*)(bool)>(&::HMUI::ScrollView::ScrollToEnd)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2144404;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ScrollView*>::get(),
                            "ScrollToEnd",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ScrollView.ScrollToWorldPosition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::ScrollView::*)(::UnityEngine::Vector3, float_t, bool)>(&::HMUI::ScrollView::ScrollToWorldPosition)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2144444;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ScrollView*>::get(),
                            "ScrollToWorldPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ScrollView.ScrollToWorldPositionIfOutsideArea
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::ScrollView::*)(::UnityEngine::Vector3, float_t, float_t, float_t, bool)>(&::HMUI::ScrollView::ScrollToWorldPositionIfOutsideArea)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x214453c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ScrollView*>::get(),
                            "ScrollToWorldPositionIfOutsideArea",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ScrollView.ScrollTo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::ScrollView::*)(float_t, bool)>(&::HMUI::ScrollView::ScrollTo)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2142e10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ScrollView*>::get(),
                            "ScrollTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ScrollView.WorldPositionToScrollViewPosition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (::HMUI::ScrollView::*)(::UnityEngine::Vector3)>(&::HMUI::ScrollView::WorldPositionToScrollViewPosition)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x214448c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ScrollView*>::get(),
                            "WorldPositionToScrollViewPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ScrollView.SetDestinationPos
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::ScrollView::*)(float_t)>(&::HMUI::ScrollView::SetDestinationPos)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x21445ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ScrollView*>::get(),
                            "SetDestinationPos",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ScrollView.UpdateVerticalScrollIndicator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::ScrollView::*)(float_t)>(&::HMUI::ScrollView::UpdateVerticalScrollIndicator)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x21440e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ScrollView*>::get(),
                            "UpdateVerticalScrollIndicator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ScrollView.PageUpButtonPressed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::ScrollView::*)()>(&::HMUI::ScrollView::PageUpButtonPressed)> {
  constexpr static std::size_t size = 0x2e4;
  constexpr static std::size_t addrs = 0x214466c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ScrollView*>::get(),
                            "PageUpButtonPressed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ScrollView.PageDownButtonPressed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::ScrollView::*)()>(&::HMUI::ScrollView::PageDownButtonPressed)> {
  constexpr static std::size_t size = 0x314;
  constexpr static std::size_t addrs = 0x2144958;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ScrollView*>::get(),
                            "PageDownButtonPressed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ScrollView.RefreshButtons
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::ScrollView::*)()>(&::HMUI::ScrollView::RefreshButtons)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x21436d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ScrollView*>::get(),
                            "RefreshButtons",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ScrollView.HandlePointerDidEnter
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::ScrollView::*)(::UnityEngine::EventSystems::PointerEventData*)>(&::HMUI::ScrollView::HandlePointerDidEnter)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2144c74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ScrollView*>::get(),
                            "HandlePointerDidEnter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ScrollView.HandlePointerDidExit
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::ScrollView::*)(::UnityEngine::EventSystems::PointerEventData*)>(&::HMUI::ScrollView::HandlePointerDidExit)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2144c88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ScrollView*>::get(),
                            "HandlePointerDidExit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ScrollView.HandleJoystickWasNotCenteredThisFrame
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::ScrollView::*)(::UnityEngine::Vector2)>(&::HMUI::ScrollView::HandleJoystickWasNotCenteredThisFrame)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x2143a7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ScrollView*>::get(),
                            "HandleJoystickWasNotCenteredThisFrame",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ScrollView.HandleJoystickWasCenteredThisFrame
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::ScrollView::*)()>(&::HMUI::ScrollView::HandleJoystickWasCenteredThisFrame)> {
  constexpr static std::size_t size = 0x454;
  constexpr static std::size_t addrs = 0x2143b70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ScrollView*>::get(),
                            "HandleJoystickWasCenteredThisFrame",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ScrollView.ResolveScrollDirection
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HMUI::__ScrollView__ScrollDirection (::HMUI::ScrollView::*)(::UnityEngine::Vector2)>(&::HMUI::ScrollView::ResolveScrollDirection)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2144c90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ScrollView*>::get(),
                            "ResolveScrollDirection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ScrollView._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::ScrollView::*)()>(&::HMUI::ScrollView::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2144cf0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ScrollView*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ScrollView._Awake_b__42_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::HMUI::ScrollView::*)(::HMUI::ItemForFocussedScrolling*)>(&::HMUI::ScrollView::_Awake_b__42_0)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2144d20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ScrollView*>::get(),
                            "<Awake>b__42_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ItemForFocussedScrolling*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ScrollView._Awake_b__42_2
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::HMUI::ScrollView::*)(::HMUI::ItemForFocussedScrolling*)>(&::HMUI::ScrollView::_Awake_b__42_2)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2144d5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ScrollView*>::get(),
                            "<Awake>b__42_2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ItemForFocussedScrolling*>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void HMUI::ScrollView::__set__viewport(::UnityEngine::RectTransform*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::RectTransform*, 0x18>(this, std::forward<::UnityEngine::RectTransform*>(value));
}
constexpr ::UnityEngine::RectTransform* HMUI::ScrollView::__get__viewport()  {
return ::cordl_internals::getInstanceField<::UnityEngine::RectTransform*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::RectTransform*> HMUI::ScrollView::__get__viewport() const {
return ::cordl_internals::getInstanceField<::UnityEngine::RectTransform*, 0x18>(this);
}
constexpr void HMUI::ScrollView::__set__contentRectTransform(::UnityEngine::RectTransform*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::RectTransform*, 0x20>(this, std::forward<::UnityEngine::RectTransform*>(value));
}
constexpr ::UnityEngine::RectTransform* HMUI::ScrollView::__get__contentRectTransform()  {
return ::cordl_internals::getInstanceField<::UnityEngine::RectTransform*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::RectTransform*> HMUI::ScrollView::__get__contentRectTransform() const {
return ::cordl_internals::getInstanceField<::UnityEngine::RectTransform*, 0x20>(this);
}
constexpr void HMUI::ScrollView::__set__scrollViewDirection(::HMUI::__ScrollView__ScrollViewDirection  value)  {
::cordl_internals::setInstanceField<::HMUI::__ScrollView__ScrollViewDirection, 0x28>(this, std::forward<::HMUI::__ScrollView__ScrollViewDirection>(value));
}
constexpr ::HMUI::__ScrollView__ScrollViewDirection& HMUI::ScrollView::__get__scrollViewDirection()  {
return ::cordl_internals::getInstanceField<::HMUI::__ScrollView__ScrollViewDirection, 0x28>(this);
}
constexpr ::HMUI::__ScrollView__ScrollViewDirection const& HMUI::ScrollView::__get__scrollViewDirection() const {
return ::cordl_internals::getInstanceField<::HMUI::__ScrollView__ScrollViewDirection, 0x28>(this);
}
constexpr void HMUI::ScrollView::__set__pageUpButton(::UnityEngine::UI::Button*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UI::Button*, 0x30>(this, std::forward<::UnityEngine::UI::Button*>(value));
}
constexpr ::UnityEngine::UI::Button* HMUI::ScrollView::__get__pageUpButton()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::Button*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> HMUI::ScrollView::__get__pageUpButton() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::Button*, 0x30>(this);
}
constexpr void HMUI::ScrollView::__set__pageDownButton(::UnityEngine::UI::Button*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UI::Button*, 0x38>(this, std::forward<::UnityEngine::UI::Button*>(value));
}
constexpr ::UnityEngine::UI::Button* HMUI::ScrollView::__get__pageDownButton()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::Button*, 0x38>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> HMUI::ScrollView::__get__pageDownButton() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::Button*, 0x38>(this);
}
constexpr void HMUI::ScrollView::__set__verticalScrollIndicator(::HMUI::VerticalScrollIndicator*  value)  {
::cordl_internals::setInstanceField<::HMUI::VerticalScrollIndicator*, 0x40>(this, std::forward<::HMUI::VerticalScrollIndicator*>(value));
}
constexpr ::HMUI::VerticalScrollIndicator* HMUI::ScrollView::__get__verticalScrollIndicator()  {
return ::cordl_internals::getInstanceField<::HMUI::VerticalScrollIndicator*, 0x40>(this);
}
constexpr ::cordl_internals::to_const_pointer<::HMUI::VerticalScrollIndicator*> HMUI::ScrollView::__get__verticalScrollIndicator() const {
return ::cordl_internals::getInstanceField<::HMUI::VerticalScrollIndicator*, 0x40>(this);
}
constexpr void HMUI::ScrollView::__set__smooth(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x48>(this, std::forward<float_t>(value));
}
constexpr float_t& HMUI::ScrollView::__get__smooth()  {
return ::cordl_internals::getInstanceField<float_t, 0x48>(this);
}
constexpr float_t const& HMUI::ScrollView::__get__smooth() const {
return ::cordl_internals::getInstanceField<float_t, 0x48>(this);
}
constexpr void HMUI::ScrollView::__set__joystickScrollSpeed(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x4c>(this, std::forward<float_t>(value));
}
constexpr float_t& HMUI::ScrollView::__get__joystickScrollSpeed()  {
return ::cordl_internals::getInstanceField<float_t, 0x4c>(this);
}
constexpr float_t const& HMUI::ScrollView::__get__joystickScrollSpeed() const {
return ::cordl_internals::getInstanceField<float_t, 0x4c>(this);
}
constexpr void HMUI::ScrollView::__set__joystickQuickSnapMaxTime(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x50>(this, std::forward<float_t>(value));
}
constexpr float_t& HMUI::ScrollView::__get__joystickQuickSnapMaxTime()  {
return ::cordl_internals::getInstanceField<float_t, 0x50>(this);
}
constexpr float_t const& HMUI::ScrollView::__get__joystickQuickSnapMaxTime() const {
return ::cordl_internals::getInstanceField<float_t, 0x50>(this);
}
constexpr void HMUI::ScrollView::__set__scrollType(::HMUI::__ScrollView__ScrollType  value)  {
::cordl_internals::setInstanceField<::HMUI::__ScrollView__ScrollType, 0x54>(this, std::forward<::HMUI::__ScrollView__ScrollType>(value));
}
constexpr ::HMUI::__ScrollView__ScrollType& HMUI::ScrollView::__get__scrollType()  {
return ::cordl_internals::getInstanceField<::HMUI::__ScrollView__ScrollType, 0x54>(this);
}
constexpr ::HMUI::__ScrollView__ScrollType const& HMUI::ScrollView::__get__scrollType() const {
return ::cordl_internals::getInstanceField<::HMUI::__ScrollView__ScrollType, 0x54>(this);
}
constexpr void HMUI::ScrollView::__set__fixedCellSize(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x58>(this, std::forward<float_t>(value));
}
constexpr float_t& HMUI::ScrollView::__get__fixedCellSize()  {
return ::cordl_internals::getInstanceField<float_t, 0x58>(this);
}
constexpr float_t const& HMUI::ScrollView::__get__fixedCellSize() const {
return ::cordl_internals::getInstanceField<float_t, 0x58>(this);
}
constexpr void HMUI::ScrollView::__set__scrollItemRelativeThresholdPosition(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x5c>(this, std::forward<float_t>(value));
}
constexpr float_t& HMUI::ScrollView::__get__scrollItemRelativeThresholdPosition()  {
return ::cordl_internals::getInstanceField<float_t, 0x5c>(this);
}
constexpr float_t const& HMUI::ScrollView::__get__scrollItemRelativeThresholdPosition() const {
return ::cordl_internals::getInstanceField<float_t, 0x5c>(this);
}
constexpr void HMUI::ScrollView::__set__pageStepNormalizedSize(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x60>(this, std::forward<float_t>(value));
}
constexpr float_t& HMUI::ScrollView::__get__pageStepNormalizedSize()  {
return ::cordl_internals::getInstanceField<float_t, 0x60>(this);
}
constexpr float_t const& HMUI::ScrollView::__get__pageStepNormalizedSize() const {
return ::cordl_internals::getInstanceField<float_t, 0x60>(this);
}
constexpr void HMUI::ScrollView::__set__scrollingLastFrame(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x64>(this, std::forward<bool>(value));
}
constexpr bool& HMUI::ScrollView::__get__scrollingLastFrame()  {
return ::cordl_internals::getInstanceField<bool, 0x64>(this);
}
constexpr bool const& HMUI::ScrollView::__get__scrollingLastFrame() const {
return ::cordl_internals::getInstanceField<bool, 0x64>(this);
}
constexpr void HMUI::ScrollView::__set__isHoveredByPointer(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x65>(this, std::forward<bool>(value));
}
constexpr bool& HMUI::ScrollView::__get__isHoveredByPointer()  {
return ::cordl_internals::getInstanceField<bool, 0x65>(this);
}
constexpr bool const& HMUI::ScrollView::__get__isHoveredByPointer() const {
return ::cordl_internals::getInstanceField<bool, 0x65>(this);
}
constexpr void HMUI::ScrollView::__set__shouldAnimate(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x66>(this, std::forward<bool>(value));
}
constexpr bool& HMUI::ScrollView::__get__shouldAnimate()  {
return ::cordl_internals::getInstanceField<bool, 0x66>(this);
}
constexpr bool const& HMUI::ScrollView::__get__shouldAnimate() const {
return ::cordl_internals::getInstanceField<bool, 0x66>(this);
}
constexpr void HMUI::ScrollView::__set__platformHelper(::GlobalNamespace::IVRPlatformHelper*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IVRPlatformHelper*, 0x68>(this, std::forward<::GlobalNamespace::IVRPlatformHelper*>(value));
}
constexpr ::GlobalNamespace::IVRPlatformHelper* HMUI::ScrollView::__get__platformHelper()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IVRPlatformHelper*, 0x68>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IVRPlatformHelper*> HMUI::ScrollView::__get__platformHelper() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IVRPlatformHelper*, 0x68>(this);
}
constexpr void HMUI::ScrollView::__set_scrollPositionChangedEvent(::System::Action_1<float_t>*  value)  {
::cordl_internals::setInstanceField<::System::Action_1<float_t>*, 0x70>(this, std::forward<::System::Action_1<float_t>*>(value));
}
constexpr ::System::Action_1<float_t>* HMUI::ScrollView::__get_scrollPositionChangedEvent()  {
return ::cordl_internals::getInstanceField<::System::Action_1<float_t>*, 0x70>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<float_t>*> HMUI::ScrollView::__get_scrollPositionChangedEvent() const {
return ::cordl_internals::getInstanceField<::System::Action_1<float_t>*, 0x70>(this);
}
constexpr void HMUI::ScrollView::__set__buttonBinder(::HMUI::ButtonBinder*  value)  {
::cordl_internals::setInstanceField<::HMUI::ButtonBinder*, 0x78>(this, std::forward<::HMUI::ButtonBinder*>(value));
}
constexpr ::HMUI::ButtonBinder* HMUI::ScrollView::__get__buttonBinder()  {
return ::cordl_internals::getInstanceField<::HMUI::ButtonBinder*, 0x78>(this);
}
constexpr ::cordl_internals::to_const_pointer<::HMUI::ButtonBinder*> HMUI::ScrollView::__get__buttonBinder() const {
return ::cordl_internals::getInstanceField<::HMUI::ButtonBinder*, 0x78>(this);
}
constexpr void HMUI::ScrollView::__set__destinationPos(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x80>(this, std::forward<float_t>(value));
}
constexpr float_t& HMUI::ScrollView::__get__destinationPos()  {
return ::cordl_internals::getInstanceField<float_t, 0x80>(this);
}
constexpr float_t const& HMUI::ScrollView::__get__destinationPos() const {
return ::cordl_internals::getInstanceField<float_t, 0x80>(this);
}
constexpr void HMUI::ScrollView::__set__scrollFocusPositions(::ArrayW<float_t,::Array<float_t>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<float_t,::Array<float_t>*>, 0x88>(this, std::forward<::ArrayW<float_t,::Array<float_t>*>>(value));
}
constexpr ::ArrayW<float_t,::Array<float_t>*>& HMUI::ScrollView::__get__scrollFocusPositions()  {
return ::cordl_internals::getInstanceField<::ArrayW<float_t,::Array<float_t>*>, 0x88>(this);
}
constexpr ::ArrayW<float_t,::Array<float_t>*> const& HMUI::ScrollView::__get__scrollFocusPositions() const {
return ::cordl_internals::getInstanceField<::ArrayW<float_t,::Array<float_t>*>, 0x88>(this);
}
constexpr void HMUI::ScrollView::__set__eventSystemListener(::HMUI::EventSystemListener*  value)  {
::cordl_internals::setInstanceField<::HMUI::EventSystemListener*, 0x90>(this, std::forward<::HMUI::EventSystemListener*>(value));
}
constexpr ::HMUI::EventSystemListener* HMUI::ScrollView::__get__eventSystemListener()  {
return ::cordl_internals::getInstanceField<::HMUI::EventSystemListener*, 0x90>(this);
}
constexpr ::cordl_internals::to_const_pointer<::HMUI::EventSystemListener*> HMUI::ScrollView::__get__eventSystemListener() const {
return ::cordl_internals::getInstanceField<::HMUI::EventSystemListener*, 0x90>(this);
}
constexpr void HMUI::ScrollView::__set__lastJoystickScrollDirection(::HMUI::__ScrollView__ScrollDirection  value)  {
::cordl_internals::setInstanceField<::HMUI::__ScrollView__ScrollDirection, 0x98>(this, std::forward<::HMUI::__ScrollView__ScrollDirection>(value));
}
constexpr ::HMUI::__ScrollView__ScrollDirection& HMUI::ScrollView::__get__lastJoystickScrollDirection()  {
return ::cordl_internals::getInstanceField<::HMUI::__ScrollView__ScrollDirection, 0x98>(this);
}
constexpr ::HMUI::__ScrollView__ScrollDirection const& HMUI::ScrollView::__get__lastJoystickScrollDirection() const {
return ::cordl_internals::getInstanceField<::HMUI::__ScrollView__ScrollDirection, 0x98>(this);
}
constexpr void HMUI::ScrollView::__set__joystickScrollStartTime(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x9c>(this, std::forward<float_t>(value));
}
constexpr float_t& HMUI::ScrollView::__get__joystickScrollStartTime()  {
return ::cordl_internals::getInstanceField<float_t, 0x9c>(this);
}
constexpr float_t const& HMUI::ScrollView::__get__joystickScrollStartTime() const {
return ::cordl_internals::getInstanceField<float_t, 0x9c>(this);
}
inline void HMUI::ScrollView::add_scrollPositionChangedEvent(::System::Action_1<float_t>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ScrollView*>::get(),
                            "add_scrollPositionChangedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<float_t>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void HMUI::ScrollView::remove_scrollPositionChangedEvent(::System::Action_1<float_t>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ScrollView*>::get(),
                            "remove_scrollPositionChangedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<float_t>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::UnityEngine::RectTransform* HMUI::ScrollView::get_viewportTransform()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ScrollView*>::get(),
                            "get_viewportTransform",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::RectTransform*, false>(*this, ___internal_method);
}
inline ::UnityEngine::RectTransform* HMUI::ScrollView::get_contentTransform()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ScrollView*>::get(),
                            "get_contentTransform",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::RectTransform*, false>(*this, ___internal_method);
}
inline float_t HMUI::ScrollView::get_position()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ScrollView*>::get(),
                            "get_position",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
inline float_t HMUI::ScrollView::get_scrollableSize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ScrollView*>::get(),
                            "get_scrollableSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
inline float_t HMUI::ScrollView::get_scrollPageSize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ScrollView*>::get(),
                            "get_scrollPageSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
inline float_t HMUI::ScrollView::get_contentSize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ScrollView*>::get(),
                            "get_contentSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
inline void HMUI::ScrollView::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ScrollView*>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void HMUI::ScrollView::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ScrollView*>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void HMUI::ScrollView::CheckScrollInput()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ScrollView*>::get(),
                            "CheckScrollInput",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void HMUI::ScrollView::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ScrollView*>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void HMUI::ScrollView::SetContentSize(float_t  contentSize)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ScrollView*>::get(),
                            "SetContentSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, contentSize);
}
inline void HMUI::ScrollView::UpdateContentSize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ScrollView*>::get(),
                            "UpdateContentSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void HMUI::ScrollView::ScrollToEnd(bool  animated)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ScrollView*>::get(),
                            "ScrollToEnd",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, animated);
}
inline void HMUI::ScrollView::ScrollToWorldPosition(::UnityEngine::Vector3  worldPosition, float_t  pageRelativePosition, bool  animated)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ScrollView*>::get(),
                            "ScrollToWorldPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, worldPosition, pageRelativePosition, animated);
}
inline void HMUI::ScrollView::ScrollToWorldPositionIfOutsideArea(::UnityEngine::Vector3  worldPosition, float_t  pageRelativePosition, float_t  relativeBoundaryStart, float_t  relativeBoundaryEnd, bool  animated)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ScrollView*>::get(),
                            "ScrollToWorldPositionIfOutsideArea",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, worldPosition, pageRelativePosition, relativeBoundaryStart, relativeBoundaryEnd, animated);
}
inline void HMUI::ScrollView::ScrollTo(float_t  destinationPos, bool  animated)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ScrollView*>::get(),
                            "ScrollTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, destinationPos, animated);
}
inline ::UnityEngine::Vector2 HMUI::ScrollView::WorldPositionToScrollViewPosition(::UnityEngine::Vector3  worldPosition)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ScrollView*>::get(),
                            "WorldPositionToScrollViewPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(*this, ___internal_method, worldPosition);
}
inline void HMUI::ScrollView::SetDestinationPos(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ScrollView*>::get(),
                            "SetDestinationPos",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void HMUI::ScrollView::UpdateVerticalScrollIndicator(float_t  posY)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ScrollView*>::get(),
                            "UpdateVerticalScrollIndicator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, posY);
}
inline void HMUI::ScrollView::PageUpButtonPressed()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ScrollView*>::get(),
                            "PageUpButtonPressed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void HMUI::ScrollView::PageDownButtonPressed()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ScrollView*>::get(),
                            "PageDownButtonPressed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void HMUI::ScrollView::RefreshButtons()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ScrollView*>::get(),
                            "RefreshButtons",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void HMUI::ScrollView::HandlePointerDidEnter(::UnityEngine::EventSystems::PointerEventData*  eventData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ScrollView*>::get(),
                            "HandlePointerDidEnter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, eventData);
}
inline void HMUI::ScrollView::HandlePointerDidExit(::UnityEngine::EventSystems::PointerEventData*  eventData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ScrollView*>::get(),
                            "HandlePointerDidExit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, eventData);
}
inline void HMUI::ScrollView::HandleJoystickWasNotCenteredThisFrame(::UnityEngine::Vector2  deltaPos)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ScrollView*>::get(),
                            "HandleJoystickWasNotCenteredThisFrame",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, deltaPos);
}
inline void HMUI::ScrollView::HandleJoystickWasCenteredThisFrame()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ScrollView*>::get(),
                            "HandleJoystickWasCenteredThisFrame",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::HMUI::__ScrollView__ScrollDirection HMUI::ScrollView::ResolveScrollDirection(::UnityEngine::Vector2  deltaPos)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ScrollView*>::get(),
                            "ResolveScrollDirection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::HMUI::__ScrollView__ScrollDirection, false>(*this, ___internal_method, deltaPos);
}
inline ::HMUI::ScrollView* HMUI::ScrollView::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::HMUI::ScrollView*>());
}
inline void HMUI::ScrollView::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ScrollView*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline float_t HMUI::ScrollView::_Awake_b__42_0(::HMUI::ItemForFocussedScrolling*  item)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ScrollView*>::get(),
                            "<Awake>b__42_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ItemForFocussedScrolling*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method, item);
}
inline float_t HMUI::ScrollView::_Awake_b__42_2(::HMUI::ItemForFocussedScrolling*  item)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ScrollView*>::get(),
                            "<Awake>b__42_2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ItemForFocussedScrolling*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method, item);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
