#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Cms/zzzz__DefaultAuthenticatedAttributeTableGenerator_def.hpp"
#include "System/Collections/zzzz__IDictionary_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsAttributeTableGenerator_def.hpp"
#include "Org/BouncyCastle/Asn1/Cms/zzzz__AttributeTable_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Cms::DefaultAuthenticatedAttributeTableGenerator._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cms::DefaultAuthenticatedAttributeTableGenerator::*)()>(&::Org::BouncyCastle::Cms::DefaultAuthenticatedAttributeTableGenerator::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x1200298;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::DefaultAuthenticatedAttributeTableGenerator*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::DefaultAuthenticatedAttributeTableGenerator._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cms::DefaultAuthenticatedAttributeTableGenerator::*)(::Org::BouncyCastle::Asn1::Cms::AttributeTable*)>(&::Org::BouncyCastle::Cms::DefaultAuthenticatedAttributeTableGenerator::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1200300;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::DefaultAuthenticatedAttributeTableGenerator*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Cms::AttributeTable*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::DefaultAuthenticatedAttributeTableGenerator.CreateStandardAttributeTable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IDictionary* (::Org::BouncyCastle::Cms::DefaultAuthenticatedAttributeTableGenerator::*)(::System::Collections::IDictionary*)>(&::Org::BouncyCastle::Cms::DefaultAuthenticatedAttributeTableGenerator::CreateStandardAttributeTable)> {
  constexpr static std::size_t size = 0x528;
  constexpr static std::size_t addrs = 0x1200380;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::DefaultAuthenticatedAttributeTableGenerator*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::DefaultAuthenticatedAttributeTableGenerator*>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::DefaultAuthenticatedAttributeTableGenerator.GetAttributes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Cms::AttributeTable* (::Org::BouncyCastle::Cms::DefaultAuthenticatedAttributeTableGenerator::*)(::System::Collections::IDictionary*)>(&::Org::BouncyCastle::Cms::DefaultAuthenticatedAttributeTableGenerator::GetAttributes)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x12008a8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::DefaultAuthenticatedAttributeTableGenerator*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::DefaultAuthenticatedAttributeTableGenerator*>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Org::BouncyCastle::Cms::CmsAttributeTableGenerator"
constexpr  Org::BouncyCastle::Cms::DefaultAuthenticatedAttributeTableGenerator::operator ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator*() noexcept {
return static_cast<::Org::BouncyCastle::Cms::CmsAttributeTableGenerator*>(static_cast<void*>(this));
}
constexpr void Org::BouncyCastle::Cms::DefaultAuthenticatedAttributeTableGenerator::__set_table(::System::Collections::IDictionary*  value)  {
::cordl_internals::setInstanceField<::System::Collections::IDictionary*, 0x10>(this, std::forward<::System::Collections::IDictionary*>(value));
}
constexpr ::System::Collections::IDictionary* Org::BouncyCastle::Cms::DefaultAuthenticatedAttributeTableGenerator::__get_table()  {
return ::cordl_internals::getInstanceField<::System::Collections::IDictionary*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::IDictionary*> Org::BouncyCastle::Cms::DefaultAuthenticatedAttributeTableGenerator::__get_table() const {
return ::cordl_internals::getInstanceField<::System::Collections::IDictionary*, 0x10>(this);
}
inline ::Org::BouncyCastle::Cms::DefaultAuthenticatedAttributeTableGenerator* Org::BouncyCastle::Cms::DefaultAuthenticatedAttributeTableGenerator::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Cms::DefaultAuthenticatedAttributeTableGenerator*>());
}
inline void Org::BouncyCastle::Cms::DefaultAuthenticatedAttributeTableGenerator::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::DefaultAuthenticatedAttributeTableGenerator*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::Org::BouncyCastle::Cms::DefaultAuthenticatedAttributeTableGenerator* Org::BouncyCastle::Cms::DefaultAuthenticatedAttributeTableGenerator::New_ctor(::Org::BouncyCastle::Asn1::Cms::AttributeTable*  attributeTable)  {
return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Cms::DefaultAuthenticatedAttributeTableGenerator*>(attributeTable));
}
inline void Org::BouncyCastle::Cms::DefaultAuthenticatedAttributeTableGenerator::_ctor(::Org::BouncyCastle::Asn1::Cms::AttributeTable*  attributeTable)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::DefaultAuthenticatedAttributeTableGenerator*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Cms::AttributeTable*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, attributeTable);
}
inline ::System::Collections::IDictionary* Org::BouncyCastle::Cms::DefaultAuthenticatedAttributeTableGenerator::CreateStandardAttributeTable(::System::Collections::IDictionary*  parameters)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::DefaultAuthenticatedAttributeTableGenerator*>::get(),
                            "CreateStandardAttributeTable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IDictionary*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IDictionary*, false>(*this, ___internal_method, parameters);
}
inline ::Org::BouncyCastle::Asn1::Cms::AttributeTable* Org::BouncyCastle::Cms::DefaultAuthenticatedAttributeTableGenerator::GetAttributes(::System::Collections::IDictionary*  parameters)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::DefaultAuthenticatedAttributeTableGenerator*>::get(),
                            "GetAttributes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IDictionary*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Cms::AttributeTable*, false>(*this, ___internal_method, parameters);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
