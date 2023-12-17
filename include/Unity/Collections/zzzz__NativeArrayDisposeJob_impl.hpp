#pragma once
#include "Unity/Collections/zzzz__NativeArrayDisposeJob_def.hpp"
#include "Unity/Collections/zzzz__NativeArrayDispose_def.hpp"
#include "Unity/Jobs/zzzz__IJob_def.hpp"
//  Writing Method size for method: ::Unity::Collections::NativeArrayDisposeJob.Execute
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Collections::NativeArrayDisposeJob::*)()>(&::Unity::Collections::NativeArrayDisposeJob::Execute)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2c9e068;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeArrayDisposeJob>::get(),
                            "Execute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Unity::Jobs::IJob"
constexpr  Unity::Collections::NativeArrayDisposeJob::operator ::Unity::Jobs::IJob*()  {
return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::cordl_internals::Box(this)));
}
constexpr void Unity::Collections::NativeArrayDisposeJob::__set_Data(::Unity::Collections::NativeArrayDispose  value)  {
::cordl_internals::setInstanceField<::Unity::Collections::NativeArrayDispose, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::Unity::Collections::NativeArrayDispose>(value));
}
constexpr ::Unity::Collections::NativeArrayDispose& Unity::Collections::NativeArrayDisposeJob::__get_Data()  {
return ::cordl_internals::getInstanceField<::Unity::Collections::NativeArrayDispose, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::Unity::Collections::NativeArrayDispose const& Unity::Collections::NativeArrayDisposeJob::__get_Data() const {
return ::cordl_internals::getInstanceField<::Unity::Collections::NativeArrayDispose, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline void Unity::Collections::NativeArrayDisposeJob::Execute()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeArrayDisposeJob>::get(),
                            "Execute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "Data", ty: "::Unity::Collections::NativeArrayDispose", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Collections::NativeArrayDisposeJob::NativeArrayDisposeJob(::Unity::Collections::NativeArrayDispose  Data) noexcept : ::bs_hook::ValueTypeWrapper<0x10>() {this->Data = Data;
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
