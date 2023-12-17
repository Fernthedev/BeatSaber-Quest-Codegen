#pragma once
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/Xml/zzzz__OnRemoveWriter_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/Xml/zzzz__XmlRawWriter_def.hpp"
//  Writing Method size for method: ::System::Xml::OnRemoveWriter._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::OnRemoveWriter::*)(::System::Object*, ::cordl_internals::intptr_t)>(&::System::Xml::OnRemoveWriter::_ctor)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x2853974;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::OnRemoveWriter*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::OnRemoveWriter.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::OnRemoveWriter::*)(::System::Xml::XmlRawWriter*)>(&::System::Xml::OnRemoveWriter::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2853aa0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::OnRemoveWriter*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::OnRemoveWriter*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
inline ::System::Xml::OnRemoveWriter* System::Xml::OnRemoveWriter::New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Xml::OnRemoveWriter*>(object, method));
}
inline void System::Xml::OnRemoveWriter::_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::OnRemoveWriter*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, object, method);
}
inline void System::Xml::OnRemoveWriter::Invoke(::System::Xml::XmlRawWriter*  writer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::OnRemoveWriter*>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlRawWriter*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, writer);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
