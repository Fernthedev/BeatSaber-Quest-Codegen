#pragma once
#include "System/zzzz__Attribute_impl.hpp"
#include "System/Runtime/ConstrainedExecution/zzzz__ReliabilityContractAttribute_def.hpp"
#include "System/Runtime/ConstrainedExecution/zzzz__Cer_def.hpp"
#include "System/Runtime/ConstrainedExecution/zzzz__Consistency_def.hpp"
//  Writing Method size for method: ::System::Runtime::ConstrainedExecution::ReliabilityContractAttribute._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::ConstrainedExecution::ReliabilityContractAttribute::*)(::System::Runtime::ConstrainedExecution::Consistency, ::System::Runtime::ConstrainedExecution::Cer)>(&::System::Runtime::ConstrainedExecution::ReliabilityContractAttribute::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x24da6e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::ConstrainedExecution::ReliabilityContractAttribute*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::ConstrainedExecution::Consistency>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::ConstrainedExecution::Cer>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Runtime::ConstrainedExecution::ReliabilityContractAttribute::__set__ConsistencyGuarantee_k__BackingField(::System::Runtime::ConstrainedExecution::Consistency  value)  {
::cordl_internals::setInstanceField<::System::Runtime::ConstrainedExecution::Consistency, 0x10>(this, std::forward<::System::Runtime::ConstrainedExecution::Consistency>(value));
}
constexpr ::System::Runtime::ConstrainedExecution::Consistency& System::Runtime::ConstrainedExecution::ReliabilityContractAttribute::__get__ConsistencyGuarantee_k__BackingField()  {
return ::cordl_internals::getInstanceField<::System::Runtime::ConstrainedExecution::Consistency, 0x10>(this);
}
constexpr ::System::Runtime::ConstrainedExecution::Consistency const& System::Runtime::ConstrainedExecution::ReliabilityContractAttribute::__get__ConsistencyGuarantee_k__BackingField() const {
return ::cordl_internals::getInstanceField<::System::Runtime::ConstrainedExecution::Consistency, 0x10>(this);
}
constexpr void System::Runtime::ConstrainedExecution::ReliabilityContractAttribute::__set__Cer_k__BackingField(::System::Runtime::ConstrainedExecution::Cer  value)  {
::cordl_internals::setInstanceField<::System::Runtime::ConstrainedExecution::Cer, 0x14>(this, std::forward<::System::Runtime::ConstrainedExecution::Cer>(value));
}
constexpr ::System::Runtime::ConstrainedExecution::Cer& System::Runtime::ConstrainedExecution::ReliabilityContractAttribute::__get__Cer_k__BackingField()  {
return ::cordl_internals::getInstanceField<::System::Runtime::ConstrainedExecution::Cer, 0x14>(this);
}
constexpr ::System::Runtime::ConstrainedExecution::Cer const& System::Runtime::ConstrainedExecution::ReliabilityContractAttribute::__get__Cer_k__BackingField() const {
return ::cordl_internals::getInstanceField<::System::Runtime::ConstrainedExecution::Cer, 0x14>(this);
}
inline ::System::Runtime::ConstrainedExecution::ReliabilityContractAttribute* System::Runtime::ConstrainedExecution::ReliabilityContractAttribute::New_ctor(::System::Runtime::ConstrainedExecution::Consistency  consistencyGuarantee, ::System::Runtime::ConstrainedExecution::Cer  cer)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Runtime::ConstrainedExecution::ReliabilityContractAttribute*>(consistencyGuarantee, cer));
}
inline void System::Runtime::ConstrainedExecution::ReliabilityContractAttribute::_ctor(::System::Runtime::ConstrainedExecution::Consistency  consistencyGuarantee, ::System::Runtime::ConstrainedExecution::Cer  cer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::ConstrainedExecution::ReliabilityContractAttribute*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::ConstrainedExecution::Consistency>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::ConstrainedExecution::Cer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, consistencyGuarantee, cer);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
