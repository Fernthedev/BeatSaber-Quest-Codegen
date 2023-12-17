#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Remoting/Channels/zzzz__CrossAppDomainData_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Runtime::Remoting::Channels::CrossAppDomainData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::Channels::CrossAppDomainData::*)(int32_t)>(&::System::Runtime::Remoting::Channels::CrossAppDomainData::_ctor)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x24a2af0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Channels::CrossAppDomainData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Channels::CrossAppDomainData.get_DomainID
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Runtime::Remoting::Channels::CrossAppDomainData::*)()>(&::System::Runtime::Remoting::Channels::CrossAppDomainData::get_DomainID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24a2b98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Channels::CrossAppDomainData*>::get(),
                            "get_DomainID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Channels::CrossAppDomainData.get_ProcessID
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Runtime::Remoting::Channels::CrossAppDomainData::*)()>(&::System::Runtime::Remoting::Channels::CrossAppDomainData::get_ProcessID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24a2ba0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Channels::CrossAppDomainData*>::get(),
                            "get_ProcessID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Runtime::Remoting::Channels::CrossAppDomainData::__set__ContextID(::System::Object*  value)  {
::cordl_internals::setInstanceField<::System::Object*, 0x10>(this, std::forward<::System::Object*>(value));
}
constexpr ::System::Object* System::Runtime::Remoting::Channels::CrossAppDomainData::__get__ContextID()  {
return ::cordl_internals::getInstanceField<::System::Object*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> System::Runtime::Remoting::Channels::CrossAppDomainData::__get__ContextID() const {
return ::cordl_internals::getInstanceField<::System::Object*, 0x10>(this);
}
constexpr void System::Runtime::Remoting::Channels::CrossAppDomainData::__set__DomainID(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this, std::forward<int32_t>(value));
}
constexpr int32_t& System::Runtime::Remoting::Channels::CrossAppDomainData::__get__DomainID()  {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this);
}
constexpr int32_t const& System::Runtime::Remoting::Channels::CrossAppDomainData::__get__DomainID() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this);
}
constexpr void System::Runtime::Remoting::Channels::CrossAppDomainData::__set__processGuid(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x20>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& System::Runtime::Remoting::Channels::CrossAppDomainData::__get__processGuid()  {
return ::cordl_internals::getInstanceField<::StringW, 0x20>(this);
}
constexpr ::StringW const& System::Runtime::Remoting::Channels::CrossAppDomainData::__get__processGuid() const {
return ::cordl_internals::getInstanceField<::StringW, 0x20>(this);
}
inline ::System::Runtime::Remoting::Channels::CrossAppDomainData* System::Runtime::Remoting::Channels::CrossAppDomainData::New_ctor(int32_t  domainId)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Runtime::Remoting::Channels::CrossAppDomainData*>(domainId));
}
inline void System::Runtime::Remoting::Channels::CrossAppDomainData::_ctor(int32_t  domainId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Channels::CrossAppDomainData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, domainId);
}
inline int32_t System::Runtime::Remoting::Channels::CrossAppDomainData::get_DomainID()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Channels::CrossAppDomainData*>::get(),
                            "get_DomainID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline ::StringW System::Runtime::Remoting::Channels::CrossAppDomainData::get_ProcessID()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Channels::CrossAppDomainData*>::get(),
                            "get_ProcessID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
