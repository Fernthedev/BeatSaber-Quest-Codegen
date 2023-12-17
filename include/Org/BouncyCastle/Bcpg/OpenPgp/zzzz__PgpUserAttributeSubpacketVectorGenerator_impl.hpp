#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Bcpg/OpenPgp/zzzz__PgpUserAttributeSubpacketVectorGenerator_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
#include "Org/BouncyCastle/Bcpg/OpenPgp/zzzz__PgpUserAttributeSubpacketVector_def.hpp"
#include "Org/BouncyCastle/Bcpg/Attr/zzzz__ImageAttrib_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVectorGenerator.SetImageAttribute
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVectorGenerator::*)(::Org::BouncyCastle::Bcpg::Attr::__ImageAttrib__Format, ::ArrayW<uint8_t,::Array<uint8_t>*>)>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVectorGenerator::SetImageAttribute)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x10cd76c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVectorGenerator*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVectorGenerator*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVectorGenerator.Generate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVector* (::Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVectorGenerator::*)()>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVectorGenerator::Generate)> {
  constexpr static std::size_t size = 0x2c8;
  constexpr static std::size_t addrs = 0x10cd8bc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVectorGenerator*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVectorGenerator*>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVectorGenerator._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVectorGenerator::*)()>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVectorGenerator::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x10cdb84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVectorGenerator*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVectorGenerator::__set_list(::System::Collections::IList*  value)  {
::cordl_internals::setInstanceField<::System::Collections::IList*, 0x10>(this, std::forward<::System::Collections::IList*>(value));
}
constexpr ::System::Collections::IList* Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVectorGenerator::__get_list()  {
return ::cordl_internals::getInstanceField<::System::Collections::IList*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::IList*> Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVectorGenerator::__get_list() const {
return ::cordl_internals::getInstanceField<::System::Collections::IList*, 0x10>(this);
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVectorGenerator::SetImageAttribute(::Org::BouncyCastle::Bcpg::Attr::__ImageAttrib__Format  imageType, ::ArrayW<uint8_t,::Array<uint8_t>*>  imageData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVectorGenerator*>::get(),
                            "SetImageAttribute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::Attr::__ImageAttrib__Format>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, imageType, imageData);
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVector* Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVectorGenerator::Generate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVectorGenerator*>::get(),
                            "Generate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVector*, false>(*this, ___internal_method);
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVectorGenerator* Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVectorGenerator::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVectorGenerator*>());
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVectorGenerator::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVectorGenerator*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
