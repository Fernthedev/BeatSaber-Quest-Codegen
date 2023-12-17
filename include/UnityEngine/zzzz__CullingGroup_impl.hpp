#pragma once
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__CullingGroup_def.hpp"
#include "UnityEngine/zzzz__CullingGroup_def.hpp"
#include "UnityEngine/zzzz__CullingGroupEvent_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::UnityEngine::__CullingGroup__StateChanged._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::__CullingGroup__StateChanged::*)(::System::Object*, ::cordl_internals::intptr_t)>(&::UnityEngine::__CullingGroup__StateChanged::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2cc67f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__CullingGroup__StateChanged*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::__CullingGroup__StateChanged.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::__CullingGroup__StateChanged::*)(::UnityEngine::CullingGroupEvent)>(&::UnityEngine::__CullingGroup__StateChanged::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2cc68b4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__CullingGroup__StateChanged*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__CullingGroup__StateChanged*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
inline ::UnityEngine::__CullingGroup__StateChanged* UnityEngine::__CullingGroup__StateChanged::New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::__CullingGroup__StateChanged*>(object, method));
}
inline void UnityEngine::__CullingGroup__StateChanged::_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__CullingGroup__StateChanged*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, object, method);
}
inline void UnityEngine::__CullingGroup__StateChanged::Invoke(::UnityEngine::CullingGroupEvent  sphere)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__CullingGroup__StateChanged*>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::CullingGroupEvent>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, sphere);
}
//  Writing Method size for method: ::UnityEngine::CullingGroup.SendEvents
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::CullingGroup*, ::cordl_internals::intptr_t, int32_t)>(&::UnityEngine::CullingGroup::SendEvents)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2cc6794;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::CullingGroup*>::get(),
                            "SendEvents",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::CullingGroup*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void UnityEngine::CullingGroup::__set_m_Ptr(::cordl_internals::intptr_t  value)  {
::cordl_internals::setInstanceField<::cordl_internals::intptr_t, 0x10>(this, std::forward<::cordl_internals::intptr_t>(value));
}
constexpr ::cordl_internals::intptr_t& UnityEngine::CullingGroup::__get_m_Ptr()  {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x10>(this);
}
constexpr ::cordl_internals::intptr_t const& UnityEngine::CullingGroup::__get_m_Ptr() const {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x10>(this);
}
constexpr void UnityEngine::CullingGroup::__set_m_OnStateChanged(::UnityEngine::__CullingGroup__StateChanged*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::__CullingGroup__StateChanged*, 0x18>(this, std::forward<::UnityEngine::__CullingGroup__StateChanged*>(value));
}
constexpr ::UnityEngine::__CullingGroup__StateChanged* UnityEngine::CullingGroup::__get_m_OnStateChanged()  {
return ::cordl_internals::getInstanceField<::UnityEngine::__CullingGroup__StateChanged*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::__CullingGroup__StateChanged*> UnityEngine::CullingGroup::__get_m_OnStateChanged() const {
return ::cordl_internals::getInstanceField<::UnityEngine::__CullingGroup__StateChanged*, 0x18>(this);
}
inline void UnityEngine::CullingGroup::SendEvents(::UnityEngine::CullingGroup*  cullingGroup, ::cordl_internals::intptr_t  eventsPtr, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::CullingGroup*>::get(),
                            "SendEvents",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::CullingGroup*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, cullingGroup, eventsPtr, count);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
