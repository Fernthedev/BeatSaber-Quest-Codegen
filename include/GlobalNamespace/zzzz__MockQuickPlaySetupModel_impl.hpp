#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__MockQuickPlaySetupModel_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "GlobalNamespace/zzzz__QuickPlaySetupData_def.hpp"
#include "GlobalNamespace/zzzz__IQuickPlaySetupModel_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MockQuickPlaySetupModel.GetQuickPlaySetupAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::QuickPlaySetupData*>* (::GlobalNamespace::MockQuickPlaySetupModel::*)(::System::Threading::CancellationToken)>(&::GlobalNamespace::MockQuickPlaySetupModel::GetQuickPlaySetupAsync)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x22444f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockQuickPlaySetupModel*>::get(),
                            "GetQuickPlaySetupAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockQuickPlaySetupModel._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MockQuickPlaySetupModel::*)()>(&::GlobalNamespace::MockQuickPlaySetupModel::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2244560;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockQuickPlaySetupModel*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::GlobalNamespace::IQuickPlaySetupModel"
constexpr  GlobalNamespace::MockQuickPlaySetupModel::operator ::GlobalNamespace::IQuickPlaySetupModel*() noexcept {
return static_cast<::GlobalNamespace::IQuickPlaySetupModel*>(static_cast<void*>(this));
}
constexpr void GlobalNamespace::MockQuickPlaySetupModel::__set__quickPlaySetupData(::GlobalNamespace::QuickPlaySetupData*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::QuickPlaySetupData*, 0x10>(this, std::forward<::GlobalNamespace::QuickPlaySetupData*>(value));
}
constexpr ::GlobalNamespace::QuickPlaySetupData* GlobalNamespace::MockQuickPlaySetupModel::__get__quickPlaySetupData()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::QuickPlaySetupData*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::QuickPlaySetupData*> GlobalNamespace::MockQuickPlaySetupModel::__get__quickPlaySetupData() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::QuickPlaySetupData*, 0x10>(this);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::QuickPlaySetupData*>* GlobalNamespace::MockQuickPlaySetupModel::GetQuickPlaySetupAsync(::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockQuickPlaySetupModel*>::get(),
                            "GetQuickPlaySetupAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::QuickPlaySetupData*>*, false>(*this, ___internal_method, cancellationToken);
}
inline ::GlobalNamespace::MockQuickPlaySetupModel* GlobalNamespace::MockQuickPlaySetupModel::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::MockQuickPlaySetupModel*>());
}
inline void GlobalNamespace::MockQuickPlaySetupModel::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockQuickPlaySetupModel*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
