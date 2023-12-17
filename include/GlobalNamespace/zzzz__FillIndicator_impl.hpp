#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__FillIndicator_def.hpp"
#include "UnityEngine/UI/zzzz__Image_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::FillIndicator.set_fillAmount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FillIndicator::*)(float_t)>(&::GlobalNamespace::FillIndicator::set_fillAmount)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2278948;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FillIndicator*>::get(),
                            "set_fillAmount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FillIndicator.get_fillAmount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::FillIndicator::*)()>(&::GlobalNamespace::FillIndicator::get_fillAmount)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2278a78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FillIndicator*>::get(),
                            "get_fillAmount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FillIndicator._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FillIndicator::*)()>(&::GlobalNamespace::FillIndicator::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2278a94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FillIndicator*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::FillIndicator::__set__bgImage(::UnityEngine::UI::Image*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UI::Image*, 0x18>(this, std::forward<::UnityEngine::UI::Image*>(value));
}
constexpr ::UnityEngine::UI::Image* GlobalNamespace::FillIndicator::__get__bgImage()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::Image*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Image*> GlobalNamespace::FillIndicator::__get__bgImage() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::Image*, 0x18>(this);
}
constexpr void GlobalNamespace::FillIndicator::__set__image(::UnityEngine::UI::Image*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UI::Image*, 0x20>(this, std::forward<::UnityEngine::UI::Image*>(value));
}
constexpr ::UnityEngine::UI::Image* GlobalNamespace::FillIndicator::__get__image()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::Image*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Image*> GlobalNamespace::FillIndicator::__get__image() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::Image*, 0x20>(this);
}
inline void GlobalNamespace::FillIndicator::set_fillAmount(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FillIndicator*>::get(),
                            "set_fillAmount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline float_t GlobalNamespace::FillIndicator::get_fillAmount()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FillIndicator*>::get(),
                            "get_fillAmount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::FillIndicator* GlobalNamespace::FillIndicator::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::FillIndicator*>());
}
inline void GlobalNamespace::FillIndicator::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FillIndicator*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
