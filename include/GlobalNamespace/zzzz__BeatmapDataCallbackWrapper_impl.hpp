#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataCallbackWrapper_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataItem_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BeatmapDataCallbackWrapper._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapDataCallbackWrapper::*)(float_t, ::System::Type*, ::ArrayW<int32_t,::Array<int32_t>*>)>(&::GlobalNamespace::BeatmapDataCallbackWrapper::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x237bcdc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDataCallbackWrapper*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t,::Array<int32_t>*>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapDataCallbackWrapper.CallCallback
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapDataCallbackWrapper::*)(::GlobalNamespace::BeatmapDataItem*)>(&::GlobalNamespace::BeatmapDataCallbackWrapper::CallCallback)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDataCallbackWrapper*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDataCallbackWrapper*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::BeatmapDataCallbackWrapper::__set_BasicBeatmapEventType(::System::Type*  value)  {
::cordl_internals::setInstanceField<::System::Type*, 0x10>(this, std::forward<::System::Type*>(value));
}
constexpr ::System::Type* GlobalNamespace::BeatmapDataCallbackWrapper::__get_BasicBeatmapEventType()  {
return ::cordl_internals::getInstanceField<::System::Type*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Type*> GlobalNamespace::BeatmapDataCallbackWrapper::__get_BasicBeatmapEventType() const {
return ::cordl_internals::getInstanceField<::System::Type*, 0x10>(this);
}
constexpr void GlobalNamespace::BeatmapDataCallbackWrapper::__set_aheadTime(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x18>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::BeatmapDataCallbackWrapper::__get_aheadTime()  {
return ::cordl_internals::getInstanceField<float_t, 0x18>(this);
}
constexpr float_t const& GlobalNamespace::BeatmapDataCallbackWrapper::__get_aheadTime() const {
return ::cordl_internals::getInstanceField<float_t, 0x18>(this);
}
constexpr void GlobalNamespace::BeatmapDataCallbackWrapper::__set_subtypeIdentifiers(::ArrayW<int32_t,::Array<int32_t>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<int32_t,::Array<int32_t>*>, 0x20>(this, std::forward<::ArrayW<int32_t,::Array<int32_t>*>>(value));
}
constexpr ::ArrayW<int32_t,::Array<int32_t>*>& GlobalNamespace::BeatmapDataCallbackWrapper::__get_subtypeIdentifiers()  {
return ::cordl_internals::getInstanceField<::ArrayW<int32_t,::Array<int32_t>*>, 0x20>(this);
}
constexpr ::ArrayW<int32_t,::Array<int32_t>*> const& GlobalNamespace::BeatmapDataCallbackWrapper::__get_subtypeIdentifiers() const {
return ::cordl_internals::getInstanceField<::ArrayW<int32_t,::Array<int32_t>*>, 0x20>(this);
}
inline ::GlobalNamespace::BeatmapDataCallbackWrapper* GlobalNamespace::BeatmapDataCallbackWrapper::New_ctor(float_t  aheadTime, ::System::Type*  BasicBeatmapEventType, ::ArrayW<int32_t,::Array<int32_t>*>  subtypeIdentifiers)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::BeatmapDataCallbackWrapper*>(aheadTime, BasicBeatmapEventType, subtypeIdentifiers));
}
inline void GlobalNamespace::BeatmapDataCallbackWrapper::_ctor(float_t  aheadTime, ::System::Type*  BasicBeatmapEventType, ::ArrayW<int32_t,::Array<int32_t>*>  subtypeIdentifiers)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDataCallbackWrapper*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t,::Array<int32_t>*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, aheadTime, BasicBeatmapEventType, subtypeIdentifiers);
}
inline void GlobalNamespace::BeatmapDataCallbackWrapper::CallCallback(::GlobalNamespace::BeatmapDataItem*  beatmapData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDataCallbackWrapper*>::get(),
                            "CallCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDataItem*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, beatmapData);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
