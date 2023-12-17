#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__CADObjRef_def.hpp"
#include "System/Runtime/Remoting/zzzz__ObjRef_def.hpp"
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::CADObjRef._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::Messaging::CADObjRef::*)(::System::Runtime::Remoting::ObjRef*, int32_t)>(&::System::Runtime::Remoting::Messaging::CADObjRef::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x24a7be0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::CADObjRef*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::ObjRef*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Runtime::Remoting::Messaging::CADObjRef::__set_objref(::System::Runtime::Remoting::ObjRef*  value)  {
::cordl_internals::setInstanceField<::System::Runtime::Remoting::ObjRef*, 0x10>(this, std::forward<::System::Runtime::Remoting::ObjRef*>(value));
}
constexpr ::System::Runtime::Remoting::ObjRef* System::Runtime::Remoting::Messaging::CADObjRef::__get_objref()  {
return ::cordl_internals::getInstanceField<::System::Runtime::Remoting::ObjRef*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Remoting::ObjRef*> System::Runtime::Remoting::Messaging::CADObjRef::__get_objref() const {
return ::cordl_internals::getInstanceField<::System::Runtime::Remoting::ObjRef*, 0x10>(this);
}
constexpr void System::Runtime::Remoting::Messaging::CADObjRef::__set_SourceDomain(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this, std::forward<int32_t>(value));
}
constexpr int32_t& System::Runtime::Remoting::Messaging::CADObjRef::__get_SourceDomain()  {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this);
}
constexpr int32_t const& System::Runtime::Remoting::Messaging::CADObjRef::__get_SourceDomain() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this);
}
constexpr void System::Runtime::Remoting::Messaging::CADObjRef::__set_TypeInfo(::ArrayW<uint8_t,::Array<uint8_t>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t,::Array<uint8_t>*>, 0x20>(this, std::forward<::ArrayW<uint8_t,::Array<uint8_t>*>>(value));
}
constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& System::Runtime::Remoting::Messaging::CADObjRef::__get_TypeInfo()  {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t,::Array<uint8_t>*>, 0x20>(this);
}
constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& System::Runtime::Remoting::Messaging::CADObjRef::__get_TypeInfo() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t,::Array<uint8_t>*>, 0x20>(this);
}
inline ::System::Runtime::Remoting::Messaging::CADObjRef* System::Runtime::Remoting::Messaging::CADObjRef::New_ctor(::System::Runtime::Remoting::ObjRef*  o, int32_t  sourceDomain)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Runtime::Remoting::Messaging::CADObjRef*>(o, sourceDomain));
}
inline void System::Runtime::Remoting::Messaging::CADObjRef::_ctor(::System::Runtime::Remoting::ObjRef*  o, int32_t  sourceDomain)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::CADObjRef*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::ObjRef*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, o, sourceDomain);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
