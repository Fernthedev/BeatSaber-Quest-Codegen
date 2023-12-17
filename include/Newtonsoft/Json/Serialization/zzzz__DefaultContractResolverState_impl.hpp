#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__DefaultContractResolverState_def.hpp"
#include "Newtonsoft/Json/Utilities/zzzz__PropertyNameTable_def.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__JsonContract_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__ResolverContractKey_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::DefaultContractResolverState._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Serialization::DefaultContractResolverState::*)()>(&::Newtonsoft::Json::Serialization::DefaultContractResolverState::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x266edb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::DefaultContractResolverState*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void Newtonsoft::Json::Serialization::DefaultContractResolverState::__set_ContractCache(::System::Collections::Generic::Dictionary_2<::Newtonsoft::Json::Serialization::ResolverContractKey,::Newtonsoft::Json::Serialization::JsonContract*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::Dictionary_2<::Newtonsoft::Json::Serialization::ResolverContractKey,::Newtonsoft::Json::Serialization::JsonContract*>*, 0x10>(this, std::forward<::System::Collections::Generic::Dictionary_2<::Newtonsoft::Json::Serialization::ResolverContractKey,::Newtonsoft::Json::Serialization::JsonContract*>*>(value));
}
constexpr ::System::Collections::Generic::Dictionary_2<::Newtonsoft::Json::Serialization::ResolverContractKey,::Newtonsoft::Json::Serialization::JsonContract*>* Newtonsoft::Json::Serialization::DefaultContractResolverState::__get_ContractCache()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<::Newtonsoft::Json::Serialization::ResolverContractKey,::Newtonsoft::Json::Serialization::JsonContract*>*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::Newtonsoft::Json::Serialization::ResolverContractKey,::Newtonsoft::Json::Serialization::JsonContract*>*> Newtonsoft::Json::Serialization::DefaultContractResolverState::__get_ContractCache() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<::Newtonsoft::Json::Serialization::ResolverContractKey,::Newtonsoft::Json::Serialization::JsonContract*>*, 0x10>(this);
}
constexpr void Newtonsoft::Json::Serialization::DefaultContractResolverState::__set_NameTable(::Newtonsoft::Json::Utilities::PropertyNameTable*  value)  {
::cordl_internals::setInstanceField<::Newtonsoft::Json::Utilities::PropertyNameTable*, 0x18>(this, std::forward<::Newtonsoft::Json::Utilities::PropertyNameTable*>(value));
}
constexpr ::Newtonsoft::Json::Utilities::PropertyNameTable* Newtonsoft::Json::Serialization::DefaultContractResolverState::__get_NameTable()  {
return ::cordl_internals::getInstanceField<::Newtonsoft::Json::Utilities::PropertyNameTable*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::Utilities::PropertyNameTable*> Newtonsoft::Json::Serialization::DefaultContractResolverState::__get_NameTable() const {
return ::cordl_internals::getInstanceField<::Newtonsoft::Json::Utilities::PropertyNameTable*, 0x18>(this);
}
inline ::Newtonsoft::Json::Serialization::DefaultContractResolverState* Newtonsoft::Json::Serialization::DefaultContractResolverState::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::Newtonsoft::Json::Serialization::DefaultContractResolverState*>());
}
inline void Newtonsoft::Json::Serialization::DefaultContractResolverState::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::DefaultContractResolverState*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
