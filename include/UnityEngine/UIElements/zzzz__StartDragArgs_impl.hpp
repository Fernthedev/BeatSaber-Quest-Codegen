#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__StartDragArgs_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "System/Collections/zzzz__Hashtable_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::StartDragArgs.get_userData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::UnityEngine::UIElements::StartDragArgs::*)()>(&::UnityEngine::UIElements::StartDragArgs::get_userData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e09984;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StartDragArgs*>::get(),
                            "get_userData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StartDragArgs._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::StartDragArgs::*)(::StringW, ::System::Object*)>(&::UnityEngine::UIElements::StartDragArgs::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2e098cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StartDragArgs*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void UnityEngine::UIElements::StartDragArgs::__set__title_k__BackingField(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& UnityEngine::UIElements::StartDragArgs::__get__title_k__BackingField()  {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
constexpr ::StringW const& UnityEngine::UIElements::StartDragArgs::__get__title_k__BackingField() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
constexpr void UnityEngine::UIElements::StartDragArgs::__set__userData_k__BackingField(::System::Object*  value)  {
::cordl_internals::setInstanceField<::System::Object*, 0x18>(this, std::forward<::System::Object*>(value));
}
constexpr ::System::Object* UnityEngine::UIElements::StartDragArgs::__get__userData_k__BackingField()  {
return ::cordl_internals::getInstanceField<::System::Object*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> UnityEngine::UIElements::StartDragArgs::__get__userData_k__BackingField() const {
return ::cordl_internals::getInstanceField<::System::Object*, 0x18>(this);
}
constexpr void UnityEngine::UIElements::StartDragArgs::__set_m_GenericData(::System::Collections::Hashtable*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Hashtable*, 0x20>(this, std::forward<::System::Collections::Hashtable*>(value));
}
constexpr ::System::Collections::Hashtable* UnityEngine::UIElements::StartDragArgs::__get_m_GenericData()  {
return ::cordl_internals::getInstanceField<::System::Collections::Hashtable*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Hashtable*> UnityEngine::UIElements::StartDragArgs::__get_m_GenericData() const {
return ::cordl_internals::getInstanceField<::System::Collections::Hashtable*, 0x20>(this);
}
constexpr void UnityEngine::UIElements::StartDragArgs::__set__unityObjectReferences_k__BackingField(::System::Collections::Generic::IEnumerable_1<::UnityEngine::Object*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Object*>*, 0x28>(this, std::forward<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Object*>*>(value));
}
constexpr ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Object*>* UnityEngine::UIElements::StartDragArgs::__get__unityObjectReferences_k__BackingField()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Object*>*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Object*>*> UnityEngine::UIElements::StartDragArgs::__get__unityObjectReferences_k__BackingField() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Object*>*, 0x28>(this);
}
inline ::System::Object* UnityEngine::UIElements::StartDragArgs::get_userData()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StartDragArgs*>::get(),
                            "get_userData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(*this, ___internal_method);
}
inline ::UnityEngine::UIElements::StartDragArgs* UnityEngine::UIElements::StartDragArgs::New_ctor(::StringW  title, ::System::Object*  userData)  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::UIElements::StartDragArgs*>(title, userData));
}
inline void UnityEngine::UIElements::StartDragArgs::_ctor(::StringW  title, ::System::Object*  userData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StartDragArgs*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, title, userData);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
