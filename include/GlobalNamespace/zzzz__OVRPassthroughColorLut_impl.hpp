#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__OVRPassthroughColorLut_def.hpp"
#include "UnityEngine/zzzz__TextureFormat_def.hpp"
#include "System/Runtime/InteropServices/zzzz__GCHandle_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "UnityEngine/zzzz__Color32_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
#include "GlobalNamespace/zzzz__OVRPassthroughColorLut_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Jobs/zzzz__IJobParallelFor_def.hpp"
constexpr void GlobalNamespace::__OVRPassthroughColorLut__ColorChannels::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__OVRPassthroughColorLut__ColorChannels::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__OVRPassthroughColorLut__ColorChannels::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__OVRPassthroughColorLut__ColorChannels::__OVRPassthroughColorLut__ColorChannels(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::GlobalNamespace::__OVRPassthroughColorLut__ColorChannels  GlobalNamespace::__OVRPassthroughColorLut__ColorChannels::Rgb{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::__OVRPassthroughColorLut__ColorChannels  GlobalNamespace::__OVRPassthroughColorLut__ColorChannels::Rgba{static_cast<int32_t>(0x2)};
//  Writing Method size for method: ::GlobalNamespace::__OVRPassthroughColorLut__WriteColorsAsBytesJob.Execute
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRPassthroughColorLut__WriteColorsAsBytesJob::*)(int32_t)>(&::GlobalNamespace::__OVRPassthroughColorLut__WriteColorsAsBytesJob::Execute)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x27c759c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRPassthroughColorLut__WriteColorsAsBytesJob>::get(),
                            "Execute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Unity::Jobs::IJobParallelFor"
constexpr  GlobalNamespace::__OVRPassthroughColorLut__WriteColorsAsBytesJob::operator ::Unity::Jobs::IJobParallelFor*()  {
return static_cast<::Unity::Jobs::IJobParallelFor*>(static_cast<void*>(::cordl_internals::Box(this)));
}
constexpr void GlobalNamespace::__OVRPassthroughColorLut__WriteColorsAsBytesJob::__set_target(::Unity::Collections::NativeArray_1<uint8_t>  value)  {
::cordl_internals::setInstanceField<::Unity::Collections::NativeArray_1<uint8_t>, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::Unity::Collections::NativeArray_1<uint8_t>>(value));
}
constexpr ::Unity::Collections::NativeArray_1<uint8_t>& GlobalNamespace::__OVRPassthroughColorLut__WriteColorsAsBytesJob::__get_target()  {
return ::cordl_internals::getInstanceField<::Unity::Collections::NativeArray_1<uint8_t>, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::Unity::Collections::NativeArray_1<uint8_t> const& GlobalNamespace::__OVRPassthroughColorLut__WriteColorsAsBytesJob::__get_target() const {
return ::cordl_internals::getInstanceField<::Unity::Collections::NativeArray_1<uint8_t>, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__OVRPassthroughColorLut__WriteColorsAsBytesJob::__set_source(::Unity::Collections::NativeArray_1<::UnityEngine::Color>  value)  {
::cordl_internals::setInstanceField<::Unity::Collections::NativeArray_1<::UnityEngine::Color>, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::Unity::Collections::NativeArray_1<::UnityEngine::Color>>(value));
}
constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Color>& GlobalNamespace::__OVRPassthroughColorLut__WriteColorsAsBytesJob::__get_source()  {
return ::cordl_internals::getInstanceField<::Unity::Collections::NativeArray_1<::UnityEngine::Color>, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Color> const& GlobalNamespace::__OVRPassthroughColorLut__WriteColorsAsBytesJob::__get_source() const {
return ::cordl_internals::getInstanceField<::Unity::Collections::NativeArray_1<::UnityEngine::Color>, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__OVRPassthroughColorLut__WriteColorsAsBytesJob::__set_channelCount(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__OVRPassthroughColorLut__WriteColorsAsBytesJob::__get_channelCount()  {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__OVRPassthroughColorLut__WriteColorsAsBytesJob::__get_channelCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline void GlobalNamespace::__OVRPassthroughColorLut__WriteColorsAsBytesJob::Execute(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRPassthroughColorLut__WriteColorsAsBytesJob>::get(),
                            "Execute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, index);
}
// Ctor Parameters [CppParam { name: "target", ty: "::Unity::Collections::NativeArray_1<uint8_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "source", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Color>", modifiers: "", def_value: Some("{}") }, CppParam { name: "channelCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__OVRPassthroughColorLut__WriteColorsAsBytesJob::__OVRPassthroughColorLut__WriteColorsAsBytesJob(::Unity::Collections::NativeArray_1<uint8_t>  target, ::Unity::Collections::NativeArray_1<::UnityEngine::Color>  source, int32_t  channelCount) noexcept : ::bs_hook::ValueTypeWrapper<0x28>() {this->target = target;
this->source = source;
this->channelCount = channelCount;
}
//  Writing Method size for method: ::GlobalNamespace::__OVRPassthroughColorLut__ColorLutTextureConverter__MapColorValuesJob.Execute
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRPassthroughColorLut__ColorLutTextureConverter__MapColorValuesJob::*)(int32_t)>(&::GlobalNamespace::__OVRPassthroughColorLut__ColorLutTextureConverter__MapColorValuesJob::Execute)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x27c798c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRPassthroughColorLut__ColorLutTextureConverter__MapColorValuesJob>::get(),
                            "Execute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Unity::Jobs::IJobParallelFor"
constexpr  GlobalNamespace::__OVRPassthroughColorLut__ColorLutTextureConverter__MapColorValuesJob::operator ::Unity::Jobs::IJobParallelFor*()  {
return static_cast<::Unity::Jobs::IJobParallelFor*>(static_cast<void*>(::cordl_internals::Box(this)));
}
constexpr void GlobalNamespace::__OVRPassthroughColorLut__ColorLutTextureConverter__MapColorValuesJob::__set_settings(::GlobalNamespace::__OVRPassthroughColorLut__ColorLutTextureConverter__TextureSettings  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__OVRPassthroughColorLut__ColorLutTextureConverter__TextureSettings, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::GlobalNamespace::__OVRPassthroughColorLut__ColorLutTextureConverter__TextureSettings>(value));
}
constexpr ::GlobalNamespace::__OVRPassthroughColorLut__ColorLutTextureConverter__TextureSettings& GlobalNamespace::__OVRPassthroughColorLut__ColorLutTextureConverter__MapColorValuesJob::__get_settings()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__OVRPassthroughColorLut__ColorLutTextureConverter__TextureSettings, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::GlobalNamespace::__OVRPassthroughColorLut__ColorLutTextureConverter__TextureSettings const& GlobalNamespace::__OVRPassthroughColorLut__ColorLutTextureConverter__MapColorValuesJob::__get_settings() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__OVRPassthroughColorLut__ColorLutTextureConverter__TextureSettings, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__OVRPassthroughColorLut__ColorLutTextureConverter__MapColorValuesJob::__set_target(::Unity::Collections::NativeArray_1<uint8_t>  value)  {
::cordl_internals::setInstanceField<::Unity::Collections::NativeArray_1<uint8_t>, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::Unity::Collections::NativeArray_1<uint8_t>>(value));
}
constexpr ::Unity::Collections::NativeArray_1<uint8_t>& GlobalNamespace::__OVRPassthroughColorLut__ColorLutTextureConverter__MapColorValuesJob::__get_target()  {
return ::cordl_internals::getInstanceField<::Unity::Collections::NativeArray_1<uint8_t>, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::Unity::Collections::NativeArray_1<uint8_t> const& GlobalNamespace::__OVRPassthroughColorLut__ColorLutTextureConverter__MapColorValuesJob::__get_target() const {
return ::cordl_internals::getInstanceField<::Unity::Collections::NativeArray_1<uint8_t>, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__OVRPassthroughColorLut__ColorLutTextureConverter__MapColorValuesJob::__set_source(::Unity::Collections::NativeArray_1<uint8_t>  value)  {
::cordl_internals::setInstanceField<::Unity::Collections::NativeArray_1<uint8_t>, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::Unity::Collections::NativeArray_1<uint8_t>>(value));
}
constexpr ::Unity::Collections::NativeArray_1<uint8_t>& GlobalNamespace::__OVRPassthroughColorLut__ColorLutTextureConverter__MapColorValuesJob::__get_source()  {
return ::cordl_internals::getInstanceField<::Unity::Collections::NativeArray_1<uint8_t>, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::Unity::Collections::NativeArray_1<uint8_t> const& GlobalNamespace::__OVRPassthroughColorLut__ColorLutTextureConverter__MapColorValuesJob::__get_source() const {
return ::cordl_internals::getInstanceField<::Unity::Collections::NativeArray_1<uint8_t>, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline void GlobalNamespace::__OVRPassthroughColorLut__ColorLutTextureConverter__MapColorValuesJob::Execute(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRPassthroughColorLut__ColorLutTextureConverter__MapColorValuesJob>::get(),
                            "Execute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, index);
}
// Ctor Parameters [CppParam { name: "settings", ty: "::GlobalNamespace::__OVRPassthroughColorLut__ColorLutTextureConverter__TextureSettings", modifiers: "", def_value: Some("{}") }, CppParam { name: "target", ty: "::Unity::Collections::NativeArray_1<uint8_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "source", ty: "::Unity::Collections::NativeArray_1<uint8_t>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__OVRPassthroughColorLut__ColorLutTextureConverter__MapColorValuesJob::__OVRPassthroughColorLut__ColorLutTextureConverter__MapColorValuesJob(::GlobalNamespace::__OVRPassthroughColorLut__ColorLutTextureConverter__TextureSettings  settings, ::Unity::Collections::NativeArray_1<uint8_t>  target, ::Unity::Collections::NativeArray_1<uint8_t>  source) noexcept : ::bs_hook::ValueTypeWrapper<0x38>() {this->settings = settings;
this->target = target;
this->source = source;
}
//  Writing Method size for method: ::GlobalNamespace::__OVRPassthroughColorLut__ColorLutTextureConverter__TextureSettings.get_Width
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::__OVRPassthroughColorLut__ColorLutTextureConverter__TextureSettings::*)()>(&::GlobalNamespace::__OVRPassthroughColorLut__ColorLutTextureConverter__TextureSettings::get_Width)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27c7a2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRPassthroughColorLut__ColorLutTextureConverter__TextureSettings>::get(),
                            "get_Width",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRPassthroughColorLut__ColorLutTextureConverter__TextureSettings.get_Height
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::__OVRPassthroughColorLut__ColorLutTextureConverter__TextureSettings::*)()>(&::GlobalNamespace::__OVRPassthroughColorLut__ColorLutTextureConverter__TextureSettings::get_Height)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27c7a34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRPassthroughColorLut__ColorLutTextureConverter__TextureSettings>::get(),
                            "get_Height",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRPassthroughColorLut__ColorLutTextureConverter__TextureSettings.get_Resolution
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::__OVRPassthroughColorLut__ColorLutTextureConverter__TextureSettings::*)()>(&::GlobalNamespace::__OVRPassthroughColorLut__ColorLutTextureConverter__TextureSettings::get_Resolution)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27c7a3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRPassthroughColorLut__ColorLutTextureConverter__TextureSettings>::get(),
                            "get_Resolution",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRPassthroughColorLut__ColorLutTextureConverter__TextureSettings.get_SlicesPerRow
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::__OVRPassthroughColorLut__ColorLutTextureConverter__TextureSettings::*)()>(&::GlobalNamespace::__OVRPassthroughColorLut__ColorLutTextureConverter__TextureSettings::get_SlicesPerRow)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27c7a44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRPassthroughColorLut__ColorLutTextureConverter__TextureSettings>::get(),
                            "get_SlicesPerRow",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRPassthroughColorLut__ColorLutTextureConverter__TextureSettings.get_ChannelCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::__OVRPassthroughColorLut__ColorLutTextureConverter__TextureSettings::*)()>(&::GlobalNamespace::__OVRPassthroughColorLut__ColorLutTextureConverter__TextureSettings::get_ChannelCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27c7a4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRPassthroughColorLut__ColorLutTextureConverter__TextureSettings>::get(),
                            "get_ChannelCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRPassthroughColorLut__ColorLutTextureConverter__TextureSettings.get_FlipY
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__OVRPassthroughColorLut__ColorLutTextureConverter__TextureSettings::*)()>(&::GlobalNamespace::__OVRPassthroughColorLut__ColorLutTextureConverter__TextureSettings::get_FlipY)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27c7a54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRPassthroughColorLut__ColorLutTextureConverter__TextureSettings>::get(),
                            "get_FlipY",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRPassthroughColorLut__ColorLutTextureConverter__TextureSettings._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRPassthroughColorLut__ColorLutTextureConverter__TextureSettings::*)(int32_t, int32_t, int32_t, int32_t, int32_t, bool)>(&::GlobalNamespace::__OVRPassthroughColorLut__ColorLutTextureConverter__TextureSettings::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x27c7974;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRPassthroughColorLut__ColorLutTextureConverter__TextureSettings>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__OVRPassthroughColorLut__ColorLutTextureConverter__TextureSettings::__set__Width_k__BackingField(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__OVRPassthroughColorLut__ColorLutTextureConverter__TextureSettings::__get__Width_k__BackingField()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__OVRPassthroughColorLut__ColorLutTextureConverter__TextureSettings::__get__Width_k__BackingField() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__OVRPassthroughColorLut__ColorLutTextureConverter__TextureSettings::__set__Height_k__BackingField(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__OVRPassthroughColorLut__ColorLutTextureConverter__TextureSettings::__get__Height_k__BackingField()  {
return ::cordl_internals::getInstanceField<int32_t, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__OVRPassthroughColorLut__ColorLutTextureConverter__TextureSettings::__get__Height_k__BackingField() const {
return ::cordl_internals::getInstanceField<int32_t, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__OVRPassthroughColorLut__ColorLutTextureConverter__TextureSettings::__set__Resolution_k__BackingField(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__OVRPassthroughColorLut__ColorLutTextureConverter__TextureSettings::__get__Resolution_k__BackingField()  {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__OVRPassthroughColorLut__ColorLutTextureConverter__TextureSettings::__get__Resolution_k__BackingField() const {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__OVRPassthroughColorLut__ColorLutTextureConverter__TextureSettings::__set__SlicesPerRow_k__BackingField(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0xc>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__OVRPassthroughColorLut__ColorLutTextureConverter__TextureSettings::__get__SlicesPerRow_k__BackingField()  {
return ::cordl_internals::getInstanceField<int32_t, 0xc>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__OVRPassthroughColorLut__ColorLutTextureConverter__TextureSettings::__get__SlicesPerRow_k__BackingField() const {
return ::cordl_internals::getInstanceField<int32_t, 0xc>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__OVRPassthroughColorLut__ColorLutTextureConverter__TextureSettings::__set__ChannelCount_k__BackingField(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__OVRPassthroughColorLut__ColorLutTextureConverter__TextureSettings::__get__ChannelCount_k__BackingField()  {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__OVRPassthroughColorLut__ColorLutTextureConverter__TextureSettings::__get__ChannelCount_k__BackingField() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__OVRPassthroughColorLut__ColorLutTextureConverter__TextureSettings::__set__FlipY_k__BackingField(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x14>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::__OVRPassthroughColorLut__ColorLutTextureConverter__TextureSettings::__get__FlipY_k__BackingField()  {
return ::cordl_internals::getInstanceField<bool, 0x14>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr bool const& GlobalNamespace::__OVRPassthroughColorLut__ColorLutTextureConverter__TextureSettings::__get__FlipY_k__BackingField() const {
return ::cordl_internals::getInstanceField<bool, 0x14>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline int32_t GlobalNamespace::__OVRPassthroughColorLut__ColorLutTextureConverter__TextureSettings::get_Width()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRPassthroughColorLut__ColorLutTextureConverter__TextureSettings>::get(),
                            "get_Width",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline int32_t GlobalNamespace::__OVRPassthroughColorLut__ColorLutTextureConverter__TextureSettings::get_Height()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRPassthroughColorLut__ColorLutTextureConverter__TextureSettings>::get(),
                            "get_Height",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline int32_t GlobalNamespace::__OVRPassthroughColorLut__ColorLutTextureConverter__TextureSettings::get_Resolution()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRPassthroughColorLut__ColorLutTextureConverter__TextureSettings>::get(),
                            "get_Resolution",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline int32_t GlobalNamespace::__OVRPassthroughColorLut__ColorLutTextureConverter__TextureSettings::get_SlicesPerRow()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRPassthroughColorLut__ColorLutTextureConverter__TextureSettings>::get(),
                            "get_SlicesPerRow",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline int32_t GlobalNamespace::__OVRPassthroughColorLut__ColorLutTextureConverter__TextureSettings::get_ChannelCount()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRPassthroughColorLut__ColorLutTextureConverter__TextureSettings>::get(),
                            "get_ChannelCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline bool GlobalNamespace::__OVRPassthroughColorLut__ColorLutTextureConverter__TextureSettings::get_FlipY()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRPassthroughColorLut__ColorLutTextureConverter__TextureSettings>::get(),
                            "get_FlipY",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void GlobalNamespace::__OVRPassthroughColorLut__ColorLutTextureConverter__TextureSettings::_ctor(int32_t  width, int32_t  height, int32_t  resolution, int32_t  slicesPerRow, int32_t  channelCount, bool  flipY)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRPassthroughColorLut__ColorLutTextureConverter__TextureSettings>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, width, height, resolution, slicesPerRow, channelCount, flipY);
}
// Ctor Parameters [CppParam { name: "_Width_k__BackingField", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_Height_k__BackingField", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_Resolution_k__BackingField", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_SlicesPerRow_k__BackingField", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_ChannelCount_k__BackingField", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_FlipY_k__BackingField", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__OVRPassthroughColorLut__ColorLutTextureConverter__TextureSettings::__OVRPassthroughColorLut__ColorLutTextureConverter__TextureSettings(int32_t  _Width_k__BackingField, int32_t  _Height_k__BackingField, int32_t  _Resolution_k__BackingField, int32_t  _SlicesPerRow_k__BackingField, int32_t  _ChannelCount_k__BackingField, bool  _FlipY_k__BackingField) noexcept : ::bs_hook::ValueTypeWrapper<0x18>() {this->_Width_k__BackingField = _Width_k__BackingField;
this->_Height_k__BackingField = _Height_k__BackingField;
this->_Resolution_k__BackingField = _Resolution_k__BackingField;
this->_SlicesPerRow_k__BackingField = _SlicesPerRow_k__BackingField;
this->_ChannelCount_k__BackingField = _ChannelCount_k__BackingField;
this->_FlipY_k__BackingField = _FlipY_k__BackingField;
}
//  Writing Method size for method: ::GlobalNamespace::__OVRPassthroughColorLut__ColorLutTextureConverter.TextureToColorByteMap
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Texture2D*, int32_t, ::ArrayW<uint8_t,::Array<uint8_t>*>, bool)>(&::GlobalNamespace::__OVRPassthroughColorLut__ColorLutTextureConverter::TextureToColorByteMap)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x27c6cd8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRPassthroughColorLut__ColorLutTextureConverter*>::get(),
                            "TextureToColorByteMap",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture2D*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRPassthroughColorLut__ColorLutTextureConverter.MapColorValues
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::GlobalNamespace::__OVRPassthroughColorLut__ColorLutTextureConverter__TextureSettings, ::Unity::Collections::NativeArray_1<uint8_t>, ::ArrayW<uint8_t,::Array<uint8_t>*>)>(&::GlobalNamespace::__OVRPassthroughColorLut__ColorLutTextureConverter::MapColorValues)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x27c77d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRPassthroughColorLut__ColorLutTextureConverter*>::get(),
                            "MapColorValues",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRPassthroughColorLut__ColorLutTextureConverter__TextureSettings>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRPassthroughColorLut__ColorLutTextureConverter.GetTextureSettings
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__OVRPassthroughColorLut__ColorLutTextureConverter__TextureSettings (*)(::UnityEngine::Texture2D*, int32_t, bool)>(&::GlobalNamespace::__OVRPassthroughColorLut__ColorLutTextureConverter::GetTextureSettings)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x27c76cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRPassthroughColorLut__ColorLutTextureConverter*>::get(),
                            "GetTextureSettings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture2D*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRPassthroughColorLut__ColorLutTextureConverter.TryGetTextureLayout
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(int32_t, int32_t, ByRef<int32_t>, ByRef<int32_t>, ByRef<::StringW>)>(&::GlobalNamespace::__OVRPassthroughColorLut__ColorLutTextureConverter::TryGetTextureLayout)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x27c7090;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRPassthroughColorLut__ColorLutTextureConverter*>::get(),
                            "TryGetTextureLayout",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get()}
                        )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::__OVRPassthroughColorLut__ColorLutTextureConverter::TextureToColorByteMap(::UnityEngine::Texture2D*  lut, int32_t  channelCount, ::ArrayW<uint8_t,::Array<uint8_t>*>  target, bool  flipY)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRPassthroughColorLut__ColorLutTextureConverter*>::get(),
                            "TextureToColorByteMap",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture2D*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, lut, channelCount, target, flipY);
}
inline void GlobalNamespace::__OVRPassthroughColorLut__ColorLutTextureConverter::MapColorValues(::GlobalNamespace::__OVRPassthroughColorLut__ColorLutTextureConverter__TextureSettings  settings, ::Unity::Collections::NativeArray_1<uint8_t>  source, ::ArrayW<uint8_t,::Array<uint8_t>*>  target)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRPassthroughColorLut__ColorLutTextureConverter*>::get(),
                            "MapColorValues",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRPassthroughColorLut__ColorLutTextureConverter__TextureSettings>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, settings, source, target);
}
inline ::GlobalNamespace::__OVRPassthroughColorLut__ColorLutTextureConverter__TextureSettings GlobalNamespace::__OVRPassthroughColorLut__ColorLutTextureConverter::GetTextureSettings(::UnityEngine::Texture2D*  lut, int32_t  channelCount, bool  flipY)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRPassthroughColorLut__ColorLutTextureConverter*>::get(),
                            "GetTextureSettings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture2D*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__OVRPassthroughColorLut__ColorLutTextureConverter__TextureSettings, false>(nullptr, ___internal_method, lut, channelCount, flipY);
}
inline bool GlobalNamespace::__OVRPassthroughColorLut__ColorLutTextureConverter::TryGetTextureLayout(int32_t  width, int32_t  height, ByRef<int32_t>  resolution, ByRef<int32_t>  slicesPerRow, ByRef<::StringW>  errorMessage)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRPassthroughColorLut__ColorLutTextureConverter*>::get(),
                            "TryGetTextureLayout",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, width, height, resolution, slicesPerRow, errorMessage);
}
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughColorLut.get_Resolution
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::GlobalNamespace::OVRPassthroughColorLut::*)()>(&::GlobalNamespace::OVRPassthroughColorLut::get_Resolution)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27c5b6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughColorLut*>::get(),
                            "get_Resolution",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughColorLut.set_Resolution
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRPassthroughColorLut::*)(uint32_t)>(&::GlobalNamespace::OVRPassthroughColorLut::set_Resolution)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27c5b74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughColorLut*>::get(),
                            "set_Resolution",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughColorLut.get_Channels
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__OVRPassthroughColorLut__ColorChannels (::GlobalNamespace::OVRPassthroughColorLut::*)()>(&::GlobalNamespace::OVRPassthroughColorLut::get_Channels)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27c5b7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughColorLut*>::get(),
                            "get_Channels",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughColorLut.set_Channels
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRPassthroughColorLut::*)(::GlobalNamespace::__OVRPassthroughColorLut__ColorChannels)>(&::GlobalNamespace::OVRPassthroughColorLut::set_Channels)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27c5b84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughColorLut*>::get(),
                            "set_Channels",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRPassthroughColorLut__ColorChannels>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughColorLut.get_IsInitialized
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRPassthroughColorLut::*)()>(&::GlobalNamespace::OVRPassthroughColorLut::get_IsInitialized)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27c5b8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughColorLut*>::get(),
                            "get_IsInitialized",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughColorLut.set_IsInitialized
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRPassthroughColorLut::*)(bool)>(&::GlobalNamespace::OVRPassthroughColorLut::set_IsInitialized)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x27c5b94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughColorLut*>::get(),
                            "set_IsInitialized",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughColorLut._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRPassthroughColorLut::*)(::UnityEngine::Texture2D*, bool)>(&::GlobalNamespace::OVRPassthroughColorLut::_ctor)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x27c5ba0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughColorLut*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture2D*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughColorLut._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRPassthroughColorLut::*)(::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*>, ::GlobalNamespace::__OVRPassthroughColorLut__ColorChannels)>(&::GlobalNamespace::OVRPassthroughColorLut::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x27c6160;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughColorLut*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRPassthroughColorLut__ColorChannels>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughColorLut._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRPassthroughColorLut::*)(::ArrayW<::UnityEngine::Color32,::Array<::UnityEngine::Color32>*>, ::GlobalNamespace::__OVRPassthroughColorLut__ColorChannels)>(&::GlobalNamespace::OVRPassthroughColorLut::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x27c6248;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughColorLut*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Color32,::Array<::UnityEngine::Color32>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRPassthroughColorLut__ColorChannels>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughColorLut._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRPassthroughColorLut::*)(::ArrayW<uint8_t,::Array<uint8_t>*>, ::GlobalNamespace::__OVRPassthroughColorLut__ColorChannels)>(&::GlobalNamespace::OVRPassthroughColorLut::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x27c6330;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughColorLut*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRPassthroughColorLut__ColorChannels>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughColorLut.UpdateFrom
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRPassthroughColorLut::*)(::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*>)>(&::GlobalNamespace::OVRPassthroughColorLut::UpdateFrom)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x27c64fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughColorLut*>::get(),
                            "UpdateFrom",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughColorLut.UpdateFrom
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRPassthroughColorLut::*)(::ArrayW<::UnityEngine::Color32,::Array<::UnityEngine::Color32>*>)>(&::GlobalNamespace::OVRPassthroughColorLut::UpdateFrom)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x27c67fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughColorLut*>::get(),
                            "UpdateFrom",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Color32,::Array<::UnityEngine::Color32>*>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughColorLut.UpdateFrom
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRPassthroughColorLut::*)(::ArrayW<uint8_t,::Array<uint8_t>*>)>(&::GlobalNamespace::OVRPassthroughColorLut::UpdateFrom)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x27c6a38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughColorLut*>::get(),
                            "UpdateFrom",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughColorLut.UpdateFrom
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRPassthroughColorLut::*)(::UnityEngine::Texture2D*, bool)>(&::GlobalNamespace::OVRPassthroughColorLut::UpdateFrom)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x27c6b04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughColorLut*>::get(),
                            "UpdateFrom",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture2D*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughColorLut.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRPassthroughColorLut::*)()>(&::GlobalNamespace::OVRPassthroughColorLut::Dispose)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x27c6d8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughColorLut*>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughColorLut.IsTextureSupported
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::Texture2D*, ByRef<::StringW>)>(&::GlobalNamespace::OVRPassthroughColorLut::IsTextureSupported)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x27c6ee4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughColorLut*>::get(),
                            "IsTextureSupported",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture2D*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughColorLut._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRPassthroughColorLut::*)(int32_t, ::GlobalNamespace::__OVRPassthroughColorLut__ColorChannels)>(&::GlobalNamespace::OVRPassthroughColorLut::_ctor)> {
  constexpr static std::size_t size = 0x264;
  constexpr static std::size_t addrs = 0x27c5db4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughColorLut*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRPassthroughColorLut__ColorChannels>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughColorLut.IsValidUpdateResolution
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRPassthroughColorLut::*)(int32_t, int32_t)>(&::GlobalNamespace::OVRPassthroughColorLut::IsValidUpdateResolution)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x27c6bbc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughColorLut*>::get(),
                            "IsValidUpdateResolution",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughColorLut.GetChannelsForTextureFormat
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__OVRPassthroughColorLut__ColorChannels (*)(::UnityEngine::TextureFormat)>(&::GlobalNamespace::OVRPassthroughColorLut::GetChannelsForTextureFormat)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x27c5d14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughColorLut*>::get(),
                            "GetChannelsForTextureFormat",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextureFormat>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughColorLut.GetTextureSizeFromByteArray
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::ArrayW<uint8_t,::Array<uint8_t>*>, ::GlobalNamespace::__OVRPassthroughColorLut__ColorChannels)>(&::GlobalNamespace::OVRPassthroughColorLut::GetTextureSizeFromByteArray)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x27c638c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughColorLut*>::get(),
                            "GetTextureSizeFromByteArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRPassthroughColorLut__ColorChannels>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughColorLut.GetTextureSize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::UnityEngine::Texture2D*)>(&::GlobalNamespace::OVRPassthroughColorLut::GetTextureSize)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x27c5c34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughColorLut*>::get(),
                            "GetTextureSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture2D*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughColorLut.ChannelsToCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::GlobalNamespace::__OVRPassthroughColorLut__ColorChannels)>(&::GlobalNamespace::OVRPassthroughColorLut::ChannelsToCount)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x27c7444;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughColorLut*>::get(),
                            "ChannelsToCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRPassthroughColorLut__ColorChannels>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughColorLut.IsResolutionAccepted
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(uint32_t, int32_t, ByRef<::StringW>)>(&::GlobalNamespace::OVRPassthroughColorLut::IsResolutionAccepted)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x27c7380;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughColorLut*>::get(),
                            "IsResolutionAccepted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughColorLut.IsPowerOfTwo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(uint32_t)>(&::GlobalNamespace::OVRPassthroughColorLut::IsPowerOfTwo)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x27c7454;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughColorLut*>::get(),
                            "IsPowerOfTwo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughColorLut.Create
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRPassthroughColorLut::*)(::GlobalNamespace::__OVRPlugin__PassthroughColorLutData)>(&::GlobalNamespace::OVRPassthroughColorLut::Create)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x27c6070;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughColorLut*>::get(),
                            "Create",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRPlugin__PassthroughColorLutData>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughColorLut.GetResolutionFromSize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (*)(int32_t)>(&::GlobalNamespace::OVRPassthroughColorLut::GetResolutionFromSize)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x27c72cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughColorLut*>::get(),
                            "GetResolutionFromSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughColorLut.CreateLutData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__OVRPlugin__PassthroughColorLutData (::GlobalNamespace::OVRPassthroughColorLut::*)(ByRef<::ArrayW<uint8_t,::Array<uint8_t>*>>)>(&::GlobalNamespace::OVRPassthroughColorLut::CreateLutData)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x27c7474;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughColorLut*>::get(),
                            "CreateLutData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<uint8_t,::Array<uint8_t>*>>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughColorLut.CreateLutDataFromTexture
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__OVRPlugin__PassthroughColorLutData (::GlobalNamespace::OVRPassthroughColorLut::*)(::UnityEngine::Texture2D*, bool)>(&::GlobalNamespace::OVRPassthroughColorLut::CreateLutDataFromTexture)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x27c6018;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughColorLut*>::get(),
                            "CreateLutDataFromTexture",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture2D*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughColorLut.CreateLutDataFromArray
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__OVRPlugin__PassthroughColorLutData (::GlobalNamespace::OVRPassthroughColorLut::*)(::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*>)>(&::GlobalNamespace::OVRPassthroughColorLut::CreateLutDataFromArray)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x27c61fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughColorLut*>::get(),
                            "CreateLutDataFromArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughColorLut.CreateLutDataFromArray
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__OVRPlugin__PassthroughColorLutData (::GlobalNamespace::OVRPassthroughColorLut::*)(::ArrayW<::UnityEngine::Color32,::Array<::UnityEngine::Color32>*>)>(&::GlobalNamespace::OVRPassthroughColorLut::CreateLutDataFromArray)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x27c62e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughColorLut*>::get(),
                            "CreateLutDataFromArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Color32,::Array<::UnityEngine::Color32>*>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughColorLut.CreateLutDataFromArray
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__OVRPlugin__PassthroughColorLutData (::GlobalNamespace::OVRPassthroughColorLut::*)(::ArrayW<uint8_t,::Array<uint8_t>*>)>(&::GlobalNamespace::OVRPassthroughColorLut::CreateLutDataFromArray)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x27c64a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughColorLut*>::get(),
                            "CreateLutDataFromArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughColorLut.WriteColorsAsBytes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRPassthroughColorLut::*)(::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*>, ::ArrayW<uint8_t,::Array<uint8_t>*>)>(&::GlobalNamespace::OVRPassthroughColorLut::WriteColorsAsBytes)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x27c65bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughColorLut*>::get(),
                            "WriteColorsAsBytes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughColorLut.WriteColorsAsBytes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRPassthroughColorLut::*)(::ArrayW<::UnityEngine::Color32,::Array<::UnityEngine::Color32>*>, ::ArrayW<uint8_t,::Array<uint8_t>*>)>(&::GlobalNamespace::OVRPassthroughColorLut::WriteColorsAsBytes)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x27c68bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughColorLut*>::get(),
                            "WriteColorsAsBytes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Color32,::Array<::UnityEngine::Color32>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughColorLut.Finalize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRPassthroughColorLut::*)()>(&::GlobalNamespace::OVRPassthroughColorLut::Finalize)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x27c7508;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughColorLut*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughColorLut*>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughColorLut.Destroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRPassthroughColorLut::*)()>(&::GlobalNamespace::OVRPassthroughColorLut::Destroy)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x27c6dd0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughColorLut*>::get(),
                            "Destroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::OVRPassthroughColorLut::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr void GlobalNamespace::OVRPassthroughColorLut::__set__Resolution_k__BackingField(uint32_t  value)  {
