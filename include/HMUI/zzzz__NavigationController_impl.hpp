#pragma once
#include "HMUI/zzzz__ContainerViewController_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "HMUI/zzzz__NavigationController_def.hpp"
#include "HMUI/zzzz__NavigationController_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "HMUI/zzzz__ViewController_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
constexpr void HMUI::__NavigationController__Orientation::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& HMUI::__NavigationController__Orientation::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& HMUI::__NavigationController__Orientation::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HMUI::__NavigationController__Orientation::__NavigationController__Orientation(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::HMUI::__NavigationController__Orientation  HMUI::__NavigationController__Orientation::Horizontal{static_cast<int32_t>(0x0)};
constexpr ::HMUI::__NavigationController__Orientation  HMUI::__NavigationController__Orientation::Vertical{static_cast<int32_t>(0x1)};
constexpr void HMUI::__NavigationController__Alignment::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& HMUI::__NavigationController__Alignment::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& HMUI::__NavigationController__Alignment::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HMUI::__NavigationController__Alignment::__NavigationController__Alignment(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::HMUI::__NavigationController__Alignment  HMUI::__NavigationController__Alignment::Beginning{static_cast<int32_t>(0x0)};
constexpr ::HMUI::__NavigationController__Alignment  HMUI::__NavigationController__Alignment::Middle{static_cast<int32_t>(0x1)};
constexpr ::HMUI::__NavigationController__Alignment  HMUI::__NavigationController__Alignment::End{static_cast<int32_t>(0x2)};
//  Writing Method size for method: ::HMUI::__NavigationController____c__DisplayClass8_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::__NavigationController____c__DisplayClass8_0::*)()>(&::HMUI::__NavigationController____c__DisplayClass8_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x212b32c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__NavigationController____c__DisplayClass8_0*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::__NavigationController____c__DisplayClass8_0._PushViewController_g__AnimationLayouter_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::__NavigationController____c__DisplayClass8_0::*)(float_t, ::ArrayW<::HMUI::ViewController*,::Array<::HMUI::ViewController*>*>)>(&::HMUI::__NavigationController____c__DisplayClass8_0::_PushViewController_g__AnimationLayouter_0)> {
  constexpr static std::size_t size = 0x2a8;
  constexpr static std::size_t addrs = 0x212b5dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__NavigationController____c__DisplayClass8_0*>::get(),
                            "<PushViewController>g__AnimationLayouter|0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::HMUI::ViewController*,::Array<::HMUI::ViewController*>*>>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void HMUI::__NavigationController____c__DisplayClass8_0::__set_startPositions(::ArrayW<float_t,::Array<float_t>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<float_t,::Array<float_t>*>, 0x10>(this, std::forward<::ArrayW<float_t,::Array<float_t>*>>(value));
}
constexpr ::ArrayW<float_t,::Array<float_t>*>& HMUI::__NavigationController____c__DisplayClass8_0::__get_startPositions()  {
return ::cordl_internals::getInstanceField<::ArrayW<float_t,::Array<float_t>*>, 0x10>(this);
}
constexpr ::ArrayW<float_t,::Array<float_t>*> const& HMUI::__NavigationController____c__DisplayClass8_0::__get_startPositions() const {
return ::cordl_internals::getInstanceField<::ArrayW<float_t,::Array<float_t>*>, 0x10>(this);
}
constexpr void HMUI::__NavigationController____c__DisplayClass8_0::__set___4__this(::HMUI::NavigationController*  value)  {
::cordl_internals::setInstanceField<::HMUI::NavigationController*, 0x18>(this, std::forward<::HMUI::NavigationController*>(value));
}
constexpr ::HMUI::NavigationController* HMUI::__NavigationController____c__DisplayClass8_0::__get___4__this()  {
return ::cordl_internals::getInstanceField<::HMUI::NavigationController*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::HMUI::NavigationController*> HMUI::__NavigationController____c__DisplayClass8_0::__get___4__this() const {
return ::cordl_internals::getInstanceField<::HMUI::NavigationController*, 0x18>(this);
}
constexpr void HMUI::__NavigationController____c__DisplayClass8_0::__set_viewController(::HMUI::ViewController*  value)  {
::cordl_internals::setInstanceField<::HMUI::ViewController*, 0x20>(this, std::forward<::HMUI::ViewController*>(value));
}
constexpr ::HMUI::ViewController* HMUI::__NavigationController____c__DisplayClass8_0::__get_viewController()  {
return ::cordl_internals::getInstanceField<::HMUI::ViewController*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::HMUI::ViewController*> HMUI::__NavigationController____c__DisplayClass8_0::__get_viewController() const {
return ::cordl_internals::getInstanceField<::HMUI::ViewController*, 0x20>(this);
}
constexpr void HMUI::__NavigationController____c__DisplayClass8_0::__set_endPositions(::ArrayW<float_t,::Array<float_t>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<float_t,::Array<float_t>*>, 0x28>(this, std::forward<::ArrayW<float_t,::Array<float_t>*>>(value));
}
constexpr ::ArrayW<float_t,::Array<float_t>*>& HMUI::__NavigationController____c__DisplayClass8_0::__get_endPositions()  {
return ::cordl_internals::getInstanceField<::ArrayW<float_t,::Array<float_t>*>, 0x28>(this);
}
constexpr ::ArrayW<float_t,::Array<float_t>*> const& HMUI::__NavigationController____c__DisplayClass8_0::__get_endPositions() const {
return ::cordl_internals::getInstanceField<::ArrayW<float_t,::Array<float_t>*>, 0x28>(this);
}
inline ::HMUI::__NavigationController____c__DisplayClass8_0* HMUI::__NavigationController____c__DisplayClass8_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::HMUI::__NavigationController____c__DisplayClass8_0*>());
}
inline void HMUI::__NavigationController____c__DisplayClass8_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__NavigationController____c__DisplayClass8_0*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void HMUI::__NavigationController____c__DisplayClass8_0::_PushViewController_g__AnimationLayouter_0(float_t  t, ::ArrayW<::HMUI::ViewController*,::Array<::HMUI::ViewController*>*>  viewControllers)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__NavigationController____c__DisplayClass8_0*>::get(),
                            "<PushViewController>g__AnimationLayouter|0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::HMUI::ViewController*,::Array<::HMUI::ViewController*>*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, t, viewControllers);
}
//  Writing Method size for method: ::HMUI::__NavigationController____c__DisplayClass10_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::__NavigationController____c__DisplayClass10_0::*)()>(&::HMUI::__NavigationController____c__DisplayClass10_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x212b530;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__NavigationController____c__DisplayClass10_0*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::__NavigationController____c__DisplayClass10_0._PopViewControllers_g__AnimationLayouter_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::__NavigationController____c__DisplayClass10_0::*)(float_t, ::ArrayW<::HMUI::ViewController*,::Array<::HMUI::ViewController*>*>, ::System::Collections::Generic::HashSet_1<::HMUI::ViewController*>*)>(&::HMUI::__NavigationController____c__DisplayClass10_0::_PopViewControllers_g__AnimationLayouter_0)> {
  constexpr static std::size_t size = 0x274;
  constexpr static std::size_t addrs = 0x212b884;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__NavigationController____c__DisplayClass10_0*>::get(),
                            "<PopViewControllers>g__AnimationLayouter|0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::HMUI::ViewController*,::Array<::HMUI::ViewController*>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::HashSet_1<::HMUI::ViewController*>*>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void HMUI::__NavigationController____c__DisplayClass10_0::__set_startPositions(::ArrayW<float_t,::Array<float_t>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<float_t,::Array<float_t>*>, 0x10>(this, std::forward<::ArrayW<float_t,::Array<float_t>*>>(value));
}
constexpr ::ArrayW<float_t,::Array<float_t>*>& HMUI::__NavigationController____c__DisplayClass10_0::__get_startPositions()  {
return ::cordl_internals::getInstanceField<::ArrayW<float_t,::Array<float_t>*>, 0x10>(this);
}
constexpr ::ArrayW<float_t,::Array<float_t>*> const& HMUI::__NavigationController____c__DisplayClass10_0::__get_startPositions() const {
return ::cordl_internals::getInstanceField<::ArrayW<float_t,::Array<float_t>*>, 0x10>(this);
}
constexpr void HMUI::__NavigationController____c__DisplayClass10_0::__set___4__this(::HMUI::NavigationController*  value)  {
::cordl_internals::setInstanceField<::HMUI::NavigationController*, 0x18>(this, std::forward<::HMUI::NavigationController*>(value));
}
constexpr ::HMUI::NavigationController* HMUI::__NavigationController____c__DisplayClass10_0::__get___4__this()  {
return ::cordl_internals::getInstanceField<::HMUI::NavigationController*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::HMUI::NavigationController*> HMUI::__NavigationController____c__DisplayClass10_0::__get___4__this() const {
return ::cordl_internals::getInstanceField<::HMUI::NavigationController*, 0x18>(this);
}
constexpr void HMUI::__NavigationController____c__DisplayClass10_0::__set_endPositions(::ArrayW<float_t,::Array<float_t>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<float_t,::Array<float_t>*>, 0x20>(this, std::forward<::ArrayW<float_t,::Array<float_t>*>>(value));
}
constexpr ::ArrayW<float_t,::Array<float_t>*>& HMUI::__NavigationController____c__DisplayClass10_0::__get_endPositions()  {
return ::cordl_internals::getInstanceField<::ArrayW<float_t,::Array<float_t>*>, 0x20>(this);
}
constexpr ::ArrayW<float_t,::Array<float_t>*> const& HMUI::__NavigationController____c__DisplayClass10_0::__get_endPositions() const {
return ::cordl_internals::getInstanceField<::ArrayW<float_t,::Array<float_t>*>, 0x20>(this);
}
constexpr void HMUI::__NavigationController____c__DisplayClass10_0::__set_moveOffset(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x28>(this, std::forward<float_t>(value));
}
constexpr float_t& HMUI::__NavigationController____c__DisplayClass10_0::__get_moveOffset()  {
return ::cordl_internals::getInstanceField<float_t, 0x28>(this);
}
constexpr float_t const& HMUI::__NavigationController____c__DisplayClass10_0::__get_moveOffset() const {
return ::cordl_internals::getInstanceField<float_t, 0x28>(this);
}
inline ::HMUI::__NavigationController____c__DisplayClass10_0* HMUI::__NavigationController____c__DisplayClass10_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::HMUI::__NavigationController____c__DisplayClass10_0*>());
}
inline void HMUI::__NavigationController____c__DisplayClass10_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__NavigationController____c__DisplayClass10_0*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void HMUI::__NavigationController____c__DisplayClass10_0::_PopViewControllers_g__AnimationLayouter_0(float_t  t, ::ArrayW<::HMUI::ViewController*,::Array<::HMUI::ViewController*>*>  viewControllers, ::System::Collections::Generic::HashSet_1<::HMUI::ViewController*>*  removingViewControllers)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__NavigationController____c__DisplayClass10_0*>::get(),
                            "<PopViewControllers>g__AnimationLayouter|0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::HMUI::ViewController*,::Array<::HMUI::ViewController*>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::HashSet_1<::HMUI::ViewController*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, t, viewControllers, removingViewControllers);
}
//  Writing Method size for method: ::HMUI::NavigationController.LayoutViewControllers
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::NavigationController::*)(::System::Collections::Generic::List_1<::HMUI::ViewController*>*)>(&::HMUI::NavigationController::LayoutViewControllers)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x212abf4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::NavigationController*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::NavigationController*>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::NavigationController.PushViewController
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::NavigationController::*)(::HMUI::ViewController*, ::System::Action*, bool)>(&::HMUI::NavigationController::PushViewController)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x212b24c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::NavigationController*>::get(),
                            "PushViewController",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ViewController*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::NavigationController.PopViewController
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::NavigationController::*)(::System::Action*, bool)>(&::HMUI::NavigationController::PopViewController)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x212b334;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::NavigationController*>::get(),
                            "PopViewController",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::NavigationController.PopViewControllers
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::NavigationController::*)(int32_t, ::System::Action*, bool)>(&::HMUI::NavigationController::PopViewControllers)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x212b348;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::NavigationController*>::get(),
                            "PopViewControllers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::NavigationController.PositionVector
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::HMUI::NavigationController::*)(float_t)>(&::HMUI::NavigationController::PositionVector)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x212b22c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::NavigationController*>::get(),
                            "PositionVector",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::NavigationController.SetupViewControllerRect
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::NavigationController::*)(::HMUI::ViewController*)>(&::HMUI::NavigationController::SetupViewControllerRect)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x212b200;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::NavigationController*>::get(),
                            "SetupViewControllerRect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ViewController*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::NavigationController.GetNewPositionsForViewControllers
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<float_t,::Array<float_t>*> (::HMUI::NavigationController::*)(::System::Collections::Generic::List_1<::HMUI::ViewController*>*, ::System::Collections::Generic::HashSet_1<::HMUI::ViewController*>*, float_t)>(&::HMUI::NavigationController::GetNewPositionsForViewControllers)> {
  constexpr static std::size_t size = 0x4f4;
  constexpr static std::size_t addrs = 0x212ad0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::NavigationController*>::get(),
                            "GetNewPositionsForViewControllers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::HMUI::ViewController*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::HashSet_1<::HMUI::ViewController*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::NavigationController._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::NavigationController::*)()>(&::HMUI::NavigationController::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x212b5cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::NavigationController*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void HMUI::NavigationController::__set__orientation(::HMUI::__NavigationController__Orientation  value)  {
::cordl_internals::setInstanceField<::HMUI::__NavigationController__Orientation, 0x80>(this, std::forward<::HMUI::__NavigationController__Orientation>(value));
}
constexpr ::HMUI::__NavigationController__Orientation& HMUI::NavigationController::__get__orientation()  {
return ::cordl_internals::getInstanceField<::HMUI::__NavigationController__Orientation, 0x80>(this);
}
constexpr ::HMUI::__NavigationController__Orientation const& HMUI::NavigationController::__get__orientation() const {
return ::cordl_internals::getInstanceField<::HMUI::__NavigationController__Orientation, 0x80>(this);
}
constexpr void HMUI::NavigationController::__set__reversedStacking(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x84>(this, std::forward<bool>(value));
}
constexpr bool& HMUI::NavigationController::__get__reversedStacking()  {
return ::cordl_internals::getInstanceField<bool, 0x84>(this);
}
constexpr bool const& HMUI::NavigationController::__get__reversedStacking() const {
return ::cordl_internals::getInstanceField<bool, 0x84>(this);
}
constexpr void HMUI::NavigationController::__set__alignment(::HMUI::__NavigationController__Alignment  value)  {
::cordl_internals::setInstanceField<::HMUI::__NavigationController__Alignment, 0x88>(this, std::forward<::HMUI::__NavigationController__Alignment>(value));
}
constexpr ::HMUI::__NavigationController__Alignment& HMUI::NavigationController::__get__alignment()  {
return ::cordl_internals::getInstanceField<::HMUI::__NavigationController__Alignment, 0x88>(this);
}
constexpr ::HMUI::__NavigationController__Alignment const& HMUI::NavigationController::__get__alignment() const {
return ::cordl_internals::getInstanceField<::HMUI::__NavigationController__Alignment, 0x88>(this);
}
constexpr void HMUI::NavigationController::__set__edgeSize(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x8c>(this, std::forward<float_t>(value));
}
constexpr float_t& HMUI::NavigationController::__get__edgeSize()  {
return ::cordl_internals::getInstanceField<float_t, 0x8c>(this);
}
constexpr float_t const& HMUI::NavigationController::__get__edgeSize() const {
return ::cordl_internals::getInstanceField<float_t, 0x8c>(this);
}
constexpr void HMUI::NavigationController::__set__viewControllersSeparator(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x90>(this, std::forward<float_t>(value));
}
constexpr float_t& HMUI::NavigationController::__get__viewControllersSeparator()  {
return ::cordl_internals::getInstanceField<float_t, 0x90>(this);
}
constexpr float_t const& HMUI::NavigationController::__get__viewControllersSeparator() const {
return ::cordl_internals::getInstanceField<float_t, 0x90>(this);
}
inline void HMUI::NavigationController::LayoutViewControllers(::System::Collections::Generic::List_1<::HMUI::ViewController*>*  viewControllers)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::NavigationController*>::get(),
                            "LayoutViewControllers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::HMUI::ViewController*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, viewControllers);
}
/// @param immediately: bool (default: false)
inline void HMUI::NavigationController::PushViewController(::HMUI::ViewController*  viewController, ::System::Action*  finishedCallback, bool  immediately)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::NavigationController*>::get(),
                            "PushViewController",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ViewController*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, viewController, finishedCallback, immediately);
}
inline void HMUI::NavigationController::PopViewController(::System::Action*  finishedCallback, bool  immediately)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::NavigationController*>::get(),
                            "PopViewController",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, finishedCallback, immediately);
}
inline void HMUI::NavigationController::PopViewControllers(int32_t  numberOfViewControllersToPop, ::System::Action*  finishedCallback, bool  immediately)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::NavigationController*>::get(),
                            "PopViewControllers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, numberOfViewControllersToPop, finishedCallback, immediately);
}
inline ::UnityEngine::Vector3 HMUI::NavigationController::PositionVector(float_t  pos)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::NavigationController*>::get(),
                            "PositionVector",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(*this, ___internal_method, pos);
}
inline void HMUI::NavigationController::SetupViewControllerRect(::HMUI::ViewController*  viewController)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::NavigationController*>::get(),
                            "SetupViewControllerRect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ViewController*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, viewController);
}
/// @param fixedViewControllers: ::System::Collections::Generic::HashSet_1<::HMUI::ViewController*>* (default: csnull)
/// @param fixedEndPos: float_t (default: 0.0)
inline ::ArrayW<float_t,::Array<float_t>*> HMUI::NavigationController::GetNewPositionsForViewControllers(::System::Collections::Generic::List_1<::HMUI::ViewController*>*  viewControllers, ::System::Collections::Generic::HashSet_1<::HMUI::ViewController*>*  fixedViewControllers, float_t  fixedEndPos)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::NavigationController*>::get(),
                            "GetNewPositionsForViewControllers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::HMUI::ViewController*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::HashSet_1<::HMUI::ViewController*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<float_t,::Array<float_t>*>, false>(*this, ___internal_method, viewControllers, fixedViewControllers, fixedEndPos);
}
inline ::HMUI::NavigationController* HMUI::NavigationController::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::HMUI::NavigationController*>());
}
inline void HMUI::NavigationController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::NavigationController*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
