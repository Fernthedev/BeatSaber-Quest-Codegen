#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Cms/zzzz__SimpleAttributeTableGenerator_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsAttributeTableGenerator_def.hpp"
#include "System/Collections/zzzz__IDictionary_def.hpp"
#include "Org/BouncyCastle/Asn1/Cms/zzzz__AttributeTable_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Cms::SimpleAttributeTableGenerator._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cms::SimpleAttributeTableGenerator::*)(::Org::BouncyCastle::Asn1::Cms::AttributeTable*)>(&::Org::BouncyCastle::Cms::SimpleAttributeTableGenerator::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x120dd54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::SimpleAttributeTableGenerator*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Cms::AttributeTable*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::SimpleAttributeTableGenerator.GetAttributes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Cms::AttributeTable* (::Org::BouncyCastle::Cms::SimpleAttributeTableGenerator::*)(::System::Collections::IDictionary*)>(&::Org::BouncyCastle::Cms::SimpleAttributeTableGenerator::GetAttributes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x120dd7c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::SimpleAttributeTableGenerator*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::SimpleAttributeTableGenerator*>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Org::BouncyCastle::Cms::CmsAttributeTableGenerator"
constexpr  Org::BouncyCastle::Cms::SimpleAttributeTableGenerator::operator ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator*() noexcept {
return static_cast<::Org::BouncyCastle::Cms::CmsAttributeTableGenerator*>(static_cast<void*>(this));
}
constexpr void Org::BouncyCastle::Cms::SimpleAttributeTableGenerator::__set_attributes(::Org::BouncyCastle::Asn1::Cms::AttributeTable*  value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Asn1::Cms::AttributeTable*, 0x10>(this, std::forward<::Org::BouncyCastle::Asn1::Cms::AttributeTable*>(value));
}
constexpr ::Org::BouncyCastle::Asn1::Cms::AttributeTable* Org::BouncyCastle::Cms::SimpleAttributeTableGenerator::__get_attributes()  {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Asn1::Cms::AttributeTable*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Cms::AttributeTable*> Org::BouncyCastle::Cms::SimpleAttributeTableGenerator::__get_attributes() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Asn1::Cms::AttributeTable*, 0x10>(this);
}
inline ::Org::BouncyCastle::Cms::SimpleAttributeTableGenerator* Org::BouncyCastle::Cms::SimpleAttributeTableGenerator::New_ctor(::Org::BouncyCastle::Asn1::Cms::AttributeTable*  attributes)  {
return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Cms::SimpleAttributeTableGenerator*>(attributes));
}
inline void Org::BouncyCastle::Cms::SimpleAttributeTableGenerator::_ctor(::Org::BouncyCastle::Asn1::Cms::AttributeTable*  attributes)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::SimpleAttributeTableGenerator*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Cms::AttributeTable*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, attributes);
}
inline ::Org::BouncyCastle::Asn1::Cms::AttributeTable* Org::BouncyCastle::Cms::SimpleAttributeTableGenerator::GetAttributes(::System::Collections::IDictionary*  parameters)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::SimpleAttributeTableGenerator*>::get(),
                            "GetAttributes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IDictionary*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Cms::AttributeTable*, false>(*this, ___internal_method, parameters);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