::cordl_internals::setInstanceField<uint32_t, 0x10>(this, std::forward<uint32_t>(value));
}
constexpr uint32_t& GlobalNamespace::OVRPassthroughColorLut::__get__Resolution_k__BackingField()  {
return ::cordl_internals::getInstanceField<uint32_t, 0x10>(this);
}
constexpr uint32_t const& GlobalNamespace::OVRPassthroughColorLut::__get__Resolution_k__BackingField() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x10>(this);
}
constexpr void GlobalNamespace::OVRPassthroughColorLut::__set__Channels_k__BackingField(::GlobalNamespace::__OVRPassthroughColorLut__ColorChannels  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__OVRPassthroughColorLut__ColorChannels, 0x14>(this, std::forward<::GlobalNamespace::__OVRPassthroughColorLut__ColorChannels>(value));
}
constexpr ::GlobalNamespace::__OVRPassthroughColorLut__ColorChannels& GlobalNamespace::OVRPassthroughColorLut::__get__Channels_k__BackingField()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__OVRPassthroughColorLut__ColorChannels, 0x14>(this);
}
constexpr ::GlobalNamespace::__OVRPassthroughColorLut__ColorChannels const& GlobalNamespace::OVRPassthroughColorLut::__get__Channels_k__BackingField() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__OVRPassthroughColorLut__ColorChannels, 0x14>(this);
}
constexpr void GlobalNamespace::OVRPassthroughColorLut::__set__IsInitialized_k__BackingField(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x18>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::OVRPassthroughColorLut::__get__IsInitialized_k__BackingField()  {
return ::cordl_internals::getInstanceField<bool, 0x18>(this);
}
constexpr bool const& GlobalNamespace::OVRPassthroughColorLut::__get__IsInitialized_k__BackingField() const {
return ::cordl_internals::getInstanceField<bool, 0x18>(this);
}
constexpr void GlobalNamespace::OVRPassthroughColorLut::__set__colorLutHandle(uint64_t  value)  {
::cordl_internals::setInstanceField<uint64_t, 0x20>(this, std::forward<uint64_t>(value));
}
constexpr uint64_t& GlobalNamespace::OVRPassthroughColorLut::__get__colorLutHandle()  {
return ::cordl_internals::getInstanceField<uint64_t, 0x20>(this);
}
constexpr uint64_t const& GlobalNamespace::OVRPassthroughColorLut::__get__colorLutHandle() const {
return ::cordl_internals::getInstanceField<uint64_t, 0x20>(this);
}
constexpr void GlobalNamespace::OVRPassthroughColorLut::__set__allocHandle(::System::Runtime::InteropServices::GCHandle  value)  {
::cordl_internals::setInstanceField<::System::Runtime::InteropServices::GCHandle, 0x28>(this, std::forward<::System::Runtime::InteropServices::GCHandle>(value));
}
constexpr ::System::Runtime::InteropServices::GCHandle& GlobalNamespace::OVRPassthroughColorLut::__get__allocHandle()  {
return ::cordl_internals::getInstanceField<::System::Runtime::InteropServices::GCHandle, 0x28>(this);
}
constexpr ::System::Runtime::InteropServices::GCHandle const& GlobalNamespace::OVRPassthroughColorLut::__get__allocHandle() const {
return ::cordl_internals::getInstanceField<::System::Runtime::InteropServices::GCHandle, 0x28>(this);
}
constexpr void GlobalNamespace::OVRPassthroughColorLut::__set__lutData(::GlobalNamespace::__OVRPlugin__PassthroughColorLutData  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__OVRPlugin__PassthroughColorLutData, 0x30>(this, std::forward<::GlobalNamespace::__OVRPlugin__PassthroughColorLutData>(value));
}
constexpr ::GlobalNamespace::__OVRPlugin__PassthroughColorLutData& GlobalNamespace::OVRPassthroughColorLut::__get__lutData()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__OVRPlugin__PassthroughColorLutData, 0x30>(this);
}
constexpr ::GlobalNamespace::__OVRPlugin__PassthroughColorLutData const& GlobalNamespace::OVRPassthroughColorLut::__get__lutData() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__OVRPlugin__PassthroughColorLutData, 0x30>(this);
}
constexpr void GlobalNamespace::OVRPassthroughColorLut::__set__channelCount(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x40>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::OVRPassthroughColorLut::__get__channelCount()  {
return ::cordl_internals::getInstanceField<int32_t, 0x40>(this);
}
constexpr int32_t const& GlobalNamespace::OVRPassthroughColorLut::__get__channelCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x40>(this);
}
constexpr void GlobalNamespace::OVRPassthroughColorLut::__set__colorBytes(::ArrayW<uint8_t,::Array<uint8_t>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t,::Array<uint8_t>*>, 0x48>(this, std::forward<::ArrayW<uint8_t,::Array<uint8_t>*>>(value));
}
constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& GlobalNamespace::OVRPassthroughColorLut::__get__colorBytes()  {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t,::Array<uint8_t>*>, 0x48>(this);
}
constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& GlobalNamespace::OVRPassthroughColorLut::__get__colorBytes() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t,::Array<uint8_t>*>, 0x48>(this);
}
constexpr void GlobalNamespace::OVRPassthroughColorLut::__set__locker(::System::Object*  value)  {
::cordl_internals::setInstanceField<::System::Object*, 0x50>(this, std::forward<::System::Object*>(value));
}
constexpr ::System::Object* GlobalNamespace::OVRPassthroughColorLut::__get__locker()  {
return ::cordl_internals::getInstanceField<::System::Object*, 0x50>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> GlobalNamespace::OVRPassthroughColorLut::__get__locker() const {
return ::cordl_internals::getInstanceField<::System::Object*, 0x50>(this);
}
inline uint32_t GlobalNamespace::OVRPassthroughColorLut::get_Resolution()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughColorLut*>::get(),
                            "get_Resolution",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRPassthroughColorLut::set_Resolution(uint32_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughColorLut*>::get(),
                            "set_Resolution",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::GlobalNamespace::__OVRPassthroughColorLut__ColorChannels GlobalNamespace::OVRPassthroughColorLut::get_Channels()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughColorLut*>::get(),
                            "get_Channels",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__OVRPassthroughColorLut__ColorChannels, false>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRPassthroughColorLut::set_Channels(::GlobalNamespace::__OVRPassthroughColorLut__ColorChannels  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughColorLut*>::get(),
                            "set_Channels",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRPassthroughColorLut__ColorChannels>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline bool GlobalNamespace::OVRPassthroughColorLut::get_IsInitialized()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughColorLut*>::get(),
                            "get_IsInitialized",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRPassthroughColorLut::set_IsInitialized(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughColorLut*>::get(),
                            "set_IsInitialized",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
/// @param flipY: bool (default: true)
inline ::GlobalNamespace::OVRPassthroughColorLut* GlobalNamespace::OVRPassthroughColorLut::New_ctor(::UnityEngine::Texture2D*  initialLutTexture, bool  flipY)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::OVRPassthroughColorLut*>(initialLutTexture, flipY));
}
/// @param flipY: bool (default: true)
inline void GlobalNamespace::OVRPassthroughColorLut::_ctor(::UnityEngine::Texture2D*  initialLutTexture, bool  flipY)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughColorLut*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture2D*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, initialLutTexture, flipY);
}
inline ::GlobalNamespace::OVRPassthroughColorLut* GlobalNamespace::OVRPassthroughColorLut::New_ctor(::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*>  initialColorLut, ::GlobalNamespace::__OVRPassthroughColorLut__ColorChannels  channels)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::OVRPassthroughColorLut*>(initialColorLut, channels));
}
inline void GlobalNamespace::OVRPassthroughColorLut::_ctor(::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*>  initialColorLut, ::GlobalNamespace::__OVRPassthroughColorLut__ColorChannels  channels)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughColorLut*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRPassthroughColorLut__ColorChannels>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, initialColorLut, channels);
}
inline ::GlobalNamespace::OVRPassthroughColorLut* GlobalNamespace::OVRPassthroughColorLut::New_ctor(::ArrayW<::UnityEngine::Color32,::Array<::UnityEngine::Color32>*>  initialColorLut, ::GlobalNamespace::__OVRPassthroughColorLut__ColorChannels  channels)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::OVRPassthroughColorLut*>(initialColorLut, channels));
}
inline void GlobalNamespace::OVRPassthroughColorLut::_ctor(::ArrayW<::UnityEngine::Color32,::Array<::UnityEngine::Color32>*>  initialColorLut, ::GlobalNamespace::__OVRPassthroughColorLut__ColorChannels  channels)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughColorLut*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Color32,::Array<::UnityEngine::Color32>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRPassthroughColorLut__ColorChannels>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, initialColorLut, channels);
}
inline ::GlobalNamespace::OVRPassthroughColorLut* GlobalNamespace::OVRPassthroughColorLut::New_ctor(::ArrayW<uint8_t,::Array<uint8_t>*>  initialColorLut, ::GlobalNamespace::__OVRPassthroughColorLut__ColorChannels  channels)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::OVRPassthroughColorLut*>(initialColorLut, channels));
}
inline void GlobalNamespace::OVRPassthroughColorLut::_ctor(::ArrayW<uint8_t,::Array<uint8_t>*>  initialColorLut, ::GlobalNamespace::__OVRPassthroughColorLut__ColorChannels  channels)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughColorLut*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRPassthroughColorLut__ColorChannels>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, initialColorLut, channels);
}
inline void GlobalNamespace::OVRPassthroughColorLut::UpdateFrom(::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*>  colors)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughColorLut*>::get(),
                            "UpdateFrom",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, colors);
}
inline void GlobalNamespace::OVRPassthroughColorLut::UpdateFrom(::ArrayW<::UnityEngine::Color32,::Array<::UnityEngine::Color32>*>  colors)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughColorLut*>::get(),
                            "UpdateFrom",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Color32,::Array<::UnityEngine::Color32>*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, colors);
}
inline void GlobalNamespace::OVRPassthroughColorLut::UpdateFrom(::ArrayW<uint8_t,::Array<uint8_t>*>  colors)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughColorLut*>::get(),
                            "UpdateFrom",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, colors);
}
/// @param flipY: bool (default: true)
inline void GlobalNamespace::OVRPassthroughColorLut::UpdateFrom(::UnityEngine::Texture2D*  lutTexture, bool  flipY)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughColorLut*>::get(),
                            "UpdateFrom",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture2D*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, lutTexture, flipY);
}
inline void GlobalNamespace::OVRPassthroughColorLut::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughColorLut*>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline bool GlobalNamespace::OVRPassthroughColorLut::IsTextureSupported(::UnityEngine::Texture2D*  texture, ByRef<::StringW>  errorMessage)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughColorLut*>::get(),
                            "IsTextureSupported",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture2D*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, texture, errorMessage);
}
inline ::GlobalNamespace::OVRPassthroughColorLut* GlobalNamespace::OVRPassthroughColorLut::New_ctor(int32_t  size, ::GlobalNamespace::__OVRPassthroughColorLut__ColorChannels  channels)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::OVRPassthroughColorLut*>(size, channels));
}
inline void GlobalNamespace::OVRPassthroughColorLut::_ctor(int32_t  size, ::GlobalNamespace::__OVRPassthroughColorLut__ColorChannels  channels)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughColorLut*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRPassthroughColorLut__ColorChannels>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, size, channels);
}
inline bool GlobalNamespace::OVRPassthroughColorLut::IsValidUpdateResolution(int32_t  lutSize, int32_t  elementByteSize)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughColorLut*>::get(),
                            "IsValidUpdateResolution",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, lutSize, elementByteSize);
}
template<typename T>
inline bool GlobalNamespace::OVRPassthroughColorLut::IsValidLutUpdate(::ArrayW<T,::Array<T>*>  colorArray, int32_t  elementByteSize)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughColorLut*>::get(),
                        "IsValidLutUpdate",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<T,::Array<T>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, colorArray, elementByteSize);
}
inline ::GlobalNamespace::__OVRPassthroughColorLut__ColorChannels GlobalNamespace::OVRPassthroughColorLut::GetChannelsForTextureFormat(::UnityEngine::TextureFormat  format)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughColorLut*>::get(),
                            "GetChannelsForTextureFormat",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextureFormat>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__OVRPassthroughColorLut__ColorChannels, false>(nullptr, ___internal_method, format);
}
inline int32_t GlobalNamespace::OVRPassthroughColorLut::GetTextureSizeFromByteArray(::ArrayW<uint8_t,::Array<uint8_t>*>  initialColorLut, ::GlobalNamespace::__OVRPassthroughColorLut__ColorChannels  channels)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughColorLut*>::get(),
                            "GetTextureSizeFromByteArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRPassthroughColorLut__ColorChannels>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, initialColorLut, channels);
}
inline int32_t GlobalNamespace::OVRPassthroughColorLut::GetTextureSize(::UnityEngine::Texture2D*  texture)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughColorLut*>::get(),
                            "GetTextureSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture2D*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, texture);
}
template<typename T>
inline int32_t GlobalNamespace::OVRPassthroughColorLut::GetArraySize(::ArrayW<T,::Array<T>*>  array)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughColorLut*>::get(),
                        "GetArraySize",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<T,::Array<T>*>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, array);
}
inline int32_t GlobalNamespace::OVRPassthroughColorLut::ChannelsToCount(::GlobalNamespace::__OVRPassthroughColorLut__ColorChannels  channels)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughColorLut*>::get(),
                            "ChannelsToCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRPassthroughColorLut__ColorChannels>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, channels);
}
inline bool GlobalNamespace::OVRPassthroughColorLut::IsResolutionAccepted(uint32_t  resolution, int32_t  size, ByRef<::StringW>  errorMessage)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughColorLut*>::get(),
                            "IsResolutionAccepted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, resolution, size, errorMessage);
}
inline bool GlobalNamespace::OVRPassthroughColorLut::IsPowerOfTwo(uint32_t  x)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughColorLut*>::get(),
                            "IsPowerOfTwo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, x);
}
inline void GlobalNamespace::OVRPassthroughColorLut::Create(::GlobalNamespace::__OVRPlugin__PassthroughColorLutData  lutData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughColorLut*>::get(),
                            "Create",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRPlugin__PassthroughColorLutData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, lutData);
}
inline uint32_t GlobalNamespace::OVRPassthroughColorLut::GetResolutionFromSize(int32_t  size)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughColorLut*>::get(),
                            "GetResolutionFromSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(nullptr, ___internal_method, size);
}
inline ::GlobalNamespace::__OVRPlugin__PassthroughColorLutData GlobalNamespace::OVRPassthroughColorLut::CreateLutData(ByRef<::ArrayW<uint8_t,::Array<uint8_t>*>>  colorBytes)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughColorLut*>::get(),
                            "CreateLutData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<uint8_t,::Array<uint8_t>*>>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__OVRPlugin__PassthroughColorLutData, false>(*this, ___internal_method, colorBytes);
}
inline ::GlobalNamespace::__OVRPlugin__PassthroughColorLutData GlobalNamespace::OVRPassthroughColorLut::CreateLutDataFromTexture(::UnityEngine::Texture2D*  lut, bool  flipY)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughColorLut*>::get(),
                            "CreateLutDataFromTexture",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture2D*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__OVRPlugin__PassthroughColorLutData, false>(*this, ___internal_method, lut, flipY);
}
inline ::GlobalNamespace::__OVRPlugin__PassthroughColorLutData GlobalNamespace::OVRPassthroughColorLut::CreateLutDataFromArray(::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*>  colors)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughColorLut*>::get(),
                            "CreateLutDataFromArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__OVRPlugin__PassthroughColorLutData, false>(*this, ___internal_method, colors);
}
inline ::GlobalNamespace::__OVRPlugin__PassthroughColorLutData GlobalNamespace::OVRPassthroughColorLut::CreateLutDataFromArray(::ArrayW<::UnityEngine::Color32,::Array<::UnityEngine::Color32>*>  colors)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughColorLut*>::get(),
                            "CreateLutDataFromArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Color32,::Array<::UnityEngine::Color32>*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__OVRPlugin__PassthroughColorLutData, false>(*this, ___internal_method, colors);
}
inline ::GlobalNamespace::__OVRPlugin__PassthroughColorLutData GlobalNamespace::OVRPassthroughColorLut::CreateLutDataFromArray(::ArrayW<uint8_t,::Array<uint8_t>*>  colors)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughColorLut*>::get(),
                            "CreateLutDataFromArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__OVRPlugin__PassthroughColorLutData, false>(*this, ___internal_method, colors);
}
inline void GlobalNamespace::OVRPassthroughColorLut::WriteColorsAsBytes(::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*>  colors, ::ArrayW<uint8_t,::Array<uint8_t>*>  target)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughColorLut*>::get(),
                            "WriteColorsAsBytes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, colors, target);
}
inline void GlobalNamespace::OVRPassthroughColorLut::WriteColorsAsBytes(::ArrayW<::UnityEngine::Color32,::Array<::UnityEngine::Color32>*>  colors, ::ArrayW<uint8_t,::Array<uint8_t>*>  target)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughColorLut*>::get(),
                            "WriteColorsAsBytes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Color32,::Array<::UnityEngine::Color32>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, colors, target);
}
inline void GlobalNamespace::OVRPassthroughColorLut::Finalize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughColorLut*>::get(),
                            "Finalize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRPassthroughColorLut::Destroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughColorLut*>::get(),
                            "Destroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
