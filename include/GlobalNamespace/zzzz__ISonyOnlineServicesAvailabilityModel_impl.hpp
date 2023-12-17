#pragma once
#include "GlobalNamespace/zzzz__ISonyOnlineServicesAvailabilityModel_def.hpp"
#include "GlobalNamespace/zzzz__ISonyOnlineServicesAvailabilityModel_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
constexpr void GlobalNamespace::__ISonyOnlineServicesAvailabilityModel__OnlineServicesAvailability::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__ISonyOnlineServicesAvailabilityModel__OnlineServicesAvailability::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__ISonyOnlineServicesAvailabilityModel__OnlineServicesAvailability::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__ISonyOnlineServicesAvailabilityModel__OnlineServicesAvailability::__ISonyOnlineServicesAvailabilityModel__OnlineServicesAvailability(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::GlobalNamespace::__ISonyOnlineServicesAvailabilityModel__OnlineServicesAvailability  GlobalNamespace::__ISonyOnlineServicesAvailabilityModel__OnlineServicesAvailability::Available{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::__ISonyOnlineServicesAvailabilityModel__OnlineServicesAvailability  GlobalNamespace::__ISonyOnlineServicesAvailabilityModel__OnlineServicesAvailability::Unavailable{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::__ISonyOnlineServicesAvailabilityModel__OnlineServicesAvailability  GlobalNamespace::__ISonyOnlineServicesAvailabilityModel__OnlineServicesAvailability::UnknownError{static_cast<int32_t>(0x2)};
//  Writing Method size for method: ::GlobalNamespace::ISonyOnlineServicesAvailabilityModel.GetOnlineServicesAvailabilityAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::__ISonyOnlineServicesAvailabilityModel__OnlineServicesAvailability>* (::GlobalNamespace::ISonyOnlineServicesAvailabilityModel::*)()>(&::GlobalNamespace::ISonyOnlineServicesAvailabilityModel::GetOnlineServicesAvailabilityAsync)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ISonyOnlineServicesAvailabilityModel*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ISonyOnlineServicesAvailabilityModel*>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::__ISonyOnlineServicesAvailabilityModel__OnlineServicesAvailability>* GlobalNamespace::ISonyOnlineServicesAvailabilityModel::GetOnlineServicesAvailabilityAsync()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ISonyOnlineServicesAvailabilityModel*>::get(),
                            "GetOnlineServicesAvailabilityAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::__ISonyOnlineServicesAvailabilityModel__OnlineServicesAvailability>*, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
