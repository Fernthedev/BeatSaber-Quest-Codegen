#pragma once
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "HMUI/zzzz__ScreenModeSO_def.hpp"
#include "HMUI/zzzz__ScreenModeData_def.hpp"
//  Writing Method size for method: ::HMUI::ScreenModeSO.get_data
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HMUI::ScreenModeData* (::HMUI::ScreenModeSO::*)()>(&::HMUI::ScreenModeSO::get_data)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x212c674;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ScreenModeSO*>::get(),
                            "get_data",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ScreenModeSO._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::ScreenModeSO::*)()>(&::HMUI::ScreenModeSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x212c67c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ScreenModeSO*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void HMUI::ScreenModeSO::__set__data(::HMUI::ScreenModeData*  value)  {
::cordl_internals::setInstanceField<::HMUI::ScreenModeData*, 0x18>(this, std::forward<::HMUI::ScreenModeData*>(value));
}
constexpr ::HMUI::ScreenModeData* HMUI::ScreenModeSO::__get__data()  {
return ::cordl_internals::getInstanceField<::HMUI::ScreenModeData*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::HMUI::ScreenModeData*> HMUI::ScreenModeSO::__get__data() const {
return ::cordl_internals::getInstanceField<::HMUI::ScreenModeData*, 0x18>(this);
}
inline ::HMUI::ScreenModeData* HMUI::ScreenModeSO::get_data()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ScreenModeSO*>::get(),
                            "get_data",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::HMUI::ScreenModeData*, false>(*this, ___internal_method);
}
inline ::HMUI::ScreenModeSO* HMUI::ScreenModeSO::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::HMUI::ScreenModeSO*>());
}
inline void HMUI::ScreenModeSO::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ScreenModeSO*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
