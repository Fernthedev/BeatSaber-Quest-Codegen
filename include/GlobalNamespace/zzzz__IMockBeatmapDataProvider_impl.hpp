#pragma once
#include "GlobalNamespace/zzzz__IMockBeatmapDataProvider_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapIdentifierNetSerializable_def.hpp"
#include "GlobalNamespace/zzzz__MockBeatmapData_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::IMockBeatmapDataProvider.GetBeatmapData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::MockBeatmapData*>* (::GlobalNamespace::IMockBeatmapDataProvider::*)(::GlobalNamespace::BeatmapIdentifierNetSerializable*, ::System::Threading::CancellationToken)>(&::GlobalNamespace::IMockBeatmapDataProvider::GetBeatmapData)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IMockBeatmapDataProvider*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IMockBeatmapDataProvider*>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::IMockBeatmapDataProvider::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::MockBeatmapData*>* GlobalNamespace::IMockBeatmapDataProvider::GetBeatmapData(::GlobalNamespace::BeatmapIdentifierNetSerializable*  beatmap, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IMockBeatmapDataProvider*>::get(),
                            "GetBeatmapData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapIdentifierNetSerializable*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::MockBeatmapData*>*, false>(*this, ___internal_method, beatmap, cancellationToken);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
