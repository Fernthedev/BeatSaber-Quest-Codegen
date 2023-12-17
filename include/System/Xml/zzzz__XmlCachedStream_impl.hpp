#pragma once
#include "System/IO/zzzz__MemoryStream_impl.hpp"
#include "System/Xml/zzzz__XmlCachedStream_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/zzzz__Uri_def.hpp"
//  Writing Method size for method: ::System::Xml::XmlCachedStream._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlCachedStream::*)(::System::Uri*, ::System::IO::Stream*)>(&::System::Xml::XmlCachedStream::_ctor)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x28a42cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlCachedStream*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Xml::XmlCachedStream::__set_uri(::System::Uri*  value)  {
::cordl_internals::setInstanceField<::System::Uri*, 0x50>(this, std::forward<::System::Uri*>(value));
}
constexpr ::System::Uri* System::Xml::XmlCachedStream::__get_uri()  {
return ::cordl_internals::getInstanceField<::System::Uri*, 0x50>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Uri*> System::Xml::XmlCachedStream::__get_uri() const {
return ::cordl_internals::getInstanceField<::System::Uri*, 0x50>(this);
}
inline ::System::Xml::XmlCachedStream* System::Xml::XmlCachedStream::New_ctor(::System::Uri*  uri, ::System::IO::Stream*  stream)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Xml::XmlCachedStream*>(uri, stream));
}
inline void System::Xml::XmlCachedStream::_ctor(::System::Uri*  uri, ::System::IO::Stream*  stream)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlCachedStream*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, uri, stream);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
