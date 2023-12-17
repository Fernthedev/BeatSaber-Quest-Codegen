#pragma once
#include "System/zzzz__Attribute_impl.hpp"
#include "Unity/Jobs/LowLevel/Unsafe/zzzz__JobProducerTypeAttribute_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::Unity::Jobs::LowLevel::Unsafe::JobProducerTypeAttribute._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Jobs::LowLevel::Unsafe::JobProducerTypeAttribute::*)(::System::Type*)>(&::Unity::Jobs::LowLevel::Unsafe::JobProducerTypeAttribute::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2c9db70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::LowLevel::Unsafe::JobProducerTypeAttribute*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void Unity::Jobs::LowLevel::Unsafe::JobProducerTypeAttribute::__set__ProducerType_k__BackingField(::System::Type*  value)  {
::cordl_internals::setInstanceField<::System::Type*, 0x10>(this, std::forward<::System::Type*>(value));
}
constexpr ::System::Type* Unity::Jobs::LowLevel::Unsafe::JobProducerTypeAttribute::__get__ProducerType_k__BackingField()  {
return ::cordl_internals::getInstanceField<::System::Type*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Type*> Unity::Jobs::LowLevel::Unsafe::JobProducerTypeAttribute::__get__ProducerType_k__BackingField() const {
return ::cordl_internals::getInstanceField<::System::Type*, 0x10>(this);
}
inline ::Unity::Jobs::LowLevel::Unsafe::JobProducerTypeAttribute* Unity::Jobs::LowLevel::Unsafe::JobProducerTypeAttribute::New_ctor(::System::Type*  producerType)  {
return THROW_UNLESS(::il2cpp_utils::New<::Unity::Jobs::LowLevel::Unsafe::JobProducerTypeAttribute*>(producerType));
}
inline void Unity::Jobs::LowLevel::Unsafe::JobProducerTypeAttribute::_ctor(::System::Type*  producerType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::LowLevel::Unsafe::JobProducerTypeAttribute*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, producerType);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
