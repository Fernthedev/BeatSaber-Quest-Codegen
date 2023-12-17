#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crmf/zzzz__PKMacFactory_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IStreamCalculator_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IMacFactory_def.hpp"
#include "Org/BouncyCastle/Asn1/Cmp/zzzz__PbmParameter_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crmf::PKMacFactory._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crmf::PKMacFactory::*)(::ArrayW<uint8_t,::Array<uint8_t>*>, ::Org::BouncyCastle::Asn1::Cmp::PbmParameter*)>(&::Org::BouncyCastle::Crmf::PKMacFactory::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x1211fdc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crmf::PKMacFactory*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Cmp::PbmParameter*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crmf::PKMacFactory.get_AlgorithmDetails
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::Org::BouncyCastle::Crmf::PKMacFactory::*)()>(&::Org::BouncyCastle::Crmf::PKMacFactory::get_AlgorithmDetails)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x1212058;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crmf::PKMacFactory*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crmf::PKMacFactory*>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crmf::PKMacFactory.CreateCalculator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::IStreamCalculator* (::Org::BouncyCastle::Crmf::PKMacFactory::*)()>(&::Org::BouncyCastle::Crmf::PKMacFactory::CreateCalculator)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x12120f4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crmf::PKMacFactory*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crmf::PKMacFactory*>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::IMacFactory"
constexpr  Org::BouncyCastle::Crmf::PKMacFactory::operator ::Org::BouncyCastle::Crypto::IMacFactory*() noexcept {
return static_cast<::Org::BouncyCastle::Crypto::IMacFactory*>(static_cast<void*>(this));
}
constexpr void Org::BouncyCastle::Crmf::PKMacFactory::__set_parameters(::Org::BouncyCastle::Asn1::Cmp::PbmParameter*  value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Asn1::Cmp::PbmParameter*, 0x10>(this, std::forward<::Org::BouncyCastle::Asn1::Cmp::PbmParameter*>(value));
}
constexpr ::Org::BouncyCastle::Asn1::Cmp::PbmParameter* Org::BouncyCastle::Crmf::PKMacFactory::__get_parameters()  {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Asn1::Cmp::PbmParameter*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Cmp::PbmParameter*> Org::BouncyCastle::Crmf::PKMacFactory::__get_parameters() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Asn1::Cmp::PbmParameter*, 0x10>(this);
}
constexpr void Org::BouncyCastle::Crmf::PKMacFactory::__set_key(::ArrayW<uint8_t,::Array<uint8_t>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t,::Array<uint8_t>*>, 0x18>(this, std::forward<::ArrayW<uint8_t,::Array<uint8_t>*>>(value));
}
constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& Org::BouncyCastle::Crmf::PKMacFactory::__get_key()  {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t,::Array<uint8_t>*>, 0x18>(this);
}
constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& Org::BouncyCastle::Crmf::PKMacFactory::__get_key() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t,::Array<uint8_t>*>, 0x18>(this);
}
inline ::Org::BouncyCastle::Crmf::PKMacFactory* Org::BouncyCastle::Crmf::PKMacFactory::New_ctor(::ArrayW<uint8_t,::Array<uint8_t>*>  key, ::Org::BouncyCastle::Asn1::Cmp::PbmParameter*  parameters)  {
return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Crmf::PKMacFactory*>(key, parameters));
}
inline void Org::BouncyCastle::Crmf::PKMacFactory::_ctor(::ArrayW<uint8_t,::Array<uint8_t>*>  key, ::Org::BouncyCastle::Asn1::Cmp::PbmParameter*  parameters)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crmf::PKMacFactory*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Cmp::PbmParameter*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, parameters);
}
inline ::System::Object* Org::BouncyCastle::Crmf::PKMacFactory::get_AlgorithmDetails()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crmf::PKMacFactory*>::get(),
                            "get_AlgorithmDetails",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(*this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::IStreamCalculator* Org::BouncyCastle::Crmf::PKMacFactory::CreateCalculator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crmf::PKMacFactory*>::get(),
                            "CreateCalculator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::IStreamCalculator*, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
