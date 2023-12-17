#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__DefaultGroupManager_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__IGroupManager_def.hpp"
#include "UnityEngine/UIElements/zzzz__IGroupBoxOption_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::DefaultGroupManager.OnOptionSelectionChanged
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::DefaultGroupManager::*)(::UnityEngine::UIElements::IGroupBoxOption*)>(&::UnityEngine::UIElements::DefaultGroupManager::OnOptionSelectionChanged)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x2dc839c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DefaultGroupManager*>::get(),
                            "OnOptionSelectionChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::IGroupBoxOption*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DefaultGroupManager.RegisterOption
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::DefaultGroupManager::*)(::UnityEngine::UIElements::IGroupBoxOption*)>(&::UnityEngine::UIElements::DefaultGroupManager::RegisterOption)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x2dc856c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DefaultGroupManager*>::get(),
                            "RegisterOption",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::IGroupBoxOption*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DefaultGroupManager.UnregisterOption
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::DefaultGroupManager::*)(::UnityEngine::UIElements::IGroupBoxOption*)>(&::UnityEngine::UIElements::DefaultGroupManager::UnregisterOption)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2dc8640;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DefaultGroupManager*>::get(),
                            "UnregisterOption",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::IGroupBoxOption*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DefaultGroupManager._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::DefaultGroupManager::*)()>(&::UnityEngine::UIElements::DefaultGroupManager::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2dc8698;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DefaultGroupManager*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::UnityEngine::UIElements::IGroupManager"
constexpr  UnityEngine::UIElements::DefaultGroupManager::operator ::UnityEngine::UIElements::IGroupManager*() noexcept {
return static_cast<::UnityEngine::UIElements::IGroupManager*>(static_cast<void*>(this));
}
constexpr void UnityEngine::UIElements::DefaultGroupManager::__set_m_GroupOptions(::System::Collections::Generic::List_1<::UnityEngine::UIElements::IGroupBoxOption*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::UnityEngine::UIElements::IGroupBoxOption*>*, 0x10>(this, std::forward<::System::Collections::Generic::List_1<::UnityEngine::UIElements::IGroupBoxOption*>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::IGroupBoxOption*>* UnityEngine::UIElements::DefaultGroupManager::__get_m_GroupOptions()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::UnityEngine::UIElements::IGroupBoxOption*>*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::UIElements::IGroupBoxOption*>*> UnityEngine::UIElements::DefaultGroupManager::__get_m_GroupOptions() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::UnityEngine::UIElements::IGroupBoxOption*>*, 0x10>(this);
}
constexpr void UnityEngine::UIElements::DefaultGroupManager::__set_m_SelectedOption(::UnityEngine::UIElements::IGroupBoxOption*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::IGroupBoxOption*, 0x18>(this, std::forward<::UnityEngine::UIElements::IGroupBoxOption*>(value));
}
constexpr ::UnityEngine::UIElements::IGroupBoxOption* UnityEngine::UIElements::DefaultGroupManager::__get_m_SelectedOption()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::IGroupBoxOption*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::IGroupBoxOption*> UnityEngine::UIElements::DefaultGroupManager::__get_m_SelectedOption() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::IGroupBoxOption*, 0x18>(this);
}
inline void UnityEngine::UIElements::DefaultGroupManager::OnOptionSelectionChanged(::UnityEngine::UIElements::IGroupBoxOption*  selectedOption)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DefaultGroupManager*>::get(),
                            "OnOptionSelectionChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::IGroupBoxOption*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, selectedOption);
}
inline void UnityEngine::UIElements::DefaultGroupManager::RegisterOption(::UnityEngine::UIElements::IGroupBoxOption*  option)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DefaultGroupManager*>::get(),
                            "RegisterOption",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::IGroupBoxOption*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, option);
}
inline void UnityEngine::UIElements::DefaultGroupManager::UnregisterOption(::UnityEngine::UIElements::IGroupBoxOption*  option)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DefaultGroupManager*>::get(),
                            "UnregisterOption",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::IGroupBoxOption*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, option);
}
inline ::UnityEngine::UIElements::DefaultGroupManager* UnityEngine::UIElements::DefaultGroupManager::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::UIElements::DefaultGroupManager*>());
}
inline void UnityEngine::UIElements::DefaultGroupManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DefaultGroupManager*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
