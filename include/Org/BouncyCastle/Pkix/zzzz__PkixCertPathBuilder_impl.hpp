#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Pkix/zzzz__PkixCertPathBuilder_def.hpp"
#include "Org/BouncyCastle/Pkix/zzzz__PkixBuilderParameters_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "Org/BouncyCastle/Pkix/zzzz__PkixCertPathBuilderResult_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
#include "Org/BouncyCastle/X509/zzzz__X509Certificate_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixCertPathBuilder.Build
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Pkix::PkixCertPathBuilderResult* (::Org::BouncyCastle::Pkix::PkixCertPathBuilder::*)(::Org::BouncyCastle::Pkix::PkixBuilderParameters*)>(&::Org::BouncyCastle::Pkix::PkixCertPathBuilder::Build)> {
  constexpr static std::size_t size = 0x8dc;
  constexpr static std::size_t addrs = 0x10f29d4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixCertPathBuilder*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixCertPathBuilder*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixCertPathBuilder.Build
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Pkix::PkixCertPathBuilderResult* (::Org::BouncyCastle::Pkix::PkixCertPathBuilder::*)(::Org::BouncyCastle::X509::X509Certificate*, ::Org::BouncyCastle::Pkix::PkixBuilderParameters*, ::System::Collections::IList*)>(&::Org::BouncyCastle::Pkix::PkixCertPathBuilder::Build)> {
  constexpr static std::size_t size = 0xbb4;
  constexpr static std::size_t addrs = 0x10f32b0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixCertPathBuilder*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixCertPathBuilder*>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixCertPathBuilder._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Pkix::PkixCertPathBuilder::*)()>(&::Org::BouncyCastle::Pkix::PkixCertPathBuilder::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x10f3e6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixCertPathBuilder*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void Org::BouncyCastle::Pkix::PkixCertPathBuilder::__set_certPathException(::System::Exception*  value)  {
::cordl_internals::setInstanceField<::System::Exception*, 0x10>(this, std::forward<::System::Exception*>(value));
}
constexpr ::System::Exception* Org::BouncyCastle::Pkix::PkixCertPathBuilder::__get_certPathException()  {
return ::cordl_internals::getInstanceField<::System::Exception*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Exception*> Org::BouncyCastle::Pkix::PkixCertPathBuilder::__get_certPathException() const {
return ::cordl_internals::getInstanceField<::System::Exception*, 0x10>(this);
}
inline ::Org::BouncyCastle::Pkix::PkixCertPathBuilderResult* Org::BouncyCastle::Pkix::PkixCertPathBuilder::Build(::Org::BouncyCastle::Pkix::PkixBuilderParameters*  pkixParams)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixCertPathBuilder*>::get(),
                            "Build",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::PkixBuilderParameters*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Pkix::PkixCertPathBuilderResult*, false>(*this, ___internal_method, pkixParams);
}
inline ::Org::BouncyCastle::Pkix::PkixCertPathBuilderResult* Org::BouncyCastle::Pkix::PkixCertPathBuilder::Build(::Org::BouncyCastle::X509::X509Certificate*  tbvCert, ::Org::BouncyCastle::Pkix::PkixBuilderParameters*  pkixParams, ::System::Collections::IList*  tbvPath)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixCertPathBuilder*>::get(),
                            "Build",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::X509Certificate*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::PkixBuilderParameters*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IList*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Pkix::PkixCertPathBuilderResult*, false>(*this, ___internal_method, tbvCert, pkixParams, tbvPath);
}
inline ::Org::BouncyCastle::Pkix::PkixCertPathBuilder* Org::BouncyCastle::Pkix::PkixCertPathBuilder::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Pkix::PkixCertPathBuilder*>());
}
inline void Org::BouncyCastle::Pkix::PkixCertPathBuilder::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixCertPathBuilder*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
