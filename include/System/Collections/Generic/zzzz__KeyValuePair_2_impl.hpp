#pragma once
#include "System/Collections/Generic/zzzz__KeyValuePair_2_def.hpp"
#include "BeatSaber/AvatarCore/zzzz__AvatarSystemIdentifier_def.hpp"
#include "GlobalNamespace/zzzz__LevelKey_def.hpp"
#include "GlobalNamespace/zzzz__OVRSpace_def.hpp"
#include "GlobalNamespace/zzzz__SongPackMask_def.hpp"
#include "GlobalNamespace/zzzz__MirrorRendererSO_def.hpp"
#include "MS/Internal/Xml/Cache/zzzz__XPathNodeRef_def.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__ResolverContractKey_def.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__DefaultSerializationBinder_def.hpp"
#include "Newtonsoft/Json/Utilities/zzzz__ConvertUtils_def.hpp"
#include "GlobalNamespace/zzzz__OVRAnchor_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "GlobalNamespace/zzzz__OVRTask_1_def.hpp"
#include "System/zzzz__Int32Enum_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "GlobalNamespace/zzzz__OVRSpatialAnchor_def.hpp"
#include "System/Text/RegularExpressions/zzzz__Regex_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "System/zzzz__ValueTuple_3_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__InternedString_def.hpp"
#include "UnityEngine/InputSystem/Layouts/zzzz__InputControlLayout_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__Edge_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__EdgeLookup_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__IntVec3_def.hpp"
#include "UnityEngine/zzzz__PropertyName_def.hpp"
#include "UnityEngine/SceneManagement/zzzz__Scene_def.hpp"
#include "UnityEngine/TerrainUtils/zzzz__TerrainTileCoord_def.hpp"
#include "UnityEngine/UIElements/StyleSheets/zzzz__StyleSheetCache_def.hpp"
#include "UnityEngine/UIElements/zzzz__StylePropertyAnimationSystem_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include "Zenject/zzzz__BindingId_def.hpp"
#include "Zenject/zzzz__SignalSubscriptionId_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelDataLoader_def.hpp"
#include "GlobalNamespace/zzzz__OVRPassthroughLayer_def.hpp"
#include "GlobalNamespace/zzzz__SongPackMasksModel_def.hpp"
#include "System/Resources/zzzz__ResourceLocator_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Color32_def.hpp"
#include "UnityEngine/InputSystem/UI/zzzz__InputSystemUIInputModule_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__JsonParser_def.hpp"
#include "UnityEngine/Playables/zzzz__Playable_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_1_def.hpp"
#include "UnityEngine/UIElements/StyleSheets/zzzz__StylePropertyValue_def.hpp"
#include "UnityEngine/UIElements/zzzz__TextureId_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleComplexSelector_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "IgnoranceCore/zzzz__IgnoranceClientStats_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__SimpleTuple_3_def.hpp"
#include "UnityEngine/ResourceManagement/Diagnostics/zzzz__DiagnosticEvent_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextResourceManager_def.hpp"
#include "UnityEngine/UIElements/zzzz__ComputedStyle_def.hpp"
#include "BeatSaber/AvatarCore/zzzz__OptionalAvatarData_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__SimpleTuple_2_def.hpp"
#include "UnityEngine/TextCore/LowLevel/zzzz__GlyphPairAdjustmentRecord_def.hpp"
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr void System::Collections::Generic::KeyValuePair_2<::UnityEngine::PropertyName,TValue>::__set_key(::UnityEngine::PropertyName  value)  {
::cordl_internals::setInstanceField<::UnityEngine::PropertyName, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::PropertyName>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::UnityEngine::PropertyName& System::Collections::Generic::KeyValuePair_2<::UnityEngine::PropertyName,TValue>::__get_key()  {
return ::cordl_internals::getInstanceField<::UnityEngine::PropertyName, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::UnityEngine::PropertyName const& System::Collections::Generic::KeyValuePair_2<::UnityEngine::PropertyName,TValue>::__get_key() const {
return ::cordl_internals::getInstanceField<::UnityEngine::PropertyName, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr void System::Collections::Generic::KeyValuePair_2<::UnityEngine::PropertyName,TValue>::__set_value(TValue  value)  {
::cordl_internals::setInstanceField<TValue, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<TValue>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr TValue& System::Collections::Generic::KeyValuePair_2<::UnityEngine::PropertyName,TValue>::__get_value()  {
return ::cordl_internals::getInstanceField<TValue, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr TValue const& System::Collections::Generic::KeyValuePair_2<::UnityEngine::PropertyName,TValue>::__get_value() const {
return ::cordl_internals::getInstanceField<TValue, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline void System::Collections::Generic::KeyValuePair_2<::UnityEngine::PropertyName,TValue>::_ctor(::UnityEngine::PropertyName  key, TValue  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::PropertyName,TValue>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::PropertyName>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline ::UnityEngine::PropertyName System::Collections::Generic::KeyValuePair_2<::UnityEngine::PropertyName,TValue>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::PropertyName,TValue>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::PropertyName, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline TValue System::Collections::Generic::KeyValuePair_2<::UnityEngine::PropertyName,TValue>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::PropertyName,TValue>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TValue, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline ::StringW System::Collections::Generic::KeyValuePair_2<::UnityEngine::PropertyName,TValue>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::PropertyName,TValue>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline void System::Collections::Generic::KeyValuePair_2<::UnityEngine::PropertyName,TValue>::Deconstruct(ByRef<::UnityEngine::PropertyName>  key, ByRef<TValue>  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::PropertyName,TValue>>::get(),
                            "Deconstruct",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::PropertyName>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<TValue>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
// Ctor Parameters [CppParam { name: "key", ty: "::UnityEngine::PropertyName", modifiers: "", def_value: Some("{}") }, CppParam { name: "value", ty: "TValue", modifiers: "", def_value: Some("csnull") }]
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::System::Collections::Generic::KeyValuePair_2<::UnityEngine::PropertyName,TValue>::KeyValuePair_2(::UnityEngine::PropertyName  key, TValue  value) noexcept : ::bs_hook::ValueTypeWrapper<0x10>() {this->key = key;
this->value = value;
}
//  Writing Method size for method: ::System::Collections::Generic::KeyValuePair_2<int32_t,::UnityEngine::Vector2>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Generic::KeyValuePair_2<int32_t,::UnityEngine::Vector2>::*)(int32_t, ::UnityEngine::Vector2)>(&::System::Collections::Generic::KeyValuePair_2<int32_t,::UnityEngine::Vector2>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<int32_t,::UnityEngine::Vector2>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::KeyValuePair_2<int32_t,::UnityEngine::Vector2>.get_Key
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Collections::Generic::KeyValuePair_2<int32_t,::UnityEngine::Vector2>::*)()>(&::System::Collections::Generic::KeyValuePair_2<int32_t,::UnityEngine::Vector2>::get_Key)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<int32_t,::UnityEngine::Vector2>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::KeyValuePair_2<int32_t,::UnityEngine::Vector2>.get_Value
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (::System::Collections::Generic::KeyValuePair_2<int32_t,::UnityEngine::Vector2>::*)()>(&::System::Collections::Generic::KeyValuePair_2<int32_t,::UnityEngine::Vector2>::get_Value)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<int32_t,::UnityEngine::Vector2>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::KeyValuePair_2<int32_t,::UnityEngine::Vector2>.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Collections::Generic::KeyValuePair_2<int32_t,::UnityEngine::Vector2>::*)()>(&::System::Collections::Generic::KeyValuePair_2<int32_t,::UnityEngine::Vector2>::ToString)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<int32_t,::UnityEngine::Vector2>>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<int32_t,::UnityEngine::Vector2>>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::KeyValuePair_2<int32_t,::UnityEngine::Vector2>.Deconstruct
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Generic::KeyValuePair_2<int32_t,::UnityEngine::Vector2>::*)(ByRef<int32_t>, ByRef<::UnityEngine::Vector2>)>(&::System::Collections::Generic::KeyValuePair_2<int32_t,::UnityEngine::Vector2>::Deconstruct)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<int32_t,::UnityEngine::Vector2>>::get(),
                            "Deconstruct",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector2>>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Collections::Generic::KeyValuePair_2<int32_t,::UnityEngine::Vector2>::__set_key(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& System::Collections::Generic::KeyValuePair_2<int32_t,::UnityEngine::Vector2>::__get_key()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& System::Collections::Generic::KeyValuePair_2<int32_t,::UnityEngine::Vector2>::__get_key() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::Collections::Generic::KeyValuePair_2<int32_t,::UnityEngine::Vector2>::__set_value(::UnityEngine::Vector2  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector2, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::Vector2>(value));
}
constexpr ::UnityEngine::Vector2& System::Collections::Generic::KeyValuePair_2<int32_t,::UnityEngine::Vector2>::__get_value()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector2, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::UnityEngine::Vector2 const& System::Collections::Generic::KeyValuePair_2<int32_t,::UnityEngine::Vector2>::__get_value() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector2, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline void System::Collections::Generic::KeyValuePair_2<int32_t,::UnityEngine::Vector2>::_ctor(int32_t  key, ::UnityEngine::Vector2  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<int32_t,::UnityEngine::Vector2>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
inline int32_t System::Collections::Generic::KeyValuePair_2<int32_t,::UnityEngine::Vector2>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<int32_t,::UnityEngine::Vector2>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline ::UnityEngine::Vector2 System::Collections::Generic::KeyValuePair_2<int32_t,::UnityEngine::Vector2>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<int32_t,::UnityEngine::Vector2>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(*this, ___internal_method);
}
inline ::StringW System::Collections::Generic::KeyValuePair_2<int32_t,::UnityEngine::Vector2>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<int32_t,::UnityEngine::Vector2>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline void System::Collections::Generic::KeyValuePair_2<int32_t,::UnityEngine::Vector2>::Deconstruct(ByRef<int32_t>  key, ByRef<::UnityEngine::Vector2>  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<int32_t,::UnityEngine::Vector2>>::get(),
                            "Deconstruct",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector2>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
// Ctor Parameters [CppParam { name: "key", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "value", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Collections::Generic::KeyValuePair_2<int32_t,::UnityEngine::Vector2>::KeyValuePair_2(int32_t  key, ::UnityEngine::Vector2  value) noexcept : ::bs_hook::ValueTypeWrapper<0xc>() {this->key = key;
this->value = value;
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr void System::Collections::Generic::KeyValuePair_2<::UnityEngine::UIElements::StyleSheets::__StyleSheetCache__SheetHandleKey,TValue>::__set_key(::UnityEngine::UIElements::StyleSheets::__StyleSheetCache__SheetHandleKey  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::StyleSheets::__StyleSheetCache__SheetHandleKey, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::UIElements::StyleSheets::__StyleSheetCache__SheetHandleKey>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::UnityEngine::UIElements::StyleSheets::__StyleSheetCache__SheetHandleKey& System::Collections::Generic::KeyValuePair_2<::UnityEngine::UIElements::StyleSheets::__StyleSheetCache__SheetHandleKey,TValue>::__get_key()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::StyleSheets::__StyleSheetCache__SheetHandleKey, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::UnityEngine::UIElements::StyleSheets::__StyleSheetCache__SheetHandleKey const& System::Collections::Generic::KeyValuePair_2<::UnityEngine::UIElements::StyleSheets::__StyleSheetCache__SheetHandleKey,TValue>::__get_key() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::StyleSheets::__StyleSheetCache__SheetHandleKey, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr void System::Collections::Generic::KeyValuePair_2<::UnityEngine::UIElements::StyleSheets::__StyleSheetCache__SheetHandleKey,TValue>::__set_value(TValue  value)  {
::cordl_internals::setInstanceField<TValue, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<TValue>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr TValue& System::Collections::Generic::KeyValuePair_2<::UnityEngine::UIElements::StyleSheets::__StyleSheetCache__SheetHandleKey,TValue>::__get_value()  {
return ::cordl_internals::getInstanceField<TValue, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr TValue const& System::Collections::Generic::KeyValuePair_2<::UnityEngine::UIElements::StyleSheets::__StyleSheetCache__SheetHandleKey,TValue>::__get_value() const {
return ::cordl_internals::getInstanceField<TValue, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline void System::Collections::Generic::KeyValuePair_2<::UnityEngine::UIElements::StyleSheets::__StyleSheetCache__SheetHandleKey,TValue>::_ctor(::UnityEngine::UIElements::StyleSheets::__StyleSheetCache__SheetHandleKey  key, TValue  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::UIElements::StyleSheets::__StyleSheetCache__SheetHandleKey,TValue>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::__StyleSheetCache__SheetHandleKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline ::UnityEngine::UIElements::StyleSheets::__StyleSheetCache__SheetHandleKey System::Collections::Generic::KeyValuePair_2<::UnityEngine::UIElements::StyleSheets::__StyleSheetCache__SheetHandleKey,TValue>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::UIElements::StyleSheets::__StyleSheetCache__SheetHandleKey,TValue>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleSheets::__StyleSheetCache__SheetHandleKey, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline TValue System::Collections::Generic::KeyValuePair_2<::UnityEngine::UIElements::StyleSheets::__StyleSheetCache__SheetHandleKey,TValue>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::UIElements::StyleSheets::__StyleSheetCache__SheetHandleKey,TValue>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TValue, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline ::StringW System::Collections::Generic::KeyValuePair_2<::UnityEngine::UIElements::StyleSheets::__StyleSheetCache__SheetHandleKey,TValue>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::UIElements::StyleSheets::__StyleSheetCache__SheetHandleKey,TValue>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline void System::Collections::Generic::KeyValuePair_2<::UnityEngine::UIElements::StyleSheets::__StyleSheetCache__SheetHandleKey,TValue>::Deconstruct(ByRef<::UnityEngine::UIElements::StyleSheets::__StyleSheetCache__SheetHandleKey>  key, ByRef<TValue>  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::UIElements::StyleSheets::__StyleSheetCache__SheetHandleKey,TValue>>::get(),
                            "Deconstruct",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::UIElements::StyleSheets::__StyleSheetCache__SheetHandleKey>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<TValue>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
// Ctor Parameters [CppParam { name: "key", ty: "::UnityEngine::UIElements::StyleSheets::__StyleSheetCache__SheetHandleKey", modifiers: "", def_value: Some("{}") }, CppParam { name: "value", ty: "TValue", modifiers: "", def_value: Some("csnull") }]
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::System::Collections::Generic::KeyValuePair_2<::UnityEngine::UIElements::StyleSheets::__StyleSheetCache__SheetHandleKey,TValue>::KeyValuePair_2(::UnityEngine::UIElements::StyleSheets::__StyleSheetCache__SheetHandleKey  key, TValue  value) noexcept : ::bs_hook::ValueTypeWrapper<0x10>() {this->key = key;
this->value = value;
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr void System::Collections::Generic::KeyValuePair_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,TValue>::__set_key(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair& System::Collections::Generic::KeyValuePair_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,TValue>::__get_key()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair const& System::Collections::Generic::KeyValuePair_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,TValue>::__get_key() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr void System::Collections::Generic::KeyValuePair_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,TValue>::__set_value(TValue  value)  {
::cordl_internals::setInstanceField<TValue, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<TValue>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr TValue& System::Collections::Generic::KeyValuePair_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,TValue>::__get_value()  {
return ::cordl_internals::getInstanceField<TValue, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr TValue const& System::Collections::Generic::KeyValuePair_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,TValue>::__get_value() const {
return ::cordl_internals::getInstanceField<TValue, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline void System::Collections::Generic::KeyValuePair_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,TValue>::_ctor(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair  key, TValue  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,TValue>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair System::Collections::Generic::KeyValuePair_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,TValue>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,TValue>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline TValue System::Collections::Generic::KeyValuePair_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,TValue>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,TValue>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TValue, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline ::StringW System::Collections::Generic::KeyValuePair_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,TValue>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,TValue>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline void System::Collections::Generic::KeyValuePair_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,TValue>::Deconstruct(ByRef<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair>  key, ByRef<TValue>  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,TValue>>::get(),
                            "Deconstruct",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<TValue>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
// Ctor Parameters [CppParam { name: "key", ty: "::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair", modifiers: "", def_value: Some("{}") }, CppParam { name: "value", ty: "TValue", modifiers: "", def_value: Some("csnull") }]
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::System::Collections::Generic::KeyValuePair_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,TValue>::KeyValuePair_2(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair  key, TValue  value) noexcept : ::bs_hook::ValueTypeWrapper<0x18>() {this->key = key;
this->value = value;
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TValue>
constexpr void System::Collections::Generic::KeyValuePair_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,TValue>::__set_key(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair>(value));
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TValue>
constexpr ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair& System::Collections::Generic::KeyValuePair_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,TValue>::__get_key()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TValue>
constexpr ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair const& System::Collections::Generic::KeyValuePair_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,TValue>::__get_key() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TValue>
constexpr void System::Collections::Generic::KeyValuePair_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,TValue>::__set_value(TValue  value)  {
::cordl_internals::setInstanceField<TValue, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<TValue>(value));
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TValue>
constexpr TValue& System::Collections::Generic::KeyValuePair_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,TValue>::__get_value()  {
return ::cordl_internals::getInstanceField<TValue, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TValue>
constexpr TValue const& System::Collections::Generic::KeyValuePair_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,TValue>::__get_value() const {
return ::cordl_internals::getInstanceField<TValue, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TValue>
inline void System::Collections::Generic::KeyValuePair_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,TValue>::_ctor(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair  key, TValue  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,TValue>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TValue>
inline ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair System::Collections::Generic::KeyValuePair_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,TValue>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,TValue>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair, false>(*this, ___internal_method);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TValue>
inline TValue System::Collections::Generic::KeyValuePair_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,TValue>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,TValue>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TValue, false>(*this, ___internal_method);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TValue>
inline ::StringW System::Collections::Generic::KeyValuePair_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,TValue>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,TValue>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TValue>
inline void System::Collections::Generic::KeyValuePair_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,TValue>::Deconstruct(ByRef<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair>  key, ByRef<TValue>  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,TValue>>::get(),
                            "Deconstruct",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<TValue>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
// Ctor Parameters [CppParam { name: "key", ty: "::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair", modifiers: "", def_value: Some("{}") }, CppParam { name: "value", ty: "TValue", modifiers: "", def_value: Some("{}") }]
template<::cordl_internals::is_or_is_backed_by<int32_t> TValue>
constexpr ::System::Collections::Generic::KeyValuePair_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,TValue>::KeyValuePair_2(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair  key, TValue  value) noexcept : ::bs_hook::ValueTypeWrapper<0x18>() {this->key = key;
this->value = value;
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr void System::Collections::Generic::KeyValuePair_2<::System::Text::RegularExpressions::__Regex__CachedCodeEntryKey,TValue>::__set_key(::System::Text::RegularExpressions::__Regex__CachedCodeEntryKey  value)  {
::cordl_internals::setInstanceField<::System::Text::RegularExpressions::__Regex__CachedCodeEntryKey, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Text::RegularExpressions::__Regex__CachedCodeEntryKey>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::System::Text::RegularExpressions::__Regex__CachedCodeEntryKey& System::Collections::Generic::KeyValuePair_2<::System::Text::RegularExpressions::__Regex__CachedCodeEntryKey,TValue>::__get_key()  {
return ::cordl_internals::getInstanceField<::System::Text::RegularExpressions::__Regex__CachedCodeEntryKey, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::System::Text::RegularExpressions::__Regex__CachedCodeEntryKey const& System::Collections::Generic::KeyValuePair_2<::System::Text::RegularExpressions::__Regex__CachedCodeEntryKey,TValue>::__get_key() const {
return ::cordl_internals::getInstanceField<::System::Text::RegularExpressions::__Regex__CachedCodeEntryKey, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr void System::Collections::Generic::KeyValuePair_2<::System::Text::RegularExpressions::__Regex__CachedCodeEntryKey,TValue>::__set_value(TValue  value)  {
::cordl_internals::setInstanceField<TValue, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<TValue>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr TValue& System::Collections::Generic::KeyValuePair_2<::System::Text::RegularExpressions::__Regex__CachedCodeEntryKey,TValue>::__get_value()  {
return ::cordl_internals::getInstanceField<TValue, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr TValue const& System::Collections::Generic::KeyValuePair_2<::System::Text::RegularExpressions::__Regex__CachedCodeEntryKey,TValue>::__get_value() const {
return ::cordl_internals::getInstanceField<TValue, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline void System::Collections::Generic::KeyValuePair_2<::System::Text::RegularExpressions::__Regex__CachedCodeEntryKey,TValue>::_ctor(::System::Text::RegularExpressions::__Regex__CachedCodeEntryKey  key, TValue  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::System::Text::RegularExpressions::__Regex__CachedCodeEntryKey,TValue>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::RegularExpressions::__Regex__CachedCodeEntryKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline ::System::Text::RegularExpressions::__Regex__CachedCodeEntryKey System::Collections::Generic::KeyValuePair_2<::System::Text::RegularExpressions::__Regex__CachedCodeEntryKey,TValue>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::System::Text::RegularExpressions::__Regex__CachedCodeEntryKey,TValue>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Text::RegularExpressions::__Regex__CachedCodeEntryKey, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline TValue System::Collections::Generic::KeyValuePair_2<::System::Text::RegularExpressions::__Regex__CachedCodeEntryKey,TValue>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::System::Text::RegularExpressions::__Regex__CachedCodeEntryKey,TValue>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TValue, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline ::StringW System::Collections::Generic::KeyValuePair_2<::System::Text::RegularExpressions::__Regex__CachedCodeEntryKey,TValue>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::System::Text::RegularExpressions::__Regex__CachedCodeEntryKey,TValue>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline void System::Collections::Generic::KeyValuePair_2<::System::Text::RegularExpressions::__Regex__CachedCodeEntryKey,TValue>::Deconstruct(ByRef<::System::Text::RegularExpressions::__Regex__CachedCodeEntryKey>  key, ByRef<TValue>  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::System::Text::RegularExpressions::__Regex__CachedCodeEntryKey,TValue>>::get(),
                            "Deconstruct",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Text::RegularExpressions::__Regex__CachedCodeEntryKey>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<TValue>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
// Ctor Parameters [CppParam { name: "key", ty: "::System::Text::RegularExpressions::__Regex__CachedCodeEntryKey", modifiers: "", def_value: Some("{}") }, CppParam { name: "value", ty: "TValue", modifiers: "", def_value: Some("csnull") }]
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::System::Collections::Generic::KeyValuePair_2<::System::Text::RegularExpressions::__Regex__CachedCodeEntryKey,TValue>::KeyValuePair_2(::System::Text::RegularExpressions::__Regex__CachedCodeEntryKey  key, TValue  value) noexcept : ::bs_hook::ValueTypeWrapper<0x20>() {this->key = key;
this->value = value;
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr void System::Collections::Generic::KeyValuePair_2<::GlobalNamespace::__MirrorRendererSO__CameraTransformData,TValue>::__set_key(::GlobalNamespace::__MirrorRendererSO__CameraTransformData  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__MirrorRendererSO__CameraTransformData, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::GlobalNamespace::__MirrorRendererSO__CameraTransformData>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::GlobalNamespace::__MirrorRendererSO__CameraTransformData& System::Collections::Generic::KeyValuePair_2<::GlobalNamespace::__MirrorRendererSO__CameraTransformData,TValue>::__get_key()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__MirrorRendererSO__CameraTransformData, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::GlobalNamespace::__MirrorRendererSO__CameraTransformData const& System::Collections::Generic::KeyValuePair_2<::GlobalNamespace::__MirrorRendererSO__CameraTransformData,TValue>::__get_key() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__MirrorRendererSO__CameraTransformData, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr void System::Collections::Generic::KeyValuePair_2<::GlobalNamespace::__MirrorRendererSO__CameraTransformData,TValue>::__set_value(TValue  value)  {
::cordl_internals::setInstanceField<TValue, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<TValue>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr TValue& System::Collections::Generic::KeyValuePair_2<::GlobalNamespace::__MirrorRendererSO__CameraTransformData,TValue>::__get_value()  {
return ::cordl_internals::getInstanceField<TValue, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr TValue const& System::Collections::Generic::KeyValuePair_2<::GlobalNamespace::__MirrorRendererSO__CameraTransformData,TValue>::__get_value() const {
return ::cordl_internals::getInstanceField<TValue, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline void System::Collections::Generic::KeyValuePair_2<::GlobalNamespace::__MirrorRendererSO__CameraTransformData,TValue>::_ctor(::GlobalNamespace::__MirrorRendererSO__CameraTransformData  key, TValue  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::GlobalNamespace::__MirrorRendererSO__CameraTransformData,TValue>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__MirrorRendererSO__CameraTransformData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline ::GlobalNamespace::__MirrorRendererSO__CameraTransformData System::Collections::Generic::KeyValuePair_2<::GlobalNamespace::__MirrorRendererSO__CameraTransformData,TValue>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::GlobalNamespace::__MirrorRendererSO__CameraTransformData,TValue>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__MirrorRendererSO__CameraTransformData, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline TValue System::Collections::Generic::KeyValuePair_2<::GlobalNamespace::__MirrorRendererSO__CameraTransformData,TValue>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::GlobalNamespace::__MirrorRendererSO__CameraTransformData,TValue>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TValue, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline ::StringW System::Collections::Generic::KeyValuePair_2<::GlobalNamespace::__MirrorRendererSO__CameraTransformData,TValue>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::GlobalNamespace::__MirrorRendererSO__CameraTransformData,TValue>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline void System::Collections::Generic::KeyValuePair_2<::GlobalNamespace::__MirrorRendererSO__CameraTransformData,TValue>::Deconstruct(ByRef<::GlobalNamespace::__MirrorRendererSO__CameraTransformData>  key, ByRef<TValue>  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::GlobalNamespace::__MirrorRendererSO__CameraTransformData,TValue>>::get(),
                            "Deconstruct",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::__MirrorRendererSO__CameraTransformData>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<TValue>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
// Ctor Parameters [CppParam { name: "key", ty: "::GlobalNamespace::__MirrorRendererSO__CameraTransformData", modifiers: "", def_value: Some("{}") }, CppParam { name: "value", ty: "TValue", modifiers: "", def_value: Some("csnull") }]
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::System::Collections::Generic::KeyValuePair_2<::GlobalNamespace::__MirrorRendererSO__CameraTransformData,TValue>::KeyValuePair_2(::GlobalNamespace::__MirrorRendererSO__CameraTransformData  key, TValue  value) noexcept : ::bs_hook::ValueTypeWrapper<0x30>() {this->key = key;
this->value = value;
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr void System::Collections::Generic::KeyValuePair_2<::Newtonsoft::Json::Serialization::__DefaultSerializationBinder__TypeNameKey,TValue>::__set_key(::Newtonsoft::Json::Serialization::__DefaultSerializationBinder__TypeNameKey  value)  {
::cordl_internals::setInstanceField<::Newtonsoft::Json::Serialization::__DefaultSerializationBinder__TypeNameKey, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::Newtonsoft::Json::Serialization::__DefaultSerializationBinder__TypeNameKey>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::Newtonsoft::Json::Serialization::__DefaultSerializationBinder__TypeNameKey& System::Collections::Generic::KeyValuePair_2<::Newtonsoft::Json::Serialization::__DefaultSerializationBinder__TypeNameKey,TValue>::__get_key()  {
return ::cordl_internals::getInstanceField<::Newtonsoft::Json::Serialization::__DefaultSerializationBinder__TypeNameKey, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::Newtonsoft::Json::Serialization::__DefaultSerializationBinder__TypeNameKey const& System::Collections::Generic::KeyValuePair_2<::Newtonsoft::Json::Serialization::__DefaultSerializationBinder__TypeNameKey,TValue>::__get_key() const {
return ::cordl_internals::getInstanceField<::Newtonsoft::Json::Serialization::__DefaultSerializationBinder__TypeNameKey, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr void System::Collections::Generic::KeyValuePair_2<::Newtonsoft::Json::Serialization::__DefaultSerializationBinder__TypeNameKey,TValue>::__set_value(TValue  value)  {
::cordl_internals::setInstanceField<TValue, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<TValue>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr TValue& System::Collections::Generic::KeyValuePair_2<::Newtonsoft::Json::Serialization::__DefaultSerializationBinder__TypeNameKey,TValue>::__get_value()  {
return ::cordl_internals::getInstanceField<TValue, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr TValue const& System::Collections::Generic::KeyValuePair_2<::Newtonsoft::Json::Serialization::__DefaultSerializationBinder__TypeNameKey,TValue>::__get_value() const {
return ::cordl_internals::getInstanceField<TValue, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline void System::Collections::Generic::KeyValuePair_2<::Newtonsoft::Json::Serialization::__DefaultSerializationBinder__TypeNameKey,TValue>::_ctor(::Newtonsoft::Json::Serialization::__DefaultSerializationBinder__TypeNameKey  key, TValue  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::Newtonsoft::Json::Serialization::__DefaultSerializationBinder__TypeNameKey,TValue>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::__DefaultSerializationBinder__TypeNameKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline ::Newtonsoft::Json::Serialization::__DefaultSerializationBinder__TypeNameKey System::Collections::Generic::KeyValuePair_2<::Newtonsoft::Json::Serialization::__DefaultSerializationBinder__TypeNameKey,TValue>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::Newtonsoft::Json::Serialization::__DefaultSerializationBinder__TypeNameKey,TValue>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Serialization::__DefaultSerializationBinder__TypeNameKey, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline TValue System::Collections::Generic::KeyValuePair_2<::Newtonsoft::Json::Serialization::__DefaultSerializationBinder__TypeNameKey,TValue>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::Newtonsoft::Json::Serialization::__DefaultSerializationBinder__TypeNameKey,TValue>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TValue, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline ::StringW System::Collections::Generic::KeyValuePair_2<::Newtonsoft::Json::Serialization::__DefaultSerializationBinder__TypeNameKey,TValue>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::Newtonsoft::Json::Serialization::__DefaultSerializationBinder__TypeNameKey,TValue>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline void System::Collections::Generic::KeyValuePair_2<::Newtonsoft::Json::Serialization::__DefaultSerializationBinder__TypeNameKey,TValue>::Deconstruct(ByRef<::Newtonsoft::Json::Serialization::__DefaultSerializationBinder__TypeNameKey>  key, ByRef<TValue>  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::Newtonsoft::Json::Serialization::__DefaultSerializationBinder__TypeNameKey,TValue>>::get(),
                            "Deconstruct",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Newtonsoft::Json::Serialization::__DefaultSerializationBinder__TypeNameKey>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<TValue>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
// Ctor Parameters [CppParam { name: "key", ty: "::Newtonsoft::Json::Serialization::__DefaultSerializationBinder__TypeNameKey", modifiers: "", def_value: Some("{}") }, CppParam { name: "value", ty: "TValue", modifiers: "", def_value: Some("csnull") }]
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::System::Collections::Generic::KeyValuePair_2<::Newtonsoft::Json::Serialization::__DefaultSerializationBinder__TypeNameKey,TValue>::KeyValuePair_2(::Newtonsoft::Json::Serialization::__DefaultSerializationBinder__TypeNameKey  key, TValue  value) noexcept : ::bs_hook::ValueTypeWrapper<0x18>() {this->key = key;
this->value = value;
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr void System::Collections::Generic::KeyValuePair_2<::Newtonsoft::Json::Utilities::__ConvertUtils__TypeConvertKey,TValue>::__set_key(::Newtonsoft::Json::Utilities::__ConvertUtils__TypeConvertKey  value)  {
::cordl_internals::setInstanceField<::Newtonsoft::Json::Utilities::__ConvertUtils__TypeConvertKey, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::Newtonsoft::Json::Utilities::__ConvertUtils__TypeConvertKey>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::Newtonsoft::Json::Utilities::__ConvertUtils__TypeConvertKey& System::Collections::Generic::KeyValuePair_2<::Newtonsoft::Json::Utilities::__ConvertUtils__TypeConvertKey,TValue>::__get_key()  {
return ::cordl_internals::getInstanceField<::Newtonsoft::Json::Utilities::__ConvertUtils__TypeConvertKey, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::Newtonsoft::Json::Utilities::__ConvertUtils__TypeConvertKey const& System::Collections::Generic::KeyValuePair_2<::Newtonsoft::Json::Utilities::__ConvertUtils__TypeConvertKey,TValue>::__get_key() const {
return ::cordl_internals::getInstanceField<::Newtonsoft::Json::Utilities::__ConvertUtils__TypeConvertKey, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr void System::Collections::Generic::KeyValuePair_2<::Newtonsoft::Json::Utilities::__ConvertUtils__TypeConvertKey,TValue>::__set_value(TValue  value)  {
::cordl_internals::setInstanceField<TValue, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<TValue>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr TValue& System::Collections::Generic::KeyValuePair_2<::Newtonsoft::Json::Utilities::__ConvertUtils__TypeConvertKey,TValue>::__get_value()  {
return ::cordl_internals::getInstanceField<TValue, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr TValue const& System::Collections::Generic::KeyValuePair_2<::Newtonsoft::Json::Utilities::__ConvertUtils__TypeConvertKey,TValue>::__get_value() const {
return ::cordl_internals::getInstanceField<TValue, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline void System::Collections::Generic::KeyValuePair_2<::Newtonsoft::Json::Utilities::__ConvertUtils__TypeConvertKey,TValue>::_ctor(::Newtonsoft::Json::Utilities::__ConvertUtils__TypeConvertKey  key, TValue  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::Newtonsoft::Json::Utilities::__ConvertUtils__TypeConvertKey,TValue>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Utilities::__ConvertUtils__TypeConvertKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline ::Newtonsoft::Json::Utilities::__ConvertUtils__TypeConvertKey System::Collections::Generic::KeyValuePair_2<::Newtonsoft::Json::Utilities::__ConvertUtils__TypeConvertKey,TValue>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::Newtonsoft::Json::Utilities::__ConvertUtils__TypeConvertKey,TValue>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Utilities::__ConvertUtils__TypeConvertKey, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline TValue System::Collections::Generic::KeyValuePair_2<::Newtonsoft::Json::Utilities::__ConvertUtils__TypeConvertKey,TValue>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::Newtonsoft::Json::Utilities::__ConvertUtils__TypeConvertKey,TValue>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TValue, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline ::StringW System::Collections::Generic::KeyValuePair_2<::Newtonsoft::Json::Utilities::__ConvertUtils__TypeConvertKey,TValue>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::Newtonsoft::Json::Utilities::__ConvertUtils__TypeConvertKey,TValue>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline void System::Collections::Generic::KeyValuePair_2<::Newtonsoft::Json::Utilities::__ConvertUtils__TypeConvertKey,TValue>::Deconstruct(ByRef<::Newtonsoft::Json::Utilities::__ConvertUtils__TypeConvertKey>  key, ByRef<TValue>  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::Newtonsoft::Json::Utilities::__ConvertUtils__TypeConvertKey,TValue>>::get(),
                            "Deconstruct",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Newtonsoft::Json::Utilities::__ConvertUtils__TypeConvertKey>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<TValue>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
// Ctor Parameters [CppParam { name: "key", ty: "::Newtonsoft::Json::Utilities::__ConvertUtils__TypeConvertKey", modifiers: "", def_value: Some("{}") }, CppParam { name: "value", ty: "TValue", modifiers: "", def_value: Some("csnull") }]
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::System::Collections::Generic::KeyValuePair_2<::Newtonsoft::Json::Utilities::__ConvertUtils__TypeConvertKey,TValue>::KeyValuePair_2(::Newtonsoft::Json::Utilities::__ConvertUtils__TypeConvertKey  key, TValue  value) noexcept : ::bs_hook::ValueTypeWrapper<0x18>() {this->key = key;
this->value = value;
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr void System::Collections::Generic::KeyValuePair_2<::UnityEngine::Vector4,TValue>::__set_key(::UnityEngine::Vector4  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector4, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::Vector4>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::UnityEngine::Vector4& System::Collections::Generic::KeyValuePair_2<::UnityEngine::Vector4,TValue>::__get_key()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector4, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::UnityEngine::Vector4 const& System::Collections::Generic::KeyValuePair_2<::UnityEngine::Vector4,TValue>::__get_key() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector4, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr void System::Collections::Generic::KeyValuePair_2<::UnityEngine::Vector4,TValue>::__set_value(TValue  value)  {
::cordl_internals::setInstanceField<TValue, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<TValue>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr TValue& System::Collections::Generic::KeyValuePair_2<::UnityEngine::Vector4,TValue>::__get_value()  {
return ::cordl_internals::getInstanceField<TValue, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr TValue const& System::Collections::Generic::KeyValuePair_2<::UnityEngine::Vector4,TValue>::__get_value() const {
return ::cordl_internals::getInstanceField<TValue, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline void System::Collections::Generic::KeyValuePair_2<::UnityEngine::Vector4,TValue>::_ctor(::UnityEngine::Vector4  key, TValue  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::Vector4,TValue>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline ::UnityEngine::Vector4 System::Collections::Generic::KeyValuePair_2<::UnityEngine::Vector4,TValue>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::Vector4,TValue>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline TValue System::Collections::Generic::KeyValuePair_2<::UnityEngine::Vector4,TValue>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::Vector4,TValue>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TValue, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline ::StringW System::Collections::Generic::KeyValuePair_2<::UnityEngine::Vector4,TValue>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::Vector4,TValue>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline void System::Collections::Generic::KeyValuePair_2<::UnityEngine::Vector4,TValue>::Deconstruct(ByRef<::UnityEngine::Vector4>  key, ByRef<TValue>  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::Vector4,TValue>>::get(),
                            "Deconstruct",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector4>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<TValue>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
// Ctor Parameters [CppParam { name: "key", ty: "::UnityEngine::Vector4", modifiers: "", def_value: Some("{}") }, CppParam { name: "value", ty: "TValue", modifiers: "", def_value: Some("csnull") }]
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::System::Collections::Generic::KeyValuePair_2<::UnityEngine::Vector4,TValue>::KeyValuePair_2(::UnityEngine::Vector4  key, TValue  value) noexcept : ::bs_hook::ValueTypeWrapper<0x18>() {this->key = key;
this->value = value;
}
//  Writing Method size for method: ::System::Collections::Generic::KeyValuePair_2<::UnityEngine::Vector3,int32_t>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Generic::KeyValuePair_2<::UnityEngine::Vector3,int32_t>::*)(::UnityEngine::Vector3, int32_t)>(&::System::Collections::Generic::KeyValuePair_2<::UnityEngine::Vector3,int32_t>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::Vector3,int32_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::KeyValuePair_2<::UnityEngine::Vector3,int32_t>.get_Key
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::System::Collections::Generic::KeyValuePair_2<::UnityEngine::Vector3,int32_t>::*)()>(&::System::Collections::Generic::KeyValuePair_2<::UnityEngine::Vector3,int32_t>::get_Key)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::Vector3,int32_t>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::KeyValuePair_2<::UnityEngine::Vector3,int32_t>.get_Value
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Collections::Generic::KeyValuePair_2<::UnityEngine::Vector3,int32_t>::*)()>(&::System::Collections::Generic::KeyValuePair_2<::UnityEngine::Vector3,int32_t>::get_Value)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::Vector3,int32_t>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::KeyValuePair_2<::UnityEngine::Vector3,int32_t>.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Collections::Generic::KeyValuePair_2<::UnityEngine::Vector3,int32_t>::*)()>(&::System::Collections::Generic::KeyValuePair_2<::UnityEngine::Vector3,int32_t>::ToString)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::Vector3,int32_t>>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::Vector3,int32_t>>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::KeyValuePair_2<::UnityEngine::Vector3,int32_t>.Deconstruct
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Generic::KeyValuePair_2<::UnityEngine::Vector3,int32_t>::*)(ByRef<::UnityEngine::Vector3>, ByRef<int32_t>)>(&::System::Collections::Generic::KeyValuePair_2<::UnityEngine::Vector3,int32_t>::Deconstruct)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::Vector3,int32_t>>::get(),
                            "Deconstruct",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Collections::Generic::KeyValuePair_2<::UnityEngine::Vector3,int32_t>::__set_key(::UnityEngine::Vector3  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3& System::Collections::Generic::KeyValuePair_2<::UnityEngine::Vector3,int32_t>::__get_key()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::UnityEngine::Vector3 const& System::Collections::Generic::KeyValuePair_2<::UnityEngine::Vector3,int32_t>::__get_key() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::Collections::Generic::KeyValuePair_2<::UnityEngine::Vector3,int32_t>::__set_value(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0xc>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& System::Collections::Generic::KeyValuePair_2<::UnityEngine::Vector3,int32_t>::__get_value()  {
return ::cordl_internals::getInstanceField<int32_t, 0xc>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& System::Collections::Generic::KeyValuePair_2<::UnityEngine::Vector3,int32_t>::__get_value() const {
return ::cordl_internals::getInstanceField<int32_t, 0xc>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline void System::Collections::Generic::KeyValuePair_2<::UnityEngine::Vector3,int32_t>::_ctor(::UnityEngine::Vector3  key, int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::Vector3,int32_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
inline ::UnityEngine::Vector3 System::Collections::Generic::KeyValuePair_2<::UnityEngine::Vector3,int32_t>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::Vector3,int32_t>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(*this, ___internal_method);
}
inline int32_t System::Collections::Generic::KeyValuePair_2<::UnityEngine::Vector3,int32_t>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::Vector3,int32_t>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline ::StringW System::Collections::Generic::KeyValuePair_2<::UnityEngine::Vector3,int32_t>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::Vector3,int32_t>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline void System::Collections::Generic::KeyValuePair_2<::UnityEngine::Vector3,int32_t>::Deconstruct(ByRef<::UnityEngine::Vector3>  key, ByRef<int32_t>  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::Vector3,int32_t>>::get(),
                            "Deconstruct",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
// Ctor Parameters [CppParam { name: "key", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "value", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Collections::Generic::KeyValuePair_2<::UnityEngine::Vector3,int32_t>::KeyValuePair_2(::UnityEngine::Vector3  key, int32_t  value) noexcept : ::bs_hook::ValueTypeWrapper<0x10>() {this->key = key;
this->value = value;
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr void System::Collections::Generic::KeyValuePair_2<uint64_t,TValue>::__set_key(uint64_t  value)  {
::cordl_internals::setInstanceField<uint64_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<uint64_t>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr uint64_t& System::Collections::Generic::KeyValuePair_2<uint64_t,TValue>::__get_key()  {
return ::cordl_internals::getInstanceField<uint64_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr uint64_t const& System::Collections::Generic::KeyValuePair_2<uint64_t,TValue>::__get_key() const {
return ::cordl_internals::getInstanceField<uint64_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr void System::Collections::Generic::KeyValuePair_2<uint64_t,TValue>::__set_value(TValue  value)  {
::cordl_internals::setInstanceField<TValue, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<TValue>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr TValue& System::Collections::Generic::KeyValuePair_2<uint64_t,TValue>::__get_value()  {
return ::cordl_internals::getInstanceField<TValue, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr TValue const& System::Collections::Generic::KeyValuePair_2<uint64_t,TValue>::__get_value() const {
return ::cordl_internals::getInstanceField<TValue, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline void System::Collections::Generic::KeyValuePair_2<uint64_t,TValue>::_ctor(uint64_t  key, TValue  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<uint64_t,TValue>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline uint64_t System::Collections::Generic::KeyValuePair_2<uint64_t,TValue>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<uint64_t,TValue>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<uint64_t, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline TValue System::Collections::Generic::KeyValuePair_2<uint64_t,TValue>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<uint64_t,TValue>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TValue, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline ::StringW System::Collections::Generic::KeyValuePair_2<uint64_t,TValue>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<uint64_t,TValue>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline void System::Collections::Generic::KeyValuePair_2<uint64_t,TValue>::Deconstruct(ByRef<uint64_t>  key, ByRef<TValue>  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<uint64_t,TValue>>::get(),
                            "Deconstruct",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint64_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<TValue>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
// Ctor Parameters [CppParam { name: "key", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "value", ty: "TValue", modifiers: "", def_value: Some("csnull") }]
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::System::Collections::Generic::KeyValuePair_2<uint64_t,TValue>::KeyValuePair_2(uint64_t  key, TValue  value) noexcept : ::bs_hook::ValueTypeWrapper<0x10>() {this->key = key;
this->value = value;
}
template<::cordl_internals::is_or_is_backed_by<uint32_t> TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr void System::Collections::Generic::KeyValuePair_2<TKey,TValue>::__set_key(TKey  value)  {
::cordl_internals::setInstanceField<TKey, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<TKey>(value));
}
template<::cordl_internals::is_or_is_backed_by<uint32_t> TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr TKey& System::Collections::Generic::KeyValuePair_2<TKey,TValue>::__get_key()  {
return ::cordl_internals::getInstanceField<TKey, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::cordl_internals::is_or_is_backed_by<uint32_t> TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr TKey const& System::Collections::Generic::KeyValuePair_2<TKey,TValue>::__get_key() const {
return ::cordl_internals::getInstanceField<TKey, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::cordl_internals::is_or_is_backed_by<uint32_t> TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr void System::Collections::Generic::KeyValuePair_2<TKey,TValue>::__set_value(TValue  value)  {
::cordl_internals::setInstanceField<TValue, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<TValue>(value));
}
template<::cordl_internals::is_or_is_backed_by<uint32_t> TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr TValue& System::Collections::Generic::KeyValuePair_2<TKey,TValue>::__get_value()  {
return ::cordl_internals::getInstanceField<TValue, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::cordl_internals::is_or_is_backed_by<uint32_t> TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr TValue const& System::Collections::Generic::KeyValuePair_2<TKey,TValue>::__get_value() const {
return ::cordl_internals::getInstanceField<TValue, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::cordl_internals::is_or_is_backed_by<uint32_t> TKey,::il2cpp_utils::il2cpp_reference_type TValue>
inline void System::Collections::Generic::KeyValuePair_2<TKey,TValue>::_ctor(TKey  key, TValue  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
template<::cordl_internals::is_or_is_backed_by<uint32_t> TKey,::il2cpp_utils::il2cpp_reference_type TValue>
inline TKey System::Collections::Generic::KeyValuePair_2<TKey,TValue>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TKey, false>(*this, ___internal_method);
}
template<::cordl_internals::is_or_is_backed_by<uint32_t> TKey,::il2cpp_utils::il2cpp_reference_type TValue>
inline TValue System::Collections::Generic::KeyValuePair_2<TKey,TValue>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TValue, false>(*this, ___internal_method);
}
template<::cordl_internals::is_or_is_backed_by<uint32_t> TKey,::il2cpp_utils::il2cpp_reference_type TValue>
inline ::StringW System::Collections::Generic::KeyValuePair_2<TKey,TValue>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
template<::cordl_internals::is_or_is_backed_by<uint32_t> TKey,::il2cpp_utils::il2cpp_reference_type TValue>
inline void System::Collections::Generic::KeyValuePair_2<TKey,TValue>::Deconstruct(ByRef<TKey>  key, ByRef<TValue>  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>::get(),
                            "Deconstruct",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<TKey>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<TValue>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
// Ctor Parameters [CppParam { name: "key", ty: "TKey", modifiers: "", def_value: Some("{}") }, CppParam { name: "value", ty: "TValue", modifiers: "", def_value: Some("csnull") }]
template<::cordl_internals::is_or_is_backed_by<uint32_t> TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::System::Collections::Generic::KeyValuePair_2<TKey,TValue>::KeyValuePair_2(TKey  key, TValue  value) noexcept : ::bs_hook::ValueTypeWrapper<0x10>() {this->key = key;
this->value = value;
}
template<::cordl_internals::is_or_is_backed_by<uint32_t> TKey>
constexpr void System::Collections::Generic::KeyValuePair_2<TKey,bool>::__set_key(TKey  value)  {
::cordl_internals::setInstanceField<TKey, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<TKey>(value));
}
template<::cordl_internals::is_or_is_backed_by<uint32_t> TKey>
constexpr TKey& System::Collections::Generic::KeyValuePair_2<TKey,bool>::__get_key()  {
return ::cordl_internals::getInstanceField<TKey, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::cordl_internals::is_or_is_backed_by<uint32_t> TKey>
constexpr TKey const& System::Collections::Generic::KeyValuePair_2<TKey,bool>::__get_key() const {
return ::cordl_internals::getInstanceField<TKey, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::cordl_internals::is_or_is_backed_by<uint32_t> TKey>
constexpr void System::Collections::Generic::KeyValuePair_2<TKey,bool>::__set_value(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<bool>(value));
}
template<::cordl_internals::is_or_is_backed_by<uint32_t> TKey>
constexpr bool& System::Collections::Generic::KeyValuePair_2<TKey,bool>::__get_value()  {
return ::cordl_internals::getInstanceField<bool, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::cordl_internals::is_or_is_backed_by<uint32_t> TKey>
constexpr bool const& System::Collections::Generic::KeyValuePair_2<TKey,bool>::__get_value() const {
return ::cordl_internals::getInstanceField<bool, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::cordl_internals::is_or_is_backed_by<uint32_t> TKey>
inline void System::Collections::Generic::KeyValuePair_2<TKey,bool>::_ctor(TKey  key, bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<TKey,bool>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
template<::cordl_internals::is_or_is_backed_by<uint32_t> TKey>
inline TKey System::Collections::Generic::KeyValuePair_2<TKey,bool>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<TKey,bool>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TKey, false>(*this, ___internal_method);
}
template<::cordl_internals::is_or_is_backed_by<uint32_t> TKey>
inline bool System::Collections::Generic::KeyValuePair_2<TKey,bool>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<TKey,bool>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
template<::cordl_internals::is_or_is_backed_by<uint32_t> TKey>
inline ::StringW System::Collections::Generic::KeyValuePair_2<TKey,bool>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<TKey,bool>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
template<::cordl_internals::is_or_is_backed_by<uint32_t> TKey>
inline void System::Collections::Generic::KeyValuePair_2<TKey,bool>::Deconstruct(ByRef<TKey>  key, ByRef<bool>  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<TKey,bool>>::get(),
                            "Deconstruct",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<TKey>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
// Ctor Parameters [CppParam { name: "key", ty: "TKey", modifiers: "", def_value: Some("{}") }, CppParam { name: "value", ty: "bool", modifiers: "", def_value: Some("{}") }]
template<::cordl_internals::is_or_is_backed_by<uint32_t> TKey>
constexpr ::System::Collections::Generic::KeyValuePair_2<TKey,bool>::KeyValuePair_2(TKey  key, bool  value) noexcept : ::bs_hook::ValueTypeWrapper<0x8>() {this->key = key;
this->value = value;
}
//  Writing Method size for method: ::System::Collections::Generic::KeyValuePair_2<uint32_t,uint32_t>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Generic::KeyValuePair_2<uint32_t,uint32_t>::*)(uint32_t, uint32_t)>(&::System::Collections::Generic::KeyValuePair_2<uint32_t,uint32_t>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<uint32_t,uint32_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::KeyValuePair_2<uint32_t,uint32_t>.get_Key
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::System::Collections::Generic::KeyValuePair_2<uint32_t,uint32_t>::*)()>(&::System::Collections::Generic::KeyValuePair_2<uint32_t,uint32_t>::get_Key)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<uint32_t,uint32_t>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::KeyValuePair_2<uint32_t,uint32_t>.get_Value
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::System::Collections::Generic::KeyValuePair_2<uint32_t,uint32_t>::*)()>(&::System::Collections::Generic::KeyValuePair_2<uint32_t,uint32_t>::get_Value)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<uint32_t,uint32_t>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::KeyValuePair_2<uint32_t,uint32_t>.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Collections::Generic::KeyValuePair_2<uint32_t,uint32_t>::*)()>(&::System::Collections::Generic::KeyValuePair_2<uint32_t,uint32_t>::ToString)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<uint32_t,uint32_t>>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<uint32_t,uint32_t>>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::KeyValuePair_2<uint32_t,uint32_t>.Deconstruct
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Generic::KeyValuePair_2<uint32_t,uint32_t>::*)(ByRef<uint32_t>, ByRef<uint32_t>)>(&::System::Collections::Generic::KeyValuePair_2<uint32_t,uint32_t>::Deconstruct)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<uint32_t,uint32_t>>::get(),
                            "Deconstruct",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Collections::Generic::KeyValuePair_2<uint32_t,uint32_t>::__set_key(uint32_t  value)  {
::cordl_internals::setInstanceField<uint32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<uint32_t>(value));
}
constexpr uint32_t& System::Collections::Generic::KeyValuePair_2<uint32_t,uint32_t>::__get_key()  {
return ::cordl_internals::getInstanceField<uint32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr uint32_t const& System::Collections::Generic::KeyValuePair_2<uint32_t,uint32_t>::__get_key() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::Collections::Generic::KeyValuePair_2<uint32_t,uint32_t>::__set_value(uint32_t  value)  {
::cordl_internals::setInstanceField<uint32_t, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<uint32_t>(value));
}
constexpr uint32_t& System::Collections::Generic::KeyValuePair_2<uint32_t,uint32_t>::__get_value()  {
return ::cordl_internals::getInstanceField<uint32_t, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr uint32_t const& System::Collections::Generic::KeyValuePair_2<uint32_t,uint32_t>::__get_value() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline void System::Collections::Generic::KeyValuePair_2<uint32_t,uint32_t>::_ctor(uint32_t  key, uint32_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<uint32_t,uint32_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
inline uint32_t System::Collections::Generic::KeyValuePair_2<uint32_t,uint32_t>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<uint32_t,uint32_t>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(*this, ___internal_method);
}
inline uint32_t System::Collections::Generic::KeyValuePair_2<uint32_t,uint32_t>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<uint32_t,uint32_t>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(*this, ___internal_method);
}
inline ::StringW System::Collections::Generic::KeyValuePair_2<uint32_t,uint32_t>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<uint32_t,uint32_t>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline void System::Collections::Generic::KeyValuePair_2<uint32_t,uint32_t>::Deconstruct(ByRef<uint32_t>  key, ByRef<uint32_t>  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<uint32_t,uint32_t>>::get(),
                            "Deconstruct",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
// Ctor Parameters [CppParam { name: "key", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "value", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Collections::Generic::KeyValuePair_2<uint32_t,uint32_t>::KeyValuePair_2(uint32_t  key, uint32_t  value) noexcept : ::bs_hook::ValueTypeWrapper<0x8>() {this->key = key;
this->value = value;
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr void System::Collections::Generic::KeyValuePair_2<uint32_t,TValue>::__set_key(uint32_t  value)  {
::cordl_internals::setInstanceField<uint32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<uint32_t>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr uint32_t& System::Collections::Generic::KeyValuePair_2<uint32_t,TValue>::__get_key()  {
return ::cordl_internals::getInstanceField<uint32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr uint32_t const& System::Collections::Generic::KeyValuePair_2<uint32_t,TValue>::__get_key() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr void System::Collections::Generic::KeyValuePair_2<uint32_t,TValue>::__set_value(TValue  value)  {
::cordl_internals::setInstanceField<TValue, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<TValue>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr TValue& System::Collections::Generic::KeyValuePair_2<uint32_t,TValue>::__get_value()  {
return ::cordl_internals::getInstanceField<TValue, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr TValue const& System::Collections::Generic::KeyValuePair_2<uint32_t,TValue>::__get_value() const {
return ::cordl_internals::getInstanceField<TValue, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline void System::Collections::Generic::KeyValuePair_2<uint32_t,TValue>::_ctor(uint32_t  key, TValue  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<uint32_t,TValue>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline uint32_t System::Collections::Generic::KeyValuePair_2<uint32_t,TValue>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<uint32_t,TValue>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline TValue System::Collections::Generic::KeyValuePair_2<uint32_t,TValue>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<uint32_t,TValue>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TValue, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline ::StringW System::Collections::Generic::KeyValuePair_2<uint32_t,TValue>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<uint32_t,TValue>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline void System::Collections::Generic::KeyValuePair_2<uint32_t,TValue>::Deconstruct(ByRef<uint32_t>  key, ByRef<TValue>  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<uint32_t,TValue>>::get(),
                            "Deconstruct",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<TValue>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
// Ctor Parameters [CppParam { name: "key", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "value", ty: "TValue", modifiers: "", def_value: Some("csnull") }]
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::System::Collections::Generic::KeyValuePair_2<uint32_t,TValue>::KeyValuePair_2(uint32_t  key, TValue  value) noexcept : ::bs_hook::ValueTypeWrapper<0x10>() {this->key = key;
this->value = value;
}
template<::il2cpp_utils::il2cpp_reference_type T1_cordlgen_0,::il2cpp_utils::il2cpp_reference_type T2_cordlgen_1>
constexpr void System::Collections::Generic::KeyValuePair_2<uint32_t,::UnityEngine::ProBuilder::SimpleTuple_2<T1_cordlgen_0,T2_cordlgen_1>>::__set_key(uint32_t  value)  {
::cordl_internals::setInstanceField<uint32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<uint32_t>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T1_cordlgen_0,::il2cpp_utils::il2cpp_reference_type T2_cordlgen_1>
constexpr uint32_t& System::Collections::Generic::KeyValuePair_2<uint32_t,::UnityEngine::ProBuilder::SimpleTuple_2<T1_cordlgen_0,T2_cordlgen_1>>::__get_key()  {
return ::cordl_internals::getInstanceField<uint32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T1_cordlgen_0,::il2cpp_utils::il2cpp_reference_type T2_cordlgen_1>
constexpr uint32_t const& System::Collections::Generic::KeyValuePair_2<uint32_t,::UnityEngine::ProBuilder::SimpleTuple_2<T1_cordlgen_0,T2_cordlgen_1>>::__get_key() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T1_cordlgen_0,::il2cpp_utils::il2cpp_reference_type T2_cordlgen_1>
constexpr void System::Collections::Generic::KeyValuePair_2<uint32_t,::UnityEngine::ProBuilder::SimpleTuple_2<T1_cordlgen_0,T2_cordlgen_1>>::__set_value(::UnityEngine::ProBuilder::SimpleTuple_2<T1_cordlgen_0,T2_cordlgen_1>  value)  {
::cordl_internals::setInstanceField<::UnityEngine::ProBuilder::SimpleTuple_2<T1_cordlgen_0,T2_cordlgen_1>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::ProBuilder::SimpleTuple_2<T1_cordlgen_0,T2_cordlgen_1>>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T1_cordlgen_0,::il2cpp_utils::il2cpp_reference_type T2_cordlgen_1>
constexpr ::UnityEngine::ProBuilder::SimpleTuple_2<T1_cordlgen_0,T2_cordlgen_1>& System::Collections::Generic::KeyValuePair_2<uint32_t,::UnityEngine::ProBuilder::SimpleTuple_2<T1_cordlgen_0,T2_cordlgen_1>>::__get_value()  {
return ::cordl_internals::getInstanceField<::UnityEngine::ProBuilder::SimpleTuple_2<T1_cordlgen_0,T2_cordlgen_1>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T1_cordlgen_0,::il2cpp_utils::il2cpp_reference_type T2_cordlgen_1>
constexpr ::UnityEngine::ProBuilder::SimpleTuple_2<T1_cordlgen_0,T2_cordlgen_1> const& System::Collections::Generic::KeyValuePair_2<uint32_t,::UnityEngine::ProBuilder::SimpleTuple_2<T1_cordlgen_0,T2_cordlgen_1>>::__get_value() const {
return ::cordl_internals::getInstanceField<::UnityEngine::ProBuilder::SimpleTuple_2<T1_cordlgen_0,T2_cordlgen_1>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T1_cordlgen_0,::il2cpp_utils::il2cpp_reference_type T2_cordlgen_1>
inline void System::Collections::Generic::KeyValuePair_2<uint32_t,::UnityEngine::ProBuilder::SimpleTuple_2<T1_cordlgen_0,T2_cordlgen_1>>::_ctor(uint32_t  key, ::UnityEngine::ProBuilder::SimpleTuple_2<T1_cordlgen_0,T2_cordlgen_1>  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<uint32_t,::UnityEngine::ProBuilder::SimpleTuple_2<T1_cordlgen_0,T2_cordlgen_1>>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::SimpleTuple_2<T1_cordlgen_0,T2_cordlgen_1>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
template<::il2cpp_utils::il2cpp_reference_type T1_cordlgen_0,::il2cpp_utils::il2cpp_reference_type T2_cordlgen_1>
inline uint32_t System::Collections::Generic::KeyValuePair_2<uint32_t,::UnityEngine::ProBuilder::SimpleTuple_2<T1_cordlgen_0,T2_cordlgen_1>>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<uint32_t,::UnityEngine::ProBuilder::SimpleTuple_2<T1_cordlgen_0,T2_cordlgen_1>>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T1_cordlgen_0,::il2cpp_utils::il2cpp_reference_type T2_cordlgen_1>
inline ::UnityEngine::ProBuilder::SimpleTuple_2<T1_cordlgen_0,T2_cordlgen_1> System::Collections::Generic::KeyValuePair_2<uint32_t,::UnityEngine::ProBuilder::SimpleTuple_2<T1_cordlgen_0,T2_cordlgen_1>>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<uint32_t,::UnityEngine::ProBuilder::SimpleTuple_2<T1_cordlgen_0,T2_cordlgen_1>>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::SimpleTuple_2<T1_cordlgen_0,T2_cordlgen_1>, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T1_cordlgen_0,::il2cpp_utils::il2cpp_reference_type T2_cordlgen_1>
inline ::StringW System::Collections::Generic::KeyValuePair_2<uint32_t,::UnityEngine::ProBuilder::SimpleTuple_2<T1_cordlgen_0,T2_cordlgen_1>>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<uint32_t,::UnityEngine::ProBuilder::SimpleTuple_2<T1_cordlgen_0,T2_cordlgen_1>>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T1_cordlgen_0,::il2cpp_utils::il2cpp_reference_type T2_cordlgen_1>
inline void System::Collections::Generic::KeyValuePair_2<uint32_t,::UnityEngine::ProBuilder::SimpleTuple_2<T1_cordlgen_0,T2_cordlgen_1>>::Deconstruct(ByRef<uint32_t>  key, ByRef<::UnityEngine::ProBuilder::SimpleTuple_2<T1_cordlgen_0,T2_cordlgen_1>>  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<uint32_t,::UnityEngine::ProBuilder::SimpleTuple_2<T1_cordlgen_0,T2_cordlgen_1>>>::get(),
                            "Deconstruct",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::ProBuilder::SimpleTuple_2<T1_cordlgen_0,T2_cordlgen_1>>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
// Ctor Parameters [CppParam { name: "key", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "value", ty: "::UnityEngine::ProBuilder::SimpleTuple_2<T1_cordlgen_0,T2_cordlgen_1>", modifiers: "", def_value: Some("{}") }]
template<::il2cpp_utils::il2cpp_reference_type T1_cordlgen_0,::il2cpp_utils::il2cpp_reference_type T2_cordlgen_1>
constexpr ::System::Collections::Generic::KeyValuePair_2<uint32_t,::UnityEngine::ProBuilder::SimpleTuple_2<T1_cordlgen_0,T2_cordlgen_1>>::KeyValuePair_2(uint32_t  key, ::UnityEngine::ProBuilder::SimpleTuple_2<T1_cordlgen_0,T2_cordlgen_1>  value) noexcept : ::bs_hook::ValueTypeWrapper<0x18>() {this->key = key;
this->value = value;
}
template<::il2cpp_utils::il2cpp_reference_type T1_cordlgen_0>
constexpr void System::Collections::Generic::KeyValuePair_2<uint32_t,::UnityEngine::ProBuilder::SimpleTuple_2<T1_cordlgen_0,int32_t>>::__set_key(uint32_t  value)  {
::cordl_internals::setInstanceField<uint32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<uint32_t>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T1_cordlgen_0>
constexpr uint32_t& System::Collections::Generic::KeyValuePair_2<uint32_t,::UnityEngine::ProBuilder::SimpleTuple_2<T1_cordlgen_0,int32_t>>::__get_key()  {
return ::cordl_internals::getInstanceField<uint32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T1_cordlgen_0>
constexpr uint32_t const& System::Collections::Generic::KeyValuePair_2<uint32_t,::UnityEngine::ProBuilder::SimpleTuple_2<T1_cordlgen_0,int32_t>>::__get_key() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T1_cordlgen_0>
constexpr void System::Collections::Generic::KeyValuePair_2<uint32_t,::UnityEngine::ProBuilder::SimpleTuple_2<T1_cordlgen_0,int32_t>>::__set_value(::UnityEngine::ProBuilder::SimpleTuple_2<T1_cordlgen_0,int32_t>  value)  {
::cordl_internals::setInstanceField<::UnityEngine::ProBuilder::SimpleTuple_2<T1_cordlgen_0,int32_t>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::ProBuilder::SimpleTuple_2<T1_cordlgen_0,int32_t>>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T1_cordlgen_0>
constexpr ::UnityEngine::ProBuilder::SimpleTuple_2<T1_cordlgen_0,int32_t>& System::Collections::Generic::KeyValuePair_2<uint32_t,::UnityEngine::ProBuilder::SimpleTuple_2<T1_cordlgen_0,int32_t>>::__get_value()  {
return ::cordl_internals::getInstanceField<::UnityEngine::ProBuilder::SimpleTuple_2<T1_cordlgen_0,int32_t>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T1_cordlgen_0>
constexpr ::UnityEngine::ProBuilder::SimpleTuple_2<T1_cordlgen_0,int32_t> const& System::Collections::Generic::KeyValuePair_2<uint32_t,::UnityEngine::ProBuilder::SimpleTuple_2<T1_cordlgen_0,int32_t>>::__get_value() const {
return ::cordl_internals::getInstanceField<::UnityEngine::ProBuilder::SimpleTuple_2<T1_cordlgen_0,int32_t>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T1_cordlgen_0>
inline void System::Collections::Generic::KeyValuePair_2<uint32_t,::UnityEngine::ProBuilder::SimpleTuple_2<T1_cordlgen_0,int32_t>>::_ctor(uint32_t  key, ::UnityEngine::ProBuilder::SimpleTuple_2<T1_cordlgen_0,int32_t>  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<uint32_t,::UnityEngine::ProBuilder::SimpleTuple_2<T1_cordlgen_0,int32_t>>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::SimpleTuple_2<T1_cordlgen_0,int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
template<::il2cpp_utils::il2cpp_reference_type T1_cordlgen_0>
inline uint32_t System::Collections::Generic::KeyValuePair_2<uint32_t,::UnityEngine::ProBuilder::SimpleTuple_2<T1_cordlgen_0,int32_t>>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<uint32_t,::UnityEngine::ProBuilder::SimpleTuple_2<T1_cordlgen_0,int32_t>>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T1_cordlgen_0>
inline ::UnityEngine::ProBuilder::SimpleTuple_2<T1_cordlgen_0,int32_t> System::Collections::Generic::KeyValuePair_2<uint32_t,::UnityEngine::ProBuilder::SimpleTuple_2<T1_cordlgen_0,int32_t>>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<uint32_t,::UnityEngine::ProBuilder::SimpleTuple_2<T1_cordlgen_0,int32_t>>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::SimpleTuple_2<T1_cordlgen_0,int32_t>, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T1_cordlgen_0>
inline ::StringW System::Collections::Generic::KeyValuePair_2<uint32_t,::UnityEngine::ProBuilder::SimpleTuple_2<T1_cordlgen_0,int32_t>>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<uint32_t,::UnityEngine::ProBuilder::SimpleTuple_2<T1_cordlgen_0,int32_t>>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T1_cordlgen_0>
inline void System::Collections::Generic::KeyValuePair_2<uint32_t,::UnityEngine::ProBuilder::SimpleTuple_2<T1_cordlgen_0,int32_t>>::Deconstruct(ByRef<uint32_t>  key, ByRef<::UnityEngine::ProBuilder::SimpleTuple_2<T1_cordlgen_0,int32_t>>  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<uint32_t,::UnityEngine::ProBuilder::SimpleTuple_2<T1_cordlgen_0,int32_t>>>::get(),
                            "Deconstruct",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::ProBuilder::SimpleTuple_2<T1_cordlgen_0,int32_t>>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
// Ctor Parameters [CppParam { name: "key", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "value", ty: "::UnityEngine::ProBuilder::SimpleTuple_2<T1_cordlgen_0,int32_t>", modifiers: "", def_value: Some("{}") }]
template<::il2cpp_utils::il2cpp_reference_type T1_cordlgen_0>
constexpr ::System::Collections::Generic::KeyValuePair_2<uint32_t,::UnityEngine::ProBuilder::SimpleTuple_2<T1_cordlgen_0,int32_t>>::KeyValuePair_2(uint32_t  key, ::UnityEngine::ProBuilder::SimpleTuple_2<T1_cordlgen_0,int32_t>  value) noexcept : ::bs_hook::ValueTypeWrapper<0x18>() {this->key = key;
this->value = value;
}
template<::il2cpp_utils::il2cpp_reference_type T1_cordlgen_0>
constexpr void System::Collections::Generic::KeyValuePair_2<uint32_t,::UnityEngine::ProBuilder::SimpleTuple_2<T1_cordlgen_0,::UnityEngine::ProBuilder::Edge>>::__set_key(uint32_t  value)  {
::cordl_internals::setInstanceField<uint32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<uint32_t>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T1_cordlgen_0>
constexpr uint32_t& System::Collections::Generic::KeyValuePair_2<uint32_t,::UnityEngine::ProBuilder::SimpleTuple_2<T1_cordlgen_0,::UnityEngine::ProBuilder::Edge>>::__get_key()  {
return ::cordl_internals::getInstanceField<uint32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T1_cordlgen_0>
constexpr uint32_t const& System::Collections::Generic::KeyValuePair_2<uint32_t,::UnityEngine::ProBuilder::SimpleTuple_2<T1_cordlgen_0,::UnityEngine::ProBuilder::Edge>>::__get_key() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T1_cordlgen_0>
constexpr void System::Collections::Generic::KeyValuePair_2<uint32_t,::UnityEngine::ProBuilder::SimpleTuple_2<T1_cordlgen_0,::UnityEngine::ProBuilder::Edge>>::__set_value(::UnityEngine::ProBuilder::SimpleTuple_2<T1_cordlgen_0,::UnityEngine::ProBuilder::Edge>  value)  {
::cordl_internals::setInstanceField<::UnityEngine::ProBuilder::SimpleTuple_2<T1_cordlgen_0,::UnityEngine::ProBuilder::Edge>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::ProBuilder::SimpleTuple_2<T1_cordlgen_0,::UnityEngine::ProBuilder::Edge>>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T1_cordlgen_0>
constexpr ::UnityEngine::ProBuilder::SimpleTuple_2<T1_cordlgen_0,::UnityEngine::ProBuilder::Edge>& System::Collections::Generic::KeyValuePair_2<uint32_t,::UnityEngine::ProBuilder::SimpleTuple_2<T1_cordlgen_0,::UnityEngine::ProBuilder::Edge>>::__get_value()  {
return ::cordl_internals::getInstanceField<::UnityEngine::ProBuilder::SimpleTuple_2<T1_cordlgen_0,::UnityEngine::ProBuilder::Edge>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T1_cordlgen_0>
constexpr ::UnityEngine::ProBuilder::SimpleTuple_2<T1_cordlgen_0,::UnityEngine::ProBuilder::Edge> const& System::Collections::Generic::KeyValuePair_2<uint32_t,::UnityEngine::ProBuilder::SimpleTuple_2<T1_cordlgen_0,::UnityEngine::ProBuilder::Edge>>::__get_value() const {
return ::cordl_internals::getInstanceField<::UnityEngine::ProBuilder::SimpleTuple_2<T1_cordlgen_0,::UnityEngine::ProBuilder::Edge>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T1_cordlgen_0>
inline void System::Collections::Generic::KeyValuePair_2<uint32_t,::UnityEngine::ProBuilder::SimpleTuple_2<T1_cordlgen_0,::UnityEngine::ProBuilder::Edge>>::_ctor(uint32_t  key, ::UnityEngine::ProBuilder::SimpleTuple_2<T1_cordlgen_0,::UnityEngine::ProBuilder::Edge>  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<uint32_t,::UnityEngine::ProBuilder::SimpleTuple_2<T1_cordlgen_0,::UnityEngine::ProBuilder::Edge>>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::SimpleTuple_2<T1_cordlgen_0,::UnityEngine::ProBuilder::Edge>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
template<::il2cpp_utils::il2cpp_reference_type T1_cordlgen_0>
inline uint32_t System::Collections::Generic::KeyValuePair_2<uint32_t,::UnityEngine::ProBuilder::SimpleTuple_2<T1_cordlgen_0,::UnityEngine::ProBuilder::Edge>>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<uint32_t,::UnityEngine::ProBuilder::SimpleTuple_2<T1_cordlgen_0,::UnityEngine::ProBuilder::Edge>>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T1_cordlgen_0>
inline ::UnityEngine::ProBuilder::SimpleTuple_2<T1_cordlgen_0,::UnityEngine::ProBuilder::Edge> System::Collections::Generic::KeyValuePair_2<uint32_t,::UnityEngine::ProBuilder::SimpleTuple_2<T1_cordlgen_0,::UnityEngine::ProBuilder::Edge>>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<uint32_t,::UnityEngine::ProBuilder::SimpleTuple_2<T1_cordlgen_0,::UnityEngine::ProBuilder::Edge>>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::SimpleTuple_2<T1_cordlgen_0,::UnityEngine::ProBuilder::Edge>, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T1_cordlgen_0>
inline ::StringW System::Collections::Generic::KeyValuePair_2<uint32_t,::UnityEngine::ProBuilder::SimpleTuple_2<T1_cordlgen_0,::UnityEngine::ProBuilder::Edge>>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<uint32_t,::UnityEngine::ProBuilder::SimpleTuple_2<T1_cordlgen_0,::UnityEngine::ProBuilder::Edge>>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T1_cordlgen_0>
inline void System::Collections::Generic::KeyValuePair_2<uint32_t,::UnityEngine::ProBuilder::SimpleTuple_2<T1_cordlgen_0,::UnityEngine::ProBuilder::Edge>>::Deconstruct(ByRef<uint32_t>  key, ByRef<::UnityEngine::ProBuilder::SimpleTuple_2<T1_cordlgen_0,::UnityEngine::ProBuilder::Edge>>  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<uint32_t,::UnityEngine::ProBuilder::SimpleTuple_2<T1_cordlgen_0,::UnityEngine::ProBuilder::Edge>>>::get(),
                            "Deconstruct",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::ProBuilder::SimpleTuple_2<T1_cordlgen_0,::UnityEngine::ProBuilder::Edge>>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
// Ctor Parameters [CppParam { name: "key", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "value", ty: "::UnityEngine::ProBuilder::SimpleTuple_2<T1_cordlgen_0,::UnityEngine::ProBuilder::Edge>", modifiers: "", def_value: Some("{}") }]
template<::il2cpp_utils::il2cpp_reference_type T1_cordlgen_0>
constexpr ::System::Collections::Generic::KeyValuePair_2<uint32_t,::UnityEngine::ProBuilder::SimpleTuple_2<T1_cordlgen_0,::UnityEngine::ProBuilder::Edge>>::KeyValuePair_2(uint32_t  key, ::UnityEngine::ProBuilder::SimpleTuple_2<T1_cordlgen_0,::UnityEngine::ProBuilder::Edge>  value) noexcept : ::bs_hook::ValueTypeWrapper<0x18>() {this->key = key;
this->value = value;
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr void System::Collections::Generic::KeyValuePair_2<uint16_t,TValue>::__set_key(uint16_t  value)  {
::cordl_internals::setInstanceField<uint16_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<uint16_t>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr uint16_t& System::Collections::Generic::KeyValuePair_2<uint16_t,TValue>::__get_key()  {
return ::cordl_internals::getInstanceField<uint16_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr uint16_t const& System::Collections::Generic::KeyValuePair_2<uint16_t,TValue>::__get_key() const {
return ::cordl_internals::getInstanceField<uint16_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr void System::Collections::Generic::KeyValuePair_2<uint16_t,TValue>::__set_value(TValue  value)  {
::cordl_internals::setInstanceField<TValue, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<TValue>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr TValue& System::Collections::Generic::KeyValuePair_2<uint16_t,TValue>::__get_value()  {
return ::cordl_internals::getInstanceField<TValue, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr TValue const& System::Collections::Generic::KeyValuePair_2<uint16_t,TValue>::__get_value() const {
return ::cordl_internals::getInstanceField<TValue, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline void System::Collections::Generic::KeyValuePair_2<uint16_t,TValue>::_ctor(uint16_t  key, TValue  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<uint16_t,TValue>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline uint16_t System::Collections::Generic::KeyValuePair_2<uint16_t,TValue>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<uint16_t,TValue>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<uint16_t, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline TValue System::Collections::Generic::KeyValuePair_2<uint16_t,TValue>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<uint16_t,TValue>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TValue, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline ::StringW System::Collections::Generic::KeyValuePair_2<uint16_t,TValue>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<uint16_t,TValue>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline void System::Collections::Generic::KeyValuePair_2<uint16_t,TValue>::Deconstruct(ByRef<uint16_t>  key, ByRef<TValue>  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<uint16_t,TValue>>::get(),
                            "Deconstruct",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<TValue>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
// Ctor Parameters [CppParam { name: "key", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "value", ty: "TValue", modifiers: "", def_value: Some("csnull") }]
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::System::Collections::Generic::KeyValuePair_2<uint16_t,TValue>::KeyValuePair_2(uint16_t  key, TValue  value) noexcept : ::bs_hook::ValueTypeWrapper<0x10>() {this->key = key;
this->value = value;
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr void System::Collections::Generic::KeyValuePair_2<::UnityEngine::TerrainUtils::TerrainTileCoord,TValue>::__set_key(::UnityEngine::TerrainUtils::TerrainTileCoord  value)  {
::cordl_internals::setInstanceField<::UnityEngine::TerrainUtils::TerrainTileCoord, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::TerrainUtils::TerrainTileCoord>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::UnityEngine::TerrainUtils::TerrainTileCoord& System::Collections::Generic::KeyValuePair_2<::UnityEngine::TerrainUtils::TerrainTileCoord,TValue>::__get_key()  {
return ::cordl_internals::getInstanceField<::UnityEngine::TerrainUtils::TerrainTileCoord, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::UnityEngine::TerrainUtils::TerrainTileCoord const& System::Collections::Generic::KeyValuePair_2<::UnityEngine::TerrainUtils::TerrainTileCoord,TValue>::__get_key() const {
return ::cordl_internals::getInstanceField<::UnityEngine::TerrainUtils::TerrainTileCoord, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr void System::Collections::Generic::KeyValuePair_2<::UnityEngine::TerrainUtils::TerrainTileCoord,TValue>::__set_value(TValue  value)  {
::cordl_internals::setInstanceField<TValue, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<TValue>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr TValue& System::Collections::Generic::KeyValuePair_2<::UnityEngine::TerrainUtils::TerrainTileCoord,TValue>::__get_value()  {
return ::cordl_internals::getInstanceField<TValue, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr TValue const& System::Collections::Generic::KeyValuePair_2<::UnityEngine::TerrainUtils::TerrainTileCoord,TValue>::__get_value() const {
return ::cordl_internals::getInstanceField<TValue, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline void System::Collections::Generic::KeyValuePair_2<::UnityEngine::TerrainUtils::TerrainTileCoord,TValue>::_ctor(::UnityEngine::TerrainUtils::TerrainTileCoord  key, TValue  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::TerrainUtils::TerrainTileCoord,TValue>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TerrainUtils::TerrainTileCoord>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline ::UnityEngine::TerrainUtils::TerrainTileCoord System::Collections::Generic::KeyValuePair_2<::UnityEngine::TerrainUtils::TerrainTileCoord,TValue>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::TerrainUtils::TerrainTileCoord,TValue>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::TerrainUtils::TerrainTileCoord, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline TValue System::Collections::Generic::KeyValuePair_2<::UnityEngine::TerrainUtils::TerrainTileCoord,TValue>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::TerrainUtils::TerrainTileCoord,TValue>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TValue, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline ::StringW System::Collections::Generic::KeyValuePair_2<::UnityEngine::TerrainUtils::TerrainTileCoord,TValue>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::TerrainUtils::TerrainTileCoord,TValue>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline void System::Collections::Generic::KeyValuePair_2<::UnityEngine::TerrainUtils::TerrainTileCoord,TValue>::Deconstruct(ByRef<::UnityEngine::TerrainUtils::TerrainTileCoord>  key, ByRef<TValue>  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::TerrainUtils::TerrainTileCoord,TValue>>::get(),
                            "Deconstruct",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::TerrainUtils::TerrainTileCoord>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<TValue>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
// Ctor Parameters [CppParam { name: "key", ty: "::UnityEngine::TerrainUtils::TerrainTileCoord", modifiers: "", def_value: Some("{}") }, CppParam { name: "value", ty: "TValue", modifiers: "", def_value: Some("csnull") }]
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::System::Collections::Generic::KeyValuePair_2<::UnityEngine::TerrainUtils::TerrainTileCoord,TValue>::KeyValuePair_2(::UnityEngine::TerrainUtils::TerrainTileCoord  key, TValue  value) noexcept : ::bs_hook::ValueTypeWrapper<0x10>() {this->key = key;
this->value = value;
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr void System::Collections::Generic::KeyValuePair_2<::GlobalNamespace::SongPackMask,TValue>::__set_key(::GlobalNamespace::SongPackMask  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::SongPackMask, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::GlobalNamespace::SongPackMask>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::GlobalNamespace::SongPackMask& System::Collections::Generic::KeyValuePair_2<::GlobalNamespace::SongPackMask,TValue>::__get_key()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::SongPackMask, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::GlobalNamespace::SongPackMask const& System::Collections::Generic::KeyValuePair_2<::GlobalNamespace::SongPackMask,TValue>::__get_key() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::SongPackMask, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr void System::Collections::Generic::KeyValuePair_2<::GlobalNamespace::SongPackMask,TValue>::__set_value(TValue  value)  {
::cordl_internals::setInstanceField<TValue, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<TValue>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr TValue& System::Collections::Generic::KeyValuePair_2<::GlobalNamespace::SongPackMask,TValue>::__get_value()  {
return ::cordl_internals::getInstanceField<TValue, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr TValue const& System::Collections::Generic::KeyValuePair_2<::GlobalNamespace::SongPackMask,TValue>::__get_value() const {
return ::cordl_internals::getInstanceField<TValue, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline void System::Collections::Generic::KeyValuePair_2<::GlobalNamespace::SongPackMask,TValue>::_ctor(::GlobalNamespace::SongPackMask  key, TValue  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::GlobalNamespace::SongPackMask,TValue>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SongPackMask>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline ::GlobalNamespace::SongPackMask System::Collections::Generic::KeyValuePair_2<::GlobalNamespace::SongPackMask,TValue>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::GlobalNamespace::SongPackMask,TValue>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SongPackMask, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline TValue System::Collections::Generic::KeyValuePair_2<::GlobalNamespace::SongPackMask,TValue>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::GlobalNamespace::SongPackMask,TValue>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TValue, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline ::StringW System::Collections::Generic::KeyValuePair_2<::GlobalNamespace::SongPackMask,TValue>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::GlobalNamespace::SongPackMask,TValue>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline void System::Collections::Generic::KeyValuePair_2<::GlobalNamespace::SongPackMask,TValue>::Deconstruct(ByRef<::GlobalNamespace::SongPackMask>  key, ByRef<TValue>  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::GlobalNamespace::SongPackMask,TValue>>::get(),
                            "Deconstruct",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::SongPackMask>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<TValue>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
// Ctor Parameters [CppParam { name: "key", ty: "::GlobalNamespace::SongPackMask", modifiers: "", def_value: Some("{}") }, CppParam { name: "value", ty: "TValue", modifiers: "", def_value: Some("csnull") }]
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::System::Collections::Generic::KeyValuePair_2<::GlobalNamespace::SongPackMask,TValue>::KeyValuePair_2(::GlobalNamespace::SongPackMask  key, TValue  value) noexcept : ::bs_hook::ValueTypeWrapper<0x28>() {this->key = key;
this->value = value;
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr void System::Collections::Generic::KeyValuePair_2<float_t,TValue>::__set_key(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<float_t>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr float_t& System::Collections::Generic::KeyValuePair_2<float_t,TValue>::__get_key()  {
return ::cordl_internals::getInstanceField<float_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr float_t const& System::Collections::Generic::KeyValuePair_2<float_t,TValue>::__get_key() const {
return ::cordl_internals::getInstanceField<float_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr void System::Collections::Generic::KeyValuePair_2<float_t,TValue>::__set_value(TValue  value)  {
::cordl_internals::setInstanceField<TValue, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<TValue>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr TValue& System::Collections::Generic::KeyValuePair_2<float_t,TValue>::__get_value()  {
return ::cordl_internals::getInstanceField<TValue, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr TValue const& System::Collections::Generic::KeyValuePair_2<float_t,TValue>::__get_value() const {
return ::cordl_internals::getInstanceField<TValue, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline void System::Collections::Generic::KeyValuePair_2<float_t,TValue>::_ctor(float_t  key, TValue  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<float_t,TValue>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline float_t System::Collections::Generic::KeyValuePair_2<float_t,TValue>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<float_t,TValue>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline TValue System::Collections::Generic::KeyValuePair_2<float_t,TValue>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<float_t,TValue>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TValue, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline ::StringW System::Collections::Generic::KeyValuePair_2<float_t,TValue>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<float_t,TValue>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline void System::Collections::Generic::KeyValuePair_2<float_t,TValue>::Deconstruct(ByRef<float_t>  key, ByRef<TValue>  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<float_t,TValue>>::get(),
                            "Deconstruct",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<TValue>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
// Ctor Parameters [CppParam { name: "key", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "value", ty: "TValue", modifiers: "", def_value: Some("csnull") }]
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::System::Collections::Generic::KeyValuePair_2<float_t,TValue>::KeyValuePair_2(float_t  key, TValue  value) noexcept : ::bs_hook::ValueTypeWrapper<0x10>() {this->key = key;
this->value = value;
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr void System::Collections::Generic::KeyValuePair_2<::Zenject::SignalSubscriptionId,TValue>::__set_key(::Zenject::SignalSubscriptionId  value)  {
::cordl_internals::setInstanceField<::Zenject::SignalSubscriptionId, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::Zenject::SignalSubscriptionId>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::Zenject::SignalSubscriptionId& System::Collections::Generic::KeyValuePair_2<::Zenject::SignalSubscriptionId,TValue>::__get_key()  {
return ::cordl_internals::getInstanceField<::Zenject::SignalSubscriptionId, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::Zenject::SignalSubscriptionId const& System::Collections::Generic::KeyValuePair_2<::Zenject::SignalSubscriptionId,TValue>::__get_key() const {
return ::cordl_internals::getInstanceField<::Zenject::SignalSubscriptionId, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr void System::Collections::Generic::KeyValuePair_2<::Zenject::SignalSubscriptionId,TValue>::__set_value(TValue  value)  {
::cordl_internals::setInstanceField<TValue, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<TValue>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr TValue& System::Collections::Generic::KeyValuePair_2<::Zenject::SignalSubscriptionId,TValue>::__get_value()  {
return ::cordl_internals::getInstanceField<TValue, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr TValue const& System::Collections::Generic::KeyValuePair_2<::Zenject::SignalSubscriptionId,TValue>::__get_value() const {
return ::cordl_internals::getInstanceField<TValue, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline void System::Collections::Generic::KeyValuePair_2<::Zenject::SignalSubscriptionId,TValue>::_ctor(::Zenject::SignalSubscriptionId  key, TValue  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::Zenject::SignalSubscriptionId,TValue>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::SignalSubscriptionId>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline ::Zenject::SignalSubscriptionId System::Collections::Generic::KeyValuePair_2<::Zenject::SignalSubscriptionId,TValue>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::Zenject::SignalSubscriptionId,TValue>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Zenject::SignalSubscriptionId, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline TValue System::Collections::Generic::KeyValuePair_2<::Zenject::SignalSubscriptionId,TValue>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::Zenject::SignalSubscriptionId,TValue>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TValue, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline ::StringW System::Collections::Generic::KeyValuePair_2<::Zenject::SignalSubscriptionId,TValue>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::Zenject::SignalSubscriptionId,TValue>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline void System::Collections::Generic::KeyValuePair_2<::Zenject::SignalSubscriptionId,TValue>::Deconstruct(ByRef<::Zenject::SignalSubscriptionId>  key, ByRef<TValue>  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::Zenject::SignalSubscriptionId,TValue>>::get(),
                            "Deconstruct",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Zenject::SignalSubscriptionId>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<TValue>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
// Ctor Parameters [CppParam { name: "key", ty: "::Zenject::SignalSubscriptionId", modifiers: "", def_value: Some("{}") }, CppParam { name: "value", ty: "TValue", modifiers: "", def_value: Some("csnull") }]
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::System::Collections::Generic::KeyValuePair_2<::Zenject::SignalSubscriptionId,TValue>::KeyValuePair_2(::Zenject::SignalSubscriptionId  key, TValue  value) noexcept : ::bs_hook::ValueTypeWrapper<0x20>() {this->key = key;
this->value = value;
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr void System::Collections::Generic::KeyValuePair_2<::UnityEngine::SceneManagement::Scene,TValue>::__set_key(::UnityEngine::SceneManagement::Scene  value)  {
::cordl_internals::setInstanceField<::UnityEngine::SceneManagement::Scene, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::SceneManagement::Scene>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::UnityEngine::SceneManagement::Scene& System::Collections::Generic::KeyValuePair_2<::UnityEngine::SceneManagement::Scene,TValue>::__get_key()  {
return ::cordl_internals::getInstanceField<::UnityEngine::SceneManagement::Scene, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::UnityEngine::SceneManagement::Scene const& System::Collections::Generic::KeyValuePair_2<::UnityEngine::SceneManagement::Scene,TValue>::__get_key() const {
return ::cordl_internals::getInstanceField<::UnityEngine::SceneManagement::Scene, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr void System::Collections::Generic::KeyValuePair_2<::UnityEngine::SceneManagement::Scene,TValue>::__set_value(TValue  value)  {
::cordl_internals::setInstanceField<TValue, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<TValue>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr TValue& System::Collections::Generic::KeyValuePair_2<::UnityEngine::SceneManagement::Scene,TValue>::__get_value()  {
return ::cordl_internals::getInstanceField<TValue, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr TValue const& System::Collections::Generic::KeyValuePair_2<::UnityEngine::SceneManagement::Scene,TValue>::__get_value() const {
return ::cordl_internals::getInstanceField<TValue, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline void System::Collections::Generic::KeyValuePair_2<::UnityEngine::SceneManagement::Scene,TValue>::_ctor(::UnityEngine::SceneManagement::Scene  key, TValue  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::SceneManagement::Scene,TValue>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SceneManagement::Scene>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline ::UnityEngine::SceneManagement::Scene System::Collections::Generic::KeyValuePair_2<::UnityEngine::SceneManagement::Scene,TValue>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::SceneManagement::Scene,TValue>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::SceneManagement::Scene, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline TValue System::Collections::Generic::KeyValuePair_2<::UnityEngine::SceneManagement::Scene,TValue>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::SceneManagement::Scene,TValue>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TValue, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline ::StringW System::Collections::Generic::KeyValuePair_2<::UnityEngine::SceneManagement::Scene,TValue>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::SceneManagement::Scene,TValue>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline void System::Collections::Generic::KeyValuePair_2<::UnityEngine::SceneManagement::Scene,TValue>::Deconstruct(ByRef<::UnityEngine::SceneManagement::Scene>  key, ByRef<TValue>  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::SceneManagement::Scene,TValue>>::get(),
                            "Deconstruct",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::SceneManagement::Scene>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<TValue>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
// Ctor Parameters [CppParam { name: "key", ty: "::UnityEngine::SceneManagement::Scene", modifiers: "", def_value: Some("{}") }, CppParam { name: "value", ty: "TValue", modifiers: "", def_value: Some("csnull") }]
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::System::Collections::Generic::KeyValuePair_2<::UnityEngine::SceneManagement::Scene,TValue>::KeyValuePair_2(::UnityEngine::SceneManagement::Scene  key, TValue  value) noexcept : ::bs_hook::ValueTypeWrapper<0x10>() {this->key = key;
this->value = value;
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr void System::Collections::Generic::KeyValuePair_2<::Newtonsoft::Json::Serialization::ResolverContractKey,TValue>::__set_key(::Newtonsoft::Json::Serialization::ResolverContractKey  value)  {
::cordl_internals::setInstanceField<::Newtonsoft::Json::Serialization::ResolverContractKey, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::Newtonsoft::Json::Serialization::ResolverContractKey>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::Newtonsoft::Json::Serialization::ResolverContractKey& System::Collections::Generic::KeyValuePair_2<::Newtonsoft::Json::Serialization::ResolverContractKey,TValue>::__get_key()  {
return ::cordl_internals::getInstanceField<::Newtonsoft::Json::Serialization::ResolverContractKey, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::Newtonsoft::Json::Serialization::ResolverContractKey const& System::Collections::Generic::KeyValuePair_2<::Newtonsoft::Json::Serialization::ResolverContractKey,TValue>::__get_key() const {
return ::cordl_internals::getInstanceField<::Newtonsoft::Json::Serialization::ResolverContractKey, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr void System::Collections::Generic::KeyValuePair_2<::Newtonsoft::Json::Serialization::ResolverContractKey,TValue>::__set_value(TValue  value)  {
::cordl_internals::setInstanceField<TValue, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<TValue>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr TValue& System::Collections::Generic::KeyValuePair_2<::Newtonsoft::Json::Serialization::ResolverContractKey,TValue>::__get_value()  {
return ::cordl_internals::getInstanceField<TValue, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr TValue const& System::Collections::Generic::KeyValuePair_2<::Newtonsoft::Json::Serialization::ResolverContractKey,TValue>::__get_value() const {
return ::cordl_internals::getInstanceField<TValue, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline void System::Collections::Generic::KeyValuePair_2<::Newtonsoft::Json::Serialization::ResolverContractKey,TValue>::_ctor(::Newtonsoft::Json::Serialization::ResolverContractKey  key, TValue  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::Newtonsoft::Json::Serialization::ResolverContractKey,TValue>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::ResolverContractKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline ::Newtonsoft::Json::Serialization::ResolverContractKey System::Collections::Generic::KeyValuePair_2<::Newtonsoft::Json::Serialization::ResolverContractKey,TValue>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::Newtonsoft::Json::Serialization::ResolverContractKey,TValue>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Serialization::ResolverContractKey, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline TValue System::Collections::Generic::KeyValuePair_2<::Newtonsoft::Json::Serialization::ResolverContractKey,TValue>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::Newtonsoft::Json::Serialization::ResolverContractKey,TValue>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TValue, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline ::StringW System::Collections::Generic::KeyValuePair_2<::Newtonsoft::Json::Serialization::ResolverContractKey,TValue>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::Newtonsoft::Json::Serialization::ResolverContractKey,TValue>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline void System::Collections::Generic::KeyValuePair_2<::Newtonsoft::Json::Serialization::ResolverContractKey,TValue>::Deconstruct(ByRef<::Newtonsoft::Json::Serialization::ResolverContractKey>  key, ByRef<TValue>  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::Newtonsoft::Json::Serialization::ResolverContractKey,TValue>>::get(),
                            "Deconstruct",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Newtonsoft::Json::Serialization::ResolverContractKey>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<TValue>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
// Ctor Parameters [CppParam { name: "key", ty: "::Newtonsoft::Json::Serialization::ResolverContractKey", modifiers: "", def_value: Some("{}") }, CppParam { name: "value", ty: "TValue", modifiers: "", def_value: Some("csnull") }]
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::System::Collections::Generic::KeyValuePair_2<::Newtonsoft::Json::Serialization::ResolverContractKey,TValue>::KeyValuePair_2(::Newtonsoft::Json::Serialization::ResolverContractKey  key, TValue  value) noexcept : ::bs_hook::ValueTypeWrapper<0x18>() {this->key = key;
this->value = value;
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
constexpr void System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::UIElements::__StyleComplexSelector__PseudoStateData>::__set_key(TKey  value)  {
::cordl_internals::setInstanceField<TKey, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<TKey>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
constexpr TKey& System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::UIElements::__StyleComplexSelector__PseudoStateData>::__get_key()  {
return ::cordl_internals::getInstanceField<TKey, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
constexpr TKey const& System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::UIElements::__StyleComplexSelector__PseudoStateData>::__get_key() const {
return ::cordl_internals::getInstanceField<TKey, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
constexpr void System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::UIElements::__StyleComplexSelector__PseudoStateData>::__set_value(::UnityEngine::UIElements::__StyleComplexSelector__PseudoStateData  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::__StyleComplexSelector__PseudoStateData, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::UIElements::__StyleComplexSelector__PseudoStateData>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
constexpr ::UnityEngine::UIElements::__StyleComplexSelector__PseudoStateData& System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::UIElements::__StyleComplexSelector__PseudoStateData>::__get_value()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::__StyleComplexSelector__PseudoStateData, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
constexpr ::UnityEngine::UIElements::__StyleComplexSelector__PseudoStateData const& System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::UIElements::__StyleComplexSelector__PseudoStateData>::__get_value() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::__StyleComplexSelector__PseudoStateData, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
inline void System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::UIElements::__StyleComplexSelector__PseudoStateData>::_ctor(TKey  key, ::UnityEngine::UIElements::__StyleComplexSelector__PseudoStateData  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::UIElements::__StyleComplexSelector__PseudoStateData>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::__StyleComplexSelector__PseudoStateData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
inline TKey System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::UIElements::__StyleComplexSelector__PseudoStateData>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::UIElements::__StyleComplexSelector__PseudoStateData>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TKey, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
inline ::UnityEngine::UIElements::__StyleComplexSelector__PseudoStateData System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::UIElements::__StyleComplexSelector__PseudoStateData>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::UIElements::__StyleComplexSelector__PseudoStateData>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::__StyleComplexSelector__PseudoStateData, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
inline ::StringW System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::UIElements::__StyleComplexSelector__PseudoStateData>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::UIElements::__StyleComplexSelector__PseudoStateData>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
inline void System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::UIElements::__StyleComplexSelector__PseudoStateData>::Deconstruct(ByRef<TKey>  key, ByRef<::UnityEngine::UIElements::__StyleComplexSelector__PseudoStateData>  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::UIElements::__StyleComplexSelector__PseudoStateData>>::get(),
                            "Deconstruct",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<TKey>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::UIElements::__StyleComplexSelector__PseudoStateData>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
// Ctor Parameters [CppParam { name: "key", ty: "TKey", modifiers: "", def_value: Some("csnull") }, CppParam { name: "value", ty: "::UnityEngine::UIElements::__StyleComplexSelector__PseudoStateData", modifiers: "", def_value: Some("{}") }]
template<::il2cpp_utils::il2cpp_reference_type TKey>
constexpr ::System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::UIElements::__StyleComplexSelector__PseudoStateData>::KeyValuePair_2(TKey  key, ::UnityEngine::UIElements::__StyleComplexSelector__PseudoStateData  value) noexcept : ::bs_hook::ValueTypeWrapper<0x10>() {this->key = key;
this->value = value;
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
constexpr void System::Collections::Generic::KeyValuePair_2<TKey,::GlobalNamespace::__SongPackMasksModel__LocalizedText>::__set_key(TKey  value)  {
::cordl_internals::setInstanceField<TKey, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<TKey>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
constexpr TKey& System::Collections::Generic::KeyValuePair_2<TKey,::GlobalNamespace::__SongPackMasksModel__LocalizedText>::__get_key()  {
return ::cordl_internals::getInstanceField<TKey, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
constexpr TKey const& System::Collections::Generic::KeyValuePair_2<TKey,::GlobalNamespace::__SongPackMasksModel__LocalizedText>::__get_key() const {
return ::cordl_internals::getInstanceField<TKey, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
constexpr void System::Collections::Generic::KeyValuePair_2<TKey,::GlobalNamespace::__SongPackMasksModel__LocalizedText>::__set_value(::GlobalNamespace::__SongPackMasksModel__LocalizedText  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__SongPackMasksModel__LocalizedText, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::GlobalNamespace::__SongPackMasksModel__LocalizedText>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
constexpr ::GlobalNamespace::__SongPackMasksModel__LocalizedText& System::Collections::Generic::KeyValuePair_2<TKey,::GlobalNamespace::__SongPackMasksModel__LocalizedText>::__get_value()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__SongPackMasksModel__LocalizedText, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
constexpr ::GlobalNamespace::__SongPackMasksModel__LocalizedText const& System::Collections::Generic::KeyValuePair_2<TKey,::GlobalNamespace::__SongPackMasksModel__LocalizedText>::__get_value() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__SongPackMasksModel__LocalizedText, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
inline void System::Collections::Generic::KeyValuePair_2<TKey,::GlobalNamespace::__SongPackMasksModel__LocalizedText>::_ctor(TKey  key, ::GlobalNamespace::__SongPackMasksModel__LocalizedText  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<TKey,::GlobalNamespace::__SongPackMasksModel__LocalizedText>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__SongPackMasksModel__LocalizedText>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
inline TKey System::Collections::Generic::KeyValuePair_2<TKey,::GlobalNamespace::__SongPackMasksModel__LocalizedText>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<TKey,::GlobalNamespace::__SongPackMasksModel__LocalizedText>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TKey, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
inline ::GlobalNamespace::__SongPackMasksModel__LocalizedText System::Collections::Generic::KeyValuePair_2<TKey,::GlobalNamespace::__SongPackMasksModel__LocalizedText>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<TKey,::GlobalNamespace::__SongPackMasksModel__LocalizedText>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__SongPackMasksModel__LocalizedText, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
inline ::StringW System::Collections::Generic::KeyValuePair_2<TKey,::GlobalNamespace::__SongPackMasksModel__LocalizedText>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<TKey,::GlobalNamespace::__SongPackMasksModel__LocalizedText>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
inline void System::Collections::Generic::KeyValuePair_2<TKey,::GlobalNamespace::__SongPackMasksModel__LocalizedText>::Deconstruct(ByRef<TKey>  key, ByRef<::GlobalNamespace::__SongPackMasksModel__LocalizedText>  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<TKey,::GlobalNamespace::__SongPackMasksModel__LocalizedText>>::get(),
                            "Deconstruct",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<TKey>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::__SongPackMasksModel__LocalizedText>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
// Ctor Parameters [CppParam { name: "key", ty: "TKey", modifiers: "", def_value: Some("csnull") }, CppParam { name: "value", ty: "::GlobalNamespace::__SongPackMasksModel__LocalizedText", modifiers: "", def_value: Some("{}") }]
template<::il2cpp_utils::il2cpp_reference_type TKey>
constexpr ::System::Collections::Generic::KeyValuePair_2<TKey,::GlobalNamespace::__SongPackMasksModel__LocalizedText>::KeyValuePair_2(TKey  key, ::GlobalNamespace::__SongPackMasksModel__LocalizedText  value) noexcept : ::bs_hook::ValueTypeWrapper<0x18>() {this->key = key;
this->value = value;
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
constexpr void System::Collections::Generic::KeyValuePair_2<TKey,::GlobalNamespace::__OVRPassthroughLayer__PassthroughMeshInstance>::__set_key(TKey  value)  {
::cordl_internals::setInstanceField<TKey, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<TKey>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
constexpr TKey& System::Collections::Generic::KeyValuePair_2<TKey,::GlobalNamespace::__OVRPassthroughLayer__PassthroughMeshInstance>::__get_key()  {
return ::cordl_internals::getInstanceField<TKey, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
constexpr TKey const& System::Collections::Generic::KeyValuePair_2<TKey,::GlobalNamespace::__OVRPassthroughLayer__PassthroughMeshInstance>::__get_key() const {
return ::cordl_internals::getInstanceField<TKey, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
constexpr void System::Collections::Generic::KeyValuePair_2<TKey,::GlobalNamespace::__OVRPassthroughLayer__PassthroughMeshInstance>::__set_value(::GlobalNamespace::__OVRPassthroughLayer__PassthroughMeshInstance  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__OVRPassthroughLayer__PassthroughMeshInstance, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::GlobalNamespace::__OVRPassthroughLayer__PassthroughMeshInstance>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
constexpr ::GlobalNamespace::__OVRPassthroughLayer__PassthroughMeshInstance& System::Collections::Generic::KeyValuePair_2<TKey,::GlobalNamespace::__OVRPassthroughLayer__PassthroughMeshInstance>::__get_value()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__OVRPassthroughLayer__PassthroughMeshInstance, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
constexpr ::GlobalNamespace::__OVRPassthroughLayer__PassthroughMeshInstance const& System::Collections::Generic::KeyValuePair_2<TKey,::GlobalNamespace::__OVRPassthroughLayer__PassthroughMeshInstance>::__get_value() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__OVRPassthroughLayer__PassthroughMeshInstance, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
inline void System::Collections::Generic::KeyValuePair_2<TKey,::GlobalNamespace::__OVRPassthroughLayer__PassthroughMeshInstance>::_ctor(TKey  key, ::GlobalNamespace::__OVRPassthroughLayer__PassthroughMeshInstance  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<TKey,::GlobalNamespace::__OVRPassthroughLayer__PassthroughMeshInstance>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRPassthroughLayer__PassthroughMeshInstance>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
inline TKey System::Collections::Generic::KeyValuePair_2<TKey,::GlobalNamespace::__OVRPassthroughLayer__PassthroughMeshInstance>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<TKey,::GlobalNamespace::__OVRPassthroughLayer__PassthroughMeshInstance>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TKey, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
inline ::GlobalNamespace::__OVRPassthroughLayer__PassthroughMeshInstance System::Collections::Generic::KeyValuePair_2<TKey,::GlobalNamespace::__OVRPassthroughLayer__PassthroughMeshInstance>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<TKey,::GlobalNamespace::__OVRPassthroughLayer__PassthroughMeshInstance>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__OVRPassthroughLayer__PassthroughMeshInstance, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
inline ::StringW System::Collections::Generic::KeyValuePair_2<TKey,::GlobalNamespace::__OVRPassthroughLayer__PassthroughMeshInstance>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<TKey,::GlobalNamespace::__OVRPassthroughLayer__PassthroughMeshInstance>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
inline void System::Collections::Generic::KeyValuePair_2<TKey,::GlobalNamespace::__OVRPassthroughLayer__PassthroughMeshInstance>::Deconstruct(ByRef<TKey>  key, ByRef<::GlobalNamespace::__OVRPassthroughLayer__PassthroughMeshInstance>  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<TKey,::GlobalNamespace::__OVRPassthroughLayer__PassthroughMeshInstance>>::get(),
                            "Deconstruct",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<TKey>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::__OVRPassthroughLayer__PassthroughMeshInstance>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
// Ctor Parameters [CppParam { name: "key", ty: "TKey", modifiers: "", def_value: Some("csnull") }, CppParam { name: "value", ty: "::GlobalNamespace::__OVRPassthroughLayer__PassthroughMeshInstance", modifiers: "", def_value: Some("{}") }]
template<::il2cpp_utils::il2cpp_reference_type TKey>
constexpr ::System::Collections::Generic::KeyValuePair_2<TKey,::GlobalNamespace::__OVRPassthroughLayer__PassthroughMeshInstance>::KeyValuePair_2(TKey  key, ::GlobalNamespace::__OVRPassthroughLayer__PassthroughMeshInstance  value) noexcept : ::bs_hook::ValueTypeWrapper<0x60>() {this->key = key;
this->value = value;
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
constexpr void System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue>::__set_key(TKey  value)  {
::cordl_internals::setInstanceField<TKey, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<TKey>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
constexpr TKey& System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue>::__get_key()  {
return ::cordl_internals::getInstanceField<TKey, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
constexpr TKey const& System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue>::__get_key() const {
return ::cordl_internals::getInstanceField<TKey, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
constexpr void System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue>::__set_value(::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue  value)  {
::cordl_internals::setInstanceField<::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
constexpr ::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue& System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue>::__get_value()  {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
constexpr ::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue const& System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue>::__get_value() const {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
inline void System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue>::_ctor(TKey  key, ::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
inline TKey System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TKey, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
inline ::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
inline ::StringW System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
inline void System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue>::Deconstruct(ByRef<TKey>  key, ByRef<::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue>  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue>>::get(),
                            "Deconstruct",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<TKey>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
// Ctor Parameters [CppParam { name: "key", ty: "TKey", modifiers: "", def_value: Some("csnull") }, CppParam { name: "value", ty: "::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue", modifiers: "", def_value: Some("{}") }]
template<::il2cpp_utils::il2cpp_reference_type TKey>
constexpr ::System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue>::KeyValuePair_2(TKey  key, ::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue  value) noexcept : ::bs_hook::ValueTypeWrapper<0x50>() {this->key = key;
this->value = value;
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
constexpr void System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::InputSystem::UI::__InputSystemUIInputModule__InputActionReferenceState>::__set_key(TKey  value)  {
::cordl_internals::setInstanceField<TKey, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<TKey>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
constexpr TKey& System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::InputSystem::UI::__InputSystemUIInputModule__InputActionReferenceState>::__get_key()  {
return ::cordl_internals::getInstanceField<TKey, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
constexpr TKey const& System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::InputSystem::UI::__InputSystemUIInputModule__InputActionReferenceState>::__get_key() const {
return ::cordl_internals::getInstanceField<TKey, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
constexpr void System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::InputSystem::UI::__InputSystemUIInputModule__InputActionReferenceState>::__set_value(::UnityEngine::InputSystem::UI::__InputSystemUIInputModule__InputActionReferenceState  value)  {
::cordl_internals::setInstanceField<::UnityEngine::InputSystem::UI::__InputSystemUIInputModule__InputActionReferenceState, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::InputSystem::UI::__InputSystemUIInputModule__InputActionReferenceState>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
constexpr ::UnityEngine::InputSystem::UI::__InputSystemUIInputModule__InputActionReferenceState& System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::InputSystem::UI::__InputSystemUIInputModule__InputActionReferenceState>::__get_value()  {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::UI::__InputSystemUIInputModule__InputActionReferenceState, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
constexpr ::UnityEngine::InputSystem::UI::__InputSystemUIInputModule__InputActionReferenceState const& System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::InputSystem::UI::__InputSystemUIInputModule__InputActionReferenceState>::__get_value() const {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::UI::__InputSystemUIInputModule__InputActionReferenceState, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
inline void System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::InputSystem::UI::__InputSystemUIInputModule__InputActionReferenceState>::_ctor(TKey  key, ::UnityEngine::InputSystem::UI::__InputSystemUIInputModule__InputActionReferenceState  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::InputSystem::UI::__InputSystemUIInputModule__InputActionReferenceState>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::UI::__InputSystemUIInputModule__InputActionReferenceState>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
inline TKey System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::InputSystem::UI::__InputSystemUIInputModule__InputActionReferenceState>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::InputSystem::UI::__InputSystemUIInputModule__InputActionReferenceState>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TKey, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
inline ::UnityEngine::InputSystem::UI::__InputSystemUIInputModule__InputActionReferenceState System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::InputSystem::UI::__InputSystemUIInputModule__InputActionReferenceState>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::InputSystem::UI::__InputSystemUIInputModule__InputActionReferenceState>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::UI::__InputSystemUIInputModule__InputActionReferenceState, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
inline ::StringW System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::InputSystem::UI::__InputSystemUIInputModule__InputActionReferenceState>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::InputSystem::UI::__InputSystemUIInputModule__InputActionReferenceState>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
inline void System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::InputSystem::UI::__InputSystemUIInputModule__InputActionReferenceState>::Deconstruct(ByRef<TKey>  key, ByRef<::UnityEngine::InputSystem::UI::__InputSystemUIInputModule__InputActionReferenceState>  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::InputSystem::UI::__InputSystemUIInputModule__InputActionReferenceState>>::get(),
                            "Deconstruct",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<TKey>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::UI::__InputSystemUIInputModule__InputActionReferenceState>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
// Ctor Parameters [CppParam { name: "key", ty: "TKey", modifiers: "", def_value: Some("csnull") }, CppParam { name: "value", ty: "::UnityEngine::InputSystem::UI::__InputSystemUIInputModule__InputActionReferenceState", modifiers: "", def_value: Some("{}") }]
template<::il2cpp_utils::il2cpp_reference_type TKey>
constexpr ::System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::InputSystem::UI::__InputSystemUIInputModule__InputActionReferenceState>::KeyValuePair_2(TKey  key, ::UnityEngine::InputSystem::UI::__InputSystemUIInputModule__InputActionReferenceState  value) noexcept : ::bs_hook::ValueTypeWrapper<0x10>() {this->key = key;
this->value = value;
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
constexpr void System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>::__set_key(TKey  value)  {
::cordl_internals::setInstanceField<TKey, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<TKey>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
constexpr TKey& System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>::__get_key()  {
return ::cordl_internals::getInstanceField<TKey, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
constexpr TKey const& System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>::__get_key() const {
return ::cordl_internals::getInstanceField<TKey, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
constexpr void System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>::__set_value(::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem  value)  {
::cordl_internals::setInstanceField<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
constexpr ::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem& System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>::__get_value()  {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
constexpr ::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem const& System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>::__get_value() const {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
inline void System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>::_ctor(TKey  key, ::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
inline TKey System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TKey, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
inline ::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
inline ::StringW System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
inline void System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>::Deconstruct(ByRef<TKey>  key, ByRef<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>>::get(),
                            "Deconstruct",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<TKey>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
// Ctor Parameters [CppParam { name: "key", ty: "TKey", modifiers: "", def_value: Some("csnull") }, CppParam { name: "value", ty: "::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem", modifiers: "", def_value: Some("{}") }]
template<::il2cpp_utils::il2cpp_reference_type TKey>
constexpr ::System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>::KeyValuePair_2(TKey  key, ::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem  value) noexcept : ::bs_hook::ValueTypeWrapper<0xd8>() {this->key = key;
this->value = value;
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
constexpr void System::Collections::Generic::KeyValuePair_2<TKey,::GlobalNamespace::__BeatmapLevelDataLoader__AssetBundleLevelInfo>::__set_key(TKey  value)  {
::cordl_internals::setInstanceField<TKey, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<TKey>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
constexpr TKey& System::Collections::Generic::KeyValuePair_2<TKey,::GlobalNamespace::__BeatmapLevelDataLoader__AssetBundleLevelInfo>::__get_key()  {
return ::cordl_internals::getInstanceField<TKey, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
constexpr TKey const& System::Collections::Generic::KeyValuePair_2<TKey,::GlobalNamespace::__BeatmapLevelDataLoader__AssetBundleLevelInfo>::__get_key() const {
return ::cordl_internals::getInstanceField<TKey, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
constexpr void System::Collections::Generic::KeyValuePair_2<TKey,::GlobalNamespace::__BeatmapLevelDataLoader__AssetBundleLevelInfo>::__set_value(::GlobalNamespace::__BeatmapLevelDataLoader__AssetBundleLevelInfo  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__BeatmapLevelDataLoader__AssetBundleLevelInfo, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::GlobalNamespace::__BeatmapLevelDataLoader__AssetBundleLevelInfo>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
constexpr ::GlobalNamespace::__BeatmapLevelDataLoader__AssetBundleLevelInfo& System::Collections::Generic::KeyValuePair_2<TKey,::GlobalNamespace::__BeatmapLevelDataLoader__AssetBundleLevelInfo>::__get_value()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__BeatmapLevelDataLoader__AssetBundleLevelInfo, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
constexpr ::GlobalNamespace::__BeatmapLevelDataLoader__AssetBundleLevelInfo const& System::Collections::Generic::KeyValuePair_2<TKey,::GlobalNamespace::__BeatmapLevelDataLoader__AssetBundleLevelInfo>::__get_value() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__BeatmapLevelDataLoader__AssetBundleLevelInfo, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
inline void System::Collections::Generic::KeyValuePair_2<TKey,::GlobalNamespace::__BeatmapLevelDataLoader__AssetBundleLevelInfo>::_ctor(TKey  key, ::GlobalNamespace::__BeatmapLevelDataLoader__AssetBundleLevelInfo  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<TKey,::GlobalNamespace::__BeatmapLevelDataLoader__AssetBundleLevelInfo>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__BeatmapLevelDataLoader__AssetBundleLevelInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
inline TKey System::Collections::Generic::KeyValuePair_2<TKey,::GlobalNamespace::__BeatmapLevelDataLoader__AssetBundleLevelInfo>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<TKey,::GlobalNamespace::__BeatmapLevelDataLoader__AssetBundleLevelInfo>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TKey, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
inline ::GlobalNamespace::__BeatmapLevelDataLoader__AssetBundleLevelInfo System::Collections::Generic::KeyValuePair_2<TKey,::GlobalNamespace::__BeatmapLevelDataLoader__AssetBundleLevelInfo>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<TKey,::GlobalNamespace::__BeatmapLevelDataLoader__AssetBundleLevelInfo>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__BeatmapLevelDataLoader__AssetBundleLevelInfo, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
inline ::StringW System::Collections::Generic::KeyValuePair_2<TKey,::GlobalNamespace::__BeatmapLevelDataLoader__AssetBundleLevelInfo>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<TKey,::GlobalNamespace::__BeatmapLevelDataLoader__AssetBundleLevelInfo>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
inline void System::Collections::Generic::KeyValuePair_2<TKey,::GlobalNamespace::__BeatmapLevelDataLoader__AssetBundleLevelInfo>::Deconstruct(ByRef<TKey>  key, ByRef<::GlobalNamespace::__BeatmapLevelDataLoader__AssetBundleLevelInfo>  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<TKey,::GlobalNamespace::__BeatmapLevelDataLoader__AssetBundleLevelInfo>>::get(),
                            "Deconstruct",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<TKey>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::__BeatmapLevelDataLoader__AssetBundleLevelInfo>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
// Ctor Parameters [CppParam { name: "key", ty: "TKey", modifiers: "", def_value: Some("csnull") }, CppParam { name: "value", ty: "::GlobalNamespace::__BeatmapLevelDataLoader__AssetBundleLevelInfo", modifiers: "", def_value: Some("{}") }]
template<::il2cpp_utils::il2cpp_reference_type TKey>
constexpr ::System::Collections::Generic::KeyValuePair_2<TKey,::GlobalNamespace::__BeatmapLevelDataLoader__AssetBundleLevelInfo>::KeyValuePair_2(TKey  key, ::GlobalNamespace::__BeatmapLevelDataLoader__AssetBundleLevelInfo  value) noexcept : ::bs_hook::ValueTypeWrapper<0x20>() {this->key = key;
this->value = value;
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
constexpr void System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::Vector2>::__set_key(TKey  value)  {
::cordl_internals::setInstanceField<TKey, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<TKey>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
constexpr TKey& System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::Vector2>::__get_key()  {
return ::cordl_internals::getInstanceField<TKey, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
constexpr TKey const& System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::Vector2>::__get_key() const {
return ::cordl_internals::getInstanceField<TKey, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
constexpr void System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::Vector2>::__set_value(::UnityEngine::Vector2  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector2, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::Vector2>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
constexpr ::UnityEngine::Vector2& System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::Vector2>::__get_value()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector2, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
constexpr ::UnityEngine::Vector2 const& System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::Vector2>::__get_value() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector2, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
inline void System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::Vector2>::_ctor(TKey  key, ::UnityEngine::Vector2  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::Vector2>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
inline TKey System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::Vector2>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::Vector2>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TKey, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
inline ::UnityEngine::Vector2 System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::Vector2>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::Vector2>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
inline ::StringW System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::Vector2>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::Vector2>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
inline void System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::Vector2>::Deconstruct(ByRef<TKey>  key, ByRef<::UnityEngine::Vector2>  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::Vector2>>::get(),
                            "Deconstruct",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<TKey>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector2>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
// Ctor Parameters [CppParam { name: "key", ty: "TKey", modifiers: "", def_value: Some("csnull") }, CppParam { name: "value", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }]
template<::il2cpp_utils::il2cpp_reference_type TKey>
constexpr ::System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::Vector2>::KeyValuePair_2(TKey  key, ::UnityEngine::Vector2  value) noexcept : ::bs_hook::ValueTypeWrapper<0x10>() {this->key = key;
this->value = value;
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
constexpr void System::Collections::Generic::KeyValuePair_2<TKey,uint32_t>::__set_key(TKey  value)  {
::cordl_internals::setInstanceField<TKey, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<TKey>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
constexpr TKey& System::Collections::Generic::KeyValuePair_2<TKey,uint32_t>::__get_key()  {
return ::cordl_internals::getInstanceField<TKey, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
constexpr TKey const& System::Collections::Generic::KeyValuePair_2<TKey,uint32_t>::__get_key() const {
return ::cordl_internals::getInstanceField<TKey, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
constexpr void System::Collections::Generic::KeyValuePair_2<TKey,uint32_t>::__set_value(uint32_t  value)  {
::cordl_internals::setInstanceField<uint32_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<uint32_t>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
constexpr uint32_t& System::Collections::Generic::KeyValuePair_2<TKey,uint32_t>::__get_value()  {
return ::cordl_internals::getInstanceField<uint32_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
constexpr uint32_t const& System::Collections::Generic::KeyValuePair_2<TKey,uint32_t>::__get_value() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
inline void System::Collections::Generic::KeyValuePair_2<TKey,uint32_t>::_ctor(TKey  key, uint32_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<TKey,uint32_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
inline TKey System::Collections::Generic::KeyValuePair_2<TKey,uint32_t>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<TKey,uint32_t>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TKey, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
inline uint32_t System::Collections::Generic::KeyValuePair_2<TKey,uint32_t>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<TKey,uint32_t>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
inline ::StringW System::Collections::Generic::KeyValuePair_2<TKey,uint32_t>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<TKey,uint32_t>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
inline void System::Collections::Generic::KeyValuePair_2<TKey,uint32_t>::Deconstruct(ByRef<TKey>  key, ByRef<uint32_t>  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<TKey,uint32_t>>::get(),
                            "Deconstruct",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<TKey>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
// Ctor Parameters [CppParam { name: "key", ty: "TKey", modifiers: "", def_value: Some("csnull") }, CppParam { name: "value", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
template<::il2cpp_utils::il2cpp_reference_type TKey>
constexpr ::System::Collections::Generic::KeyValuePair_2<TKey,uint32_t>::KeyValuePair_2(TKey  key, uint32_t  value) noexcept : ::bs_hook::ValueTypeWrapper<0x10>() {this->key = key;
this->value = value;
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
constexpr void System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::UIElements::TextureId>::__set_key(TKey  value)  {
::cordl_internals::setInstanceField<TKey, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<TKey>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
constexpr TKey& System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::UIElements::TextureId>::__get_key()  {
return ::cordl_internals::getInstanceField<TKey, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
constexpr TKey const& System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::UIElements::TextureId>::__get_key() const {
return ::cordl_internals::getInstanceField<TKey, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
constexpr void System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::UIElements::TextureId>::__set_value(::UnityEngine::UIElements::TextureId  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::TextureId, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::UIElements::TextureId>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
constexpr ::UnityEngine::UIElements::TextureId& System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::UIElements::TextureId>::__get_value()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::TextureId, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
constexpr ::UnityEngine::UIElements::TextureId const& System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::UIElements::TextureId>::__get_value() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::TextureId, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
inline void System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::UIElements::TextureId>::_ctor(TKey  key, ::UnityEngine::UIElements::TextureId  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::UIElements::TextureId>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::TextureId>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
inline TKey System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::UIElements::TextureId>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::UIElements::TextureId>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TKey, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
inline ::UnityEngine::UIElements::TextureId System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::UIElements::TextureId>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::UIElements::TextureId>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::TextureId, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
inline ::StringW System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::UIElements::TextureId>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::UIElements::TextureId>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
inline void System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::UIElements::TextureId>::Deconstruct(ByRef<TKey>  key, ByRef<::UnityEngine::UIElements::TextureId>  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::UIElements::TextureId>>::get(),
                            "Deconstruct",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<TKey>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::UIElements::TextureId>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
// Ctor Parameters [CppParam { name: "key", ty: "TKey", modifiers: "", def_value: Some("csnull") }, CppParam { name: "value", ty: "::UnityEngine::UIElements::TextureId", modifiers: "", def_value: Some("{}") }]
template<::il2cpp_utils::il2cpp_reference_type TKey>
constexpr ::System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::UIElements::TextureId>::KeyValuePair_2(TKey  key, ::UnityEngine::UIElements::TextureId  value) noexcept : ::bs_hook::ValueTypeWrapper<0x10>() {this->key = key;
this->value = value;
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
constexpr void System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::UIElements::StyleSheets::StylePropertyValue>::__set_key(TKey  value)  {
::cordl_internals::setInstanceField<TKey, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<TKey>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
constexpr TKey& System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::UIElements::StyleSheets::StylePropertyValue>::__get_key()  {
return ::cordl_internals::getInstanceField<TKey, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
constexpr TKey const& System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::UIElements::StyleSheets::StylePropertyValue>::__get_key() const {
return ::cordl_internals::getInstanceField<TKey, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
constexpr void System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::UIElements::StyleSheets::StylePropertyValue>::__set_value(::UnityEngine::UIElements::StyleSheets::StylePropertyValue  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::StyleSheets::StylePropertyValue, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::UIElements::StyleSheets::StylePropertyValue>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
constexpr ::UnityEngine::UIElements::StyleSheets::StylePropertyValue& System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::UIElements::StyleSheets::StylePropertyValue>::__get_value()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::StyleSheets::StylePropertyValue, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
constexpr ::UnityEngine::UIElements::StyleSheets::StylePropertyValue const& System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::UIElements::StyleSheets::StylePropertyValue>::__get_value() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::StyleSheets::StylePropertyValue, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
inline void System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::UIElements::StyleSheets::StylePropertyValue>::_ctor(TKey  key, ::UnityEngine::UIElements::StyleSheets::StylePropertyValue  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::UIElements::StyleSheets::StylePropertyValue>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::StylePropertyValue>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
inline TKey System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::UIElements::StyleSheets::StylePropertyValue>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::UIElements::StyleSheets::StylePropertyValue>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TKey, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
inline ::UnityEngine::UIElements::StyleSheets::StylePropertyValue System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::UIElements::StyleSheets::StylePropertyValue>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::UIElements::StyleSheets::StylePropertyValue>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleSheets::StylePropertyValue, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
inline ::StringW System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::UIElements::StyleSheets::StylePropertyValue>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::UIElements::StyleSheets::StylePropertyValue>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
inline void System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::UIElements::StyleSheets::StylePropertyValue>::Deconstruct(ByRef<TKey>  key, ByRef<::UnityEngine::UIElements::StyleSheets::StylePropertyValue>  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::UIElements::StyleSheets::StylePropertyValue>>::get(),
                            "Deconstruct",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<TKey>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::UIElements::StyleSheets::StylePropertyValue>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
// Ctor Parameters [CppParam { name: "key", ty: "TKey", modifiers: "", def_value: Some("csnull") }, CppParam { name: "value", ty: "::UnityEngine::UIElements::StyleSheets::StylePropertyValue", modifiers: "", def_value: Some("{}") }]
template<::il2cpp_utils::il2cpp_reference_type TKey>
constexpr ::System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::UIElements::StyleSheets::StylePropertyValue>::KeyValuePair_2(TKey  key, ::UnityEngine::UIElements::StyleSheets::StylePropertyValue  value) noexcept : ::bs_hook::ValueTypeWrapper<0x18>() {this->key = key;
this->value = value;
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
constexpr void System::Collections::Generic::KeyValuePair_2<TKey,::GlobalNamespace::SongPackMask>::__set_key(TKey  value)  {
::cordl_internals::setInstanceField<TKey, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<TKey>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
constexpr TKey& System::Collections::Generic::KeyValuePair_2<TKey,::GlobalNamespace::SongPackMask>::__get_key()  {
return ::cordl_internals::getInstanceField<TKey, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
constexpr TKey const& System::Collections::Generic::KeyValuePair_2<TKey,::GlobalNamespace::SongPackMask>::__get_key() const {
return ::cordl_internals::getInstanceField<TKey, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
constexpr void System::Collections::Generic::KeyValuePair_2<TKey,::GlobalNamespace::SongPackMask>::__set_value(::GlobalNamespace::SongPackMask  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::SongPackMask, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::GlobalNamespace::SongPackMask>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
constexpr ::GlobalNamespace::SongPackMask& System::Collections::Generic::KeyValuePair_2<TKey,::GlobalNamespace::SongPackMask>::__get_value()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::SongPackMask, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
constexpr ::GlobalNamespace::SongPackMask const& System::Collections::Generic::KeyValuePair_2<TKey,::GlobalNamespace::SongPackMask>::__get_value() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::SongPackMask, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
inline void System::Collections::Generic::KeyValuePair_2<TKey,::GlobalNamespace::SongPackMask>::_ctor(TKey  key, ::GlobalNamespace::SongPackMask  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<TKey,::GlobalNamespace::SongPackMask>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SongPackMask>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
inline TKey System::Collections::Generic::KeyValuePair_2<TKey,::GlobalNamespace::SongPackMask>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<TKey,::GlobalNamespace::SongPackMask>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TKey, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
inline ::GlobalNamespace::SongPackMask System::Collections::Generic::KeyValuePair_2<TKey,::GlobalNamespace::SongPackMask>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<TKey,::GlobalNamespace::SongPackMask>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SongPackMask, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
inline ::StringW System::Collections::Generic::KeyValuePair_2<TKey,::GlobalNamespace::SongPackMask>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<TKey,::GlobalNamespace::SongPackMask>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
inline void System::Collections::Generic::KeyValuePair_2<TKey,::GlobalNamespace::SongPackMask>::Deconstruct(ByRef<TKey>  key, ByRef<::GlobalNamespace::SongPackMask>  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<TKey,::GlobalNamespace::SongPackMask>>::get(),
                            "Deconstruct",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<TKey>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::SongPackMask>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
// Ctor Parameters [CppParam { name: "key", ty: "TKey", modifiers: "", def_value: Some("csnull") }, CppParam { name: "value", ty: "::GlobalNamespace::SongPackMask", modifiers: "", def_value: Some("{}") }]
template<::il2cpp_utils::il2cpp_reference_type TKey>
constexpr ::System::Collections::Generic::KeyValuePair_2<TKey,::GlobalNamespace::SongPackMask>::KeyValuePair_2(TKey  key, ::GlobalNamespace::SongPackMask  value) noexcept : ::bs_hook::ValueTypeWrapper<0x28>() {this->key = key;
this->value = value;
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
constexpr void System::Collections::Generic::KeyValuePair_2<TKey,float_t>::__set_key(TKey  value)  {
::cordl_internals::setInstanceField<TKey, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<TKey>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
constexpr TKey& System::Collections::Generic::KeyValuePair_2<TKey,float_t>::__get_key()  {
return ::cordl_internals::getInstanceField<TKey, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
constexpr TKey const& System::Collections::Generic::KeyValuePair_2<TKey,float_t>::__get_key() const {
return ::cordl_internals::getInstanceField<TKey, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
constexpr void System::Collections::Generic::KeyValuePair_2<TKey,float_t>::__set_value(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<float_t>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
constexpr float_t& System::Collections::Generic::KeyValuePair_2<TKey,float_t>::__get_value()  {
return ::cordl_internals::getInstanceField<float_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
constexpr float_t const& System::Collections::Generic::KeyValuePair_2<TKey,float_t>::__get_value() const {
return ::cordl_internals::getInstanceField<float_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
inline void System::Collections::Generic::KeyValuePair_2<TKey,float_t>::_ctor(TKey  key, float_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<TKey,float_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
inline TKey System::Collections::Generic::KeyValuePair_2<TKey,float_t>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<TKey,float_t>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TKey, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
inline float_t System::Collections::Generic::KeyValuePair_2<TKey,float_t>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<TKey,float_t>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
inline ::StringW System::Collections::Generic::KeyValuePair_2<TKey,float_t>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<TKey,float_t>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
inline void System::Collections::Generic::KeyValuePair_2<TKey,float_t>::Deconstruct(ByRef<TKey>  key, ByRef<float_t>  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<TKey,float_t>>::get(),
                            "Deconstruct",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<TKey>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
// Ctor Parameters [CppParam { name: "key", ty: "TKey", modifiers: "", def_value: Some("csnull") }, CppParam { name: "value", ty: "float_t", modifiers: "", def_value: Some("{}") }]
template<::il2cpp_utils::il2cpp_reference_type TKey>
constexpr ::System::Collections::Generic::KeyValuePair_2<TKey,float_t>::KeyValuePair_2(TKey  key, float_t  value) noexcept : ::bs_hook::ValueTypeWrapper<0x10>() {this->key = key;
this->value = value;
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
constexpr void System::Collections::Generic::KeyValuePair_2<TKey,::System::Resources::ResourceLocator>::__set_key(TKey  value)  {
::cordl_internals::setInstanceField<TKey, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<TKey>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
constexpr TKey& System::Collections::Generic::KeyValuePair_2<TKey,::System::Resources::ResourceLocator>::__get_key()  {
return ::cordl_internals::getInstanceField<TKey, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
constexpr TKey const& System::Collections::Generic::KeyValuePair_2<TKey,::System::Resources::ResourceLocator>::__get_key() const {
return ::cordl_internals::getInstanceField<TKey, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
constexpr void System::Collections::Generic::KeyValuePair_2<TKey,::System::Resources::ResourceLocator>::__set_value(::System::Resources::ResourceLocator  value)  {
::cordl_internals::setInstanceField<::System::Resources::ResourceLocator, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Resources::ResourceLocator>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
constexpr ::System::Resources::ResourceLocator& System::Collections::Generic::KeyValuePair_2<TKey,::System::Resources::ResourceLocator>::__get_value()  {
return ::cordl_internals::getInstanceField<::System::Resources::ResourceLocator, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
constexpr ::System::Resources::ResourceLocator const& System::Collections::Generic::KeyValuePair_2<TKey,::System::Resources::ResourceLocator>::__get_value() const {
return ::cordl_internals::getInstanceField<::System::Resources::ResourceLocator, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
inline void System::Collections::Generic::KeyValuePair_2<TKey,::System::Resources::ResourceLocator>::_ctor(TKey  key, ::System::Resources::ResourceLocator  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<TKey,::System::Resources::ResourceLocator>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Resources::ResourceLocator>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
inline TKey System::Collections::Generic::KeyValuePair_2<TKey,::System::Resources::ResourceLocator>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<TKey,::System::Resources::ResourceLocator>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TKey, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
inline ::System::Resources::ResourceLocator System::Collections::Generic::KeyValuePair_2<TKey,::System::Resources::ResourceLocator>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<TKey,::System::Resources::ResourceLocator>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Resources::ResourceLocator, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
inline ::StringW System::Collections::Generic::KeyValuePair_2<TKey,::System::Resources::ResourceLocator>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<TKey,::System::Resources::ResourceLocator>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
inline void System::Collections::Generic::KeyValuePair_2<TKey,::System::Resources::ResourceLocator>::Deconstruct(ByRef<TKey>  key, ByRef<::System::Resources::ResourceLocator>  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<TKey,::System::Resources::ResourceLocator>>::get(),
                            "Deconstruct",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<TKey>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Resources::ResourceLocator>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
// Ctor Parameters [CppParam { name: "key", ty: "TKey", modifiers: "", def_value: Some("csnull") }, CppParam { name: "value", ty: "::System::Resources::ResourceLocator", modifiers: "", def_value: Some("{}") }]
template<::il2cpp_utils::il2cpp_reference_type TKey>
constexpr ::System::Collections::Generic::KeyValuePair_2<TKey,::System::Resources::ResourceLocator>::KeyValuePair_2(TKey  key, ::System::Resources::ResourceLocator  value) noexcept : ::bs_hook::ValueTypeWrapper<0x18>() {this->key = key;
this->value = value;
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
constexpr void System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::Playables::Playable>::__set_key(TKey  value)  {
::cordl_internals::setInstanceField<TKey, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<TKey>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
constexpr TKey& System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::Playables::Playable>::__get_key()  {
return ::cordl_internals::getInstanceField<TKey, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
constexpr TKey const& System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::Playables::Playable>::__get_key() const {
return ::cordl_internals::getInstanceField<TKey, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
constexpr void System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::Playables::Playable>::__set_value(::UnityEngine::Playables::Playable  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Playables::Playable, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::Playables::Playable>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
constexpr ::UnityEngine::Playables::Playable& System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::Playables::Playable>::__get_value()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Playables::Playable, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
constexpr ::UnityEngine::Playables::Playable const& System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::Playables::Playable>::__get_value() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Playables::Playable, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
inline void System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::Playables::Playable>::_ctor(TKey  key, ::UnityEngine::Playables::Playable  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::Playables::Playable>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::Playable>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
inline TKey System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::Playables::Playable>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::Playables::Playable>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TKey, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
inline ::UnityEngine::Playables::Playable System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::Playables::Playable>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::Playables::Playable>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::Playable, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
inline ::StringW System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::Playables::Playable>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::Playables::Playable>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
inline void System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::Playables::Playable>::Deconstruct(ByRef<TKey>  key, ByRef<::UnityEngine::Playables::Playable>  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::Playables::Playable>>::get(),
                            "Deconstruct",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<TKey>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Playables::Playable>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
// Ctor Parameters [CppParam { name: "key", ty: "TKey", modifiers: "", def_value: Some("csnull") }, CppParam { name: "value", ty: "::UnityEngine::Playables::Playable", modifiers: "", def_value: Some("{}") }]
template<::il2cpp_utils::il2cpp_reference_type TKey>
constexpr ::System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::Playables::Playable>::KeyValuePair_2(TKey  key, ::UnityEngine::Playables::Playable  value) noexcept : ::bs_hook::ValueTypeWrapper<0x18>() {this->key = key;
this->value = value;
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
constexpr void System::Collections::Generic::KeyValuePair_2<TKey,int64_t>::__set_key(TKey  value)  {
::cordl_internals::setInstanceField<TKey, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<TKey>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
constexpr TKey& System::Collections::Generic::KeyValuePair_2<TKey,int64_t>::__get_key()  {
return ::cordl_internals::getInstanceField<TKey, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
constexpr TKey const& System::Collections::Generic::KeyValuePair_2<TKey,int64_t>::__get_key() const {
return ::cordl_internals::getInstanceField<TKey, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
constexpr void System::Collections::Generic::KeyValuePair_2<TKey,int64_t>::__set_value(int64_t  value)  {
::cordl_internals::setInstanceField<int64_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int64_t>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
constexpr int64_t& System::Collections::Generic::KeyValuePair_2<TKey,int64_t>::__get_value()  {
return ::cordl_internals::getInstanceField<int64_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
constexpr int64_t const& System::Collections::Generic::KeyValuePair_2<TKey,int64_t>::__get_value() const {
return ::cordl_internals::getInstanceField<int64_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
inline void System::Collections::Generic::KeyValuePair_2<TKey,int64_t>::_ctor(TKey  key, int64_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<TKey,int64_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
inline TKey System::Collections::Generic::KeyValuePair_2<TKey,int64_t>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<TKey,int64_t>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TKey, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
inline int64_t System::Collections::Generic::KeyValuePair_2<TKey,int64_t>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<TKey,int64_t>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
inline ::StringW System::Collections::Generic::KeyValuePair_2<TKey,int64_t>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<TKey,int64_t>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
inline void System::Collections::Generic::KeyValuePair_2<TKey,int64_t>::Deconstruct(ByRef<TKey>  key, ByRef<int64_t>  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<TKey,int64_t>>::get(),
                            "Deconstruct",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<TKey>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int64_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
// Ctor Parameters [CppParam { name: "key", ty: "TKey", modifiers: "", def_value: Some("csnull") }, CppParam { name: "value", ty: "int64_t", modifiers: "", def_value: Some("{}") }]
template<::il2cpp_utils::il2cpp_reference_type TKey>
constexpr ::System::Collections::Generic::KeyValuePair_2<TKey,int64_t>::KeyValuePair_2(TKey  key, int64_t  value) noexcept : ::bs_hook::ValueTypeWrapper<0x10>() {this->key = key;
this->value = value;
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::cordl_internals::is_or_is_backed_by<int32_t> TValue>
constexpr void System::Collections::Generic::KeyValuePair_2<TKey,TValue>::__set_key(TKey  value)  {
::cordl_internals::setInstanceField<TKey, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<TKey>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::cordl_internals::is_or_is_backed_by<int32_t> TValue>
constexpr TKey& System::Collections::Generic::KeyValuePair_2<TKey,TValue>::__get_key()  {
return ::cordl_internals::getInstanceField<TKey, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::cordl_internals::is_or_is_backed_by<int32_t> TValue>
constexpr TKey const& System::Collections::Generic::KeyValuePair_2<TKey,TValue>::__get_key() const {
return ::cordl_internals::getInstanceField<TKey, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::cordl_internals::is_or_is_backed_by<int32_t> TValue>
constexpr void System::Collections::Generic::KeyValuePair_2<TKey,TValue>::__set_value(TValue  value)  {
::cordl_internals::setInstanceField<TValue, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<TValue>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::cordl_internals::is_or_is_backed_by<int32_t> TValue>
constexpr TValue& System::Collections::Generic::KeyValuePair_2<TKey,TValue>::__get_value()  {
return ::cordl_internals::getInstanceField<TValue, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::cordl_internals::is_or_is_backed_by<int32_t> TValue>
constexpr TValue const& System::Collections::Generic::KeyValuePair_2<TKey,TValue>::__get_value() const {
return ::cordl_internals::getInstanceField<TValue, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::cordl_internals::is_or_is_backed_by<int32_t> TValue>
inline void System::Collections::Generic::KeyValuePair_2<TKey,TValue>::_ctor(TKey  key, TValue  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::cordl_internals::is_or_is_backed_by<int32_t> TValue>
inline TKey System::Collections::Generic::KeyValuePair_2<TKey,TValue>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TKey, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::cordl_internals::is_or_is_backed_by<int32_t> TValue>
inline TValue System::Collections::Generic::KeyValuePair_2<TKey,TValue>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TValue, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::cordl_internals::is_or_is_backed_by<int32_t> TValue>
inline ::StringW System::Collections::Generic::KeyValuePair_2<TKey,TValue>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::cordl_internals::is_or_is_backed_by<int32_t> TValue>
inline void System::Collections::Generic::KeyValuePair_2<TKey,TValue>::Deconstruct(ByRef<TKey>  key, ByRef<TValue>  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>::get(),
                            "Deconstruct",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<TKey>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<TValue>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
// Ctor Parameters [CppParam { name: "key", ty: "TKey", modifiers: "", def_value: Some("csnull") }, CppParam { name: "value", ty: "TValue", modifiers: "", def_value: Some("{}") }]
template<::il2cpp_utils::il2cpp_reference_type TKey,::cordl_internals::is_or_is_backed_by<int32_t> TValue>
constexpr ::System::Collections::Generic::KeyValuePair_2<TKey,TValue>::KeyValuePair_2(TKey  key, TValue  value) noexcept : ::bs_hook::ValueTypeWrapper<0x10>() {this->key = key;
this->value = value;
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
constexpr void System::Collections::Generic::KeyValuePair_2<TKey,int32_t>::__set_key(TKey  value)  {
::cordl_internals::setInstanceField<TKey, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<TKey>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
constexpr TKey& System::Collections::Generic::KeyValuePair_2<TKey,int32_t>::__get_key()  {
return ::cordl_internals::getInstanceField<TKey, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
constexpr TKey const& System::Collections::Generic::KeyValuePair_2<TKey,int32_t>::__get_key() const {
return ::cordl_internals::getInstanceField<TKey, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
constexpr void System::Collections::Generic::KeyValuePair_2<TKey,int32_t>::__set_value(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
constexpr int32_t& System::Collections::Generic::KeyValuePair_2<TKey,int32_t>::__get_value()  {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
constexpr int32_t const& System::Collections::Generic::KeyValuePair_2<TKey,int32_t>::__get_value() const {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
inline void System::Collections::Generic::KeyValuePair_2<TKey,int32_t>::_ctor(TKey  key, int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<TKey,int32_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
inline TKey System::Collections::Generic::KeyValuePair_2<TKey,int32_t>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<TKey,int32_t>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TKey, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
inline int32_t System::Collections::Generic::KeyValuePair_2<TKey,int32_t>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<TKey,int32_t>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
inline ::StringW System::Collections::Generic::KeyValuePair_2<TKey,int32_t>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<TKey,int32_t>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
inline void System::Collections::Generic::KeyValuePair_2<TKey,int32_t>::Deconstruct(ByRef<TKey>  key, ByRef<int32_t>  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<TKey,int32_t>>::get(),
                            "Deconstruct",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<TKey>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
// Ctor Parameters [CppParam { name: "key", ty: "TKey", modifiers: "", def_value: Some("csnull") }, CppParam { name: "value", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
template<::il2cpp_utils::il2cpp_reference_type TKey>
constexpr ::System::Collections::Generic::KeyValuePair_2<TKey,int32_t>::KeyValuePair_2(TKey  key, int32_t  value) noexcept : ::bs_hook::ValueTypeWrapper<0x10>() {this->key = key;
this->value = value;
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
constexpr void System::Collections::Generic::KeyValuePair_2<TKey,::System::Guid>::__set_key(TKey  value)  {
::cordl_internals::setInstanceField<TKey, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<TKey>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
constexpr TKey& System::Collections::Generic::KeyValuePair_2<TKey,::System::Guid>::__get_key()  {
return ::cordl_internals::getInstanceField<TKey, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
constexpr TKey const& System::Collections::Generic::KeyValuePair_2<TKey,::System::Guid>::__get_key() const {
return ::cordl_internals::getInstanceField<TKey, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
constexpr void System::Collections::Generic::KeyValuePair_2<TKey,::System::Guid>::__set_value(::System::Guid  value)  {
::cordl_internals::setInstanceField<::System::Guid, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Guid>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
constexpr ::System::Guid& System::Collections::Generic::KeyValuePair_2<TKey,::System::Guid>::__get_value()  {
return ::cordl_internals::getInstanceField<::System::Guid, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
constexpr ::System::Guid const& System::Collections::Generic::KeyValuePair_2<TKey,::System::Guid>::__get_value() const {
return ::cordl_internals::getInstanceField<::System::Guid, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
inline void System::Collections::Generic::KeyValuePair_2<TKey,::System::Guid>::_ctor(TKey  key, ::System::Guid  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<TKey,::System::Guid>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
inline TKey System::Collections::Generic::KeyValuePair_2<TKey,::System::Guid>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<TKey,::System::Guid>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TKey, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
inline ::System::Guid System::Collections::Generic::KeyValuePair_2<TKey,::System::Guid>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<TKey,::System::Guid>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Guid, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
inline ::StringW System::Collections::Generic::KeyValuePair_2<TKey,::System::Guid>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<TKey,::System::Guid>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
inline void System::Collections::Generic::KeyValuePair_2<TKey,::System::Guid>::Deconstruct(ByRef<TKey>  key, ByRef<::System::Guid>  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<TKey,::System::Guid>>::get(),
                            "Deconstruct",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<TKey>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Guid>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
// Ctor Parameters [CppParam { name: "key", ty: "TKey", modifiers: "", def_value: Some("csnull") }, CppParam { name: "value", ty: "::System::Guid", modifiers: "", def_value: Some("{}") }]
template<::il2cpp_utils::il2cpp_reference_type TKey>
constexpr ::System::Collections::Generic::KeyValuePair_2<TKey,::System::Guid>::KeyValuePair_2(TKey  key, ::System::Guid  value) noexcept : ::bs_hook::ValueTypeWrapper<0x18>() {this->key = key;
this->value = value;
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
constexpr void System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::Color32>::__set_key(TKey  value)  {
::cordl_internals::setInstanceField<TKey, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<TKey>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
constexpr TKey& System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::Color32>::__get_key()  {
return ::cordl_internals::getInstanceField<TKey, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
constexpr TKey const& System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::Color32>::__get_key() const {
return ::cordl_internals::getInstanceField<TKey, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
constexpr void System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::Color32>::__set_value(::UnityEngine::Color32  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Color32, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::Color32>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
constexpr ::UnityEngine::Color32& System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::Color32>::__get_value()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Color32, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
constexpr ::UnityEngine::Color32 const& System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::Color32>::__get_value() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Color32, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
inline void System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::Color32>::_ctor(TKey  key, ::UnityEngine::Color32  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::Color32>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color32>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
inline TKey System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::Color32>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::Color32>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TKey, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
inline ::UnityEngine::Color32 System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::Color32>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::Color32>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color32, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
inline ::StringW System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::Color32>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::Color32>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
inline void System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::Color32>::Deconstruct(ByRef<TKey>  key, ByRef<::UnityEngine::Color32>  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::Color32>>::get(),
                            "Deconstruct",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<TKey>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Color32>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
// Ctor Parameters [CppParam { name: "key", ty: "TKey", modifiers: "", def_value: Some("csnull") }, CppParam { name: "value", ty: "::UnityEngine::Color32", modifiers: "", def_value: Some("{}") }]
template<::il2cpp_utils::il2cpp_reference_type TKey>
constexpr ::System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::Color32>::KeyValuePair_2(TKey  key, ::UnityEngine::Color32  value) noexcept : ::bs_hook::ValueTypeWrapper<0x10>() {this->key = key;
this->value = value;
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
constexpr void System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::Color>::__set_key(TKey  value)  {
::cordl_internals::setInstanceField<TKey, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<TKey>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
constexpr TKey& System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::Color>::__get_key()  {
return ::cordl_internals::getInstanceField<TKey, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
constexpr TKey const& System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::Color>::__get_key() const {
return ::cordl_internals::getInstanceField<TKey, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
constexpr void System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::Color>::__set_value(::UnityEngine::Color  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Color, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::Color>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
constexpr ::UnityEngine::Color& System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::Color>::__get_value()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Color, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
constexpr ::UnityEngine::Color const& System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::Color>::__get_value() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Color, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
inline void System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::Color>::_ctor(TKey  key, ::UnityEngine::Color  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::Color>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
inline TKey System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::Color>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::Color>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TKey, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
inline ::UnityEngine::Color System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::Color>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::Color>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
inline ::StringW System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::Color>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::Color>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
inline void System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::Color>::Deconstruct(ByRef<TKey>  key, ByRef<::UnityEngine::Color>  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::Color>>::get(),
                            "Deconstruct",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<TKey>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Color>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
// Ctor Parameters [CppParam { name: "key", ty: "TKey", modifiers: "", def_value: Some("csnull") }, CppParam { name: "value", ty: "::UnityEngine::Color", modifiers: "", def_value: Some("{}") }]
template<::il2cpp_utils::il2cpp_reference_type TKey>
constexpr ::System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::Color>::KeyValuePair_2(TKey  key, ::UnityEngine::Color  value) noexcept : ::bs_hook::ValueTypeWrapper<0x18>() {this->key = key;
this->value = value;
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
constexpr void System::Collections::Generic::KeyValuePair_2<TKey,uint8_t>::__set_key(TKey  value)  {
::cordl_internals::setInstanceField<TKey, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<TKey>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
constexpr TKey& System::Collections::Generic::KeyValuePair_2<TKey,uint8_t>::__get_key()  {
return ::cordl_internals::getInstanceField<TKey, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
constexpr TKey const& System::Collections::Generic::KeyValuePair_2<TKey,uint8_t>::__get_key() const {
return ::cordl_internals::getInstanceField<TKey, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
constexpr void System::Collections::Generic::KeyValuePair_2<TKey,uint8_t>::__set_value(uint8_t  value)  {
::cordl_internals::setInstanceField<uint8_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<uint8_t>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
constexpr uint8_t& System::Collections::Generic::KeyValuePair_2<TKey,uint8_t>::__get_value()  {
return ::cordl_internals::getInstanceField<uint8_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
constexpr uint8_t const& System::Collections::Generic::KeyValuePair_2<TKey,uint8_t>::__get_value() const {
return ::cordl_internals::getInstanceField<uint8_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
inline void System::Collections::Generic::KeyValuePair_2<TKey,uint8_t>::_ctor(TKey  key, uint8_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<TKey,uint8_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
inline TKey System::Collections::Generic::KeyValuePair_2<TKey,uint8_t>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<TKey,uint8_t>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TKey, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
inline uint8_t System::Collections::Generic::KeyValuePair_2<TKey,uint8_t>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<TKey,uint8_t>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<uint8_t, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
inline ::StringW System::Collections::Generic::KeyValuePair_2<TKey,uint8_t>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<TKey,uint8_t>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
inline void System::Collections::Generic::KeyValuePair_2<TKey,uint8_t>::Deconstruct(ByRef<TKey>  key, ByRef<uint8_t>  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<TKey,uint8_t>>::get(),
                            "Deconstruct",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<TKey>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
// Ctor Parameters [CppParam { name: "key", ty: "TKey", modifiers: "", def_value: Some("csnull") }, CppParam { name: "value", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
template<::il2cpp_utils::il2cpp_reference_type TKey>
constexpr ::System::Collections::Generic::KeyValuePair_2<TKey,uint8_t>::KeyValuePair_2(TKey  key, uint8_t  value) noexcept : ::bs_hook::ValueTypeWrapper<0x10>() {this->key = key;
this->value = value;
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
constexpr void System::Collections::Generic::KeyValuePair_2<TKey,bool>::__set_key(TKey  value)  {
::cordl_internals::setInstanceField<TKey, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<TKey>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
constexpr TKey& System::Collections::Generic::KeyValuePair_2<TKey,bool>::__get_key()  {
return ::cordl_internals::getInstanceField<TKey, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
constexpr TKey const& System::Collections::Generic::KeyValuePair_2<TKey,bool>::__get_key() const {
return ::cordl_internals::getInstanceField<TKey, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
constexpr void System::Collections::Generic::KeyValuePair_2<TKey,bool>::__set_value(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<bool>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
constexpr bool& System::Collections::Generic::KeyValuePair_2<TKey,bool>::__get_value()  {
return ::cordl_internals::getInstanceField<bool, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
constexpr bool const& System::Collections::Generic::KeyValuePair_2<TKey,bool>::__get_value() const {
return ::cordl_internals::getInstanceField<bool, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
inline void System::Collections::Generic::KeyValuePair_2<TKey,bool>::_ctor(TKey  key, bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<TKey,bool>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
inline TKey System::Collections::Generic::KeyValuePair_2<TKey,bool>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<TKey,bool>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TKey, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
inline bool System::Collections::Generic::KeyValuePair_2<TKey,bool>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<TKey,bool>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
inline ::StringW System::Collections::Generic::KeyValuePair_2<TKey,bool>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<TKey,bool>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
inline void System::Collections::Generic::KeyValuePair_2<TKey,bool>::Deconstruct(ByRef<TKey>  key, ByRef<bool>  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<TKey,bool>>::get(),
                            "Deconstruct",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<TKey>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
// Ctor Parameters [CppParam { name: "key", ty: "TKey", modifiers: "", def_value: Some("csnull") }, CppParam { name: "value", ty: "bool", modifiers: "", def_value: Some("{}") }]
template<::il2cpp_utils::il2cpp_reference_type TKey>
constexpr ::System::Collections::Generic::KeyValuePair_2<TKey,bool>::KeyValuePair_2(TKey  key, bool  value) noexcept : ::bs_hook::ValueTypeWrapper<0x10>() {this->key = key;
this->value = value;
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type T1_cordlgen_1,::il2cpp_utils::il2cpp_reference_type T2_cordlgen_2>
constexpr void System::Collections::Generic::KeyValuePair_2<TKey,::System::ValueTuple_2<T1_cordlgen_1,T2_cordlgen_2>>::__set_key(TKey  value)  {
::cordl_internals::setInstanceField<TKey, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<TKey>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type T1_cordlgen_1,::il2cpp_utils::il2cpp_reference_type T2_cordlgen_2>
constexpr TKey& System::Collections::Generic::KeyValuePair_2<TKey,::System::ValueTuple_2<T1_cordlgen_1,T2_cordlgen_2>>::__get_key()  {
return ::cordl_internals::getInstanceField<TKey, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type T1_cordlgen_1,::il2cpp_utils::il2cpp_reference_type T2_cordlgen_2>
constexpr TKey const& System::Collections::Generic::KeyValuePair_2<TKey,::System::ValueTuple_2<T1_cordlgen_1,T2_cordlgen_2>>::__get_key() const {
return ::cordl_internals::getInstanceField<TKey, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type T1_cordlgen_1,::il2cpp_utils::il2cpp_reference_type T2_cordlgen_2>
constexpr void System::Collections::Generic::KeyValuePair_2<TKey,::System::ValueTuple_2<T1_cordlgen_1,T2_cordlgen_2>>::__set_value(::System::ValueTuple_2<T1_cordlgen_1,T2_cordlgen_2>  value)  {
::cordl_internals::setInstanceField<::System::ValueTuple_2<T1_cordlgen_1,T2_cordlgen_2>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::ValueTuple_2<T1_cordlgen_1,T2_cordlgen_2>>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type T1_cordlgen_1,::il2cpp_utils::il2cpp_reference_type T2_cordlgen_2>
constexpr ::System::ValueTuple_2<T1_cordlgen_1,T2_cordlgen_2>& System::Collections::Generic::KeyValuePair_2<TKey,::System::ValueTuple_2<T1_cordlgen_1,T2_cordlgen_2>>::__get_value()  {
return ::cordl_internals::getInstanceField<::System::ValueTuple_2<T1_cordlgen_1,T2_cordlgen_2>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type T1_cordlgen_1,::il2cpp_utils::il2cpp_reference_type T2_cordlgen_2>
constexpr ::System::ValueTuple_2<T1_cordlgen_1,T2_cordlgen_2> const& System::Collections::Generic::KeyValuePair_2<TKey,::System::ValueTuple_2<T1_cordlgen_1,T2_cordlgen_2>>::__get_value() const {
return ::cordl_internals::getInstanceField<::System::ValueTuple_2<T1_cordlgen_1,T2_cordlgen_2>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type T1_cordlgen_1,::il2cpp_utils::il2cpp_reference_type T2_cordlgen_2>
inline void System::Collections::Generic::KeyValuePair_2<TKey,::System::ValueTuple_2<T1_cordlgen_1,T2_cordlgen_2>>::_ctor(TKey  key, ::System::ValueTuple_2<T1_cordlgen_1,T2_cordlgen_2>  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<TKey,::System::ValueTuple_2<T1_cordlgen_1,T2_cordlgen_2>>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ValueTuple_2<T1_cordlgen_1,T2_cordlgen_2>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type T1_cordlgen_1,::il2cpp_utils::il2cpp_reference_type T2_cordlgen_2>
inline TKey System::Collections::Generic::KeyValuePair_2<TKey,::System::ValueTuple_2<T1_cordlgen_1,T2_cordlgen_2>>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<TKey,::System::ValueTuple_2<T1_cordlgen_1,T2_cordlgen_2>>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TKey, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type T1_cordlgen_1,::il2cpp_utils::il2cpp_reference_type T2_cordlgen_2>
inline ::System::ValueTuple_2<T1_cordlgen_1,T2_cordlgen_2> System::Collections::Generic::KeyValuePair_2<TKey,::System::ValueTuple_2<T1_cordlgen_1,T2_cordlgen_2>>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<TKey,::System::ValueTuple_2<T1_cordlgen_1,T2_cordlgen_2>>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_2<T1_cordlgen_1,T2_cordlgen_2>, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type T1_cordlgen_1,::il2cpp_utils::il2cpp_reference_type T2_cordlgen_2>
inline ::StringW System::Collections::Generic::KeyValuePair_2<TKey,::System::ValueTuple_2<T1_cordlgen_1,T2_cordlgen_2>>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<TKey,::System::ValueTuple_2<T1_cordlgen_1,T2_cordlgen_2>>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type T1_cordlgen_1,::il2cpp_utils::il2cpp_reference_type T2_cordlgen_2>
inline void System::Collections::Generic::KeyValuePair_2<TKey,::System::ValueTuple_2<T1_cordlgen_1,T2_cordlgen_2>>::Deconstruct(ByRef<TKey>  key, ByRef<::System::ValueTuple_2<T1_cordlgen_1,T2_cordlgen_2>>  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<TKey,::System::ValueTuple_2<T1_cordlgen_1,T2_cordlgen_2>>>::get(),
                            "Deconstruct",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<TKey>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::ValueTuple_2<T1_cordlgen_1,T2_cordlgen_2>>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
// Ctor Parameters [CppParam { name: "key", ty: "TKey", modifiers: "", def_value: Some("csnull") }, CppParam { name: "value", ty: "::System::ValueTuple_2<T1_cordlgen_1,T2_cordlgen_2>", modifiers: "", def_value: Some("{}") }]
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type T1_cordlgen_1,::il2cpp_utils::il2cpp_reference_type T2_cordlgen_2>
constexpr ::System::Collections::Generic::KeyValuePair_2<TKey,::System::ValueTuple_2<T1_cordlgen_1,T2_cordlgen_2>>::KeyValuePair_2(TKey  key, ::System::ValueTuple_2<T1_cordlgen_1,T2_cordlgen_2>  value) noexcept : ::bs_hook::ValueTypeWrapper<0x18>() {this->key = key;
this->value = value;
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TObject_cordlgen_1>
constexpr void System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject_cordlgen_1>>::__set_key(TKey  value)  {
::cordl_internals::setInstanceField<TKey, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<TKey>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TObject_cordlgen_1>
constexpr TKey& System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject_cordlgen_1>>::__get_key()  {
return ::cordl_internals::getInstanceField<TKey, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TObject_cordlgen_1>
constexpr TKey const& System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject_cordlgen_1>>::__get_key() const {
return ::cordl_internals::getInstanceField<TKey, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TObject_cordlgen_1>
constexpr void System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject_cordlgen_1>>::__set_value(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject_cordlgen_1>  value)  {
::cordl_internals::setInstanceField<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject_cordlgen_1>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject_cordlgen_1>>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TObject_cordlgen_1>
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject_cordlgen_1>& System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject_cordlgen_1>>::__get_value()  {
return ::cordl_internals::getInstanceField<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject_cordlgen_1>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TObject_cordlgen_1>
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject_cordlgen_1> const& System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject_cordlgen_1>>::__get_value() const {
return ::cordl_internals::getInstanceField<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject_cordlgen_1>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TObject_cordlgen_1>
inline void System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject_cordlgen_1>>::_ctor(TKey  key, ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject_cordlgen_1>  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject_cordlgen_1>>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject_cordlgen_1>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TObject_cordlgen_1>
inline TKey System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject_cordlgen_1>>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject_cordlgen_1>>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TKey, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TObject_cordlgen_1>
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject_cordlgen_1> System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject_cordlgen_1>>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject_cordlgen_1>>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject_cordlgen_1>, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TObject_cordlgen_1>
inline ::StringW System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject_cordlgen_1>>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject_cordlgen_1>>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TObject_cordlgen_1>
inline void System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject_cordlgen_1>>::Deconstruct(ByRef<TKey>  key, ByRef<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject_cordlgen_1>>  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject_cordlgen_1>>>::get(),
                            "Deconstruct",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<TKey>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject_cordlgen_1>>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
// Ctor Parameters [CppParam { name: "key", ty: "TKey", modifiers: "", def_value: Some("csnull") }, CppParam { name: "value", ty: "::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject_cordlgen_1>", modifiers: "", def_value: Some("{}") }]
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TObject_cordlgen_1>
constexpr ::System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject_cordlgen_1>>::KeyValuePair_2(TKey  key, ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject_cordlgen_1>  value) noexcept : ::bs_hook::ValueTypeWrapper<0x28>() {this->key = key;
this->value = value;
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr void System::Collections::Generic::KeyValuePair_2<::GlobalNamespace::LevelKey,TValue>::__set_key(::GlobalNamespace::LevelKey  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::LevelKey, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::GlobalNamespace::LevelKey>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::GlobalNamespace::LevelKey& System::Collections::Generic::KeyValuePair_2<::GlobalNamespace::LevelKey,TValue>::__get_key()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::LevelKey, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::GlobalNamespace::LevelKey const& System::Collections::Generic::KeyValuePair_2<::GlobalNamespace::LevelKey,TValue>::__get_key() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::LevelKey, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr void System::Collections::Generic::KeyValuePair_2<::GlobalNamespace::LevelKey,TValue>::__set_value(TValue  value)  {
::cordl_internals::setInstanceField<TValue, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<TValue>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr TValue& System::Collections::Generic::KeyValuePair_2<::GlobalNamespace::LevelKey,TValue>::__get_value()  {
return ::cordl_internals::getInstanceField<TValue, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr TValue const& System::Collections::Generic::KeyValuePair_2<::GlobalNamespace::LevelKey,TValue>::__get_value() const {
return ::cordl_internals::getInstanceField<TValue, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline void System::Collections::Generic::KeyValuePair_2<::GlobalNamespace::LevelKey,TValue>::_ctor(::GlobalNamespace::LevelKey  key, TValue  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::GlobalNamespace::LevelKey,TValue>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LevelKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline ::GlobalNamespace::LevelKey System::Collections::Generic::KeyValuePair_2<::GlobalNamespace::LevelKey,TValue>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::GlobalNamespace::LevelKey,TValue>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::LevelKey, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline TValue System::Collections::Generic::KeyValuePair_2<::GlobalNamespace::LevelKey,TValue>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::GlobalNamespace::LevelKey,TValue>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TValue, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline ::StringW System::Collections::Generic::KeyValuePair_2<::GlobalNamespace::LevelKey,TValue>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::GlobalNamespace::LevelKey,TValue>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline void System::Collections::Generic::KeyValuePair_2<::GlobalNamespace::LevelKey,TValue>::Deconstruct(ByRef<::GlobalNamespace::LevelKey>  key, ByRef<TValue>  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::GlobalNamespace::LevelKey,TValue>>::get(),
                            "Deconstruct",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::LevelKey>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<TValue>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
// Ctor Parameters [CppParam { name: "key", ty: "::GlobalNamespace::LevelKey", modifiers: "", def_value: Some("{}") }, CppParam { name: "value", ty: "TValue", modifiers: "", def_value: Some("csnull") }]
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::System::Collections::Generic::KeyValuePair_2<::GlobalNamespace::LevelKey,TValue>::KeyValuePair_2(::GlobalNamespace::LevelKey  key, TValue  value) noexcept : ::bs_hook::ValueTypeWrapper<0x20>() {this->key = key;
this->value = value;
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr void System::Collections::Generic::KeyValuePair_2<::UnityEngine::InputSystem::Utilities::InternedString,TValue>::__set_key(::UnityEngine::InputSystem::Utilities::InternedString  value)  {
::cordl_internals::setInstanceField<::UnityEngine::InputSystem::Utilities::InternedString, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::InputSystem::Utilities::InternedString>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::UnityEngine::InputSystem::Utilities::InternedString& System::Collections::Generic::KeyValuePair_2<::UnityEngine::InputSystem::Utilities::InternedString,TValue>::__get_key()  {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::Utilities::InternedString, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::UnityEngine::InputSystem::Utilities::InternedString const& System::Collections::Generic::KeyValuePair_2<::UnityEngine::InputSystem::Utilities::InternedString,TValue>::__get_key() const {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::Utilities::InternedString, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr void System::Collections::Generic::KeyValuePair_2<::UnityEngine::InputSystem::Utilities::InternedString,TValue>::__set_value(TValue  value)  {
::cordl_internals::setInstanceField<TValue, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<TValue>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr TValue& System::Collections::Generic::KeyValuePair_2<::UnityEngine::InputSystem::Utilities::InternedString,TValue>::__get_value()  {
return ::cordl_internals::getInstanceField<TValue, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr TValue const& System::Collections::Generic::KeyValuePair_2<::UnityEngine::InputSystem::Utilities::InternedString,TValue>::__get_value() const {
return ::cordl_internals::getInstanceField<TValue, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline void System::Collections::Generic::KeyValuePair_2<::UnityEngine::InputSystem::Utilities::InternedString,TValue>::_ctor(::UnityEngine::InputSystem::Utilities::InternedString  key, TValue  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::InputSystem::Utilities::InternedString,TValue>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::InternedString>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline ::UnityEngine::InputSystem::Utilities::InternedString System::Collections::Generic::KeyValuePair_2<::UnityEngine::InputSystem::Utilities::InternedString,TValue>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::InputSystem::Utilities::InternedString,TValue>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::InternedString, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline TValue System::Collections::Generic::KeyValuePair_2<::UnityEngine::InputSystem::Utilities::InternedString,TValue>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::InputSystem::Utilities::InternedString,TValue>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TValue, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline ::StringW System::Collections::Generic::KeyValuePair_2<::UnityEngine::InputSystem::Utilities::InternedString,TValue>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::InputSystem::Utilities::InternedString,TValue>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline void System::Collections::Generic::KeyValuePair_2<::UnityEngine::InputSystem::Utilities::InternedString,TValue>::Deconstruct(ByRef<::UnityEngine::InputSystem::Utilities::InternedString>  key, ByRef<TValue>  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::InputSystem::Utilities::InternedString,TValue>>::get(),
                            "Deconstruct",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::Utilities::InternedString>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<TValue>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
// Ctor Parameters [CppParam { name: "key", ty: "::UnityEngine::InputSystem::Utilities::InternedString", modifiers: "", def_value: Some("{}") }, CppParam { name: "value", ty: "TValue", modifiers: "", def_value: Some("csnull") }]
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::System::Collections::Generic::KeyValuePair_2<::UnityEngine::InputSystem::Utilities::InternedString,TValue>::KeyValuePair_2(::UnityEngine::InputSystem::Utilities::InternedString  key, TValue  value) noexcept : ::bs_hook::ValueTypeWrapper<0x18>() {this->key = key;
this->value = value;
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr void System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::IntVec3,TValue>::__set_key(::UnityEngine::ProBuilder::IntVec3  value)  {
::cordl_internals::setInstanceField<::UnityEngine::ProBuilder::IntVec3, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::ProBuilder::IntVec3>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::UnityEngine::ProBuilder::IntVec3& System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::IntVec3,TValue>::__get_key()  {
return ::cordl_internals::getInstanceField<::UnityEngine::ProBuilder::IntVec3, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::UnityEngine::ProBuilder::IntVec3 const& System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::IntVec3,TValue>::__get_key() const {
return ::cordl_internals::getInstanceField<::UnityEngine::ProBuilder::IntVec3, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr void System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::IntVec3,TValue>::__set_value(TValue  value)  {
::cordl_internals::setInstanceField<TValue, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<TValue>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr TValue& System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::IntVec3,TValue>::__get_value()  {
return ::cordl_internals::getInstanceField<TValue, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr TValue const& System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::IntVec3,TValue>::__get_value() const {
return ::cordl_internals::getInstanceField<TValue, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline void System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::IntVec3,TValue>::_ctor(::UnityEngine::ProBuilder::IntVec3  key, TValue  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::IntVec3,TValue>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::IntVec3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline ::UnityEngine::ProBuilder::IntVec3 System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::IntVec3,TValue>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::IntVec3,TValue>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::IntVec3, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline TValue System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::IntVec3,TValue>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::IntVec3,TValue>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TValue, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline ::StringW System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::IntVec3,TValue>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::IntVec3,TValue>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline void System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::IntVec3,TValue>::Deconstruct(ByRef<::UnityEngine::ProBuilder::IntVec3>  key, ByRef<TValue>  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::IntVec3,TValue>>::get(),
                            "Deconstruct",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::ProBuilder::IntVec3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<TValue>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
// Ctor Parameters [CppParam { name: "key", ty: "::UnityEngine::ProBuilder::IntVec3", modifiers: "", def_value: Some("{}") }, CppParam { name: "value", ty: "TValue", modifiers: "", def_value: Some("csnull") }]
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::IntVec3,TValue>::KeyValuePair_2(::UnityEngine::ProBuilder::IntVec3  key, TValue  value) noexcept : ::bs_hook::ValueTypeWrapper<0x18>() {this->key = key;
this->value = value;
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr void System::Collections::Generic::KeyValuePair_2<int64_t,TValue>::__set_key(int64_t  value)  {
::cordl_internals::setInstanceField<int64_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int64_t>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr int64_t& System::Collections::Generic::KeyValuePair_2<int64_t,TValue>::__get_key()  {
return ::cordl_internals::getInstanceField<int64_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr int64_t const& System::Collections::Generic::KeyValuePair_2<int64_t,TValue>::__get_key() const {
return ::cordl_internals::getInstanceField<int64_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr void System::Collections::Generic::KeyValuePair_2<int64_t,TValue>::__set_value(TValue  value)  {
::cordl_internals::setInstanceField<TValue, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<TValue>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr TValue& System::Collections::Generic::KeyValuePair_2<int64_t,TValue>::__get_value()  {
return ::cordl_internals::getInstanceField<TValue, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr TValue const& System::Collections::Generic::KeyValuePair_2<int64_t,TValue>::__get_value() const {
return ::cordl_internals::getInstanceField<TValue, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline void System::Collections::Generic::KeyValuePair_2<int64_t,TValue>::_ctor(int64_t  key, TValue  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<int64_t,TValue>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline int64_t System::Collections::Generic::KeyValuePair_2<int64_t,TValue>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<int64_t,TValue>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline TValue System::Collections::Generic::KeyValuePair_2<int64_t,TValue>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<int64_t,TValue>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TValue, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline ::StringW System::Collections::Generic::KeyValuePair_2<int64_t,TValue>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<int64_t,TValue>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline void System::Collections::Generic::KeyValuePair_2<int64_t,TValue>::Deconstruct(ByRef<int64_t>  key, ByRef<TValue>  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<int64_t,TValue>>::get(),
                            "Deconstruct",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int64_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<TValue>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
// Ctor Parameters [CppParam { name: "key", ty: "int64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "value", ty: "TValue", modifiers: "", def_value: Some("csnull") }]
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::System::Collections::Generic::KeyValuePair_2<int64_t,TValue>::KeyValuePair_2(int64_t  key, TValue  value) noexcept : ::bs_hook::ValueTypeWrapper<0x10>() {this->key = key;
this->value = value;
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TKey>
constexpr void System::Collections::Generic::KeyValuePair_2<TKey,::System::TimeSpan>::__set_key(TKey  value)  {
::cordl_internals::setInstanceField<TKey, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<TKey>(value));
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TKey>
constexpr TKey& System::Collections::Generic::KeyValuePair_2<TKey,::System::TimeSpan>::__get_key()  {
return ::cordl_internals::getInstanceField<TKey, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TKey>
constexpr TKey const& System::Collections::Generic::KeyValuePair_2<TKey,::System::TimeSpan>::__get_key() const {
return ::cordl_internals::getInstanceField<TKey, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TKey>
constexpr void System::Collections::Generic::KeyValuePair_2<TKey,::System::TimeSpan>::__set_value(::System::TimeSpan  value)  {
::cordl_internals::setInstanceField<::System::TimeSpan, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::TimeSpan>(value));
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TKey>
constexpr ::System::TimeSpan& System::Collections::Generic::KeyValuePair_2<TKey,::System::TimeSpan>::__get_value()  {
return ::cordl_internals::getInstanceField<::System::TimeSpan, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TKey>
constexpr ::System::TimeSpan const& System::Collections::Generic::KeyValuePair_2<TKey,::System::TimeSpan>::__get_value() const {
return ::cordl_internals::getInstanceField<::System::TimeSpan, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TKey>
inline void System::Collections::Generic::KeyValuePair_2<TKey,::System::TimeSpan>::_ctor(TKey  key, ::System::TimeSpan  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<TKey,::System::TimeSpan>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TKey>
inline TKey System::Collections::Generic::KeyValuePair_2<TKey,::System::TimeSpan>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<TKey,::System::TimeSpan>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TKey, false>(*this, ___internal_method);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TKey>
inline ::System::TimeSpan System::Collections::Generic::KeyValuePair_2<TKey,::System::TimeSpan>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<TKey,::System::TimeSpan>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::TimeSpan, false>(*this, ___internal_method);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TKey>
inline ::StringW System::Collections::Generic::KeyValuePair_2<TKey,::System::TimeSpan>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<TKey,::System::TimeSpan>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TKey>
inline void System::Collections::Generic::KeyValuePair_2<TKey,::System::TimeSpan>::Deconstruct(ByRef<TKey>  key, ByRef<::System::TimeSpan>  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<TKey,::System::TimeSpan>>::get(),
                            "Deconstruct",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<TKey>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::TimeSpan>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
// Ctor Parameters [CppParam { name: "key", ty: "TKey", modifiers: "", def_value: Some("{}") }, CppParam { name: "value", ty: "::System::TimeSpan", modifiers: "", def_value: Some("{}") }]
template<::cordl_internals::is_or_is_backed_by<int32_t> TKey>
constexpr ::System::Collections::Generic::KeyValuePair_2<TKey,::System::TimeSpan>::KeyValuePair_2(TKey  key, ::System::TimeSpan  value) noexcept : ::bs_hook::ValueTypeWrapper<0x10>() {this->key = key;
this->value = value;
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TKey>
constexpr void System::Collections::Generic::KeyValuePair_2<TKey,float_t>::__set_key(TKey  value)  {
::cordl_internals::setInstanceField<TKey, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<TKey>(value));
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TKey>
constexpr TKey& System::Collections::Generic::KeyValuePair_2<TKey,float_t>::__get_key()  {
return ::cordl_internals::getInstanceField<TKey, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TKey>
constexpr TKey const& System::Collections::Generic::KeyValuePair_2<TKey,float_t>::__get_key() const {
return ::cordl_internals::getInstanceField<TKey, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TKey>
constexpr void System::Collections::Generic::KeyValuePair_2<TKey,float_t>::__set_value(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<float_t>(value));
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TKey>
constexpr float_t& System::Collections::Generic::KeyValuePair_2<TKey,float_t>::__get_value()  {
return ::cordl_internals::getInstanceField<float_t, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TKey>
constexpr float_t const& System::Collections::Generic::KeyValuePair_2<TKey,float_t>::__get_value() const {
return ::cordl_internals::getInstanceField<float_t, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TKey>
inline void System::Collections::Generic::KeyValuePair_2<TKey,float_t>::_ctor(TKey  key, float_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<TKey,float_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TKey>
inline TKey System::Collections::Generic::KeyValuePair_2<TKey,float_t>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<TKey,float_t>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TKey, false>(*this, ___internal_method);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TKey>
inline float_t System::Collections::Generic::KeyValuePair_2<TKey,float_t>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<TKey,float_t>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TKey>
inline ::StringW System::Collections::Generic::KeyValuePair_2<TKey,float_t>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<TKey,float_t>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TKey>
inline void System::Collections::Generic::KeyValuePair_2<TKey,float_t>::Deconstruct(ByRef<TKey>  key, ByRef<float_t>  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<TKey,float_t>>::get(),
                            "Deconstruct",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<TKey>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
// Ctor Parameters [CppParam { name: "key", ty: "TKey", modifiers: "", def_value: Some("{}") }, CppParam { name: "value", ty: "float_t", modifiers: "", def_value: Some("{}") }]
template<::cordl_internals::is_or_is_backed_by<int32_t> TKey>
constexpr ::System::Collections::Generic::KeyValuePair_2<TKey,float_t>::KeyValuePair_2(TKey  key, float_t  value) noexcept : ::bs_hook::ValueTypeWrapper<0x8>() {this->key = key;
this->value = value;
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TKey>
constexpr void System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::Quaternion>::__set_key(TKey  value)  {
::cordl_internals::setInstanceField<TKey, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<TKey>(value));
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TKey>
constexpr TKey& System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::Quaternion>::__get_key()  {
return ::cordl_internals::getInstanceField<TKey, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TKey>
constexpr TKey const& System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::Quaternion>::__get_key() const {
return ::cordl_internals::getInstanceField<TKey, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TKey>
constexpr void System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::Quaternion>::__set_value(::UnityEngine::Quaternion  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Quaternion, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::Quaternion>(value));
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TKey>
constexpr ::UnityEngine::Quaternion& System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::Quaternion>::__get_value()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Quaternion, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TKey>
constexpr ::UnityEngine::Quaternion const& System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::Quaternion>::__get_value() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Quaternion, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TKey>
inline void System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::Quaternion>::_ctor(TKey  key, ::UnityEngine::Quaternion  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::Quaternion>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TKey>
inline TKey System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::Quaternion>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::Quaternion>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TKey, false>(*this, ___internal_method);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TKey>
inline ::UnityEngine::Quaternion System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::Quaternion>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::Quaternion>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion, false>(*this, ___internal_method);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TKey>
inline ::StringW System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::Quaternion>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::Quaternion>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TKey>
inline void System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::Quaternion>::Deconstruct(ByRef<TKey>  key, ByRef<::UnityEngine::Quaternion>  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::Quaternion>>::get(),
                            "Deconstruct",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<TKey>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Quaternion>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
// Ctor Parameters [CppParam { name: "key", ty: "TKey", modifiers: "", def_value: Some("{}") }, CppParam { name: "value", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: Some("{}") }]
template<::cordl_internals::is_or_is_backed_by<int32_t> TKey>
constexpr ::System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::Quaternion>::KeyValuePair_2(TKey  key, ::UnityEngine::Quaternion  value) noexcept : ::bs_hook::ValueTypeWrapper<0x14>() {this->key = key;
this->value = value;
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr void System::Collections::Generic::KeyValuePair_2<TKey,TValue>::__set_key(TKey  value)  {
::cordl_internals::setInstanceField<TKey, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<TKey>(value));
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr TKey& System::Collections::Generic::KeyValuePair_2<TKey,TValue>::__get_key()  {
return ::cordl_internals::getInstanceField<TKey, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr TKey const& System::Collections::Generic::KeyValuePair_2<TKey,TValue>::__get_key() const {
return ::cordl_internals::getInstanceField<TKey, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr void System::Collections::Generic::KeyValuePair_2<TKey,TValue>::__set_value(TValue  value)  {
::cordl_internals::setInstanceField<TValue, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<TValue>(value));
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr TValue& System::Collections::Generic::KeyValuePair_2<TKey,TValue>::__get_value()  {
return ::cordl_internals::getInstanceField<TValue, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr TValue const& System::Collections::Generic::KeyValuePair_2<TKey,TValue>::__get_value() const {
return ::cordl_internals::getInstanceField<TValue, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TKey,::il2cpp_utils::il2cpp_reference_type TValue>
inline void System::Collections::Generic::KeyValuePair_2<TKey,TValue>::_ctor(TKey  key, TValue  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TKey,::il2cpp_utils::il2cpp_reference_type TValue>
inline TKey System::Collections::Generic::KeyValuePair_2<TKey,TValue>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TKey, false>(*this, ___internal_method);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TKey,::il2cpp_utils::il2cpp_reference_type TValue>
inline TValue System::Collections::Generic::KeyValuePair_2<TKey,TValue>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TValue, false>(*this, ___internal_method);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TKey,::il2cpp_utils::il2cpp_reference_type TValue>
inline ::StringW System::Collections::Generic::KeyValuePair_2<TKey,TValue>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TKey,::il2cpp_utils::il2cpp_reference_type TValue>
inline void System::Collections::Generic::KeyValuePair_2<TKey,TValue>::Deconstruct(ByRef<TKey>  key, ByRef<TValue>  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>::get(),
                            "Deconstruct",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<TKey>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<TValue>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
// Ctor Parameters [CppParam { name: "key", ty: "TKey", modifiers: "", def_value: Some("{}") }, CppParam { name: "value", ty: "TValue", modifiers: "", def_value: Some("csnull") }]
template<::cordl_internals::is_or_is_backed_by<int32_t> TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::System::Collections::Generic::KeyValuePair_2<TKey,TValue>::KeyValuePair_2(TKey  key, TValue  value) noexcept : ::bs_hook::ValueTypeWrapper<0x10>() {this->key = key;
this->value = value;
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TKey,::cordl_internals::is_or_is_backed_by<int32_t> TValue>
constexpr void System::Collections::Generic::KeyValuePair_2<TKey,TValue>::__set_key(TKey  value)  {
::cordl_internals::setInstanceField<TKey, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<TKey>(value));
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TKey,::cordl_internals::is_or_is_backed_by<int32_t> TValue>
constexpr TKey& System::Collections::Generic::KeyValuePair_2<TKey,TValue>::__get_key()  {
return ::cordl_internals::getInstanceField<TKey, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TKey,::cordl_internals::is_or_is_backed_by<int32_t> TValue>
constexpr TKey const& System::Collections::Generic::KeyValuePair_2<TKey,TValue>::__get_key() const {
return ::cordl_internals::getInstanceField<TKey, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TKey,::cordl_internals::is_or_is_backed_by<int32_t> TValue>
constexpr void System::Collections::Generic::KeyValuePair_2<TKey,TValue>::__set_value(TValue  value)  {
::cordl_internals::setInstanceField<TValue, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<TValue>(value));
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TKey,::cordl_internals::is_or_is_backed_by<int32_t> TValue>
constexpr TValue& System::Collections::Generic::KeyValuePair_2<TKey,TValue>::__get_value()  {
return ::cordl_internals::getInstanceField<TValue, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TKey,::cordl_internals::is_or_is_backed_by<int32_t> TValue>
constexpr TValue const& System::Collections::Generic::KeyValuePair_2<TKey,TValue>::__get_value() const {
return ::cordl_internals::getInstanceField<TValue, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TKey,::cordl_internals::is_or_is_backed_by<int32_t> TValue>
inline void System::Collections::Generic::KeyValuePair_2<TKey,TValue>::_ctor(TKey  key, TValue  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TKey,::cordl_internals::is_or_is_backed_by<int32_t> TValue>
inline TKey System::Collections::Generic::KeyValuePair_2<TKey,TValue>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TKey, false>(*this, ___internal_method);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TKey,::cordl_internals::is_or_is_backed_by<int32_t> TValue>
inline TValue System::Collections::Generic::KeyValuePair_2<TKey,TValue>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TValue, false>(*this, ___internal_method);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TKey,::cordl_internals::is_or_is_backed_by<int32_t> TValue>
inline ::StringW System::Collections::Generic::KeyValuePair_2<TKey,TValue>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TKey,::cordl_internals::is_or_is_backed_by<int32_t> TValue>
inline void System::Collections::Generic::KeyValuePair_2<TKey,TValue>::Deconstruct(ByRef<TKey>  key, ByRef<TValue>  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>::get(),
                            "Deconstruct",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<TKey>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<TValue>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
// Ctor Parameters [CppParam { name: "key", ty: "TKey", modifiers: "", def_value: Some("{}") }, CppParam { name: "value", ty: "TValue", modifiers: "", def_value: Some("{}") }]
template<::cordl_internals::is_or_is_backed_by<int32_t> TKey,::cordl_internals::is_or_is_backed_by<int32_t> TValue>
constexpr ::System::Collections::Generic::KeyValuePair_2<TKey,TValue>::KeyValuePair_2(TKey  key, TValue  value) noexcept : ::bs_hook::ValueTypeWrapper<0x8>() {this->key = key;
this->value = value;
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TKey>
constexpr void System::Collections::Generic::KeyValuePair_2<TKey,int32_t>::__set_key(TKey  value)  {
::cordl_internals::setInstanceField<TKey, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<TKey>(value));
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TKey>
constexpr TKey& System::Collections::Generic::KeyValuePair_2<TKey,int32_t>::__get_key()  {
return ::cordl_internals::getInstanceField<TKey, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TKey>
constexpr TKey const& System::Collections::Generic::KeyValuePair_2<TKey,int32_t>::__get_key() const {
return ::cordl_internals::getInstanceField<TKey, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TKey>
constexpr void System::Collections::Generic::KeyValuePair_2<TKey,int32_t>::__set_value(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TKey>
constexpr int32_t& System::Collections::Generic::KeyValuePair_2<TKey,int32_t>::__get_value()  {
return ::cordl_internals::getInstanceField<int32_t, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TKey>
constexpr int32_t const& System::Collections::Generic::KeyValuePair_2<TKey,int32_t>::__get_value() const {
return ::cordl_internals::getInstanceField<int32_t, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TKey>
inline void System::Collections::Generic::KeyValuePair_2<TKey,int32_t>::_ctor(TKey  key, int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<TKey,int32_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TKey>
inline TKey System::Collections::Generic::KeyValuePair_2<TKey,int32_t>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<TKey,int32_t>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TKey, false>(*this, ___internal_method);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TKey>
inline int32_t System::Collections::Generic::KeyValuePair_2<TKey,int32_t>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<TKey,int32_t>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TKey>
inline ::StringW System::Collections::Generic::KeyValuePair_2<TKey,int32_t>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<TKey,int32_t>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TKey>
inline void System::Collections::Generic::KeyValuePair_2<TKey,int32_t>::Deconstruct(ByRef<TKey>  key, ByRef<int32_t>  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<TKey,int32_t>>::get(),
                            "Deconstruct",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<TKey>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
// Ctor Parameters [CppParam { name: "key", ty: "TKey", modifiers: "", def_value: Some("{}") }, CppParam { name: "value", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
template<::cordl_internals::is_or_is_backed_by<int32_t> TKey>
constexpr ::System::Collections::Generic::KeyValuePair_2<TKey,int32_t>::KeyValuePair_2(TKey  key, int32_t  value) noexcept : ::bs_hook::ValueTypeWrapper<0x8>() {this->key = key;
this->value = value;
}
//  Writing Method size for method: ::System::Collections::Generic::KeyValuePair_2<int32_t,::UnityEngine::Vector3>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Generic::KeyValuePair_2<int32_t,::UnityEngine::Vector3>::*)(int32_t, ::UnityEngine::Vector3)>(&::System::Collections::Generic::KeyValuePair_2<int32_t,::UnityEngine::Vector3>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<int32_t,::UnityEngine::Vector3>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::KeyValuePair_2<int32_t,::UnityEngine::Vector3>.get_Key
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Collections::Generic::KeyValuePair_2<int32_t,::UnityEngine::Vector3>::*)()>(&::System::Collections::Generic::KeyValuePair_2<int32_t,::UnityEngine::Vector3>::get_Key)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<int32_t,::UnityEngine::Vector3>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::KeyValuePair_2<int32_t,::UnityEngine::Vector3>.get_Value
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::System::Collections::Generic::KeyValuePair_2<int32_t,::UnityEngine::Vector3>::*)()>(&::System::Collections::Generic::KeyValuePair_2<int32_t,::UnityEngine::Vector3>::get_Value)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<int32_t,::UnityEngine::Vector3>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::KeyValuePair_2<int32_t,::UnityEngine::Vector3>.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Collections::Generic::KeyValuePair_2<int32_t,::UnityEngine::Vector3>::*)()>(&::System::Collections::Generic::KeyValuePair_2<int32_t,::UnityEngine::Vector3>::ToString)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<int32_t,::UnityEngine::Vector3>>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<int32_t,::UnityEngine::Vector3>>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::KeyValuePair_2<int32_t,::UnityEngine::Vector3>.Deconstruct
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Generic::KeyValuePair_2<int32_t,::UnityEngine::Vector3>::*)(ByRef<int32_t>, ByRef<::UnityEngine::Vector3>)>(&::System::Collections::Generic::KeyValuePair_2<int32_t,::UnityEngine::Vector3>::Deconstruct)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<int32_t,::UnityEngine::Vector3>>::get(),
                            "Deconstruct",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Collections::Generic::KeyValuePair_2<int32_t,::UnityEngine::Vector3>::__set_key(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& System::Collections::Generic::KeyValuePair_2<int32_t,::UnityEngine::Vector3>::__get_key()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& System::Collections::Generic::KeyValuePair_2<int32_t,::UnityEngine::Vector3>::__get_key() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::Collections::Generic::KeyValuePair_2<int32_t,::UnityEngine::Vector3>::__set_value(::UnityEngine::Vector3  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3& System::Collections::Generic::KeyValuePair_2<int32_t,::UnityEngine::Vector3>::__get_value()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::UnityEngine::Vector3 const& System::Collections::Generic::KeyValuePair_2<int32_t,::UnityEngine::Vector3>::__get_value() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline void System::Collections::Generic::KeyValuePair_2<int32_t,::UnityEngine::Vector3>::_ctor(int32_t  key, ::UnityEngine::Vector3  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<int32_t,::UnityEngine::Vector3>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
inline int32_t System::Collections::Generic::KeyValuePair_2<int32_t,::UnityEngine::Vector3>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<int32_t,::UnityEngine::Vector3>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline ::UnityEngine::Vector3 System::Collections::Generic::KeyValuePair_2<int32_t,::UnityEngine::Vector3>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<int32_t,::UnityEngine::Vector3>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(*this, ___internal_method);
}
inline ::StringW System::Collections::Generic::KeyValuePair_2<int32_t,::UnityEngine::Vector3>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<int32_t,::UnityEngine::Vector3>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline void System::Collections::Generic::KeyValuePair_2<int32_t,::UnityEngine::Vector3>::Deconstruct(ByRef<int32_t>  key, ByRef<::UnityEngine::Vector3>  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<int32_t,::UnityEngine::Vector3>>::get(),
                            "Deconstruct",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
// Ctor Parameters [CppParam { name: "key", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "value", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Collections::Generic::KeyValuePair_2<int32_t,::UnityEngine::Vector3>::KeyValuePair_2(int32_t  key, ::UnityEngine::Vector3  value) noexcept : ::bs_hook::ValueTypeWrapper<0x10>() {this->key = key;
this->value = value;
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr void System::Collections::Generic::KeyValuePair_2<int32_t,TValue>::__set_key(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr int32_t& System::Collections::Generic::KeyValuePair_2<int32_t,TValue>::__get_key()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr int32_t const& System::Collections::Generic::KeyValuePair_2<int32_t,TValue>::__get_key() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr void System::Collections::Generic::KeyValuePair_2<int32_t,TValue>::__set_value(TValue  value)  {
::cordl_internals::setInstanceField<TValue, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<TValue>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr TValue& System::Collections::Generic::KeyValuePair_2<int32_t,TValue>::__get_value()  {
return ::cordl_internals::getInstanceField<TValue, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr TValue const& System::Collections::Generic::KeyValuePair_2<int32_t,TValue>::__get_value() const {
return ::cordl_internals::getInstanceField<TValue, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline void System::Collections::Generic::KeyValuePair_2<int32_t,TValue>::_ctor(int32_t  key, TValue  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<int32_t,TValue>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline int32_t System::Collections::Generic::KeyValuePair_2<int32_t,TValue>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<int32_t,TValue>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline TValue System::Collections::Generic::KeyValuePair_2<int32_t,TValue>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<int32_t,TValue>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TValue, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline ::StringW System::Collections::Generic::KeyValuePair_2<int32_t,TValue>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<int32_t,TValue>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline void System::Collections::Generic::KeyValuePair_2<int32_t,TValue>::Deconstruct(ByRef<int32_t>  key, ByRef<TValue>  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<int32_t,TValue>>::get(),
                            "Deconstruct",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<TValue>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
// Ctor Parameters [CppParam { name: "key", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "value", ty: "TValue", modifiers: "", def_value: Some("csnull") }]
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::System::Collections::Generic::KeyValuePair_2<int32_t,TValue>::KeyValuePair_2(int32_t  key, TValue  value) noexcept : ::bs_hook::ValueTypeWrapper<0x10>() {this->key = key;
this->value = value;
}
template<::il2cpp_utils::il2cpp_reference_type T3_cordlgen_0>
constexpr void System::Collections::Generic::KeyValuePair_2<int32_t,::UnityEngine::ProBuilder::SimpleTuple_3<::UnityEngine::Vector3,::UnityEngine::Vector3,T3_cordlgen_0>>::__set_key(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T3_cordlgen_0>
constexpr int32_t& System::Collections::Generic::KeyValuePair_2<int32_t,::UnityEngine::ProBuilder::SimpleTuple_3<::UnityEngine::Vector3,::UnityEngine::Vector3,T3_cordlgen_0>>::__get_key()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T3_cordlgen_0>
constexpr int32_t const& System::Collections::Generic::KeyValuePair_2<int32_t,::UnityEngine::ProBuilder::SimpleTuple_3<::UnityEngine::Vector3,::UnityEngine::Vector3,T3_cordlgen_0>>::__get_key() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T3_cordlgen_0>
constexpr void System::Collections::Generic::KeyValuePair_2<int32_t,::UnityEngine::ProBuilder::SimpleTuple_3<::UnityEngine::Vector3,::UnityEngine::Vector3,T3_cordlgen_0>>::__set_value(::UnityEngine::ProBuilder::SimpleTuple_3<::UnityEngine::Vector3,::UnityEngine::Vector3,T3_cordlgen_0>  value)  {
::cordl_internals::setInstanceField<::UnityEngine::ProBuilder::SimpleTuple_3<::UnityEngine::Vector3,::UnityEngine::Vector3,T3_cordlgen_0>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::ProBuilder::SimpleTuple_3<::UnityEngine::Vector3,::UnityEngine::Vector3,T3_cordlgen_0>>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T3_cordlgen_0>
constexpr ::UnityEngine::ProBuilder::SimpleTuple_3<::UnityEngine::Vector3,::UnityEngine::Vector3,T3_cordlgen_0>& System::Collections::Generic::KeyValuePair_2<int32_t,::UnityEngine::ProBuilder::SimpleTuple_3<::UnityEngine::Vector3,::UnityEngine::Vector3,T3_cordlgen_0>>::__get_value()  {
return ::cordl_internals::getInstanceField<::UnityEngine::ProBuilder::SimpleTuple_3<::UnityEngine::Vector3,::UnityEngine::Vector3,T3_cordlgen_0>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T3_cordlgen_0>
constexpr ::UnityEngine::ProBuilder::SimpleTuple_3<::UnityEngine::Vector3,::UnityEngine::Vector3,T3_cordlgen_0> const& System::Collections::Generic::KeyValuePair_2<int32_t,::UnityEngine::ProBuilder::SimpleTuple_3<::UnityEngine::Vector3,::UnityEngine::Vector3,T3_cordlgen_0>>::__get_value() const {
return ::cordl_internals::getInstanceField<::UnityEngine::ProBuilder::SimpleTuple_3<::UnityEngine::Vector3,::UnityEngine::Vector3,T3_cordlgen_0>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T3_cordlgen_0>
inline void System::Collections::Generic::KeyValuePair_2<int32_t,::UnityEngine::ProBuilder::SimpleTuple_3<::UnityEngine::Vector3,::UnityEngine::Vector3,T3_cordlgen_0>>::_ctor(int32_t  key, ::UnityEngine::ProBuilder::SimpleTuple_3<::UnityEngine::Vector3,::UnityEngine::Vector3,T3_cordlgen_0>  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<int32_t,::UnityEngine::ProBuilder::SimpleTuple_3<::UnityEngine::Vector3,::UnityEngine::Vector3,T3_cordlgen_0>>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::SimpleTuple_3<::UnityEngine::Vector3,::UnityEngine::Vector3,T3_cordlgen_0>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
template<::il2cpp_utils::il2cpp_reference_type T3_cordlgen_0>
inline int32_t System::Collections::Generic::KeyValuePair_2<int32_t,::UnityEngine::ProBuilder::SimpleTuple_3<::UnityEngine::Vector3,::UnityEngine::Vector3,T3_cordlgen_0>>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<int32_t,::UnityEngine::ProBuilder::SimpleTuple_3<::UnityEngine::Vector3,::UnityEngine::Vector3,T3_cordlgen_0>>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T3_cordlgen_0>
inline ::UnityEngine::ProBuilder::SimpleTuple_3<::UnityEngine::Vector3,::UnityEngine::Vector3,T3_cordlgen_0> System::Collections::Generic::KeyValuePair_2<int32_t,::UnityEngine::ProBuilder::SimpleTuple_3<::UnityEngine::Vector3,::UnityEngine::Vector3,T3_cordlgen_0>>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<int32_t,::UnityEngine::ProBuilder::SimpleTuple_3<::UnityEngine::Vector3,::UnityEngine::Vector3,T3_cordlgen_0>>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::SimpleTuple_3<::UnityEngine::Vector3,::UnityEngine::Vector3,T3_cordlgen_0>, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T3_cordlgen_0>
inline ::StringW System::Collections::Generic::KeyValuePair_2<int32_t,::UnityEngine::ProBuilder::SimpleTuple_3<::UnityEngine::Vector3,::UnityEngine::Vector3,T3_cordlgen_0>>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<int32_t,::UnityEngine::ProBuilder::SimpleTuple_3<::UnityEngine::Vector3,::UnityEngine::Vector3,T3_cordlgen_0>>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T3_cordlgen_0>
inline void System::Collections::Generic::KeyValuePair_2<int32_t,::UnityEngine::ProBuilder::SimpleTuple_3<::UnityEngine::Vector3,::UnityEngine::Vector3,T3_cordlgen_0>>::Deconstruct(ByRef<int32_t>  key, ByRef<::UnityEngine::ProBuilder::SimpleTuple_3<::UnityEngine::Vector3,::UnityEngine::Vector3,T3_cordlgen_0>>  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<int32_t,::UnityEngine::ProBuilder::SimpleTuple_3<::UnityEngine::Vector3,::UnityEngine::Vector3,T3_cordlgen_0>>>::get(),
                            "Deconstruct",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::ProBuilder::SimpleTuple_3<::UnityEngine::Vector3,::UnityEngine::Vector3,T3_cordlgen_0>>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
// Ctor Parameters [CppParam { name: "key", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "value", ty: "::UnityEngine::ProBuilder::SimpleTuple_3<::UnityEngine::Vector3,::UnityEngine::Vector3,T3_cordlgen_0>", modifiers: "", def_value: Some("{}") }]
template<::il2cpp_utils::il2cpp_reference_type T3_cordlgen_0>
constexpr ::System::Collections::Generic::KeyValuePair_2<int32_t,::UnityEngine::ProBuilder::SimpleTuple_3<::UnityEngine::Vector3,::UnityEngine::Vector3,T3_cordlgen_0>>::KeyValuePair_2(int32_t  key, ::UnityEngine::ProBuilder::SimpleTuple_3<::UnityEngine::Vector3,::UnityEngine::Vector3,T3_cordlgen_0>  value) noexcept : ::bs_hook::ValueTypeWrapper<0x28>() {this->key = key;
this->value = value;
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr void System::Collections::Generic::KeyValuePair_2<::System::Guid,TValue>::__set_key(::System::Guid  value)  {
::cordl_internals::setInstanceField<::System::Guid, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Guid>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::System::Guid& System::Collections::Generic::KeyValuePair_2<::System::Guid,TValue>::__get_key()  {
return ::cordl_internals::getInstanceField<::System::Guid, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::System::Guid const& System::Collections::Generic::KeyValuePair_2<::System::Guid,TValue>::__get_key() const {
return ::cordl_internals::getInstanceField<::System::Guid, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr void System::Collections::Generic::KeyValuePair_2<::System::Guid,TValue>::__set_value(TValue  value)  {
::cordl_internals::setInstanceField<TValue, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<TValue>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr TValue& System::Collections::Generic::KeyValuePair_2<::System::Guid,TValue>::__get_value()  {
return ::cordl_internals::getInstanceField<TValue, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr TValue const& System::Collections::Generic::KeyValuePair_2<::System::Guid,TValue>::__get_value() const {
return ::cordl_internals::getInstanceField<TValue, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline void System::Collections::Generic::KeyValuePair_2<::System::Guid,TValue>::_ctor(::System::Guid  key, TValue  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::System::Guid,TValue>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline ::System::Guid System::Collections::Generic::KeyValuePair_2<::System::Guid,TValue>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::System::Guid,TValue>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Guid, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline TValue System::Collections::Generic::KeyValuePair_2<::System::Guid,TValue>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::System::Guid,TValue>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TValue, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline ::StringW System::Collections::Generic::KeyValuePair_2<::System::Guid,TValue>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::System::Guid,TValue>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline void System::Collections::Generic::KeyValuePair_2<::System::Guid,TValue>::Deconstruct(ByRef<::System::Guid>  key, ByRef<TValue>  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::System::Guid,TValue>>::get(),
                            "Deconstruct",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Guid>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<TValue>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
// Ctor Parameters [CppParam { name: "key", ty: "::System::Guid", modifiers: "", def_value: Some("{}") }, CppParam { name: "value", ty: "TValue", modifiers: "", def_value: Some("csnull") }]
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::System::Collections::Generic::KeyValuePair_2<::System::Guid,TValue>::KeyValuePair_2(::System::Guid  key, TValue  value) noexcept : ::bs_hook::ValueTypeWrapper<0x18>() {this->key = key;
this->value = value;
}
//  Writing Method size for method: ::System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::OVRAnchor>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::OVRAnchor>::*)(::System::Guid, ::GlobalNamespace::OVRAnchor)>(&::System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::OVRAnchor>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::OVRAnchor>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRAnchor>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::OVRAnchor>.get_Key
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Guid (::System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::OVRAnchor>::*)()>(&::System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::OVRAnchor>::get_Key)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::OVRAnchor>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::OVRAnchor>.get_Value
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRAnchor (::System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::OVRAnchor>::*)()>(&::System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::OVRAnchor>::get_Value)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::OVRAnchor>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::OVRAnchor>.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::OVRAnchor>::*)()>(&::System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::OVRAnchor>::ToString)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::OVRAnchor>>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::OVRAnchor>>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::OVRAnchor>.Deconstruct
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::OVRAnchor>::*)(ByRef<::System::Guid>, ByRef<::GlobalNamespace::OVRAnchor>)>(&::System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::OVRAnchor>::Deconstruct)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::OVRAnchor>>::get(),
                            "Deconstruct",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Guid>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::OVRAnchor>>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::OVRAnchor>::__set_key(::System::Guid  value)  {
::cordl_internals::setInstanceField<::System::Guid, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Guid>(value));
}
constexpr ::System::Guid& System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::OVRAnchor>::__get_key()  {
return ::cordl_internals::getInstanceField<::System::Guid, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Guid const& System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::OVRAnchor>::__get_key() const {
return ::cordl_internals::getInstanceField<::System::Guid, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::OVRAnchor>::__set_value(::GlobalNamespace::OVRAnchor  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::OVRAnchor, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::GlobalNamespace::OVRAnchor>(value));
}
constexpr ::GlobalNamespace::OVRAnchor& System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::OVRAnchor>::__get_value()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::OVRAnchor, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::GlobalNamespace::OVRAnchor const& System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::OVRAnchor>::__get_value() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::OVRAnchor, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline void System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::OVRAnchor>::_ctor(::System::Guid  key, ::GlobalNamespace::OVRAnchor  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::OVRAnchor>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRAnchor>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
inline ::System::Guid System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::OVRAnchor>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::OVRAnchor>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Guid, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::OVRAnchor System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::OVRAnchor>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::OVRAnchor>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRAnchor, false>(*this, ___internal_method);
}
inline ::StringW System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::OVRAnchor>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::OVRAnchor>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline void System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::OVRAnchor>::Deconstruct(ByRef<::System::Guid>  key, ByRef<::GlobalNamespace::OVRAnchor>  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::OVRAnchor>>::get(),
                            "Deconstruct",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Guid>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::OVRAnchor>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
// Ctor Parameters [CppParam { name: "key", ty: "::System::Guid", modifiers: "", def_value: Some("{}") }, CppParam { name: "value", ty: "::GlobalNamespace::OVRAnchor", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::OVRAnchor>::KeyValuePair_2(::System::Guid  key, ::GlobalNamespace::OVRAnchor  value) noexcept : ::bs_hook::ValueTypeWrapper<0x28>() {this->key = key;
this->value = value;
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TValue>
constexpr void System::Collections::Generic::KeyValuePair_2<::System::Guid,TValue>::__set_key(::System::Guid  value)  {
::cordl_internals::setInstanceField<::System::Guid, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Guid>(value));
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TValue>
constexpr ::System::Guid& System::Collections::Generic::KeyValuePair_2<::System::Guid,TValue>::__get_key()  {
return ::cordl_internals::getInstanceField<::System::Guid, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TValue>
constexpr ::System::Guid const& System::Collections::Generic::KeyValuePair_2<::System::Guid,TValue>::__get_key() const {
return ::cordl_internals::getInstanceField<::System::Guid, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TValue>
constexpr void System::Collections::Generic::KeyValuePair_2<::System::Guid,TValue>::__set_value(TValue  value)  {
::cordl_internals::setInstanceField<TValue, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<TValue>(value));
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TValue>
constexpr TValue& System::Collections::Generic::KeyValuePair_2<::System::Guid,TValue>::__get_value()  {
return ::cordl_internals::getInstanceField<TValue, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TValue>
constexpr TValue const& System::Collections::Generic::KeyValuePair_2<::System::Guid,TValue>::__get_value() const {
return ::cordl_internals::getInstanceField<TValue, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TValue>
inline void System::Collections::Generic::KeyValuePair_2<::System::Guid,TValue>::_ctor(::System::Guid  key, TValue  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::System::Guid,TValue>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TValue>
inline ::System::Guid System::Collections::Generic::KeyValuePair_2<::System::Guid,TValue>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::System::Guid,TValue>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Guid, false>(*this, ___internal_method);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TValue>
inline TValue System::Collections::Generic::KeyValuePair_2<::System::Guid,TValue>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::System::Guid,TValue>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TValue, false>(*this, ___internal_method);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TValue>
inline ::StringW System::Collections::Generic::KeyValuePair_2<::System::Guid,TValue>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::System::Guid,TValue>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TValue>
inline void System::Collections::Generic::KeyValuePair_2<::System::Guid,TValue>::Deconstruct(ByRef<::System::Guid>  key, ByRef<TValue>  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::System::Guid,TValue>>::get(),
                            "Deconstruct",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Guid>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<TValue>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
// Ctor Parameters [CppParam { name: "key", ty: "::System::Guid", modifiers: "", def_value: Some("{}") }, CppParam { name: "value", ty: "TValue", modifiers: "", def_value: Some("{}") }]
template<::cordl_internals::is_or_is_backed_by<int32_t> TValue>
constexpr ::System::Collections::Generic::KeyValuePair_2<::System::Guid,TValue>::KeyValuePair_2(::System::Guid  key, TValue  value) noexcept : ::bs_hook::ValueTypeWrapper<0x14>() {this->key = key;
this->value = value;
}
//  Writing Method size for method: ::System::Collections::Generic::KeyValuePair_2<::System::Guid,bool>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Generic::KeyValuePair_2<::System::Guid,bool>::*)(::System::Guid, bool)>(&::System::Collections::Generic::KeyValuePair_2<::System::Guid,bool>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::System::Guid,bool>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::KeyValuePair_2<::System::Guid,bool>.get_Key
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Guid (::System::Collections::Generic::KeyValuePair_2<::System::Guid,bool>::*)()>(&::System::Collections::Generic::KeyValuePair_2<::System::Guid,bool>::get_Key)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::System::Guid,bool>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::KeyValuePair_2<::System::Guid,bool>.get_Value
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Collections::Generic::KeyValuePair_2<::System::Guid,bool>::*)()>(&::System::Collections::Generic::KeyValuePair_2<::System::Guid,bool>::get_Value)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::System::Guid,bool>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::KeyValuePair_2<::System::Guid,bool>.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Collections::Generic::KeyValuePair_2<::System::Guid,bool>::*)()>(&::System::Collections::Generic::KeyValuePair_2<::System::Guid,bool>::ToString)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::System::Guid,bool>>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::System::Guid,bool>>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::KeyValuePair_2<::System::Guid,bool>.Deconstruct
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Generic::KeyValuePair_2<::System::Guid,bool>::*)(ByRef<::System::Guid>, ByRef<bool>)>(&::System::Collections::Generic::KeyValuePair_2<::System::Guid,bool>::Deconstruct)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::System::Guid,bool>>::get(),
                            "Deconstruct",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Guid>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Collections::Generic::KeyValuePair_2<::System::Guid,bool>::__set_key(::System::Guid  value)  {
::cordl_internals::setInstanceField<::System::Guid, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Guid>(value));
}
constexpr ::System::Guid& System::Collections::Generic::KeyValuePair_2<::System::Guid,bool>::__get_key()  {
return ::cordl_internals::getInstanceField<::System::Guid, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Guid const& System::Collections::Generic::KeyValuePair_2<::System::Guid,bool>::__get_key() const {
return ::cordl_internals::getInstanceField<::System::Guid, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::Collections::Generic::KeyValuePair_2<::System::Guid,bool>::__set_value(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<bool>(value));
}
constexpr bool& System::Collections::Generic::KeyValuePair_2<::System::Guid,bool>::__get_value()  {
return ::cordl_internals::getInstanceField<bool, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr bool const& System::Collections::Generic::KeyValuePair_2<::System::Guid,bool>::__get_value() const {
return ::cordl_internals::getInstanceField<bool, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline void System::Collections::Generic::KeyValuePair_2<::System::Guid,bool>::_ctor(::System::Guid  key, bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::System::Guid,bool>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
inline ::System::Guid System::Collections::Generic::KeyValuePair_2<::System::Guid,bool>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::System::Guid,bool>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Guid, false>(*this, ___internal_method);
}
inline bool System::Collections::Generic::KeyValuePair_2<::System::Guid,bool>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::System::Guid,bool>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline ::StringW System::Collections::Generic::KeyValuePair_2<::System::Guid,bool>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::System::Guid,bool>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline void System::Collections::Generic::KeyValuePair_2<::System::Guid,bool>::Deconstruct(ByRef<::System::Guid>  key, ByRef<bool>  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::System::Guid,bool>>::get(),
                            "Deconstruct",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Guid>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
// Ctor Parameters [CppParam { name: "key", ty: "::System::Guid", modifiers: "", def_value: Some("{}") }, CppParam { name: "value", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Collections::Generic::KeyValuePair_2<::System::Guid,bool>::KeyValuePair_2(::System::Guid  key, bool  value) noexcept : ::bs_hook::ValueTypeWrapper<0x14>() {this->key = key;
this->value = value;
}
template<::il2cpp_utils::il2cpp_reference_type TResult_cordlgen_0,::il2cpp_utils::il2cpp_reference_type T_cordlgen_1>
constexpr void System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__CallbackWithState_1<TResult_cordlgen_0,T_cordlgen_1>>::__set_key(::System::Guid  value)  {
::cordl_internals::setInstanceField<::System::Guid, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Guid>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TResult_cordlgen_0,::il2cpp_utils::il2cpp_reference_type T_cordlgen_1>
constexpr ::System::Guid& System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__CallbackWithState_1<TResult_cordlgen_0,T_cordlgen_1>>::__get_key()  {
return ::cordl_internals::getInstanceField<::System::Guid, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TResult_cordlgen_0,::il2cpp_utils::il2cpp_reference_type T_cordlgen_1>
constexpr ::System::Guid const& System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__CallbackWithState_1<TResult_cordlgen_0,T_cordlgen_1>>::__get_key() const {
return ::cordl_internals::getInstanceField<::System::Guid, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TResult_cordlgen_0,::il2cpp_utils::il2cpp_reference_type T_cordlgen_1>
constexpr void System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__CallbackWithState_1<TResult_cordlgen_0,T_cordlgen_1>>::__set_value(::GlobalNamespace::__OVRTask_1__CallbackWithState_1<TResult_cordlgen_0,T_cordlgen_1>  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__OVRTask_1__CallbackWithState_1<TResult_cordlgen_0,T_cordlgen_1>, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::GlobalNamespace::__OVRTask_1__CallbackWithState_1<TResult_cordlgen_0,T_cordlgen_1>>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TResult_cordlgen_0,::il2cpp_utils::il2cpp_reference_type T_cordlgen_1>
constexpr ::GlobalNamespace::__OVRTask_1__CallbackWithState_1<TResult_cordlgen_0,T_cordlgen_1>& System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__CallbackWithState_1<TResult_cordlgen_0,T_cordlgen_1>>::__get_value()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__OVRTask_1__CallbackWithState_1<TResult_cordlgen_0,T_cordlgen_1>, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TResult_cordlgen_0,::il2cpp_utils::il2cpp_reference_type T_cordlgen_1>
constexpr ::GlobalNamespace::__OVRTask_1__CallbackWithState_1<TResult_cordlgen_0,T_cordlgen_1> const& System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__CallbackWithState_1<TResult_cordlgen_0,T_cordlgen_1>>::__get_value() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__OVRTask_1__CallbackWithState_1<TResult_cordlgen_0,T_cordlgen_1>, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TResult_cordlgen_0,::il2cpp_utils::il2cpp_reference_type T_cordlgen_1>
inline void System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__CallbackWithState_1<TResult_cordlgen_0,T_cordlgen_1>>::_ctor(::System::Guid  key, ::GlobalNamespace::__OVRTask_1__CallbackWithState_1<TResult_cordlgen_0,T_cordlgen_1>  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__CallbackWithState_1<TResult_cordlgen_0,T_cordlgen_1>>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRTask_1__CallbackWithState_1<TResult_cordlgen_0,T_cordlgen_1>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
template<::il2cpp_utils::il2cpp_reference_type TResult_cordlgen_0,::il2cpp_utils::il2cpp_reference_type T_cordlgen_1>
inline ::System::Guid System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__CallbackWithState_1<TResult_cordlgen_0,T_cordlgen_1>>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__CallbackWithState_1<TResult_cordlgen_0,T_cordlgen_1>>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Guid, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TResult_cordlgen_0,::il2cpp_utils::il2cpp_reference_type T_cordlgen_1>
inline ::GlobalNamespace::__OVRTask_1__CallbackWithState_1<TResult_cordlgen_0,T_cordlgen_1> System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__CallbackWithState_1<TResult_cordlgen_0,T_cordlgen_1>>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__CallbackWithState_1<TResult_cordlgen_0,T_cordlgen_1>>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__OVRTask_1__CallbackWithState_1<TResult_cordlgen_0,T_cordlgen_1>, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TResult_cordlgen_0,::il2cpp_utils::il2cpp_reference_type T_cordlgen_1>
inline ::StringW System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__CallbackWithState_1<TResult_cordlgen_0,T_cordlgen_1>>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__CallbackWithState_1<TResult_cordlgen_0,T_cordlgen_1>>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TResult_cordlgen_0,::il2cpp_utils::il2cpp_reference_type T_cordlgen_1>
inline void System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__CallbackWithState_1<TResult_cordlgen_0,T_cordlgen_1>>::Deconstruct(ByRef<::System::Guid>  key, ByRef<::GlobalNamespace::__OVRTask_1__CallbackWithState_1<TResult_cordlgen_0,T_cordlgen_1>>  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__CallbackWithState_1<TResult_cordlgen_0,T_cordlgen_1>>>::get(),
                            "Deconstruct",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Guid>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::__OVRTask_1__CallbackWithState_1<TResult_cordlgen_0,T_cordlgen_1>>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
// Ctor Parameters [CppParam { name: "key", ty: "::System::Guid", modifiers: "", def_value: Some("{}") }, CppParam { name: "value", ty: "::GlobalNamespace::__OVRTask_1__CallbackWithState_1<TResult_cordlgen_0,T_cordlgen_1>", modifiers: "", def_value: Some("{}") }]
template<::il2cpp_utils::il2cpp_reference_type TResult_cordlgen_0,::il2cpp_utils::il2cpp_reference_type T_cordlgen_1>
constexpr ::System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__CallbackWithState_1<TResult_cordlgen_0,T_cordlgen_1>>::KeyValuePair_2(::System::Guid  key, ::GlobalNamespace::__OVRTask_1__CallbackWithState_1<TResult_cordlgen_0,T_cordlgen_1>  value) noexcept : ::bs_hook::ValueTypeWrapper<0x20>() {this->key = key;
this->value = value;
}
template<::il2cpp_utils::il2cpp_reference_type TResult_cordlgen_0,::il2cpp_utils::il2cpp_reference_type TResult_cordlgen_1,::il2cpp_utils::il2cpp_reference_type TCapture_cordlgen_2>
constexpr void System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__CallbackWithState_1<TResult_cordlgen_0,::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<TResult_cordlgen_1,TCapture_cordlgen_2>>>::__set_key(::System::Guid  value)  {
::cordl_internals::setInstanceField<::System::Guid, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Guid>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TResult_cordlgen_0,::il2cpp_utils::il2cpp_reference_type TResult_cordlgen_1,::il2cpp_utils::il2cpp_reference_type TCapture_cordlgen_2>
constexpr ::System::Guid& System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__CallbackWithState_1<TResult_cordlgen_0,::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<TResult_cordlgen_1,TCapture_cordlgen_2>>>::__get_key()  {
return ::cordl_internals::getInstanceField<::System::Guid, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TResult_cordlgen_0,::il2cpp_utils::il2cpp_reference_type TResult_cordlgen_1,::il2cpp_utils::il2cpp_reference_type TCapture_cordlgen_2>
constexpr ::System::Guid const& System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__CallbackWithState_1<TResult_cordlgen_0,::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<TResult_cordlgen_1,TCapture_cordlgen_2>>>::__get_key() const {
return ::cordl_internals::getInstanceField<::System::Guid, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TResult_cordlgen_0,::il2cpp_utils::il2cpp_reference_type TResult_cordlgen_1,::il2cpp_utils::il2cpp_reference_type TCapture_cordlgen_2>
constexpr void System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__CallbackWithState_1<TResult_cordlgen_0,::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<TResult_cordlgen_1,TCapture_cordlgen_2>>>::__set_value(::GlobalNamespace::__OVRTask_1__CallbackWithState_1<TResult_cordlgen_0,::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<TResult_cordlgen_1,TCapture_cordlgen_2>>  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__OVRTask_1__CallbackWithState_1<TResult_cordlgen_0,::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<TResult_cordlgen_1,TCapture_cordlgen_2>>, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::GlobalNamespace::__OVRTask_1__CallbackWithState_1<TResult_cordlgen_0,::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<TResult_cordlgen_1,TCapture_cordlgen_2>>>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TResult_cordlgen_0,::il2cpp_utils::il2cpp_reference_type TResult_cordlgen_1,::il2cpp_utils::il2cpp_reference_type TCapture_cordlgen_2>
constexpr ::GlobalNamespace::__OVRTask_1__CallbackWithState_1<TResult_cordlgen_0,::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<TResult_cordlgen_1,TCapture_cordlgen_2>>& System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__CallbackWithState_1<TResult_cordlgen_0,::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<TResult_cordlgen_1,TCapture_cordlgen_2>>>::__get_value()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__OVRTask_1__CallbackWithState_1<TResult_cordlgen_0,::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<TResult_cordlgen_1,TCapture_cordlgen_2>>, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TResult_cordlgen_0,::il2cpp_utils::il2cpp_reference_type TResult_cordlgen_1,::il2cpp_utils::il2cpp_reference_type TCapture_cordlgen_2>
constexpr ::GlobalNamespace::__OVRTask_1__CallbackWithState_1<TResult_cordlgen_0,::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<TResult_cordlgen_1,TCapture_cordlgen_2>> const& System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__CallbackWithState_1<TResult_cordlgen_0,::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<TResult_cordlgen_1,TCapture_cordlgen_2>>>::__get_value() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__OVRTask_1__CallbackWithState_1<TResult_cordlgen_0,::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<TResult_cordlgen_1,TCapture_cordlgen_2>>, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TResult_cordlgen_0,::il2cpp_utils::il2cpp_reference_type TResult_cordlgen_1,::il2cpp_utils::il2cpp_reference_type TCapture_cordlgen_2>
inline void System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__CallbackWithState_1<TResult_cordlgen_0,::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<TResult_cordlgen_1,TCapture_cordlgen_2>>>::_ctor(::System::Guid  key, ::GlobalNamespace::__OVRTask_1__CallbackWithState_1<TResult_cordlgen_0,::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<TResult_cordlgen_1,TCapture_cordlgen_2>>  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__CallbackWithState_1<TResult_cordlgen_0,::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<TResult_cordlgen_1,TCapture_cordlgen_2>>>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRTask_1__CallbackWithState_1<TResult_cordlgen_0,::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<TResult_cordlgen_1,TCapture_cordlgen_2>>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
template<::il2cpp_utils::il2cpp_reference_type TResult_cordlgen_0,::il2cpp_utils::il2cpp_reference_type TResult_cordlgen_1,::il2cpp_utils::il2cpp_reference_type TCapture_cordlgen_2>
inline ::System::Guid System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__CallbackWithState_1<TResult_cordlgen_0,::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<TResult_cordlgen_1,TCapture_cordlgen_2>>>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__CallbackWithState_1<TResult_cordlgen_0,::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<TResult_cordlgen_1,TCapture_cordlgen_2>>>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Guid, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TResult_cordlgen_0,::il2cpp_utils::il2cpp_reference_type TResult_cordlgen_1,::il2cpp_utils::il2cpp_reference_type TCapture_cordlgen_2>
inline ::GlobalNamespace::__OVRTask_1__CallbackWithState_1<TResult_cordlgen_0,::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<TResult_cordlgen_1,TCapture_cordlgen_2>> System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__CallbackWithState_1<TResult_cordlgen_0,::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<TResult_cordlgen_1,TCapture_cordlgen_2>>>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__CallbackWithState_1<TResult_cordlgen_0,::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<TResult_cordlgen_1,TCapture_cordlgen_2>>>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__OVRTask_1__CallbackWithState_1<TResult_cordlgen_0,::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<TResult_cordlgen_1,TCapture_cordlgen_2>>, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TResult_cordlgen_0,::il2cpp_utils::il2cpp_reference_type TResult_cordlgen_1,::il2cpp_utils::il2cpp_reference_type TCapture_cordlgen_2>
inline ::StringW System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__CallbackWithState_1<TResult_cordlgen_0,::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<TResult_cordlgen_1,TCapture_cordlgen_2>>>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__CallbackWithState_1<TResult_cordlgen_0,::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<TResult_cordlgen_1,TCapture_cordlgen_2>>>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TResult_cordlgen_0,::il2cpp_utils::il2cpp_reference_type TResult_cordlgen_1,::il2cpp_utils::il2cpp_reference_type TCapture_cordlgen_2>
inline void System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__CallbackWithState_1<TResult_cordlgen_0,::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<TResult_cordlgen_1,TCapture_cordlgen_2>>>::Deconstruct(ByRef<::System::Guid>  key, ByRef<::GlobalNamespace::__OVRTask_1__CallbackWithState_1<TResult_cordlgen_0,::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<TResult_cordlgen_1,TCapture_cordlgen_2>>>  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__CallbackWithState_1<TResult_cordlgen_0,::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<TResult_cordlgen_1,TCapture_cordlgen_2>>>>::get(),
                            "Deconstruct",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Guid>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::__OVRTask_1__CallbackWithState_1<TResult_cordlgen_0,::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<TResult_cordlgen_1,TCapture_cordlgen_2>>>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
// Ctor Parameters [CppParam { name: "key", ty: "::System::Guid", modifiers: "", def_value: Some("{}") }, CppParam { name: "value", ty: "::GlobalNamespace::__OVRTask_1__CallbackWithState_1<TResult_cordlgen_0,::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<TResult_cordlgen_1,TCapture_cordlgen_2>>", modifiers: "", def_value: Some("{}") }]
template<::il2cpp_utils::il2cpp_reference_type TResult_cordlgen_0,::il2cpp_utils::il2cpp_reference_type TResult_cordlgen_1,::il2cpp_utils::il2cpp_reference_type TCapture_cordlgen_2>
constexpr ::System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__CallbackWithState_1<TResult_cordlgen_0,::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<TResult_cordlgen_1,TCapture_cordlgen_2>>>::KeyValuePair_2(::System::Guid  key, ::GlobalNamespace::__OVRTask_1__CallbackWithState_1<TResult_cordlgen_0,::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<TResult_cordlgen_1,TCapture_cordlgen_2>>  value) noexcept : ::bs_hook::ValueTypeWrapper<0x28>() {this->key = key;
this->value = value;
}
template<::il2cpp_utils::il2cpp_reference_type T_cordlgen_0>
constexpr void System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,T_cordlgen_0>>::__set_key(::System::Guid  value)  {
::cordl_internals::setInstanceField<::System::Guid, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Guid>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T_cordlgen_0>
constexpr ::System::Guid& System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,T_cordlgen_0>>::__get_key()  {
return ::cordl_internals::getInstanceField<::System::Guid, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T_cordlgen_0>
constexpr ::System::Guid const& System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,T_cordlgen_0>>::__get_key() const {
return ::cordl_internals::getInstanceField<::System::Guid, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T_cordlgen_0>
constexpr void System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,T_cordlgen_0>>::__set_value(::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,T_cordlgen_0>  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,T_cordlgen_0>, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,T_cordlgen_0>>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T_cordlgen_0>
constexpr ::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,T_cordlgen_0>& System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,T_cordlgen_0>>::__get_value()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,T_cordlgen_0>, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T_cordlgen_0>
constexpr ::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,T_cordlgen_0> const& System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,T_cordlgen_0>>::__get_value() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,T_cordlgen_0>, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T_cordlgen_0>
inline void System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,T_cordlgen_0>>::_ctor(::System::Guid  key, ::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,T_cordlgen_0>  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,T_cordlgen_0>>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,T_cordlgen_0>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
template<::il2cpp_utils::il2cpp_reference_type T_cordlgen_0>
inline ::System::Guid System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,T_cordlgen_0>>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,T_cordlgen_0>>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Guid, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T_cordlgen_0>
inline ::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,T_cordlgen_0> System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,T_cordlgen_0>>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,T_cordlgen_0>>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,T_cordlgen_0>, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T_cordlgen_0>
inline ::StringW System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,T_cordlgen_0>>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,T_cordlgen_0>>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T_cordlgen_0>
inline void System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,T_cordlgen_0>>::Deconstruct(ByRef<::System::Guid>  key, ByRef<::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,T_cordlgen_0>>  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,T_cordlgen_0>>>::get(),
                            "Deconstruct",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Guid>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,T_cordlgen_0>>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
// Ctor Parameters [CppParam { name: "key", ty: "::System::Guid", modifiers: "", def_value: Some("{}") }, CppParam { name: "value", ty: "::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,T_cordlgen_0>", modifiers: "", def_value: Some("{}") }]
template<::il2cpp_utils::il2cpp_reference_type T_cordlgen_0>
constexpr ::System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,T_cordlgen_0>>::KeyValuePair_2(::System::Guid  key, ::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,T_cordlgen_0>  value) noexcept : ::bs_hook::ValueTypeWrapper<0x20>() {this->key = key;
this->value = value;
}
//  Writing Method size for method: ::System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,::GlobalNamespace::OVRAnchor>>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,::GlobalNamespace::OVRAnchor>>::*)(::System::Guid, ::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,::GlobalNamespace::OVRAnchor>)>(&::System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,::GlobalNamespace::OVRAnchor>>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,::GlobalNamespace::OVRAnchor>>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,::GlobalNamespace::OVRAnchor>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,::GlobalNamespace::OVRAnchor>>.get_Key
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Guid (::System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,::GlobalNamespace::OVRAnchor>>::*)()>(&::System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,::GlobalNamespace::OVRAnchor>>::get_Key)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,::GlobalNamespace::OVRAnchor>>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,::GlobalNamespace::OVRAnchor>>.get_Value
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,::GlobalNamespace::OVRAnchor> (::System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,::GlobalNamespace::OVRAnchor>>::*)()>(&::System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,::GlobalNamespace::OVRAnchor>>::get_Value)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,::GlobalNamespace::OVRAnchor>>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,::GlobalNamespace::OVRAnchor>>.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,::GlobalNamespace::OVRAnchor>>::*)()>(&::System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,::GlobalNamespace::OVRAnchor>>::ToString)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,::GlobalNamespace::OVRAnchor>>>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,::GlobalNamespace::OVRAnchor>>>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,::GlobalNamespace::OVRAnchor>>.Deconstruct
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,::GlobalNamespace::OVRAnchor>>::*)(ByRef<::System::Guid>, ByRef<::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,::GlobalNamespace::OVRAnchor>>)>(&::System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,::GlobalNamespace::OVRAnchor>>::Deconstruct)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,::GlobalNamespace::OVRAnchor>>>::get(),
                            "Deconstruct",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Guid>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,::GlobalNamespace::OVRAnchor>>>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,::GlobalNamespace::OVRAnchor>>::__set_key(::System::Guid  value)  {
::cordl_internals::setInstanceField<::System::Guid, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Guid>(value));
}
constexpr ::System::Guid& System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,::GlobalNamespace::OVRAnchor>>::__get_key()  {
return ::cordl_internals::getInstanceField<::System::Guid, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Guid const& System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,::GlobalNamespace::OVRAnchor>>::__get_key() const {
return ::cordl_internals::getInstanceField<::System::Guid, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,::GlobalNamespace::OVRAnchor>>::__set_value(::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,::GlobalNamespace::OVRAnchor>  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,::GlobalNamespace::OVRAnchor>, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,::GlobalNamespace::OVRAnchor>>(value));
}
constexpr ::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,::GlobalNamespace::OVRAnchor>& System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,::GlobalNamespace::OVRAnchor>>::__get_value()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,::GlobalNamespace::OVRAnchor>, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,::GlobalNamespace::OVRAnchor> const& System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,::GlobalNamespace::OVRAnchor>>::__get_value() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,::GlobalNamespace::OVRAnchor>, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline void System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,::GlobalNamespace::OVRAnchor>>::_ctor(::System::Guid  key, ::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,::GlobalNamespace::OVRAnchor>  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,::GlobalNamespace::OVRAnchor>>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,::GlobalNamespace::OVRAnchor>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
inline ::System::Guid System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,::GlobalNamespace::OVRAnchor>>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,::GlobalNamespace::OVRAnchor>>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Guid, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,::GlobalNamespace::OVRAnchor> System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,::GlobalNamespace::OVRAnchor>>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,::GlobalNamespace::OVRAnchor>>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,::GlobalNamespace::OVRAnchor>, false>(*this, ___internal_method);
}
inline ::StringW System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,::GlobalNamespace::OVRAnchor>>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,::GlobalNamespace::OVRAnchor>>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline void System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,::GlobalNamespace::OVRAnchor>>::Deconstruct(ByRef<::System::Guid>  key, ByRef<::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,::GlobalNamespace::OVRAnchor>>  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,::GlobalNamespace::OVRAnchor>>>::get(),
                            "Deconstruct",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Guid>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,::GlobalNamespace::OVRAnchor>>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
// Ctor Parameters [CppParam { name: "key", ty: "::System::Guid", modifiers: "", def_value: Some("{}") }, CppParam { name: "value", ty: "::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,::GlobalNamespace::OVRAnchor>", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,::GlobalNamespace::OVRAnchor>>::KeyValuePair_2(::System::Guid  key, ::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,::GlobalNamespace::OVRAnchor>  value) noexcept : ::bs_hook::ValueTypeWrapper<0x30>() {this->key = key;
this->value = value;
}
//  Writing Method size for method: ::System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<bool,::GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor>>>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<bool,::GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor>>>::*)(::System::Guid, ::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<bool,::GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor>>)>(&::System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<bool,::GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor>>>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<bool,::GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor>>>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<bool,::GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor>>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<bool,::GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor>>>.get_Key
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Guid (::System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<bool,::GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor>>>::*)()>(&::System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<bool,::GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor>>>::get_Key)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<bool,::GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor>>>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<bool,::GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor>>>.get_Value
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<bool,::GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor>> (::System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<bool,::GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor>>>::*)()>(&::System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<bool,::GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor>>>::get_Value)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<bool,::GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor>>>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<bool,::GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor>>>.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<bool,::GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor>>>::*)()>(&::System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<bool,::GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor>>>::ToString)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<bool,::GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor>>>>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<bool,::GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor>>>>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<bool,::GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor>>>.Deconstruct
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<bool,::GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor>>>::*)(ByRef<::System::Guid>, ByRef<::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<bool,::GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor>>>)>(&::System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<bool,::GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor>>>::Deconstruct)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<bool,::GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor>>>>::get(),
                            "Deconstruct",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Guid>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<bool,::GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor>>>>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<bool,::GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor>>>::__set_key(::System::Guid  value)  {
::cordl_internals::setInstanceField<::System::Guid, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Guid>(value));
}
constexpr ::System::Guid& System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<bool,::GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor>>>::__get_key()  {
return ::cordl_internals::getInstanceField<::System::Guid, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Guid const& System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<bool,::GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor>>>::__get_key() const {
return ::cordl_internals::getInstanceField<::System::Guid, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<bool,::GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor>>>::__set_value(::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<bool,::GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor>>  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<bool,::GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor>>, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<bool,::GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor>>>(value));
}
constexpr ::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<bool,::GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor>>& System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<bool,::GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor>>>::__get_value()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<bool,::GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor>>, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<bool,::GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor>> const& System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<bool,::GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor>>>::__get_value() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<bool,::GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor>>, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline void System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<bool,::GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor>>>::_ctor(::System::Guid  key, ::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<bool,::GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor>>  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<bool,::GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor>>>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<bool,::GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor>>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
inline ::System::Guid System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<bool,::GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor>>>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<bool,::GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor>>>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Guid, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<bool,::GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor>> System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<bool,::GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor>>>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<bool,::GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor>>>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<bool,::GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor>>, false>(*this, ___internal_method);
}
inline ::StringW System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<bool,::GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor>>>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<bool,::GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor>>>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline void System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<bool,::GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor>>>::Deconstruct(ByRef<::System::Guid>  key, ByRef<::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<bool,::GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor>>>  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<bool,::GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor>>>>::get(),
                            "Deconstruct",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Guid>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<bool,::GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor>>>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
// Ctor Parameters [CppParam { name: "key", ty: "::System::Guid", modifiers: "", def_value: Some("{}") }, CppParam { name: "value", ty: "::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<bool,::GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor>>", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<bool,::GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor>>>::KeyValuePair_2(::System::Guid  key, ::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<bool,::GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor>>  value) noexcept : ::bs_hook::ValueTypeWrapper<0x38>() {this->key = key;
this->value = value;
}
template<::il2cpp_utils::il2cpp_reference_type TCapture_cordlgen_0>
constexpr void System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<bool,TCapture_cordlgen_0>>>::__set_key(::System::Guid  value)  {
::cordl_internals::setInstanceField<::System::Guid, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Guid>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TCapture_cordlgen_0>
constexpr ::System::Guid& System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<bool,TCapture_cordlgen_0>>>::__get_key()  {
return ::cordl_internals::getInstanceField<::System::Guid, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TCapture_cordlgen_0>
constexpr ::System::Guid const& System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<bool,TCapture_cordlgen_0>>>::__get_key() const {
return ::cordl_internals::getInstanceField<::System::Guid, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TCapture_cordlgen_0>
constexpr void System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<bool,TCapture_cordlgen_0>>>::__set_value(::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<bool,TCapture_cordlgen_0>>  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<bool,TCapture_cordlgen_0>>, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<bool,TCapture_cordlgen_0>>>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TCapture_cordlgen_0>
constexpr ::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<bool,TCapture_cordlgen_0>>& System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<bool,TCapture_cordlgen_0>>>::__get_value()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<bool,TCapture_cordlgen_0>>, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TCapture_cordlgen_0>
constexpr ::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<bool,TCapture_cordlgen_0>> const& System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<bool,TCapture_cordlgen_0>>>::__get_value() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<bool,TCapture_cordlgen_0>>, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TCapture_cordlgen_0>
inline void System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<bool,TCapture_cordlgen_0>>>::_ctor(::System::Guid  key, ::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<bool,TCapture_cordlgen_0>>  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<bool,TCapture_cordlgen_0>>>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<bool,TCapture_cordlgen_0>>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
template<::il2cpp_utils::il2cpp_reference_type TCapture_cordlgen_0>
inline ::System::Guid System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<bool,TCapture_cordlgen_0>>>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<bool,TCapture_cordlgen_0>>>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Guid, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TCapture_cordlgen_0>
inline ::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<bool,TCapture_cordlgen_0>> System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<bool,TCapture_cordlgen_0>>>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<bool,TCapture_cordlgen_0>>>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<bool,TCapture_cordlgen_0>>, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TCapture_cordlgen_0>
inline ::StringW System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<bool,TCapture_cordlgen_0>>>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<bool,TCapture_cordlgen_0>>>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TCapture_cordlgen_0>
inline void System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<bool,TCapture_cordlgen_0>>>::Deconstruct(ByRef<::System::Guid>  key, ByRef<::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<bool,TCapture_cordlgen_0>>>  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<bool,TCapture_cordlgen_0>>>>::get(),
                            "Deconstruct",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Guid>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<bool,TCapture_cordlgen_0>>>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
// Ctor Parameters [CppParam { name: "key", ty: "::System::Guid", modifiers: "", def_value: Some("{}") }, CppParam { name: "value", ty: "::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<bool,TCapture_cordlgen_0>>", modifiers: "", def_value: Some("{}") }]
template<::il2cpp_utils::il2cpp_reference_type TCapture_cordlgen_0>
constexpr ::System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<bool,TCapture_cordlgen_0>>>::KeyValuePair_2(::System::Guid  key, ::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<bool,TCapture_cordlgen_0>>  value) noexcept : ::bs_hook::ValueTypeWrapper<0x28>() {this->key = key;
this->value = value;
}
template<::il2cpp_utils::il2cpp_reference_type TResult_cordlgen_0>
constexpr void System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__Callback<TResult_cordlgen_0>>::__set_key(::System::Guid  value)  {
::cordl_internals::setInstanceField<::System::Guid, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Guid>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TResult_cordlgen_0>
constexpr ::System::Guid& System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__Callback<TResult_cordlgen_0>>::__get_key()  {
return ::cordl_internals::getInstanceField<::System::Guid, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TResult_cordlgen_0>
constexpr ::System::Guid const& System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__Callback<TResult_cordlgen_0>>::__get_key() const {
return ::cordl_internals::getInstanceField<::System::Guid, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TResult_cordlgen_0>
constexpr void System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__Callback<TResult_cordlgen_0>>::__set_value(::GlobalNamespace::__OVRTask_1__Callback<TResult_cordlgen_0>  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__OVRTask_1__Callback<TResult_cordlgen_0>, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::GlobalNamespace::__OVRTask_1__Callback<TResult_cordlgen_0>>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TResult_cordlgen_0>
constexpr ::GlobalNamespace::__OVRTask_1__Callback<TResult_cordlgen_0>& System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__Callback<TResult_cordlgen_0>>::__get_value()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__OVRTask_1__Callback<TResult_cordlgen_0>, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TResult_cordlgen_0>
constexpr ::GlobalNamespace::__OVRTask_1__Callback<TResult_cordlgen_0> const& System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__Callback<TResult_cordlgen_0>>::__get_value() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__OVRTask_1__Callback<TResult_cordlgen_0>, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TResult_cordlgen_0>
inline void System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__Callback<TResult_cordlgen_0>>::_ctor(::System::Guid  key, ::GlobalNamespace::__OVRTask_1__Callback<TResult_cordlgen_0>  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__Callback<TResult_cordlgen_0>>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRTask_1__Callback<TResult_cordlgen_0>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
template<::il2cpp_utils::il2cpp_reference_type TResult_cordlgen_0>
inline ::System::Guid System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__Callback<TResult_cordlgen_0>>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__Callback<TResult_cordlgen_0>>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Guid, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TResult_cordlgen_0>
inline ::GlobalNamespace::__OVRTask_1__Callback<TResult_cordlgen_0> System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__Callback<TResult_cordlgen_0>>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__Callback<TResult_cordlgen_0>>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__OVRTask_1__Callback<TResult_cordlgen_0>, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TResult_cordlgen_0>
inline ::StringW System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__Callback<TResult_cordlgen_0>>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__Callback<TResult_cordlgen_0>>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TResult_cordlgen_0>
inline void System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__Callback<TResult_cordlgen_0>>::Deconstruct(ByRef<::System::Guid>  key, ByRef<::GlobalNamespace::__OVRTask_1__Callback<TResult_cordlgen_0>>  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__Callback<TResult_cordlgen_0>>>::get(),
                            "Deconstruct",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Guid>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::__OVRTask_1__Callback<TResult_cordlgen_0>>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
// Ctor Parameters [CppParam { name: "key", ty: "::System::Guid", modifiers: "", def_value: Some("{}") }, CppParam { name: "value", ty: "::GlobalNamespace::__OVRTask_1__Callback<TResult_cordlgen_0>", modifiers: "", def_value: Some("{}") }]
template<::il2cpp_utils::il2cpp_reference_type TResult_cordlgen_0>
constexpr ::System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__Callback<TResult_cordlgen_0>>::KeyValuePair_2(::System::Guid  key, ::GlobalNamespace::__OVRTask_1__Callback<TResult_cordlgen_0>  value) noexcept : ::bs_hook::ValueTypeWrapper<0x18>() {this->key = key;
this->value = value;
}
//  Writing Method size for method: ::System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__Callback<::GlobalNamespace::OVRAnchor>>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__Callback<::GlobalNamespace::OVRAnchor>>::*)(::System::Guid, ::GlobalNamespace::__OVRTask_1__Callback<::GlobalNamespace::OVRAnchor>)>(&::System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__Callback<::GlobalNamespace::OVRAnchor>>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__Callback<::GlobalNamespace::OVRAnchor>>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRTask_1__Callback<::GlobalNamespace::OVRAnchor>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__Callback<::GlobalNamespace::OVRAnchor>>.get_Key
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Guid (::System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__Callback<::GlobalNamespace::OVRAnchor>>::*)()>(&::System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__Callback<::GlobalNamespace::OVRAnchor>>::get_Key)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__Callback<::GlobalNamespace::OVRAnchor>>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__Callback<::GlobalNamespace::OVRAnchor>>.get_Value
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__OVRTask_1__Callback<::GlobalNamespace::OVRAnchor> (::System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__Callback<::GlobalNamespace::OVRAnchor>>::*)()>(&::System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__Callback<::GlobalNamespace::OVRAnchor>>::get_Value)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__Callback<::GlobalNamespace::OVRAnchor>>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__Callback<::GlobalNamespace::OVRAnchor>>.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__Callback<::GlobalNamespace::OVRAnchor>>::*)()>(&::System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__Callback<::GlobalNamespace::OVRAnchor>>::ToString)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__Callback<::GlobalNamespace::OVRAnchor>>>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__Callback<::GlobalNamespace::OVRAnchor>>>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__Callback<::GlobalNamespace::OVRAnchor>>.Deconstruct
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__Callback<::GlobalNamespace::OVRAnchor>>::*)(ByRef<::System::Guid>, ByRef<::GlobalNamespace::__OVRTask_1__Callback<::GlobalNamespace::OVRAnchor>>)>(&::System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__Callback<::GlobalNamespace::OVRAnchor>>::Deconstruct)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__Callback<::GlobalNamespace::OVRAnchor>>>::get(),
                            "Deconstruct",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Guid>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::__OVRTask_1__Callback<::GlobalNamespace::OVRAnchor>>>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__Callback<::GlobalNamespace::OVRAnchor>>::__set_key(::System::Guid  value)  {
::cordl_internals::setInstanceField<::System::Guid, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Guid>(value));
}
constexpr ::System::Guid& System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__Callback<::GlobalNamespace::OVRAnchor>>::__get_key()  {
return ::cordl_internals::getInstanceField<::System::Guid, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Guid const& System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__Callback<::GlobalNamespace::OVRAnchor>>::__get_key() const {
return ::cordl_internals::getInstanceField<::System::Guid, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__Callback<::GlobalNamespace::OVRAnchor>>::__set_value(::GlobalNamespace::__OVRTask_1__Callback<::GlobalNamespace::OVRAnchor>  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__OVRTask_1__Callback<::GlobalNamespace::OVRAnchor>, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::GlobalNamespace::__OVRTask_1__Callback<::GlobalNamespace::OVRAnchor>>(value));
}
constexpr ::GlobalNamespace::__OVRTask_1__Callback<::GlobalNamespace::OVRAnchor>& System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__Callback<::GlobalNamespace::OVRAnchor>>::__get_value()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__OVRTask_1__Callback<::GlobalNamespace::OVRAnchor>, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::GlobalNamespace::__OVRTask_1__Callback<::GlobalNamespace::OVRAnchor> const& System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__Callback<::GlobalNamespace::OVRAnchor>>::__get_value() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__OVRTask_1__Callback<::GlobalNamespace::OVRAnchor>, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline void System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__Callback<::GlobalNamespace::OVRAnchor>>::_ctor(::System::Guid  key, ::GlobalNamespace::__OVRTask_1__Callback<::GlobalNamespace::OVRAnchor>  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__Callback<::GlobalNamespace::OVRAnchor>>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRTask_1__Callback<::GlobalNamespace::OVRAnchor>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
inline ::System::Guid System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__Callback<::GlobalNamespace::OVRAnchor>>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__Callback<::GlobalNamespace::OVRAnchor>>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Guid, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::__OVRTask_1__Callback<::GlobalNamespace::OVRAnchor> System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__Callback<::GlobalNamespace::OVRAnchor>>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__Callback<::GlobalNamespace::OVRAnchor>>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__OVRTask_1__Callback<::GlobalNamespace::OVRAnchor>, false>(*this, ___internal_method);
}
inline ::StringW System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__Callback<::GlobalNamespace::OVRAnchor>>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__Callback<::GlobalNamespace::OVRAnchor>>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline void System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__Callback<::GlobalNamespace::OVRAnchor>>::Deconstruct(ByRef<::System::Guid>  key, ByRef<::GlobalNamespace::__OVRTask_1__Callback<::GlobalNamespace::OVRAnchor>>  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__Callback<::GlobalNamespace::OVRAnchor>>>::get(),
                            "Deconstruct",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Guid>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::__OVRTask_1__Callback<::GlobalNamespace::OVRAnchor>>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
// Ctor Parameters [CppParam { name: "key", ty: "::System::Guid", modifiers: "", def_value: Some("{}") }, CppParam { name: "value", ty: "::GlobalNamespace::__OVRTask_1__Callback<::GlobalNamespace::OVRAnchor>", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__Callback<::GlobalNamespace::OVRAnchor>>::KeyValuePair_2(::System::Guid  key, ::GlobalNamespace::__OVRTask_1__Callback<::GlobalNamespace::OVRAnchor>  value) noexcept : ::bs_hook::ValueTypeWrapper<0x18>() {this->key = key;
this->value = value;
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TResult_cordlgen_0>
constexpr void System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__Callback<TResult_cordlgen_0>>::__set_key(::System::Guid  value)  {
::cordl_internals::setInstanceField<::System::Guid, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Guid>(value));
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TResult_cordlgen_0>
constexpr ::System::Guid& System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__Callback<TResult_cordlgen_0>>::__get_key()  {
return ::cordl_internals::getInstanceField<::System::Guid, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TResult_cordlgen_0>
constexpr ::System::Guid const& System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__Callback<TResult_cordlgen_0>>::__get_key() const {
return ::cordl_internals::getInstanceField<::System::Guid, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TResult_cordlgen_0>
constexpr void System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__Callback<TResult_cordlgen_0>>::__set_value(::GlobalNamespace::__OVRTask_1__Callback<TResult_cordlgen_0>  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__OVRTask_1__Callback<TResult_cordlgen_0>, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::GlobalNamespace::__OVRTask_1__Callback<TResult_cordlgen_0>>(value));
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TResult_cordlgen_0>
constexpr ::GlobalNamespace::__OVRTask_1__Callback<TResult_cordlgen_0>& System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__Callback<TResult_cordlgen_0>>::__get_value()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__OVRTask_1__Callback<TResult_cordlgen_0>, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TResult_cordlgen_0>
constexpr ::GlobalNamespace::__OVRTask_1__Callback<TResult_cordlgen_0> const& System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__Callback<TResult_cordlgen_0>>::__get_value() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__OVRTask_1__Callback<TResult_cordlgen_0>, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TResult_cordlgen_0>
inline void System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__Callback<TResult_cordlgen_0>>::_ctor(::System::Guid  key, ::GlobalNamespace::__OVRTask_1__Callback<TResult_cordlgen_0>  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__Callback<TResult_cordlgen_0>>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRTask_1__Callback<TResult_cordlgen_0>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TResult_cordlgen_0>
inline ::System::Guid System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__Callback<TResult_cordlgen_0>>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__Callback<TResult_cordlgen_0>>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Guid, false>(*this, ___internal_method);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TResult_cordlgen_0>
inline ::GlobalNamespace::__OVRTask_1__Callback<TResult_cordlgen_0> System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__Callback<TResult_cordlgen_0>>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__Callback<TResult_cordlgen_0>>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__OVRTask_1__Callback<TResult_cordlgen_0>, false>(*this, ___internal_method);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TResult_cordlgen_0>
inline ::StringW System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__Callback<TResult_cordlgen_0>>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__Callback<TResult_cordlgen_0>>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TResult_cordlgen_0>
inline void System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__Callback<TResult_cordlgen_0>>::Deconstruct(ByRef<::System::Guid>  key, ByRef<::GlobalNamespace::__OVRTask_1__Callback<TResult_cordlgen_0>>  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__Callback<TResult_cordlgen_0>>>::get(),
                            "Deconstruct",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Guid>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::__OVRTask_1__Callback<TResult_cordlgen_0>>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
// Ctor Parameters [CppParam { name: "key", ty: "::System::Guid", modifiers: "", def_value: Some("{}") }, CppParam { name: "value", ty: "::GlobalNamespace::__OVRTask_1__Callback<TResult_cordlgen_0>", modifiers: "", def_value: Some("{}") }]
template<::cordl_internals::is_or_is_backed_by<int32_t> TResult_cordlgen_0>
constexpr ::System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__Callback<TResult_cordlgen_0>>::KeyValuePair_2(::System::Guid  key, ::GlobalNamespace::__OVRTask_1__Callback<TResult_cordlgen_0>  value) noexcept : ::bs_hook::ValueTypeWrapper<0x18>() {this->key = key;
this->value = value;
}
//  Writing Method size for method: ::System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__Callback<bool>>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__Callback<bool>>::*)(::System::Guid, ::GlobalNamespace::__OVRTask_1__Callback<bool>)>(&::System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__Callback<bool>>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__Callback<bool>>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRTask_1__Callback<bool>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__Callback<bool>>.get_Key
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Guid (::System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__Callback<bool>>::*)()>(&::System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__Callback<bool>>::get_Key)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__Callback<bool>>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__Callback<bool>>.get_Value
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__OVRTask_1__Callback<bool> (::System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__Callback<bool>>::*)()>(&::System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__Callback<bool>>::get_Value)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__Callback<bool>>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__Callback<bool>>.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__Callback<bool>>::*)()>(&::System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__Callback<bool>>::ToString)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__Callback<bool>>>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__Callback<bool>>>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__Callback<bool>>.Deconstruct
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__Callback<bool>>::*)(ByRef<::System::Guid>, ByRef<::GlobalNamespace::__OVRTask_1__Callback<bool>>)>(&::System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__Callback<bool>>::Deconstruct)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__Callback<bool>>>::get(),
                            "Deconstruct",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Guid>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::__OVRTask_1__Callback<bool>>>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__Callback<bool>>::__set_key(::System::Guid  value)  {
::cordl_internals::setInstanceField<::System::Guid, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Guid>(value));
}
constexpr ::System::Guid& System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__Callback<bool>>::__get_key()  {
return ::cordl_internals::getInstanceField<::System::Guid, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Guid const& System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__Callback<bool>>::__get_key() const {
return ::cordl_internals::getInstanceField<::System::Guid, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__Callback<bool>>::__set_value(::GlobalNamespace::__OVRTask_1__Callback<bool>  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__OVRTask_1__Callback<bool>, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::GlobalNamespace::__OVRTask_1__Callback<bool>>(value));
}
constexpr ::GlobalNamespace::__OVRTask_1__Callback<bool>& System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__Callback<bool>>::__get_value()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__OVRTask_1__Callback<bool>, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::GlobalNamespace::__OVRTask_1__Callback<bool> const& System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__Callback<bool>>::__get_value() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__OVRTask_1__Callback<bool>, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline void System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__Callback<bool>>::_ctor(::System::Guid  key, ::GlobalNamespace::__OVRTask_1__Callback<bool>  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__Callback<bool>>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRTask_1__Callback<bool>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
inline ::System::Guid System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__Callback<bool>>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__Callback<bool>>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Guid, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::__OVRTask_1__Callback<bool> System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__Callback<bool>>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__Callback<bool>>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__OVRTask_1__Callback<bool>, false>(*this, ___internal_method);
}
inline ::StringW System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__Callback<bool>>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__Callback<bool>>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline void System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__Callback<bool>>::Deconstruct(ByRef<::System::Guid>  key, ByRef<::GlobalNamespace::__OVRTask_1__Callback<bool>>  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__Callback<bool>>>::get(),
                            "Deconstruct",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Guid>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::__OVRTask_1__Callback<bool>>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
// Ctor Parameters [CppParam { name: "key", ty: "::System::Guid", modifiers: "", def_value: Some("{}") }, CppParam { name: "value", ty: "::GlobalNamespace::__OVRTask_1__Callback<bool>", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Collections::Generic::KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__Callback<bool>>::KeyValuePair_2(::System::Guid  key, ::GlobalNamespace::__OVRTask_1__Callback<bool>  value) noexcept : ::bs_hook::ValueTypeWrapper<0x18>() {this->key = key;
this->value = value;
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr void System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::EdgeLookup,TValue>::__set_key(::UnityEngine::ProBuilder::EdgeLookup  value)  {
::cordl_internals::setInstanceField<::UnityEngine::ProBuilder::EdgeLookup, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::ProBuilder::EdgeLookup>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::UnityEngine::ProBuilder::EdgeLookup& System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::EdgeLookup,TValue>::__get_key()  {
return ::cordl_internals::getInstanceField<::UnityEngine::ProBuilder::EdgeLookup, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::UnityEngine::ProBuilder::EdgeLookup const& System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::EdgeLookup,TValue>::__get_key() const {
return ::cordl_internals::getInstanceField<::UnityEngine::ProBuilder::EdgeLookup, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr void System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::EdgeLookup,TValue>::__set_value(TValue  value)  {
::cordl_internals::setInstanceField<TValue, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<TValue>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr TValue& System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::EdgeLookup,TValue>::__get_value()  {
return ::cordl_internals::getInstanceField<TValue, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr TValue const& System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::EdgeLookup,TValue>::__get_value() const {
return ::cordl_internals::getInstanceField<TValue, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline void System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::EdgeLookup,TValue>::_ctor(::UnityEngine::ProBuilder::EdgeLookup  key, TValue  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::EdgeLookup,TValue>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::EdgeLookup>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline ::UnityEngine::ProBuilder::EdgeLookup System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::EdgeLookup,TValue>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::EdgeLookup,TValue>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::EdgeLookup, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline TValue System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::EdgeLookup,TValue>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::EdgeLookup,TValue>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TValue, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline ::StringW System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::EdgeLookup,TValue>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::EdgeLookup,TValue>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline void System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::EdgeLookup,TValue>::Deconstruct(ByRef<::UnityEngine::ProBuilder::EdgeLookup>  key, ByRef<TValue>  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::EdgeLookup,TValue>>::get(),
                            "Deconstruct",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::ProBuilder::EdgeLookup>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<TValue>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
// Ctor Parameters [CppParam { name: "key", ty: "::UnityEngine::ProBuilder::EdgeLookup", modifiers: "", def_value: Some("{}") }, CppParam { name: "value", ty: "TValue", modifiers: "", def_value: Some("csnull") }]
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::EdgeLookup,TValue>::KeyValuePair_2(::UnityEngine::ProBuilder::EdgeLookup  key, TValue  value) noexcept : ::bs_hook::ValueTypeWrapper<0x18>() {this->key = key;
this->value = value;
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr void System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::Edge,TValue>::__set_key(::UnityEngine::ProBuilder::Edge  value)  {
::cordl_internals::setInstanceField<::UnityEngine::ProBuilder::Edge, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::ProBuilder::Edge>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::UnityEngine::ProBuilder::Edge& System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::Edge,TValue>::__get_key()  {
return ::cordl_internals::getInstanceField<::UnityEngine::ProBuilder::Edge, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::UnityEngine::ProBuilder::Edge const& System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::Edge,TValue>::__get_key() const {
return ::cordl_internals::getInstanceField<::UnityEngine::ProBuilder::Edge, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr void System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::Edge,TValue>::__set_value(TValue  value)  {
::cordl_internals::setInstanceField<TValue, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<TValue>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr TValue& System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::Edge,TValue>::__get_value()  {
return ::cordl_internals::getInstanceField<TValue, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr TValue const& System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::Edge,TValue>::__get_value() const {
return ::cordl_internals::getInstanceField<TValue, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline void System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::Edge,TValue>::_ctor(::UnityEngine::ProBuilder::Edge  key, TValue  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::Edge,TValue>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Edge>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline ::UnityEngine::ProBuilder::Edge System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::Edge,TValue>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::Edge,TValue>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::Edge, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline TValue System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::Edge,TValue>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::Edge,TValue>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TValue, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline ::StringW System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::Edge,TValue>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::Edge,TValue>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline void System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::Edge,TValue>::Deconstruct(ByRef<::UnityEngine::ProBuilder::Edge>  key, ByRef<TValue>  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::Edge,TValue>>::get(),
                            "Deconstruct",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::ProBuilder::Edge>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<TValue>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
// Ctor Parameters [CppParam { name: "key", ty: "::UnityEngine::ProBuilder::Edge", modifiers: "", def_value: Some("{}") }, CppParam { name: "value", ty: "TValue", modifiers: "", def_value: Some("csnull") }]
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::Edge,TValue>::KeyValuePair_2(::UnityEngine::ProBuilder::Edge  key, TValue  value) noexcept : ::bs_hook::ValueTypeWrapper<0x10>() {this->key = key;
this->value = value;
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr void System::Collections::Generic::KeyValuePair_2<char16_t,TValue>::__set_key(char16_t  value)  {
::cordl_internals::setInstanceField<char16_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<char16_t>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr char16_t& System::Collections::Generic::KeyValuePair_2<char16_t,TValue>::__get_key()  {
return ::cordl_internals::getInstanceField<char16_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr char16_t const& System::Collections::Generic::KeyValuePair_2<char16_t,TValue>::__get_key() const {
return ::cordl_internals::getInstanceField<char16_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr void System::Collections::Generic::KeyValuePair_2<char16_t,TValue>::__set_value(TValue  value)  {
::cordl_internals::setInstanceField<TValue, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<TValue>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr TValue& System::Collections::Generic::KeyValuePair_2<char16_t,TValue>::__get_value()  {
return ::cordl_internals::getInstanceField<TValue, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr TValue const& System::Collections::Generic::KeyValuePair_2<char16_t,TValue>::__get_value() const {
return ::cordl_internals::getInstanceField<TValue, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline void System::Collections::Generic::KeyValuePair_2<char16_t,TValue>::_ctor(char16_t  key, TValue  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<char16_t,TValue>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline char16_t System::Collections::Generic::KeyValuePair_2<char16_t,TValue>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<char16_t,TValue>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<char16_t, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline TValue System::Collections::Generic::KeyValuePair_2<char16_t,TValue>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<char16_t,TValue>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TValue, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline ::StringW System::Collections::Generic::KeyValuePair_2<char16_t,TValue>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<char16_t,TValue>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline void System::Collections::Generic::KeyValuePair_2<char16_t,TValue>::Deconstruct(ByRef<char16_t>  key, ByRef<TValue>  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<char16_t,TValue>>::get(),
                            "Deconstruct",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<TValue>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
// Ctor Parameters [CppParam { name: "key", ty: "char16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "value", ty: "TValue", modifiers: "", def_value: Some("csnull") }]
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::System::Collections::Generic::KeyValuePair_2<char16_t,TValue>::KeyValuePair_2(char16_t  key, TValue  value) noexcept : ::bs_hook::ValueTypeWrapper<0x10>() {this->key = key;
this->value = value;
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr void System::Collections::Generic::KeyValuePair_2<uint8_t,TValue>::__set_key(uint8_t  value)  {
::cordl_internals::setInstanceField<uint8_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<uint8_t>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr uint8_t& System::Collections::Generic::KeyValuePair_2<uint8_t,TValue>::__get_key()  {
return ::cordl_internals::getInstanceField<uint8_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr uint8_t const& System::Collections::Generic::KeyValuePair_2<uint8_t,TValue>::__get_key() const {
return ::cordl_internals::getInstanceField<uint8_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr void System::Collections::Generic::KeyValuePair_2<uint8_t,TValue>::__set_value(TValue  value)  {
::cordl_internals::setInstanceField<TValue, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<TValue>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr TValue& System::Collections::Generic::KeyValuePair_2<uint8_t,TValue>::__get_value()  {
return ::cordl_internals::getInstanceField<TValue, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr TValue const& System::Collections::Generic::KeyValuePair_2<uint8_t,TValue>::__get_value() const {
return ::cordl_internals::getInstanceField<TValue, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline void System::Collections::Generic::KeyValuePair_2<uint8_t,TValue>::_ctor(uint8_t  key, TValue  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<uint8_t,TValue>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline uint8_t System::Collections::Generic::KeyValuePair_2<uint8_t,TValue>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<uint8_t,TValue>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<uint8_t, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline TValue System::Collections::Generic::KeyValuePair_2<uint8_t,TValue>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<uint8_t,TValue>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TValue, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline ::StringW System::Collections::Generic::KeyValuePair_2<uint8_t,TValue>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<uint8_t,TValue>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline void System::Collections::Generic::KeyValuePair_2<uint8_t,TValue>::Deconstruct(ByRef<uint8_t>  key, ByRef<TValue>  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<uint8_t,TValue>>::get(),
                            "Deconstruct",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<TValue>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
// Ctor Parameters [CppParam { name: "key", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "value", ty: "TValue", modifiers: "", def_value: Some("csnull") }]
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::System::Collections::Generic::KeyValuePair_2<uint8_t,TValue>::KeyValuePair_2(uint8_t  key, TValue  value) noexcept : ::bs_hook::ValueTypeWrapper<0x10>() {this->key = key;
this->value = value;
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr void System::Collections::Generic::KeyValuePair_2<::Zenject::BindingId,TValue>::__set_key(::Zenject::BindingId  value)  {
::cordl_internals::setInstanceField<::Zenject::BindingId, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::Zenject::BindingId>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::Zenject::BindingId& System::Collections::Generic::KeyValuePair_2<::Zenject::BindingId,TValue>::__get_key()  {
return ::cordl_internals::getInstanceField<::Zenject::BindingId, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::Zenject::BindingId const& System::Collections::Generic::KeyValuePair_2<::Zenject::BindingId,TValue>::__get_key() const {
return ::cordl_internals::getInstanceField<::Zenject::BindingId, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr void System::Collections::Generic::KeyValuePair_2<::Zenject::BindingId,TValue>::__set_value(TValue  value)  {
::cordl_internals::setInstanceField<TValue, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<TValue>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr TValue& System::Collections::Generic::KeyValuePair_2<::Zenject::BindingId,TValue>::__get_value()  {
return ::cordl_internals::getInstanceField<TValue, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr TValue const& System::Collections::Generic::KeyValuePair_2<::Zenject::BindingId,TValue>::__get_value() const {
return ::cordl_internals::getInstanceField<TValue, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline void System::Collections::Generic::KeyValuePair_2<::Zenject::BindingId,TValue>::_ctor(::Zenject::BindingId  key, TValue  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::Zenject::BindingId,TValue>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::BindingId>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline ::Zenject::BindingId System::Collections::Generic::KeyValuePair_2<::Zenject::BindingId,TValue>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::Zenject::BindingId,TValue>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Zenject::BindingId, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline TValue System::Collections::Generic::KeyValuePair_2<::Zenject::BindingId,TValue>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::Zenject::BindingId,TValue>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TValue, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline ::StringW System::Collections::Generic::KeyValuePair_2<::Zenject::BindingId,TValue>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::Zenject::BindingId,TValue>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline void System::Collections::Generic::KeyValuePair_2<::Zenject::BindingId,TValue>::Deconstruct(ByRef<::Zenject::BindingId>  key, ByRef<TValue>  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::Zenject::BindingId,TValue>>::get(),
                            "Deconstruct",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Zenject::BindingId>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<TValue>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
// Ctor Parameters [CppParam { name: "key", ty: "::Zenject::BindingId", modifiers: "", def_value: Some("{}") }, CppParam { name: "value", ty: "TValue", modifiers: "", def_value: Some("csnull") }]
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::System::Collections::Generic::KeyValuePair_2<::Zenject::BindingId,TValue>::KeyValuePair_2(::Zenject::BindingId  key, TValue  value) noexcept : ::bs_hook::ValueTypeWrapper<0x18>() {this->key = key;
this->value = value;
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr void System::Collections::Generic::KeyValuePair_2<::BeatSaber::AvatarCore::AvatarSystemIdentifier,TValue>::__set_key(::BeatSaber::AvatarCore::AvatarSystemIdentifier  value)  {
::cordl_internals::setInstanceField<::BeatSaber::AvatarCore::AvatarSystemIdentifier, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::BeatSaber::AvatarCore::AvatarSystemIdentifier>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::BeatSaber::AvatarCore::AvatarSystemIdentifier& System::Collections::Generic::KeyValuePair_2<::BeatSaber::AvatarCore::AvatarSystemIdentifier,TValue>::__get_key()  {
return ::cordl_internals::getInstanceField<::BeatSaber::AvatarCore::AvatarSystemIdentifier, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::BeatSaber::AvatarCore::AvatarSystemIdentifier const& System::Collections::Generic::KeyValuePair_2<::BeatSaber::AvatarCore::AvatarSystemIdentifier,TValue>::__get_key() const {
return ::cordl_internals::getInstanceField<::BeatSaber::AvatarCore::AvatarSystemIdentifier, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr void System::Collections::Generic::KeyValuePair_2<::BeatSaber::AvatarCore::AvatarSystemIdentifier,TValue>::__set_value(TValue  value)  {
::cordl_internals::setInstanceField<TValue, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<TValue>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr TValue& System::Collections::Generic::KeyValuePair_2<::BeatSaber::AvatarCore::AvatarSystemIdentifier,TValue>::__get_value()  {
return ::cordl_internals::getInstanceField<TValue, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr TValue const& System::Collections::Generic::KeyValuePair_2<::BeatSaber::AvatarCore::AvatarSystemIdentifier,TValue>::__get_value() const {
return ::cordl_internals::getInstanceField<TValue, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline void System::Collections::Generic::KeyValuePair_2<::BeatSaber::AvatarCore::AvatarSystemIdentifier,TValue>::_ctor(::BeatSaber::AvatarCore::AvatarSystemIdentifier  key, TValue  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::BeatSaber::AvatarCore::AvatarSystemIdentifier,TValue>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::AvatarCore::AvatarSystemIdentifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline ::BeatSaber::AvatarCore::AvatarSystemIdentifier System::Collections::Generic::KeyValuePair_2<::BeatSaber::AvatarCore::AvatarSystemIdentifier,TValue>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::BeatSaber::AvatarCore::AvatarSystemIdentifier,TValue>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::BeatSaber::AvatarCore::AvatarSystemIdentifier, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline TValue System::Collections::Generic::KeyValuePair_2<::BeatSaber::AvatarCore::AvatarSystemIdentifier,TValue>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::BeatSaber::AvatarCore::AvatarSystemIdentifier,TValue>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TValue, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline ::StringW System::Collections::Generic::KeyValuePair_2<::BeatSaber::AvatarCore::AvatarSystemIdentifier,TValue>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::BeatSaber::AvatarCore::AvatarSystemIdentifier,TValue>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline void System::Collections::Generic::KeyValuePair_2<::BeatSaber::AvatarCore::AvatarSystemIdentifier,TValue>::Deconstruct(ByRef<::BeatSaber::AvatarCore::AvatarSystemIdentifier>  key, ByRef<TValue>  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::BeatSaber::AvatarCore::AvatarSystemIdentifier,TValue>>::get(),
                            "Deconstruct",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::BeatSaber::AvatarCore::AvatarSystemIdentifier>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<TValue>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
// Ctor Parameters [CppParam { name: "key", ty: "::BeatSaber::AvatarCore::AvatarSystemIdentifier", modifiers: "", def_value: Some("{}") }, CppParam { name: "value", ty: "TValue", modifiers: "", def_value: Some("csnull") }]
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::System::Collections::Generic::KeyValuePair_2<::BeatSaber::AvatarCore::AvatarSystemIdentifier,TValue>::KeyValuePair_2(::BeatSaber::AvatarCore::AvatarSystemIdentifier  key, TValue  value) noexcept : ::bs_hook::ValueTypeWrapper<0x18>() {this->key = key;
this->value = value;
}
template<::il2cpp_utils::il2cpp_reference_type T2_cordlgen_0,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr void System::Collections::Generic::KeyValuePair_2<::System::ValueTuple_3<int32_t,T2_cordlgen_0,int32_t>,TValue>::__set_key(::System::ValueTuple_3<int32_t,T2_cordlgen_0,int32_t>  value)  {
::cordl_internals::setInstanceField<::System::ValueTuple_3<int32_t,T2_cordlgen_0,int32_t>, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::ValueTuple_3<int32_t,T2_cordlgen_0,int32_t>>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T2_cordlgen_0,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::System::ValueTuple_3<int32_t,T2_cordlgen_0,int32_t>& System::Collections::Generic::KeyValuePair_2<::System::ValueTuple_3<int32_t,T2_cordlgen_0,int32_t>,TValue>::__get_key()  {
return ::cordl_internals::getInstanceField<::System::ValueTuple_3<int32_t,T2_cordlgen_0,int32_t>, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T2_cordlgen_0,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::System::ValueTuple_3<int32_t,T2_cordlgen_0,int32_t> const& System::Collections::Generic::KeyValuePair_2<::System::ValueTuple_3<int32_t,T2_cordlgen_0,int32_t>,TValue>::__get_key() const {
return ::cordl_internals::getInstanceField<::System::ValueTuple_3<int32_t,T2_cordlgen_0,int32_t>, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T2_cordlgen_0,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr void System::Collections::Generic::KeyValuePair_2<::System::ValueTuple_3<int32_t,T2_cordlgen_0,int32_t>,TValue>::__set_value(TValue  value)  {
::cordl_internals::setInstanceField<TValue, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<TValue>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T2_cordlgen_0,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr TValue& System::Collections::Generic::KeyValuePair_2<::System::ValueTuple_3<int32_t,T2_cordlgen_0,int32_t>,TValue>::__get_value()  {
return ::cordl_internals::getInstanceField<TValue, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T2_cordlgen_0,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr TValue const& System::Collections::Generic::KeyValuePair_2<::System::ValueTuple_3<int32_t,T2_cordlgen_0,int32_t>,TValue>::__get_value() const {
return ::cordl_internals::getInstanceField<TValue, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T2_cordlgen_0,::il2cpp_utils::il2cpp_reference_type TValue>
inline void System::Collections::Generic::KeyValuePair_2<::System::ValueTuple_3<int32_t,T2_cordlgen_0,int32_t>,TValue>::_ctor(::System::ValueTuple_3<int32_t,T2_cordlgen_0,int32_t>  key, TValue  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::System::ValueTuple_3<int32_t,T2_cordlgen_0,int32_t>,TValue>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ValueTuple_3<int32_t,T2_cordlgen_0,int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
template<::il2cpp_utils::il2cpp_reference_type T2_cordlgen_0,::il2cpp_utils::il2cpp_reference_type TValue>
inline ::System::ValueTuple_3<int32_t,T2_cordlgen_0,int32_t> System::Collections::Generic::KeyValuePair_2<::System::ValueTuple_3<int32_t,T2_cordlgen_0,int32_t>,TValue>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::System::ValueTuple_3<int32_t,T2_cordlgen_0,int32_t>,TValue>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_3<int32_t,T2_cordlgen_0,int32_t>, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T2_cordlgen_0,::il2cpp_utils::il2cpp_reference_type TValue>
inline TValue System::Collections::Generic::KeyValuePair_2<::System::ValueTuple_3<int32_t,T2_cordlgen_0,int32_t>,TValue>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::System::ValueTuple_3<int32_t,T2_cordlgen_0,int32_t>,TValue>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TValue, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T2_cordlgen_0,::il2cpp_utils::il2cpp_reference_type TValue>
inline ::StringW System::Collections::Generic::KeyValuePair_2<::System::ValueTuple_3<int32_t,T2_cordlgen_0,int32_t>,TValue>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::System::ValueTuple_3<int32_t,T2_cordlgen_0,int32_t>,TValue>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T2_cordlgen_0,::il2cpp_utils::il2cpp_reference_type TValue>
inline void System::Collections::Generic::KeyValuePair_2<::System::ValueTuple_3<int32_t,T2_cordlgen_0,int32_t>,TValue>::Deconstruct(ByRef<::System::ValueTuple_3<int32_t,T2_cordlgen_0,int32_t>>  key, ByRef<TValue>  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::System::ValueTuple_3<int32_t,T2_cordlgen_0,int32_t>,TValue>>::get(),
                            "Deconstruct",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::ValueTuple_3<int32_t,T2_cordlgen_0,int32_t>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<TValue>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
// Ctor Parameters [CppParam { name: "key", ty: "::System::ValueTuple_3<int32_t,T2_cordlgen_0,int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "value", ty: "TValue", modifiers: "", def_value: Some("csnull") }]
template<::il2cpp_utils::il2cpp_reference_type T2_cordlgen_0,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::System::Collections::Generic::KeyValuePair_2<::System::ValueTuple_3<int32_t,T2_cordlgen_0,int32_t>,TValue>::KeyValuePair_2(::System::ValueTuple_3<int32_t,T2_cordlgen_0,int32_t>  key, TValue  value) noexcept : ::bs_hook::ValueTypeWrapper<0x20>() {this->key = key;
this->value = value;
}
template<::il2cpp_utils::il2cpp_reference_type T1_cordlgen_0,::il2cpp_utils::il2cpp_reference_type T2_cordlgen_1,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr void System::Collections::Generic::KeyValuePair_2<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>,TValue>::__set_key(::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>  value)  {
::cordl_internals::setInstanceField<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T1_cordlgen_0,::il2cpp_utils::il2cpp_reference_type T2_cordlgen_1,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>& System::Collections::Generic::KeyValuePair_2<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>,TValue>::__get_key()  {
return ::cordl_internals::getInstanceField<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T1_cordlgen_0,::il2cpp_utils::il2cpp_reference_type T2_cordlgen_1,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1> const& System::Collections::Generic::KeyValuePair_2<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>,TValue>::__get_key() const {
return ::cordl_internals::getInstanceField<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T1_cordlgen_0,::il2cpp_utils::il2cpp_reference_type T2_cordlgen_1,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr void System::Collections::Generic::KeyValuePair_2<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>,TValue>::__set_value(TValue  value)  {
::cordl_internals::setInstanceField<TValue, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<TValue>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T1_cordlgen_0,::il2cpp_utils::il2cpp_reference_type T2_cordlgen_1,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr TValue& System::Collections::Generic::KeyValuePair_2<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>,TValue>::__get_value()  {
return ::cordl_internals::getInstanceField<TValue, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T1_cordlgen_0,::il2cpp_utils::il2cpp_reference_type T2_cordlgen_1,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr TValue const& System::Collections::Generic::KeyValuePair_2<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>,TValue>::__get_value() const {
return ::cordl_internals::getInstanceField<TValue, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T1_cordlgen_0,::il2cpp_utils::il2cpp_reference_type T2_cordlgen_1,::il2cpp_utils::il2cpp_reference_type TValue>
inline void System::Collections::Generic::KeyValuePair_2<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>,TValue>::_ctor(::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>  key, TValue  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>,TValue>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
template<::il2cpp_utils::il2cpp_reference_type T1_cordlgen_0,::il2cpp_utils::il2cpp_reference_type T2_cordlgen_1,::il2cpp_utils::il2cpp_reference_type TValue>
inline ::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1> System::Collections::Generic::KeyValuePair_2<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>,TValue>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>,TValue>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T1_cordlgen_0,::il2cpp_utils::il2cpp_reference_type T2_cordlgen_1,::il2cpp_utils::il2cpp_reference_type TValue>
inline TValue System::Collections::Generic::KeyValuePair_2<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>,TValue>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>,TValue>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TValue, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T1_cordlgen_0,::il2cpp_utils::il2cpp_reference_type T2_cordlgen_1,::il2cpp_utils::il2cpp_reference_type TValue>
inline ::StringW System::Collections::Generic::KeyValuePair_2<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>,TValue>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>,TValue>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T1_cordlgen_0,::il2cpp_utils::il2cpp_reference_type T2_cordlgen_1,::il2cpp_utils::il2cpp_reference_type TValue>
inline void System::Collections::Generic::KeyValuePair_2<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>,TValue>::Deconstruct(ByRef<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>  key, ByRef<TValue>  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>,TValue>>::get(),
                            "Deconstruct",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<TValue>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
// Ctor Parameters [CppParam { name: "key", ty: "::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>", modifiers: "", def_value: Some("{}") }, CppParam { name: "value", ty: "TValue", modifiers: "", def_value: Some("csnull") }]
template<::il2cpp_utils::il2cpp_reference_type T1_cordlgen_0,::il2cpp_utils::il2cpp_reference_type T2_cordlgen_1,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::System::Collections::Generic::KeyValuePair_2<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>,TValue>::KeyValuePair_2(::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>  key, TValue  value) noexcept : ::bs_hook::ValueTypeWrapper<0x18>() {this->key = key;
this->value = value;
}
template<::il2cpp_utils::il2cpp_reference_type T1_cordlgen_0,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr void System::Collections::Generic::KeyValuePair_2<::System::ValueTuple_2<T1_cordlgen_0,int32_t>,TValue>::__set_key(::System::ValueTuple_2<T1_cordlgen_0,int32_t>  value)  {
::cordl_internals::setInstanceField<::System::ValueTuple_2<T1_cordlgen_0,int32_t>, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::ValueTuple_2<T1_cordlgen_0,int32_t>>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T1_cordlgen_0,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::System::ValueTuple_2<T1_cordlgen_0,int32_t>& System::Collections::Generic::KeyValuePair_2<::System::ValueTuple_2<T1_cordlgen_0,int32_t>,TValue>::__get_key()  {
return ::cordl_internals::getInstanceField<::System::ValueTuple_2<T1_cordlgen_0,int32_t>, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T1_cordlgen_0,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::System::ValueTuple_2<T1_cordlgen_0,int32_t> const& System::Collections::Generic::KeyValuePair_2<::System::ValueTuple_2<T1_cordlgen_0,int32_t>,TValue>::__get_key() const {
return ::cordl_internals::getInstanceField<::System::ValueTuple_2<T1_cordlgen_0,int32_t>, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T1_cordlgen_0,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr void System::Collections::Generic::KeyValuePair_2<::System::ValueTuple_2<T1_cordlgen_0,int32_t>,TValue>::__set_value(TValue  value)  {
::cordl_internals::setInstanceField<TValue, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<TValue>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T1_cordlgen_0,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr TValue& System::Collections::Generic::KeyValuePair_2<::System::ValueTuple_2<T1_cordlgen_0,int32_t>,TValue>::__get_value()  {
return ::cordl_internals::getInstanceField<TValue, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T1_cordlgen_0,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr TValue const& System::Collections::Generic::KeyValuePair_2<::System::ValueTuple_2<T1_cordlgen_0,int32_t>,TValue>::__get_value() const {
return ::cordl_internals::getInstanceField<TValue, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T1_cordlgen_0,::il2cpp_utils::il2cpp_reference_type TValue>
inline void System::Collections::Generic::KeyValuePair_2<::System::ValueTuple_2<T1_cordlgen_0,int32_t>,TValue>::_ctor(::System::ValueTuple_2<T1_cordlgen_0,int32_t>  key, TValue  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::System::ValueTuple_2<T1_cordlgen_0,int32_t>,TValue>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ValueTuple_2<T1_cordlgen_0,int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
template<::il2cpp_utils::il2cpp_reference_type T1_cordlgen_0,::il2cpp_utils::il2cpp_reference_type TValue>
inline ::System::ValueTuple_2<T1_cordlgen_0,int32_t> System::Collections::Generic::KeyValuePair_2<::System::ValueTuple_2<T1_cordlgen_0,int32_t>,TValue>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::System::ValueTuple_2<T1_cordlgen_0,int32_t>,TValue>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_2<T1_cordlgen_0,int32_t>, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T1_cordlgen_0,::il2cpp_utils::il2cpp_reference_type TValue>
inline TValue System::Collections::Generic::KeyValuePair_2<::System::ValueTuple_2<T1_cordlgen_0,int32_t>,TValue>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::System::ValueTuple_2<T1_cordlgen_0,int32_t>,TValue>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TValue, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T1_cordlgen_0,::il2cpp_utils::il2cpp_reference_type TValue>
inline ::StringW System::Collections::Generic::KeyValuePair_2<::System::ValueTuple_2<T1_cordlgen_0,int32_t>,TValue>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::System::ValueTuple_2<T1_cordlgen_0,int32_t>,TValue>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T1_cordlgen_0,::il2cpp_utils::il2cpp_reference_type TValue>
inline void System::Collections::Generic::KeyValuePair_2<::System::ValueTuple_2<T1_cordlgen_0,int32_t>,TValue>::Deconstruct(ByRef<::System::ValueTuple_2<T1_cordlgen_0,int32_t>>  key, ByRef<TValue>  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::System::ValueTuple_2<T1_cordlgen_0,int32_t>,TValue>>::get(),
                            "Deconstruct",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::ValueTuple_2<T1_cordlgen_0,int32_t>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<TValue>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
// Ctor Parameters [CppParam { name: "key", ty: "::System::ValueTuple_2<T1_cordlgen_0,int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "value", ty: "TValue", modifiers: "", def_value: Some("csnull") }]
template<::il2cpp_utils::il2cpp_reference_type T1_cordlgen_0,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::System::Collections::Generic::KeyValuePair_2<::System::ValueTuple_2<T1_cordlgen_0,int32_t>,TValue>::KeyValuePair_2(::System::ValueTuple_2<T1_cordlgen_0,int32_t>  key, TValue  value) noexcept : ::bs_hook::ValueTypeWrapper<0x18>() {this->key = key;
this->value = value;
}
template<::cordl_internals::is_or_is_backed_by<int32_t> T1_cordlgen_0,::il2cpp_utils::il2cpp_reference_type T2_cordlgen_1,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr void System::Collections::Generic::KeyValuePair_2<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>,TValue>::__set_key(::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>  value)  {
::cordl_internals::setInstanceField<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>(value));
}
template<::cordl_internals::is_or_is_backed_by<int32_t> T1_cordlgen_0,::il2cpp_utils::il2cpp_reference_type T2_cordlgen_1,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>& System::Collections::Generic::KeyValuePair_2<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>,TValue>::__get_key()  {
return ::cordl_internals::getInstanceField<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> T1_cordlgen_0,::il2cpp_utils::il2cpp_reference_type T2_cordlgen_1,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1> const& System::Collections::Generic::KeyValuePair_2<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>,TValue>::__get_key() const {
return ::cordl_internals::getInstanceField<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> T1_cordlgen_0,::il2cpp_utils::il2cpp_reference_type T2_cordlgen_1,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr void System::Collections::Generic::KeyValuePair_2<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>,TValue>::__set_value(TValue  value)  {
::cordl_internals::setInstanceField<TValue, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<TValue>(value));
}
template<::cordl_internals::is_or_is_backed_by<int32_t> T1_cordlgen_0,::il2cpp_utils::il2cpp_reference_type T2_cordlgen_1,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr TValue& System::Collections::Generic::KeyValuePair_2<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>,TValue>::__get_value()  {
return ::cordl_internals::getInstanceField<TValue, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> T1_cordlgen_0,::il2cpp_utils::il2cpp_reference_type T2_cordlgen_1,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr TValue const& System::Collections::Generic::KeyValuePair_2<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>,TValue>::__get_value() const {
return ::cordl_internals::getInstanceField<TValue, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> T1_cordlgen_0,::il2cpp_utils::il2cpp_reference_type T2_cordlgen_1,::il2cpp_utils::il2cpp_reference_type TValue>
inline void System::Collections::Generic::KeyValuePair_2<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>,TValue>::_ctor(::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>  key, TValue  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>,TValue>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> T1_cordlgen_0,::il2cpp_utils::il2cpp_reference_type T2_cordlgen_1,::il2cpp_utils::il2cpp_reference_type TValue>
inline ::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1> System::Collections::Generic::KeyValuePair_2<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>,TValue>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>,TValue>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>, false>(*this, ___internal_method);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> T1_cordlgen_0,::il2cpp_utils::il2cpp_reference_type T2_cordlgen_1,::il2cpp_utils::il2cpp_reference_type TValue>
inline TValue System::Collections::Generic::KeyValuePair_2<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>,TValue>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>,TValue>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TValue, false>(*this, ___internal_method);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> T1_cordlgen_0,::il2cpp_utils::il2cpp_reference_type T2_cordlgen_1,::il2cpp_utils::il2cpp_reference_type TValue>
inline ::StringW System::Collections::Generic::KeyValuePair_2<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>,TValue>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>,TValue>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> T1_cordlgen_0,::il2cpp_utils::il2cpp_reference_type T2_cordlgen_1,::il2cpp_utils::il2cpp_reference_type TValue>
inline void System::Collections::Generic::KeyValuePair_2<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>,TValue>::Deconstruct(ByRef<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>  key, ByRef<TValue>  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>,TValue>>::get(),
                            "Deconstruct",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<TValue>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
// Ctor Parameters [CppParam { name: "key", ty: "::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>", modifiers: "", def_value: Some("{}") }, CppParam { name: "value", ty: "TValue", modifiers: "", def_value: Some("csnull") }]
template<::cordl_internals::is_or_is_backed_by<int32_t> T1_cordlgen_0,::il2cpp_utils::il2cpp_reference_type T2_cordlgen_1,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::System::Collections::Generic::KeyValuePair_2<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>,TValue>::KeyValuePair_2(::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>  key, TValue  value) noexcept : ::bs_hook::ValueTypeWrapper<0x18>() {this->key = key;
this->value = value;
}
//  Writing Method size for method: ::System::Collections::Generic::KeyValuePair_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Generic::KeyValuePair_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>::*)(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair, int32_t)>(&::System::Collections::Generic::KeyValuePair_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::KeyValuePair_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>.get_Key
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair (::System::Collections::Generic::KeyValuePair_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>::*)()>(&::System::Collections::Generic::KeyValuePair_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>::get_Key)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::KeyValuePair_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>.get_Value
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Collections::Generic::KeyValuePair_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>::*)()>(&::System::Collections::Generic::KeyValuePair_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>::get_Value)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::KeyValuePair_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Collections::Generic::KeyValuePair_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>::*)()>(&::System::Collections::Generic::KeyValuePair_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>::ToString)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::KeyValuePair_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>.Deconstruct
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Generic::KeyValuePair_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>::*)(ByRef<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair>, ByRef<int32_t>)>(&::System::Collections::Generic::KeyValuePair_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>::Deconstruct)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>>::get(),
                            "Deconstruct",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Collections::Generic::KeyValuePair_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>::__set_key(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair>(value));
}
constexpr ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair& System::Collections::Generic::KeyValuePair_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>::__get_key()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair const& System::Collections::Generic::KeyValuePair_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>::__get_key() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::Collections::Generic::KeyValuePair_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>::__set_value(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& System::Collections::Generic::KeyValuePair_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>::__get_value()  {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& System::Collections::Generic::KeyValuePair_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>::__get_value() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline void System::Collections::Generic::KeyValuePair_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>::_ctor(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair  key, int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
inline ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair System::Collections::Generic::KeyValuePair_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair, false>(*this, ___internal_method);
}
inline int32_t System::Collections::Generic::KeyValuePair_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline ::StringW System::Collections::Generic::KeyValuePair_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline void System::Collections::Generic::KeyValuePair_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>::Deconstruct(ByRef<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair>  key, ByRef<int32_t>  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>>::get(),
                            "Deconstruct",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
// Ctor Parameters [CppParam { name: "key", ty: "::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair", modifiers: "", def_value: Some("{}") }, CppParam { name: "value", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Collections::Generic::KeyValuePair_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>::KeyValuePair_2(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair  key, int32_t  value) noexcept : ::bs_hook::ValueTypeWrapper<0x18>() {this->key = key;
this->value = value;
}
//  Writing Method size for method: ::System::Collections::Generic::KeyValuePair_2<::MS::Internal::Xml::Cache::XPathNodeRef,::MS::Internal::Xml::Cache::XPathNodeRef>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Generic::KeyValuePair_2<::MS::Internal::Xml::Cache::XPathNodeRef,::MS::Internal::Xml::Cache::XPathNodeRef>::*)(::MS::Internal::Xml::Cache::XPathNodeRef, ::MS::Internal::Xml::Cache::XPathNodeRef)>(&::System::Collections::Generic::KeyValuePair_2<::MS::Internal::Xml::Cache::XPathNodeRef,::MS::Internal::Xml::Cache::XPathNodeRef>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::MS::Internal::Xml::Cache::XPathNodeRef,::MS::Internal::Xml::Cache::XPathNodeRef>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::MS::Internal::Xml::Cache::XPathNodeRef>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::MS::Internal::Xml::Cache::XPathNodeRef>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::KeyValuePair_2<::MS::Internal::Xml::Cache::XPathNodeRef,::MS::Internal::Xml::Cache::XPathNodeRef>.get_Key
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::MS::Internal::Xml::Cache::XPathNodeRef (::System::Collections::Generic::KeyValuePair_2<::MS::Internal::Xml::Cache::XPathNodeRef,::MS::Internal::Xml::Cache::XPathNodeRef>::*)()>(&::System::Collections::Generic::KeyValuePair_2<::MS::Internal::Xml::Cache::XPathNodeRef,::MS::Internal::Xml::Cache::XPathNodeRef>::get_Key)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::MS::Internal::Xml::Cache::XPathNodeRef,::MS::Internal::Xml::Cache::XPathNodeRef>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::KeyValuePair_2<::MS::Internal::Xml::Cache::XPathNodeRef,::MS::Internal::Xml::Cache::XPathNodeRef>.get_Value
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::MS::Internal::Xml::Cache::XPathNodeRef (::System::Collections::Generic::KeyValuePair_2<::MS::Internal::Xml::Cache::XPathNodeRef,::MS::Internal::Xml::Cache::XPathNodeRef>::*)()>(&::System::Collections::Generic::KeyValuePair_2<::MS::Internal::Xml::Cache::XPathNodeRef,::MS::Internal::Xml::Cache::XPathNodeRef>::get_Value)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::MS::Internal::Xml::Cache::XPathNodeRef,::MS::Internal::Xml::Cache::XPathNodeRef>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::KeyValuePair_2<::MS::Internal::Xml::Cache::XPathNodeRef,::MS::Internal::Xml::Cache::XPathNodeRef>.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Collections::Generic::KeyValuePair_2<::MS::Internal::Xml::Cache::XPathNodeRef,::MS::Internal::Xml::Cache::XPathNodeRef>::*)()>(&::System::Collections::Generic::KeyValuePair_2<::MS::Internal::Xml::Cache::XPathNodeRef,::MS::Internal::Xml::Cache::XPathNodeRef>::ToString)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::MS::Internal::Xml::Cache::XPathNodeRef,::MS::Internal::Xml::Cache::XPathNodeRef>>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::MS::Internal::Xml::Cache::XPathNodeRef,::MS::Internal::Xml::Cache::XPathNodeRef>>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::KeyValuePair_2<::MS::Internal::Xml::Cache::XPathNodeRef,::MS::Internal::Xml::Cache::XPathNodeRef>.Deconstruct
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Generic::KeyValuePair_2<::MS::Internal::Xml::Cache::XPathNodeRef,::MS::Internal::Xml::Cache::XPathNodeRef>::*)(ByRef<::MS::Internal::Xml::Cache::XPathNodeRef>, ByRef<::MS::Internal::Xml::Cache::XPathNodeRef>)>(&::System::Collections::Generic::KeyValuePair_2<::MS::Internal::Xml::Cache::XPathNodeRef,::MS::Internal::Xml::Cache::XPathNodeRef>::Deconstruct)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::MS::Internal::Xml::Cache::XPathNodeRef,::MS::Internal::Xml::Cache::XPathNodeRef>>::get(),
                            "Deconstruct",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::MS::Internal::Xml::Cache::XPathNodeRef>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::MS::Internal::Xml::Cache::XPathNodeRef>>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Collections::Generic::KeyValuePair_2<::MS::Internal::Xml::Cache::XPathNodeRef,::MS::Internal::Xml::Cache::XPathNodeRef>::__set_key(::MS::Internal::Xml::Cache::XPathNodeRef  value)  {
::cordl_internals::setInstanceField<::MS::Internal::Xml::Cache::XPathNodeRef, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::MS::Internal::Xml::Cache::XPathNodeRef>(value));
}
constexpr ::MS::Internal::Xml::Cache::XPathNodeRef& System::Collections::Generic::KeyValuePair_2<::MS::Internal::Xml::Cache::XPathNodeRef,::MS::Internal::Xml::Cache::XPathNodeRef>::__get_key()  {
return ::cordl_internals::getInstanceField<::MS::Internal::Xml::Cache::XPathNodeRef, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::MS::Internal::Xml::Cache::XPathNodeRef const& System::Collections::Generic::KeyValuePair_2<::MS::Internal::Xml::Cache::XPathNodeRef,::MS::Internal::Xml::Cache::XPathNodeRef>::__get_key() const {
return ::cordl_internals::getInstanceField<::MS::Internal::Xml::Cache::XPathNodeRef, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::Collections::Generic::KeyValuePair_2<::MS::Internal::Xml::Cache::XPathNodeRef,::MS::Internal::Xml::Cache::XPathNodeRef>::__set_value(::MS::Internal::Xml::Cache::XPathNodeRef  value)  {
::cordl_internals::setInstanceField<::MS::Internal::Xml::Cache::XPathNodeRef, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::MS::Internal::Xml::Cache::XPathNodeRef>(value));
}
constexpr ::MS::Internal::Xml::Cache::XPathNodeRef& System::Collections::Generic::KeyValuePair_2<::MS::Internal::Xml::Cache::XPathNodeRef,::MS::Internal::Xml::Cache::XPathNodeRef>::__get_value()  {
return ::cordl_internals::getInstanceField<::MS::Internal::Xml::Cache::XPathNodeRef, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::MS::Internal::Xml::Cache::XPathNodeRef const& System::Collections::Generic::KeyValuePair_2<::MS::Internal::Xml::Cache::XPathNodeRef,::MS::Internal::Xml::Cache::XPathNodeRef>::__get_value() const {
return ::cordl_internals::getInstanceField<::MS::Internal::Xml::Cache::XPathNodeRef, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline void System::Collections::Generic::KeyValuePair_2<::MS::Internal::Xml::Cache::XPathNodeRef,::MS::Internal::Xml::Cache::XPathNodeRef>::_ctor(::MS::Internal::Xml::Cache::XPathNodeRef  key, ::MS::Internal::Xml::Cache::XPathNodeRef  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::MS::Internal::Xml::Cache::XPathNodeRef,::MS::Internal::Xml::Cache::XPathNodeRef>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::MS::Internal::Xml::Cache::XPathNodeRef>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::MS::Internal::Xml::Cache::XPathNodeRef>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
inline ::MS::Internal::Xml::Cache::XPathNodeRef System::Collections::Generic::KeyValuePair_2<::MS::Internal::Xml::Cache::XPathNodeRef,::MS::Internal::Xml::Cache::XPathNodeRef>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::MS::Internal::Xml::Cache::XPathNodeRef,::MS::Internal::Xml::Cache::XPathNodeRef>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::MS::Internal::Xml::Cache::XPathNodeRef, false>(*this, ___internal_method);
}
inline ::MS::Internal::Xml::Cache::XPathNodeRef System::Collections::Generic::KeyValuePair_2<::MS::Internal::Xml::Cache::XPathNodeRef,::MS::Internal::Xml::Cache::XPathNodeRef>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::MS::Internal::Xml::Cache::XPathNodeRef,::MS::Internal::Xml::Cache::XPathNodeRef>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::MS::Internal::Xml::Cache::XPathNodeRef, false>(*this, ___internal_method);
}
inline ::StringW System::Collections::Generic::KeyValuePair_2<::MS::Internal::Xml::Cache::XPathNodeRef,::MS::Internal::Xml::Cache::XPathNodeRef>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::MS::Internal::Xml::Cache::XPathNodeRef,::MS::Internal::Xml::Cache::XPathNodeRef>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline void System::Collections::Generic::KeyValuePair_2<::MS::Internal::Xml::Cache::XPathNodeRef,::MS::Internal::Xml::Cache::XPathNodeRef>::Deconstruct(ByRef<::MS::Internal::Xml::Cache::XPathNodeRef>  key, ByRef<::MS::Internal::Xml::Cache::XPathNodeRef>  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::MS::Internal::Xml::Cache::XPathNodeRef,::MS::Internal::Xml::Cache::XPathNodeRef>>::get(),
                            "Deconstruct",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::MS::Internal::Xml::Cache::XPathNodeRef>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::MS::Internal::Xml::Cache::XPathNodeRef>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
// Ctor Parameters [CppParam { name: "key", ty: "::MS::Internal::Xml::Cache::XPathNodeRef", modifiers: "", def_value: Some("{}") }, CppParam { name: "value", ty: "::MS::Internal::Xml::Cache::XPathNodeRef", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Collections::Generic::KeyValuePair_2<::MS::Internal::Xml::Cache::XPathNodeRef,::MS::Internal::Xml::Cache::XPathNodeRef>::KeyValuePair_2(::MS::Internal::Xml::Cache::XPathNodeRef  key, ::MS::Internal::Xml::Cache::XPathNodeRef  value) noexcept : ::bs_hook::ValueTypeWrapper<0x20>() {this->key = key;
this->value = value;
}
//  Writing Method size for method: ::System::Collections::Generic::KeyValuePair_2<uint64_t,::GlobalNamespace::__OVRSpatialAnchor__MultiAnchorDelegatePair>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Generic::KeyValuePair_2<uint64_t,::GlobalNamespace::__OVRSpatialAnchor__MultiAnchorDelegatePair>::*)(uint64_t, ::GlobalNamespace::__OVRSpatialAnchor__MultiAnchorDelegatePair)>(&::System::Collections::Generic::KeyValuePair_2<uint64_t,::GlobalNamespace::__OVRSpatialAnchor__MultiAnchorDelegatePair>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<uint64_t,::GlobalNamespace::__OVRSpatialAnchor__MultiAnchorDelegatePair>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRSpatialAnchor__MultiAnchorDelegatePair>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::KeyValuePair_2<uint64_t,::GlobalNamespace::__OVRSpatialAnchor__MultiAnchorDelegatePair>.get_Key
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (::System::Collections::Generic::KeyValuePair_2<uint64_t,::GlobalNamespace::__OVRSpatialAnchor__MultiAnchorDelegatePair>::*)()>(&::System::Collections::Generic::KeyValuePair_2<uint64_t,::GlobalNamespace::__OVRSpatialAnchor__MultiAnchorDelegatePair>::get_Key)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<uint64_t,::GlobalNamespace::__OVRSpatialAnchor__MultiAnchorDelegatePair>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::KeyValuePair_2<uint64_t,::GlobalNamespace::__OVRSpatialAnchor__MultiAnchorDelegatePair>.get_Value
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__OVRSpatialAnchor__MultiAnchorDelegatePair (::System::Collections::Generic::KeyValuePair_2<uint64_t,::GlobalNamespace::__OVRSpatialAnchor__MultiAnchorDelegatePair>::*)()>(&::System::Collections::Generic::KeyValuePair_2<uint64_t,::GlobalNamespace::__OVRSpatialAnchor__MultiAnchorDelegatePair>::get_Value)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<uint64_t,::GlobalNamespace::__OVRSpatialAnchor__MultiAnchorDelegatePair>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::KeyValuePair_2<uint64_t,::GlobalNamespace::__OVRSpatialAnchor__MultiAnchorDelegatePair>.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Collections::Generic::KeyValuePair_2<uint64_t,::GlobalNamespace::__OVRSpatialAnchor__MultiAnchorDelegatePair>::*)()>(&::System::Collections::Generic::KeyValuePair_2<uint64_t,::GlobalNamespace::__OVRSpatialAnchor__MultiAnchorDelegatePair>::ToString)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<uint64_t,::GlobalNamespace::__OVRSpatialAnchor__MultiAnchorDelegatePair>>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<uint64_t,::GlobalNamespace::__OVRSpatialAnchor__MultiAnchorDelegatePair>>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::KeyValuePair_2<uint64_t,::GlobalNamespace::__OVRSpatialAnchor__MultiAnchorDelegatePair>.Deconstruct
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Generic::KeyValuePair_2<uint64_t,::GlobalNamespace::__OVRSpatialAnchor__MultiAnchorDelegatePair>::*)(ByRef<uint64_t>, ByRef<::GlobalNamespace::__OVRSpatialAnchor__MultiAnchorDelegatePair>)>(&::System::Collections::Generic::KeyValuePair_2<uint64_t,::GlobalNamespace::__OVRSpatialAnchor__MultiAnchorDelegatePair>::Deconstruct)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<uint64_t,::GlobalNamespace::__OVRSpatialAnchor__MultiAnchorDelegatePair>>::get(),
                            "Deconstruct",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint64_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::__OVRSpatialAnchor__MultiAnchorDelegatePair>>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Collections::Generic::KeyValuePair_2<uint64_t,::GlobalNamespace::__OVRSpatialAnchor__MultiAnchorDelegatePair>::__set_key(uint64_t  value)  {
::cordl_internals::setInstanceField<uint64_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<uint64_t>(value));
}
constexpr uint64_t& System::Collections::Generic::KeyValuePair_2<uint64_t,::GlobalNamespace::__OVRSpatialAnchor__MultiAnchorDelegatePair>::__get_key()  {
return ::cordl_internals::getInstanceField<uint64_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr uint64_t const& System::Collections::Generic::KeyValuePair_2<uint64_t,::GlobalNamespace::__OVRSpatialAnchor__MultiAnchorDelegatePair>::__get_key() const {
return ::cordl_internals::getInstanceField<uint64_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::Collections::Generic::KeyValuePair_2<uint64_t,::GlobalNamespace::__OVRSpatialAnchor__MultiAnchorDelegatePair>::__set_value(::GlobalNamespace::__OVRSpatialAnchor__MultiAnchorDelegatePair  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__OVRSpatialAnchor__MultiAnchorDelegatePair, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::GlobalNamespace::__OVRSpatialAnchor__MultiAnchorDelegatePair>(value));
}
constexpr ::GlobalNamespace::__OVRSpatialAnchor__MultiAnchorDelegatePair& System::Collections::Generic::KeyValuePair_2<uint64_t,::GlobalNamespace::__OVRSpatialAnchor__MultiAnchorDelegatePair>::__get_value()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__OVRSpatialAnchor__MultiAnchorDelegatePair, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::GlobalNamespace::__OVRSpatialAnchor__MultiAnchorDelegatePair const& System::Collections::Generic::KeyValuePair_2<uint64_t,::GlobalNamespace::__OVRSpatialAnchor__MultiAnchorDelegatePair>::__get_value() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__OVRSpatialAnchor__MultiAnchorDelegatePair, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline void System::Collections::Generic::KeyValuePair_2<uint64_t,::GlobalNamespace::__OVRSpatialAnchor__MultiAnchorDelegatePair>::_ctor(uint64_t  key, ::GlobalNamespace::__OVRSpatialAnchor__MultiAnchorDelegatePair  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<uint64_t,::GlobalNamespace::__OVRSpatialAnchor__MultiAnchorDelegatePair>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRSpatialAnchor__MultiAnchorDelegatePair>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
inline uint64_t System::Collections::Generic::KeyValuePair_2<uint64_t,::GlobalNamespace::__OVRSpatialAnchor__MultiAnchorDelegatePair>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<uint64_t,::GlobalNamespace::__OVRSpatialAnchor__MultiAnchorDelegatePair>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<uint64_t, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::__OVRSpatialAnchor__MultiAnchorDelegatePair System::Collections::Generic::KeyValuePair_2<uint64_t,::GlobalNamespace::__OVRSpatialAnchor__MultiAnchorDelegatePair>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<uint64_t,::GlobalNamespace::__OVRSpatialAnchor__MultiAnchorDelegatePair>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__OVRSpatialAnchor__MultiAnchorDelegatePair, false>(*this, ___internal_method);
}
inline ::StringW System::Collections::Generic::KeyValuePair_2<uint64_t,::GlobalNamespace::__OVRSpatialAnchor__MultiAnchorDelegatePair>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<uint64_t,::GlobalNamespace::__OVRSpatialAnchor__MultiAnchorDelegatePair>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline void System::Collections::Generic::KeyValuePair_2<uint64_t,::GlobalNamespace::__OVRSpatialAnchor__MultiAnchorDelegatePair>::Deconstruct(ByRef<uint64_t>  key, ByRef<::GlobalNamespace::__OVRSpatialAnchor__MultiAnchorDelegatePair>  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<uint64_t,::GlobalNamespace::__OVRSpatialAnchor__MultiAnchorDelegatePair>>::get(),
                            "Deconstruct",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint64_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::__OVRSpatialAnchor__MultiAnchorDelegatePair>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
// Ctor Parameters [CppParam { name: "key", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "value", ty: "::GlobalNamespace::__OVRSpatialAnchor__MultiAnchorDelegatePair", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Collections::Generic::KeyValuePair_2<uint64_t,::GlobalNamespace::__OVRSpatialAnchor__MultiAnchorDelegatePair>::KeyValuePair_2(uint64_t  key, ::GlobalNamespace::__OVRSpatialAnchor__MultiAnchorDelegatePair  value) noexcept : ::bs_hook::ValueTypeWrapper<0x18>() {this->key = key;
this->value = value;
}
//  Writing Method size for method: ::System::Collections::Generic::KeyValuePair_2<uint32_t,::BeatSaber::AvatarCore::OptionalAvatarData>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Generic::KeyValuePair_2<uint32_t,::BeatSaber::AvatarCore::OptionalAvatarData>::*)(uint32_t, ::BeatSaber::AvatarCore::OptionalAvatarData)>(&::System::Collections::Generic::KeyValuePair_2<uint32_t,::BeatSaber::AvatarCore::OptionalAvatarData>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<uint32_t,::BeatSaber::AvatarCore::OptionalAvatarData>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::AvatarCore::OptionalAvatarData>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::KeyValuePair_2<uint32_t,::BeatSaber::AvatarCore::OptionalAvatarData>.get_Key
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::System::Collections::Generic::KeyValuePair_2<uint32_t,::BeatSaber::AvatarCore::OptionalAvatarData>::*)()>(&::System::Collections::Generic::KeyValuePair_2<uint32_t,::BeatSaber::AvatarCore::OptionalAvatarData>::get_Key)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<uint32_t,::BeatSaber::AvatarCore::OptionalAvatarData>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::KeyValuePair_2<uint32_t,::BeatSaber::AvatarCore::OptionalAvatarData>.get_Value
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatSaber::AvatarCore::OptionalAvatarData (::System::Collections::Generic::KeyValuePair_2<uint32_t,::BeatSaber::AvatarCore::OptionalAvatarData>::*)()>(&::System::Collections::Generic::KeyValuePair_2<uint32_t,::BeatSaber::AvatarCore::OptionalAvatarData>::get_Value)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<uint32_t,::BeatSaber::AvatarCore::OptionalAvatarData>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::KeyValuePair_2<uint32_t,::BeatSaber::AvatarCore::OptionalAvatarData>.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Collections::Generic::KeyValuePair_2<uint32_t,::BeatSaber::AvatarCore::OptionalAvatarData>::*)()>(&::System::Collections::Generic::KeyValuePair_2<uint32_t,::BeatSaber::AvatarCore::OptionalAvatarData>::ToString)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<uint32_t,::BeatSaber::AvatarCore::OptionalAvatarData>>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<uint32_t,::BeatSaber::AvatarCore::OptionalAvatarData>>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::KeyValuePair_2<uint32_t,::BeatSaber::AvatarCore::OptionalAvatarData>.Deconstruct
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Generic::KeyValuePair_2<uint32_t,::BeatSaber::AvatarCore::OptionalAvatarData>::*)(ByRef<uint32_t>, ByRef<::BeatSaber::AvatarCore::OptionalAvatarData>)>(&::System::Collections::Generic::KeyValuePair_2<uint32_t,::BeatSaber::AvatarCore::OptionalAvatarData>::Deconstruct)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<uint32_t,::BeatSaber::AvatarCore::OptionalAvatarData>>::get(),
                            "Deconstruct",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::BeatSaber::AvatarCore::OptionalAvatarData>>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Collections::Generic::KeyValuePair_2<uint32_t,::BeatSaber::AvatarCore::OptionalAvatarData>::__set_key(uint32_t  value)  {
::cordl_internals::setInstanceField<uint32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<uint32_t>(value));
}
constexpr uint32_t& System::Collections::Generic::KeyValuePair_2<uint32_t,::BeatSaber::AvatarCore::OptionalAvatarData>::__get_key()  {
return ::cordl_internals::getInstanceField<uint32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr uint32_t const& System::Collections::Generic::KeyValuePair_2<uint32_t,::BeatSaber::AvatarCore::OptionalAvatarData>::__get_key() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::Collections::Generic::KeyValuePair_2<uint32_t,::BeatSaber::AvatarCore::OptionalAvatarData>::__set_value(::BeatSaber::AvatarCore::OptionalAvatarData  value)  {
::cordl_internals::setInstanceField<::BeatSaber::AvatarCore::OptionalAvatarData, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::BeatSaber::AvatarCore::OptionalAvatarData>(value));
}
constexpr ::BeatSaber::AvatarCore::OptionalAvatarData& System::Collections::Generic::KeyValuePair_2<uint32_t,::BeatSaber::AvatarCore::OptionalAvatarData>::__get_value()  {
return ::cordl_internals::getInstanceField<::BeatSaber::AvatarCore::OptionalAvatarData, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::BeatSaber::AvatarCore::OptionalAvatarData const& System::Collections::Generic::KeyValuePair_2<uint32_t,::BeatSaber::AvatarCore::OptionalAvatarData>::__get_value() const {
return ::cordl_internals::getInstanceField<::BeatSaber::AvatarCore::OptionalAvatarData, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline void System::Collections::Generic::KeyValuePair_2<uint32_t,::BeatSaber::AvatarCore::OptionalAvatarData>::_ctor(uint32_t  key, ::BeatSaber::AvatarCore::OptionalAvatarData  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<uint32_t,::BeatSaber::AvatarCore::OptionalAvatarData>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::AvatarCore::OptionalAvatarData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
inline uint32_t System::Collections::Generic::KeyValuePair_2<uint32_t,::BeatSaber::AvatarCore::OptionalAvatarData>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<uint32_t,::BeatSaber::AvatarCore::OptionalAvatarData>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(*this, ___internal_method);
}
inline ::BeatSaber::AvatarCore::OptionalAvatarData System::Collections::Generic::KeyValuePair_2<uint32_t,::BeatSaber::AvatarCore::OptionalAvatarData>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<uint32_t,::BeatSaber::AvatarCore::OptionalAvatarData>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::BeatSaber::AvatarCore::OptionalAvatarData, false>(*this, ___internal_method);
}
inline ::StringW System::Collections::Generic::KeyValuePair_2<uint32_t,::BeatSaber::AvatarCore::OptionalAvatarData>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<uint32_t,::BeatSaber::AvatarCore::OptionalAvatarData>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline void System::Collections::Generic::KeyValuePair_2<uint32_t,::BeatSaber::AvatarCore::OptionalAvatarData>::Deconstruct(ByRef<uint32_t>  key, ByRef<::BeatSaber::AvatarCore::OptionalAvatarData>  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<uint32_t,::BeatSaber::AvatarCore::OptionalAvatarData>>::get(),
                            "Deconstruct",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::BeatSaber::AvatarCore::OptionalAvatarData>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
// Ctor Parameters [CppParam { name: "key", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "value", ty: "::BeatSaber::AvatarCore::OptionalAvatarData", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Collections::Generic::KeyValuePair_2<uint32_t,::BeatSaber::AvatarCore::OptionalAvatarData>::KeyValuePair_2(uint32_t  key, ::BeatSaber::AvatarCore::OptionalAvatarData  value) noexcept : ::bs_hook::ValueTypeWrapper<0x18>() {this->key = key;
this->value = value;
}
//  Writing Method size for method: ::System::Collections::Generic::KeyValuePair_2<uint32_t,int32_t>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Generic::KeyValuePair_2<uint32_t,int32_t>::*)(uint32_t, int32_t)>(&::System::Collections::Generic::KeyValuePair_2<uint32_t,int32_t>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<uint32_t,int32_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::KeyValuePair_2<uint32_t,int32_t>.get_Key
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::System::Collections::Generic::KeyValuePair_2<uint32_t,int32_t>::*)()>(&::System::Collections::Generic::KeyValuePair_2<uint32_t,int32_t>::get_Key)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<uint32_t,int32_t>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::KeyValuePair_2<uint32_t,int32_t>.get_Value
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Collections::Generic::KeyValuePair_2<uint32_t,int32_t>::*)()>(&::System::Collections::Generic::KeyValuePair_2<uint32_t,int32_t>::get_Value)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<uint32_t,int32_t>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::KeyValuePair_2<uint32_t,int32_t>.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Collections::Generic::KeyValuePair_2<uint32_t,int32_t>::*)()>(&::System::Collections::Generic::KeyValuePair_2<uint32_t,int32_t>::ToString)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<uint32_t,int32_t>>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<uint32_t,int32_t>>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::KeyValuePair_2<uint32_t,int32_t>.Deconstruct
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Generic::KeyValuePair_2<uint32_t,int32_t>::*)(ByRef<uint32_t>, ByRef<int32_t>)>(&::System::Collections::Generic::KeyValuePair_2<uint32_t,int32_t>::Deconstruct)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<uint32_t,int32_t>>::get(),
                            "Deconstruct",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Collections::Generic::KeyValuePair_2<uint32_t,int32_t>::__set_key(uint32_t  value)  {
::cordl_internals::setInstanceField<uint32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<uint32_t>(value));
}
constexpr uint32_t& System::Collections::Generic::KeyValuePair_2<uint32_t,int32_t>::__get_key()  {
return ::cordl_internals::getInstanceField<uint32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr uint32_t const& System::Collections::Generic::KeyValuePair_2<uint32_t,int32_t>::__get_key() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::Collections::Generic::KeyValuePair_2<uint32_t,int32_t>::__set_value(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& System::Collections::Generic::KeyValuePair_2<uint32_t,int32_t>::__get_value()  {
return ::cordl_internals::getInstanceField<int32_t, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& System::Collections::Generic::KeyValuePair_2<uint32_t,int32_t>::__get_value() const {
return ::cordl_internals::getInstanceField<int32_t, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline void System::Collections::Generic::KeyValuePair_2<uint32_t,int32_t>::_ctor(uint32_t  key, int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<uint32_t,int32_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
inline uint32_t System::Collections::Generic::KeyValuePair_2<uint32_t,int32_t>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<uint32_t,int32_t>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(*this, ___internal_method);
}
inline int32_t System::Collections::Generic::KeyValuePair_2<uint32_t,int32_t>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<uint32_t,int32_t>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline ::StringW System::Collections::Generic::KeyValuePair_2<uint32_t,int32_t>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<uint32_t,int32_t>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline void System::Collections::Generic::KeyValuePair_2<uint32_t,int32_t>::Deconstruct(ByRef<uint32_t>  key, ByRef<int32_t>  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<uint32_t,int32_t>>::get(),
                            "Deconstruct",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
// Ctor Parameters [CppParam { name: "key", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "value", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Collections::Generic::KeyValuePair_2<uint32_t,int32_t>::KeyValuePair_2(uint32_t  key, int32_t  value) noexcept : ::bs_hook::ValueTypeWrapper<0x8>() {this->key = key;
this->value = value;
}
//  Writing Method size for method: ::System::Collections::Generic::KeyValuePair_2<uint32_t,::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Generic::KeyValuePair_2<uint32_t,::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>::*)(uint32_t, ::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord)>(&::System::Collections::Generic::KeyValuePair_2<uint32_t,::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<uint32_t,::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::KeyValuePair_2<uint32_t,::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>.get_Key
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::System::Collections::Generic::KeyValuePair_2<uint32_t,::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>::*)()>(&::System::Collections::Generic::KeyValuePair_2<uint32_t,::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>::get_Key)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<uint32_t,::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::KeyValuePair_2<uint32_t,::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>.get_Value
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord (::System::Collections::Generic::KeyValuePair_2<uint32_t,::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>::*)()>(&::System::Collections::Generic::KeyValuePair_2<uint32_t,::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>::get_Value)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<uint32_t,::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::KeyValuePair_2<uint32_t,::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Collections::Generic::KeyValuePair_2<uint32_t,::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>::*)()>(&::System::Collections::Generic::KeyValuePair_2<uint32_t,::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>::ToString)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<uint32_t,::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<uint32_t,::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::KeyValuePair_2<uint32_t,::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>.Deconstruct
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Generic::KeyValuePair_2<uint32_t,::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>::*)(ByRef<uint32_t>, ByRef<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>)>(&::System::Collections::Generic::KeyValuePair_2<uint32_t,::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>::Deconstruct)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<uint32_t,::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>>::get(),
                            "Deconstruct",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Collections::Generic::KeyValuePair_2<uint32_t,::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>::__set_key(uint32_t  value)  {
::cordl_internals::setInstanceField<uint32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<uint32_t>(value));
}
constexpr uint32_t& System::Collections::Generic::KeyValuePair_2<uint32_t,::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>::__get_key()  {
return ::cordl_internals::getInstanceField<uint32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr uint32_t const& System::Collections::Generic::KeyValuePair_2<uint32_t,::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>::__get_key() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::Collections::Generic::KeyValuePair_2<uint32_t,::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>::__set_value(::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord  value)  {
::cordl_internals::setInstanceField<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>(value));
}
constexpr ::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord& System::Collections::Generic::KeyValuePair_2<uint32_t,::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>::__get_value()  {
return ::cordl_internals::getInstanceField<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord const& System::Collections::Generic::KeyValuePair_2<uint32_t,::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>::__get_value() const {
return ::cordl_internals::getInstanceField<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline void System::Collections::Generic::KeyValuePair_2<uint32_t,::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>::_ctor(uint32_t  key, ::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<uint32_t,::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
inline uint32_t System::Collections::Generic::KeyValuePair_2<uint32_t,::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<uint32_t,::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(*this, ___internal_method);
}
inline ::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord System::Collections::Generic::KeyValuePair_2<uint32_t,::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<uint32_t,::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord, false>(*this, ___internal_method);
}
inline ::StringW System::Collections::Generic::KeyValuePair_2<uint32_t,::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<uint32_t,::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline void System::Collections::Generic::KeyValuePair_2<uint32_t,::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>::Deconstruct(ByRef<uint32_t>  key, ByRef<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<uint32_t,::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>>::get(),
                            "Deconstruct",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
// Ctor Parameters [CppParam { name: "key", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "value", ty: "::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Collections::Generic::KeyValuePair_2<uint32_t,::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>::KeyValuePair_2(uint32_t  key, ::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord  value) noexcept : ::bs_hook::ValueTypeWrapper<0x30>() {this->key = key;
this->value = value;
}
//  Writing Method size for method: ::System::Collections::Generic::KeyValuePair_2<uint16_t,uint16_t>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Generic::KeyValuePair_2<uint16_t,uint16_t>::*)(uint16_t, uint16_t)>(&::System::Collections::Generic::KeyValuePair_2<uint16_t,uint16_t>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<uint16_t,uint16_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::KeyValuePair_2<uint16_t,uint16_t>.get_Key
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint16_t (::System::Collections::Generic::KeyValuePair_2<uint16_t,uint16_t>::*)()>(&::System::Collections::Generic::KeyValuePair_2<uint16_t,uint16_t>::get_Key)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<uint16_t,uint16_t>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::KeyValuePair_2<uint16_t,uint16_t>.get_Value
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint16_t (::System::Collections::Generic::KeyValuePair_2<uint16_t,uint16_t>::*)()>(&::System::Collections::Generic::KeyValuePair_2<uint16_t,uint16_t>::get_Value)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<uint16_t,uint16_t>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::KeyValuePair_2<uint16_t,uint16_t>.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Collections::Generic::KeyValuePair_2<uint16_t,uint16_t>::*)()>(&::System::Collections::Generic::KeyValuePair_2<uint16_t,uint16_t>::ToString)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<uint16_t,uint16_t>>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<uint16_t,uint16_t>>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::KeyValuePair_2<uint16_t,uint16_t>.Deconstruct
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Generic::KeyValuePair_2<uint16_t,uint16_t>::*)(ByRef<uint16_t>, ByRef<uint16_t>)>(&::System::Collections::Generic::KeyValuePair_2<uint16_t,uint16_t>::Deconstruct)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<uint16_t,uint16_t>>::get(),
                            "Deconstruct",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint16_t>>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Collections::Generic::KeyValuePair_2<uint16_t,uint16_t>::__set_key(uint16_t  value)  {
::cordl_internals::setInstanceField<uint16_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<uint16_t>(value));
}
constexpr uint16_t& System::Collections::Generic::KeyValuePair_2<uint16_t,uint16_t>::__get_key()  {
return ::cordl_internals::getInstanceField<uint16_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr uint16_t const& System::Collections::Generic::KeyValuePair_2<uint16_t,uint16_t>::__get_key() const {
return ::cordl_internals::getInstanceField<uint16_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::Collections::Generic::KeyValuePair_2<uint16_t,uint16_t>::__set_value(uint16_t  value)  {
::cordl_internals::setInstanceField<uint16_t, 0x2>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<uint16_t>(value));
}
constexpr uint16_t& System::Collections::Generic::KeyValuePair_2<uint16_t,uint16_t>::__get_value()  {
return ::cordl_internals::getInstanceField<uint16_t, 0x2>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr uint16_t const& System::Collections::Generic::KeyValuePair_2<uint16_t,uint16_t>::__get_value() const {
return ::cordl_internals::getInstanceField<uint16_t, 0x2>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline void System::Collections::Generic::KeyValuePair_2<uint16_t,uint16_t>::_ctor(uint16_t  key, uint16_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<uint16_t,uint16_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
inline uint16_t System::Collections::Generic::KeyValuePair_2<uint16_t,uint16_t>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<uint16_t,uint16_t>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<uint16_t, false>(*this, ___internal_method);
}
inline uint16_t System::Collections::Generic::KeyValuePair_2<uint16_t,uint16_t>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<uint16_t,uint16_t>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<uint16_t, false>(*this, ___internal_method);
}
inline ::StringW System::Collections::Generic::KeyValuePair_2<uint16_t,uint16_t>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<uint16_t,uint16_t>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline void System::Collections::Generic::KeyValuePair_2<uint16_t,uint16_t>::Deconstruct(ByRef<uint16_t>  key, ByRef<uint16_t>  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<uint16_t,uint16_t>>::get(),
                            "Deconstruct",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint16_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
// Ctor Parameters [CppParam { name: "key", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "value", ty: "uint16_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Collections::Generic::KeyValuePair_2<uint16_t,uint16_t>::KeyValuePair_2(uint16_t  key, uint16_t  value) noexcept : ::bs_hook::ValueTypeWrapper<0x4>() {this->key = key;
this->value = value;
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
constexpr void System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>::__set_key(TKey  value)  {
::cordl_internals::setInstanceField<TKey, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<TKey>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
constexpr TKey& System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>::__get_key()  {
return ::cordl_internals::getInstanceField<TKey, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
constexpr TKey const& System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>::__get_key() const {
return ::cordl_internals::getInstanceField<TKey, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
constexpr void System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>::__set_value(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle  value)  {
::cordl_internals::setInstanceField<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle& System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>::__get_value()  {
return ::cordl_internals::getInstanceField<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle const& System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>::__get_value() const {
return ::cordl_internals::getInstanceField<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
inline void System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>::_ctor(TKey  key, ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
inline TKey System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TKey, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
inline ::StringW System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TKey>
inline void System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>::Deconstruct(ByRef<TKey>  key, ByRef<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>>::get(),
                            "Deconstruct",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<TKey>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
// Ctor Parameters [CppParam { name: "key", ty: "TKey", modifiers: "", def_value: Some("csnull") }, CppParam { name: "value", ty: "::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle", modifiers: "", def_value: Some("{}") }]
template<::il2cpp_utils::il2cpp_reference_type TKey>
constexpr ::System::Collections::Generic::KeyValuePair_2<TKey,::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>::KeyValuePair_2(TKey  key, ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle  value) noexcept : ::bs_hook::ValueTypeWrapper<0x20>() {this->key = key;
this->value = value;
}
//  Writing Method size for method: ::System::Collections::Generic::KeyValuePair_2<::GlobalNamespace::OVRSpace,int32_t>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Generic::KeyValuePair_2<::GlobalNamespace::OVRSpace,int32_t>::*)(::GlobalNamespace::OVRSpace, int32_t)>(&::System::Collections::Generic::KeyValuePair_2<::GlobalNamespace::OVRSpace,int32_t>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::GlobalNamespace::OVRSpace,int32_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSpace>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::KeyValuePair_2<::GlobalNamespace::OVRSpace,int32_t>.get_Key
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRSpace (::System::Collections::Generic::KeyValuePair_2<::GlobalNamespace::OVRSpace,int32_t>::*)()>(&::System::Collections::Generic::KeyValuePair_2<::GlobalNamespace::OVRSpace,int32_t>::get_Key)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::GlobalNamespace::OVRSpace,int32_t>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::KeyValuePair_2<::GlobalNamespace::OVRSpace,int32_t>.get_Value
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Collections::Generic::KeyValuePair_2<::GlobalNamespace::OVRSpace,int32_t>::*)()>(&::System::Collections::Generic::KeyValuePair_2<::GlobalNamespace::OVRSpace,int32_t>::get_Value)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::GlobalNamespace::OVRSpace,int32_t>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::KeyValuePair_2<::GlobalNamespace::OVRSpace,int32_t>.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Collections::Generic::KeyValuePair_2<::GlobalNamespace::OVRSpace,int32_t>::*)()>(&::System::Collections::Generic::KeyValuePair_2<::GlobalNamespace::OVRSpace,int32_t>::ToString)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::GlobalNamespace::OVRSpace,int32_t>>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::GlobalNamespace::OVRSpace,int32_t>>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::KeyValuePair_2<::GlobalNamespace::OVRSpace,int32_t>.Deconstruct
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Generic::KeyValuePair_2<::GlobalNamespace::OVRSpace,int32_t>::*)(ByRef<::GlobalNamespace::OVRSpace>, ByRef<int32_t>)>(&::System::Collections::Generic::KeyValuePair_2<::GlobalNamespace::OVRSpace,int32_t>::Deconstruct)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::GlobalNamespace::OVRSpace,int32_t>>::get(),
                            "Deconstruct",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::OVRSpace>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Collections::Generic::KeyValuePair_2<::GlobalNamespace::OVRSpace,int32_t>::__set_key(::GlobalNamespace::OVRSpace  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::OVRSpace, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::GlobalNamespace::OVRSpace>(value));
}
constexpr ::GlobalNamespace::OVRSpace& System::Collections::Generic::KeyValuePair_2<::GlobalNamespace::OVRSpace,int32_t>::__get_key()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::OVRSpace, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::GlobalNamespace::OVRSpace const& System::Collections::Generic::KeyValuePair_2<::GlobalNamespace::OVRSpace,int32_t>::__get_key() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::OVRSpace, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::Collections::Generic::KeyValuePair_2<::GlobalNamespace::OVRSpace,int32_t>::__set_value(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& System::Collections::Generic::KeyValuePair_2<::GlobalNamespace::OVRSpace,int32_t>::__get_value()  {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& System::Collections::Generic::KeyValuePair_2<::GlobalNamespace::OVRSpace,int32_t>::__get_value() const {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline void System::Collections::Generic::KeyValuePair_2<::GlobalNamespace::OVRSpace,int32_t>::_ctor(::GlobalNamespace::OVRSpace  key, int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::GlobalNamespace::OVRSpace,int32_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSpace>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
inline ::GlobalNamespace::OVRSpace System::Collections::Generic::KeyValuePair_2<::GlobalNamespace::OVRSpace,int32_t>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::GlobalNamespace::OVRSpace,int32_t>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRSpace, false>(*this, ___internal_method);
}
inline int32_t System::Collections::Generic::KeyValuePair_2<::GlobalNamespace::OVRSpace,int32_t>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::GlobalNamespace::OVRSpace,int32_t>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline ::StringW System::Collections::Generic::KeyValuePair_2<::GlobalNamespace::OVRSpace,int32_t>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::GlobalNamespace::OVRSpace,int32_t>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline void System::Collections::Generic::KeyValuePair_2<::GlobalNamespace::OVRSpace,int32_t>::Deconstruct(ByRef<::GlobalNamespace::OVRSpace>  key, ByRef<int32_t>  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::GlobalNamespace::OVRSpace,int32_t>>::get(),
                            "Deconstruct",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::OVRSpace>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
// Ctor Parameters [CppParam { name: "key", ty: "::GlobalNamespace::OVRSpace", modifiers: "", def_value: Some("{}") }, CppParam { name: "value", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Collections::Generic::KeyValuePair_2<::GlobalNamespace::OVRSpace,int32_t>::KeyValuePair_2(::GlobalNamespace::OVRSpace  key, int32_t  value) noexcept : ::bs_hook::ValueTypeWrapper<0x10>() {this->key = key;
this->value = value;
}
//  Writing Method size for method: ::System::Collections::Generic::KeyValuePair_2<::UnityEngine::InputSystem::Utilities::InternedString,::GlobalNamespace::__InputControlLayout__Collection__PrecompiledLayout>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Generic::KeyValuePair_2<::UnityEngine::InputSystem::Utilities::InternedString,::GlobalNamespace::__InputControlLayout__Collection__PrecompiledLayout>::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::GlobalNamespace::__InputControlLayout__Collection__PrecompiledLayout)>(&::System::Collections::Generic::KeyValuePair_2<::UnityEngine::InputSystem::Utilities::InternedString,::GlobalNamespace::__InputControlLayout__Collection__PrecompiledLayout>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::InputSystem::Utilities::InternedString,::GlobalNamespace::__InputControlLayout__Collection__PrecompiledLayout>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::InternedString>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__InputControlLayout__Collection__PrecompiledLayout>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::KeyValuePair_2<::UnityEngine::InputSystem::Utilities::InternedString,::GlobalNamespace::__InputControlLayout__Collection__PrecompiledLayout>.get_Key
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Utilities::InternedString (::System::Collections::Generic::KeyValuePair_2<::UnityEngine::InputSystem::Utilities::InternedString,::GlobalNamespace::__InputControlLayout__Collection__PrecompiledLayout>::*)()>(&::System::Collections::Generic::KeyValuePair_2<::UnityEngine::InputSystem::Utilities::InternedString,::GlobalNamespace::__InputControlLayout__Collection__PrecompiledLayout>::get_Key)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::InputSystem::Utilities::InternedString,::GlobalNamespace::__InputControlLayout__Collection__PrecompiledLayout>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::KeyValuePair_2<::UnityEngine::InputSystem::Utilities::InternedString,::GlobalNamespace::__InputControlLayout__Collection__PrecompiledLayout>.get_Value
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__InputControlLayout__Collection__PrecompiledLayout (::System::Collections::Generic::KeyValuePair_2<::UnityEngine::InputSystem::Utilities::InternedString,::GlobalNamespace::__InputControlLayout__Collection__PrecompiledLayout>::*)()>(&::System::Collections::Generic::KeyValuePair_2<::UnityEngine::InputSystem::Utilities::InternedString,::GlobalNamespace::__InputControlLayout__Collection__PrecompiledLayout>::get_Value)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::InputSystem::Utilities::InternedString,::GlobalNamespace::__InputControlLayout__Collection__PrecompiledLayout>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::KeyValuePair_2<::UnityEngine::InputSystem::Utilities::InternedString,::GlobalNamespace::__InputControlLayout__Collection__PrecompiledLayout>.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Collections::Generic::KeyValuePair_2<::UnityEngine::InputSystem::Utilities::InternedString,::GlobalNamespace::__InputControlLayout__Collection__PrecompiledLayout>::*)()>(&::System::Collections::Generic::KeyValuePair_2<::UnityEngine::InputSystem::Utilities::InternedString,::GlobalNamespace::__InputControlLayout__Collection__PrecompiledLayout>::ToString)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::InputSystem::Utilities::InternedString,::GlobalNamespace::__InputControlLayout__Collection__PrecompiledLayout>>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::InputSystem::Utilities::InternedString,::GlobalNamespace::__InputControlLayout__Collection__PrecompiledLayout>>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::KeyValuePair_2<::UnityEngine::InputSystem::Utilities::InternedString,::GlobalNamespace::__InputControlLayout__Collection__PrecompiledLayout>.Deconstruct
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Generic::KeyValuePair_2<::UnityEngine::InputSystem::Utilities::InternedString,::GlobalNamespace::__InputControlLayout__Collection__PrecompiledLayout>::*)(ByRef<::UnityEngine::InputSystem::Utilities::InternedString>, ByRef<::GlobalNamespace::__InputControlLayout__Collection__PrecompiledLayout>)>(&::System::Collections::Generic::KeyValuePair_2<::UnityEngine::InputSystem::Utilities::InternedString,::GlobalNamespace::__InputControlLayout__Collection__PrecompiledLayout>::Deconstruct)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::InputSystem::Utilities::InternedString,::GlobalNamespace::__InputControlLayout__Collection__PrecompiledLayout>>::get(),
                            "Deconstruct",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::Utilities::InternedString>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::__InputControlLayout__Collection__PrecompiledLayout>>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Collections::Generic::KeyValuePair_2<::UnityEngine::InputSystem::Utilities::InternedString,::GlobalNamespace::__InputControlLayout__Collection__PrecompiledLayout>::__set_key(::UnityEngine::InputSystem::Utilities::InternedString  value)  {
::cordl_internals::setInstanceField<::UnityEngine::InputSystem::Utilities::InternedString, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::InputSystem::Utilities::InternedString>(value));
}
constexpr ::UnityEngine::InputSystem::Utilities::InternedString& System::Collections::Generic::KeyValuePair_2<::UnityEngine::InputSystem::Utilities::InternedString,::GlobalNamespace::__InputControlLayout__Collection__PrecompiledLayout>::__get_key()  {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::Utilities::InternedString, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::UnityEngine::InputSystem::Utilities::InternedString const& System::Collections::Generic::KeyValuePair_2<::UnityEngine::InputSystem::Utilities::InternedString,::GlobalNamespace::__InputControlLayout__Collection__PrecompiledLayout>::__get_key() const {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::Utilities::InternedString, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::Collections::Generic::KeyValuePair_2<::UnityEngine::InputSystem::Utilities::InternedString,::GlobalNamespace::__InputControlLayout__Collection__PrecompiledLayout>::__set_value(::GlobalNamespace::__InputControlLayout__Collection__PrecompiledLayout  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__InputControlLayout__Collection__PrecompiledLayout, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::GlobalNamespace::__InputControlLayout__Collection__PrecompiledLayout>(value));
}
constexpr ::GlobalNamespace::__InputControlLayout__Collection__PrecompiledLayout& System::Collections::Generic::KeyValuePair_2<::UnityEngine::InputSystem::Utilities::InternedString,::GlobalNamespace::__InputControlLayout__Collection__PrecompiledLayout>::__get_value()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__InputControlLayout__Collection__PrecompiledLayout, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::GlobalNamespace::__InputControlLayout__Collection__PrecompiledLayout const& System::Collections::Generic::KeyValuePair_2<::UnityEngine::InputSystem::Utilities::InternedString,::GlobalNamespace::__InputControlLayout__Collection__PrecompiledLayout>::__get_value() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__InputControlLayout__Collection__PrecompiledLayout, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline void System::Collections::Generic::KeyValuePair_2<::UnityEngine::InputSystem::Utilities::InternedString,::GlobalNamespace::__InputControlLayout__Collection__PrecompiledLayout>::_ctor(::UnityEngine::InputSystem::Utilities::InternedString  key, ::GlobalNamespace::__InputControlLayout__Collection__PrecompiledLayout  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::InputSystem::Utilities::InternedString,::GlobalNamespace::__InputControlLayout__Collection__PrecompiledLayout>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::InternedString>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__InputControlLayout__Collection__PrecompiledLayout>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
inline ::UnityEngine::InputSystem::Utilities::InternedString System::Collections::Generic::KeyValuePair_2<::UnityEngine::InputSystem::Utilities::InternedString,::GlobalNamespace::__InputControlLayout__Collection__PrecompiledLayout>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::InputSystem::Utilities::InternedString,::GlobalNamespace::__InputControlLayout__Collection__PrecompiledLayout>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::InternedString, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::__InputControlLayout__Collection__PrecompiledLayout System::Collections::Generic::KeyValuePair_2<::UnityEngine::InputSystem::Utilities::InternedString,::GlobalNamespace::__InputControlLayout__Collection__PrecompiledLayout>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::InputSystem::Utilities::InternedString,::GlobalNamespace::__InputControlLayout__Collection__PrecompiledLayout>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__InputControlLayout__Collection__PrecompiledLayout, false>(*this, ___internal_method);
}
inline ::StringW System::Collections::Generic::KeyValuePair_2<::UnityEngine::InputSystem::Utilities::InternedString,::GlobalNamespace::__InputControlLayout__Collection__PrecompiledLayout>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::InputSystem::Utilities::InternedString,::GlobalNamespace::__InputControlLayout__Collection__PrecompiledLayout>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline void System::Collections::Generic::KeyValuePair_2<::UnityEngine::InputSystem::Utilities::InternedString,::GlobalNamespace::__InputControlLayout__Collection__PrecompiledLayout>::Deconstruct(ByRef<::UnityEngine::InputSystem::Utilities::InternedString>  key, ByRef<::GlobalNamespace::__InputControlLayout__Collection__PrecompiledLayout>  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::InputSystem::Utilities::InternedString,::GlobalNamespace::__InputControlLayout__Collection__PrecompiledLayout>>::get(),
                            "Deconstruct",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::Utilities::InternedString>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::__InputControlLayout__Collection__PrecompiledLayout>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
// Ctor Parameters [CppParam { name: "key", ty: "::UnityEngine::InputSystem::Utilities::InternedString", modifiers: "", def_value: Some("{}") }, CppParam { name: "value", ty: "::GlobalNamespace::__InputControlLayout__Collection__PrecompiledLayout", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Collections::Generic::KeyValuePair_2<::UnityEngine::InputSystem::Utilities::InternedString,::GlobalNamespace::__InputControlLayout__Collection__PrecompiledLayout>::KeyValuePair_2(::UnityEngine::InputSystem::Utilities::InternedString  key, ::GlobalNamespace::__InputControlLayout__Collection__PrecompiledLayout  value) noexcept : ::bs_hook::ValueTypeWrapper<0x20>() {this->key = key;
this->value = value;
}
//  Writing Method size for method: ::System::Collections::Generic::KeyValuePair_2<::UnityEngine::InputSystem::Utilities::InternedString,::UnityEngine::InputSystem::Utilities::InternedString>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Generic::KeyValuePair_2<::UnityEngine::InputSystem::Utilities::InternedString,::UnityEngine::InputSystem::Utilities::InternedString>::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::Utilities::InternedString)>(&::System::Collections::Generic::KeyValuePair_2<::UnityEngine::InputSystem::Utilities::InternedString,::UnityEngine::InputSystem::Utilities::InternedString>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::InputSystem::Utilities::InternedString,::UnityEngine::InputSystem::Utilities::InternedString>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::InternedString>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::InternedString>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::KeyValuePair_2<::UnityEngine::InputSystem::Utilities::InternedString,::UnityEngine::InputSystem::Utilities::InternedString>.get_Key
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Utilities::InternedString (::System::Collections::Generic::KeyValuePair_2<::UnityEngine::InputSystem::Utilities::InternedString,::UnityEngine::InputSystem::Utilities::InternedString>::*)()>(&::System::Collections::Generic::KeyValuePair_2<::UnityEngine::InputSystem::Utilities::InternedString,::UnityEngine::InputSystem::Utilities::InternedString>::get_Key)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::InputSystem::Utilities::InternedString,::UnityEngine::InputSystem::Utilities::InternedString>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::KeyValuePair_2<::UnityEngine::InputSystem::Utilities::InternedString,::UnityEngine::InputSystem::Utilities::InternedString>.get_Value
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Utilities::InternedString (::System::Collections::Generic::KeyValuePair_2<::UnityEngine::InputSystem::Utilities::InternedString,::UnityEngine::InputSystem::Utilities::InternedString>::*)()>(&::System::Collections::Generic::KeyValuePair_2<::UnityEngine::InputSystem::Utilities::InternedString,::UnityEngine::InputSystem::Utilities::InternedString>::get_Value)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::InputSystem::Utilities::InternedString,::UnityEngine::InputSystem::Utilities::InternedString>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::KeyValuePair_2<::UnityEngine::InputSystem::Utilities::InternedString,::UnityEngine::InputSystem::Utilities::InternedString>.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Collections::Generic::KeyValuePair_2<::UnityEngine::InputSystem::Utilities::InternedString,::UnityEngine::InputSystem::Utilities::InternedString>::*)()>(&::System::Collections::Generic::KeyValuePair_2<::UnityEngine::InputSystem::Utilities::InternedString,::UnityEngine::InputSystem::Utilities::InternedString>::ToString)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::InputSystem::Utilities::InternedString,::UnityEngine::InputSystem::Utilities::InternedString>>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::InputSystem::Utilities::InternedString,::UnityEngine::InputSystem::Utilities::InternedString>>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::KeyValuePair_2<::UnityEngine::InputSystem::Utilities::InternedString,::UnityEngine::InputSystem::Utilities::InternedString>.Deconstruct
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Generic::KeyValuePair_2<::UnityEngine::InputSystem::Utilities::InternedString,::UnityEngine::InputSystem::Utilities::InternedString>::*)(ByRef<::UnityEngine::InputSystem::Utilities::InternedString>, ByRef<::UnityEngine::InputSystem::Utilities::InternedString>)>(&::System::Collections::Generic::KeyValuePair_2<::UnityEngine::InputSystem::Utilities::InternedString,::UnityEngine::InputSystem::Utilities::InternedString>::Deconstruct)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::InputSystem::Utilities::InternedString,::UnityEngine::InputSystem::Utilities::InternedString>>::get(),
                            "Deconstruct",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::Utilities::InternedString>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::Utilities::InternedString>>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Collections::Generic::KeyValuePair_2<::UnityEngine::InputSystem::Utilities::InternedString,::UnityEngine::InputSystem::Utilities::InternedString>::__set_key(::UnityEngine::InputSystem::Utilities::InternedString  value)  {
::cordl_internals::setInstanceField<::UnityEngine::InputSystem::Utilities::InternedString, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::InputSystem::Utilities::InternedString>(value));
}
constexpr ::UnityEngine::InputSystem::Utilities::InternedString& System::Collections::Generic::KeyValuePair_2<::UnityEngine::InputSystem::Utilities::InternedString,::UnityEngine::InputSystem::Utilities::InternedString>::__get_key()  {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::Utilities::InternedString, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::UnityEngine::InputSystem::Utilities::InternedString const& System::Collections::Generic::KeyValuePair_2<::UnityEngine::InputSystem::Utilities::InternedString,::UnityEngine::InputSystem::Utilities::InternedString>::__get_key() const {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::Utilities::InternedString, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::Collections::Generic::KeyValuePair_2<::UnityEngine::InputSystem::Utilities::InternedString,::UnityEngine::InputSystem::Utilities::InternedString>::__set_value(::UnityEngine::InputSystem::Utilities::InternedString  value)  {
::cordl_internals::setInstanceField<::UnityEngine::InputSystem::Utilities::InternedString, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::InputSystem::Utilities::InternedString>(value));
}
constexpr ::UnityEngine::InputSystem::Utilities::InternedString& System::Collections::Generic::KeyValuePair_2<::UnityEngine::InputSystem::Utilities::InternedString,::UnityEngine::InputSystem::Utilities::InternedString>::__get_value()  {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::Utilities::InternedString, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::UnityEngine::InputSystem::Utilities::InternedString const& System::Collections::Generic::KeyValuePair_2<::UnityEngine::InputSystem::Utilities::InternedString,::UnityEngine::InputSystem::Utilities::InternedString>::__get_value() const {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::Utilities::InternedString, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline void System::Collections::Generic::KeyValuePair_2<::UnityEngine::InputSystem::Utilities::InternedString,::UnityEngine::InputSystem::Utilities::InternedString>::_ctor(::UnityEngine::InputSystem::Utilities::InternedString  key, ::UnityEngine::InputSystem::Utilities::InternedString  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::InputSystem::Utilities::InternedString,::UnityEngine::InputSystem::Utilities::InternedString>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::InternedString>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::InternedString>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
inline ::UnityEngine::InputSystem::Utilities::InternedString System::Collections::Generic::KeyValuePair_2<::UnityEngine::InputSystem::Utilities::InternedString,::UnityEngine::InputSystem::Utilities::InternedString>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::InputSystem::Utilities::InternedString,::UnityEngine::InputSystem::Utilities::InternedString>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::InternedString, false>(*this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Utilities::InternedString System::Collections::Generic::KeyValuePair_2<::UnityEngine::InputSystem::Utilities::InternedString,::UnityEngine::InputSystem::Utilities::InternedString>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::InputSystem::Utilities::InternedString,::UnityEngine::InputSystem::Utilities::InternedString>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::InternedString, false>(*this, ___internal_method);
}
inline ::StringW System::Collections::Generic::KeyValuePair_2<::UnityEngine::InputSystem::Utilities::InternedString,::UnityEngine::InputSystem::Utilities::InternedString>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::InputSystem::Utilities::InternedString,::UnityEngine::InputSystem::Utilities::InternedString>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline void System::Collections::Generic::KeyValuePair_2<::UnityEngine::InputSystem::Utilities::InternedString,::UnityEngine::InputSystem::Utilities::InternedString>::Deconstruct(ByRef<::UnityEngine::InputSystem::Utilities::InternedString>  key, ByRef<::UnityEngine::InputSystem::Utilities::InternedString>  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::InputSystem::Utilities::InternedString,::UnityEngine::InputSystem::Utilities::InternedString>>::get(),
                            "Deconstruct",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::Utilities::InternedString>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::Utilities::InternedString>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
// Ctor Parameters [CppParam { name: "key", ty: "::UnityEngine::InputSystem::Utilities::InternedString", modifiers: "", def_value: Some("{}") }, CppParam { name: "value", ty: "::UnityEngine::InputSystem::Utilities::InternedString", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Collections::Generic::KeyValuePair_2<::UnityEngine::InputSystem::Utilities::InternedString,::UnityEngine::InputSystem::Utilities::InternedString>::KeyValuePair_2(::UnityEngine::InputSystem::Utilities::InternedString  key, ::UnityEngine::InputSystem::Utilities::InternedString  value) noexcept : ::bs_hook::ValueTypeWrapper<0x20>() {this->key = key;
this->value = value;
}
//  Writing Method size for method: ::System::Collections::Generic::KeyValuePair_2<int64_t,::UnityEngine::UIElements::ComputedStyle>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Generic::KeyValuePair_2<int64_t,::UnityEngine::UIElements::ComputedStyle>::*)(int64_t, ::UnityEngine::UIElements::ComputedStyle)>(&::System::Collections::Generic::KeyValuePair_2<int64_t,::UnityEngine::UIElements::ComputedStyle>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<int64_t,::UnityEngine::UIElements::ComputedStyle>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::ComputedStyle>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::KeyValuePair_2<int64_t,::UnityEngine::UIElements::ComputedStyle>.get_Key
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::System::Collections::Generic::KeyValuePair_2<int64_t,::UnityEngine::UIElements::ComputedStyle>::*)()>(&::System::Collections::Generic::KeyValuePair_2<int64_t,::UnityEngine::UIElements::ComputedStyle>::get_Key)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<int64_t,::UnityEngine::UIElements::ComputedStyle>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::KeyValuePair_2<int64_t,::UnityEngine::UIElements::ComputedStyle>.get_Value
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::ComputedStyle (::System::Collections::Generic::KeyValuePair_2<int64_t,::UnityEngine::UIElements::ComputedStyle>::*)()>(&::System::Collections::Generic::KeyValuePair_2<int64_t,::UnityEngine::UIElements::ComputedStyle>::get_Value)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<int64_t,::UnityEngine::UIElements::ComputedStyle>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::KeyValuePair_2<int64_t,::UnityEngine::UIElements::ComputedStyle>.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Collections::Generic::KeyValuePair_2<int64_t,::UnityEngine::UIElements::ComputedStyle>::*)()>(&::System::Collections::Generic::KeyValuePair_2<int64_t,::UnityEngine::UIElements::ComputedStyle>::ToString)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<int64_t,::UnityEngine::UIElements::ComputedStyle>>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<int64_t,::UnityEngine::UIElements::ComputedStyle>>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::KeyValuePair_2<int64_t,::UnityEngine::UIElements::ComputedStyle>.Deconstruct
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Generic::KeyValuePair_2<int64_t,::UnityEngine::UIElements::ComputedStyle>::*)(ByRef<int64_t>, ByRef<::UnityEngine::UIElements::ComputedStyle>)>(&::System::Collections::Generic::KeyValuePair_2<int64_t,::UnityEngine::UIElements::ComputedStyle>::Deconstruct)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<int64_t,::UnityEngine::UIElements::ComputedStyle>>::get(),
                            "Deconstruct",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int64_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::UIElements::ComputedStyle>>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Collections::Generic::KeyValuePair_2<int64_t,::UnityEngine::UIElements::ComputedStyle>::__set_key(int64_t  value)  {
::cordl_internals::setInstanceField<int64_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int64_t>(value));
}
constexpr int64_t& System::Collections::Generic::KeyValuePair_2<int64_t,::UnityEngine::UIElements::ComputedStyle>::__get_key()  {
return ::cordl_internals::getInstanceField<int64_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int64_t const& System::Collections::Generic::KeyValuePair_2<int64_t,::UnityEngine::UIElements::ComputedStyle>::__get_key() const {
return ::cordl_internals::getInstanceField<int64_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::Collections::Generic::KeyValuePair_2<int64_t,::UnityEngine::UIElements::ComputedStyle>::__set_value(::UnityEngine::UIElements::ComputedStyle  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::ComputedStyle, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::UIElements::ComputedStyle>(value));
}
constexpr ::UnityEngine::UIElements::ComputedStyle& System::Collections::Generic::KeyValuePair_2<int64_t,::UnityEngine::UIElements::ComputedStyle>::__get_value()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::ComputedStyle, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::UnityEngine::UIElements::ComputedStyle const& System::Collections::Generic::KeyValuePair_2<int64_t,::UnityEngine::UIElements::ComputedStyle>::__get_value() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::ComputedStyle, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline void System::Collections::Generic::KeyValuePair_2<int64_t,::UnityEngine::UIElements::ComputedStyle>::_ctor(int64_t  key, ::UnityEngine::UIElements::ComputedStyle  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<int64_t,::UnityEngine::UIElements::ComputedStyle>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::ComputedStyle>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
inline int64_t System::Collections::Generic::KeyValuePair_2<int64_t,::UnityEngine::UIElements::ComputedStyle>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<int64_t,::UnityEngine::UIElements::ComputedStyle>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(*this, ___internal_method);
}
inline ::UnityEngine::UIElements::ComputedStyle System::Collections::Generic::KeyValuePair_2<int64_t,::UnityEngine::UIElements::ComputedStyle>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<int64_t,::UnityEngine::UIElements::ComputedStyle>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::ComputedStyle, false>(*this, ___internal_method);
}
inline ::StringW System::Collections::Generic::KeyValuePair_2<int64_t,::UnityEngine::UIElements::ComputedStyle>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<int64_t,::UnityEngine::UIElements::ComputedStyle>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline void System::Collections::Generic::KeyValuePair_2<int64_t,::UnityEngine::UIElements::ComputedStyle>::Deconstruct(ByRef<int64_t>  key, ByRef<::UnityEngine::UIElements::ComputedStyle>  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<int64_t,::UnityEngine::UIElements::ComputedStyle>>::get(),
                            "Deconstruct",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int64_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::UIElements::ComputedStyle>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
// Ctor Parameters [CppParam { name: "key", ty: "int64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "value", ty: "::UnityEngine::UIElements::ComputedStyle", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Collections::Generic::KeyValuePair_2<int64_t,::UnityEngine::UIElements::ComputedStyle>::KeyValuePair_2(int64_t  key, ::UnityEngine::UIElements::ComputedStyle  value) noexcept : ::bs_hook::ValueTypeWrapper<0x60>() {this->key = key;
this->value = value;
}
//  Writing Method size for method: ::System::Collections::Generic::KeyValuePair_2<int32_t,::UnityEngine::TextCore::Text::__TextResourceManager__FontAssetRef>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Generic::KeyValuePair_2<int32_t,::UnityEngine::TextCore::Text::__TextResourceManager__FontAssetRef>::*)(int32_t, ::UnityEngine::TextCore::Text::__TextResourceManager__FontAssetRef)>(&::System::Collections::Generic::KeyValuePair_2<int32_t,::UnityEngine::TextCore::Text::__TextResourceManager__FontAssetRef>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<int32_t,::UnityEngine::TextCore::Text::__TextResourceManager__FontAssetRef>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::__TextResourceManager__FontAssetRef>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::KeyValuePair_2<int32_t,::UnityEngine::TextCore::Text::__TextResourceManager__FontAssetRef>.get_Key
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Collections::Generic::KeyValuePair_2<int32_t,::UnityEngine::TextCore::Text::__TextResourceManager__FontAssetRef>::*)()>(&::System::Collections::Generic::KeyValuePair_2<int32_t,::UnityEngine::TextCore::Text::__TextResourceManager__FontAssetRef>::get_Key)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<int32_t,::UnityEngine::TextCore::Text::__TextResourceManager__FontAssetRef>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::KeyValuePair_2<int32_t,::UnityEngine::TextCore::Text::__TextResourceManager__FontAssetRef>.get_Value
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::TextCore::Text::__TextResourceManager__FontAssetRef (::System::Collections::Generic::KeyValuePair_2<int32_t,::UnityEngine::TextCore::Text::__TextResourceManager__FontAssetRef>::*)()>(&::System::Collections::Generic::KeyValuePair_2<int32_t,::UnityEngine::TextCore::Text::__TextResourceManager__FontAssetRef>::get_Value)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<int32_t,::UnityEngine::TextCore::Text::__TextResourceManager__FontAssetRef>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::KeyValuePair_2<int32_t,::UnityEngine::TextCore::Text::__TextResourceManager__FontAssetRef>.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Collections::Generic::KeyValuePair_2<int32_t,::UnityEngine::TextCore::Text::__TextResourceManager__FontAssetRef>::*)()>(&::System::Collections::Generic::KeyValuePair_2<int32_t,::UnityEngine::TextCore::Text::__TextResourceManager__FontAssetRef>::ToString)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<int32_t,::UnityEngine::TextCore::Text::__TextResourceManager__FontAssetRef>>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<int32_t,::UnityEngine::TextCore::Text::__TextResourceManager__FontAssetRef>>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::KeyValuePair_2<int32_t,::UnityEngine::TextCore::Text::__TextResourceManager__FontAssetRef>.Deconstruct
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Generic::KeyValuePair_2<int32_t,::UnityEngine::TextCore::Text::__TextResourceManager__FontAssetRef>::*)(ByRef<int32_t>, ByRef<::UnityEngine::TextCore::Text::__TextResourceManager__FontAssetRef>)>(&::System::Collections::Generic::KeyValuePair_2<int32_t,::UnityEngine::TextCore::Text::__TextResourceManager__FontAssetRef>::Deconstruct)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<int32_t,::UnityEngine::TextCore::Text::__TextResourceManager__FontAssetRef>>::get(),
                            "Deconstruct",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::TextCore::Text::__TextResourceManager__FontAssetRef>>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Collections::Generic::KeyValuePair_2<int32_t,::UnityEngine::TextCore::Text::__TextResourceManager__FontAssetRef>::__set_key(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& System::Collections::Generic::KeyValuePair_2<int32_t,::UnityEngine::TextCore::Text::__TextResourceManager__FontAssetRef>::__get_key()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& System::Collections::Generic::KeyValuePair_2<int32_t,::UnityEngine::TextCore::Text::__TextResourceManager__FontAssetRef>::__get_key() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::Collections::Generic::KeyValuePair_2<int32_t,::UnityEngine::TextCore::Text::__TextResourceManager__FontAssetRef>::__set_value(::UnityEngine::TextCore::Text::__TextResourceManager__FontAssetRef  value)  {
::cordl_internals::setInstanceField<::UnityEngine::TextCore::Text::__TextResourceManager__FontAssetRef, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::TextCore::Text::__TextResourceManager__FontAssetRef>(value));
}
constexpr ::UnityEngine::TextCore::Text::__TextResourceManager__FontAssetRef& System::Collections::Generic::KeyValuePair_2<int32_t,::UnityEngine::TextCore::Text::__TextResourceManager__FontAssetRef>::__get_value()  {
return ::cordl_internals::getInstanceField<::UnityEngine::TextCore::Text::__TextResourceManager__FontAssetRef, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::UnityEngine::TextCore::Text::__TextResourceManager__FontAssetRef const& System::Collections::Generic::KeyValuePair_2<int32_t,::UnityEngine::TextCore::Text::__TextResourceManager__FontAssetRef>::__get_value() const {
return ::cordl_internals::getInstanceField<::UnityEngine::TextCore::Text::__TextResourceManager__FontAssetRef, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline void System::Collections::Generic::KeyValuePair_2<int32_t,::UnityEngine::TextCore::Text::__TextResourceManager__FontAssetRef>::_ctor(int32_t  key, ::UnityEngine::TextCore::Text::__TextResourceManager__FontAssetRef  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<int32_t,::UnityEngine::TextCore::Text::__TextResourceManager__FontAssetRef>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::__TextResourceManager__FontAssetRef>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
inline int32_t System::Collections::Generic::KeyValuePair_2<int32_t,::UnityEngine::TextCore::Text::__TextResourceManager__FontAssetRef>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<int32_t,::UnityEngine::TextCore::Text::__TextResourceManager__FontAssetRef>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline ::UnityEngine::TextCore::Text::__TextResourceManager__FontAssetRef System::Collections::Generic::KeyValuePair_2<int32_t,::UnityEngine::TextCore::Text::__TextResourceManager__FontAssetRef>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<int32_t,::UnityEngine::TextCore::Text::__TextResourceManager__FontAssetRef>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::TextCore::Text::__TextResourceManager__FontAssetRef, false>(*this, ___internal_method);
}
inline ::StringW System::Collections::Generic::KeyValuePair_2<int32_t,::UnityEngine::TextCore::Text::__TextResourceManager__FontAssetRef>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<int32_t,::UnityEngine::TextCore::Text::__TextResourceManager__FontAssetRef>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline void System::Collections::Generic::KeyValuePair_2<int32_t,::UnityEngine::TextCore::Text::__TextResourceManager__FontAssetRef>::Deconstruct(ByRef<int32_t>  key, ByRef<::UnityEngine::TextCore::Text::__TextResourceManager__FontAssetRef>  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<int32_t,::UnityEngine::TextCore::Text::__TextResourceManager__FontAssetRef>>::get(),
                            "Deconstruct",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::TextCore::Text::__TextResourceManager__FontAssetRef>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
// Ctor Parameters [CppParam { name: "key", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "value", ty: "::UnityEngine::TextCore::Text::__TextResourceManager__FontAssetRef", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Collections::Generic::KeyValuePair_2<int32_t,::UnityEngine::TextCore::Text::__TextResourceManager__FontAssetRef>::KeyValuePair_2(int32_t  key, ::UnityEngine::TextCore::Text::__TextResourceManager__FontAssetRef  value) noexcept : ::bs_hook::ValueTypeWrapper<0x28>() {this->key = key;
this->value = value;
}
//  Writing Method size for method: ::System::Collections::Generic::KeyValuePair_2<int32_t,int64_t>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Generic::KeyValuePair_2<int32_t,int64_t>::*)(int32_t, int64_t)>(&::System::Collections::Generic::KeyValuePair_2<int32_t,int64_t>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<int32_t,int64_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::KeyValuePair_2<int32_t,int64_t>.get_Key
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Collections::Generic::KeyValuePair_2<int32_t,int64_t>::*)()>(&::System::Collections::Generic::KeyValuePair_2<int32_t,int64_t>::get_Key)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<int32_t,int64_t>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::KeyValuePair_2<int32_t,int64_t>.get_Value
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::System::Collections::Generic::KeyValuePair_2<int32_t,int64_t>::*)()>(&::System::Collections::Generic::KeyValuePair_2<int32_t,int64_t>::get_Value)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<int32_t,int64_t>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::KeyValuePair_2<int32_t,int64_t>.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Collections::Generic::KeyValuePair_2<int32_t,int64_t>::*)()>(&::System::Collections::Generic::KeyValuePair_2<int32_t,int64_t>::ToString)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<int32_t,int64_t>>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<int32_t,int64_t>>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::KeyValuePair_2<int32_t,int64_t>.Deconstruct
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Generic::KeyValuePair_2<int32_t,int64_t>::*)(ByRef<int32_t>, ByRef<int64_t>)>(&::System::Collections::Generic::KeyValuePair_2<int32_t,int64_t>::Deconstruct)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<int32_t,int64_t>>::get(),
                            "Deconstruct",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int64_t>>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Collections::Generic::KeyValuePair_2<int32_t,int64_t>::__set_key(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& System::Collections::Generic::KeyValuePair_2<int32_t,int64_t>::__get_key()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& System::Collections::Generic::KeyValuePair_2<int32_t,int64_t>::__get_key() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::Collections::Generic::KeyValuePair_2<int32_t,int64_t>::__set_value(int64_t  value)  {
::cordl_internals::setInstanceField<int64_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int64_t>(value));
}
constexpr int64_t& System::Collections::Generic::KeyValuePair_2<int32_t,int64_t>::__get_value()  {
return ::cordl_internals::getInstanceField<int64_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int64_t const& System::Collections::Generic::KeyValuePair_2<int32_t,int64_t>::__get_value() const {
return ::cordl_internals::getInstanceField<int64_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline void System::Collections::Generic::KeyValuePair_2<int32_t,int64_t>::_ctor(int32_t  key, int64_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<int32_t,int64_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
inline int32_t System::Collections::Generic::KeyValuePair_2<int32_t,int64_t>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<int32_t,int64_t>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline int64_t System::Collections::Generic::KeyValuePair_2<int32_t,int64_t>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<int32_t,int64_t>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(*this, ___internal_method);
}
inline ::StringW System::Collections::Generic::KeyValuePair_2<int32_t,int64_t>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<int32_t,int64_t>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline void System::Collections::Generic::KeyValuePair_2<int32_t,int64_t>::Deconstruct(ByRef<int32_t>  key, ByRef<int64_t>  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<int32_t,int64_t>>::get(),
                            "Deconstruct",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int64_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
// Ctor Parameters [CppParam { name: "key", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "value", ty: "int64_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Collections::Generic::KeyValuePair_2<int32_t,int64_t>::KeyValuePair_2(int32_t  key, int64_t  value) noexcept : ::bs_hook::ValueTypeWrapper<0x10>() {this->key = key;
this->value = value;
}
//  Writing Method size for method: ::System::Collections::Generic::KeyValuePair_2<int32_t,::IgnoranceCore::IgnoranceClientStats>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Generic::KeyValuePair_2<int32_t,::IgnoranceCore::IgnoranceClientStats>::*)(int32_t, ::IgnoranceCore::IgnoranceClientStats)>(&::System::Collections::Generic::KeyValuePair_2<int32_t,::IgnoranceCore::IgnoranceClientStats>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<int32_t,::IgnoranceCore::IgnoranceClientStats>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::IgnoranceCore::IgnoranceClientStats>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::KeyValuePair_2<int32_t,::IgnoranceCore::IgnoranceClientStats>.get_Key
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Collections::Generic::KeyValuePair_2<int32_t,::IgnoranceCore::IgnoranceClientStats>::*)()>(&::System::Collections::Generic::KeyValuePair_2<int32_t,::IgnoranceCore::IgnoranceClientStats>::get_Key)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<int32_t,::IgnoranceCore::IgnoranceClientStats>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::KeyValuePair_2<int32_t,::IgnoranceCore::IgnoranceClientStats>.get_Value
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::IgnoranceCore::IgnoranceClientStats (::System::Collections::Generic::KeyValuePair_2<int32_t,::IgnoranceCore::IgnoranceClientStats>::*)()>(&::System::Collections::Generic::KeyValuePair_2<int32_t,::IgnoranceCore::IgnoranceClientStats>::get_Value)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<int32_t,::IgnoranceCore::IgnoranceClientStats>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::KeyValuePair_2<int32_t,::IgnoranceCore::IgnoranceClientStats>.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Collections::Generic::KeyValuePair_2<int32_t,::IgnoranceCore::IgnoranceClientStats>::*)()>(&::System::Collections::Generic::KeyValuePair_2<int32_t,::IgnoranceCore::IgnoranceClientStats>::ToString)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<int32_t,::IgnoranceCore::IgnoranceClientStats>>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<int32_t,::IgnoranceCore::IgnoranceClientStats>>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::KeyValuePair_2<int32_t,::IgnoranceCore::IgnoranceClientStats>.Deconstruct
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Generic::KeyValuePair_2<int32_t,::IgnoranceCore::IgnoranceClientStats>::*)(ByRef<int32_t>, ByRef<::IgnoranceCore::IgnoranceClientStats>)>(&::System::Collections::Generic::KeyValuePair_2<int32_t,::IgnoranceCore::IgnoranceClientStats>::Deconstruct)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<int32_t,::IgnoranceCore::IgnoranceClientStats>>::get(),
                            "Deconstruct",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::IgnoranceCore::IgnoranceClientStats>>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Collections::Generic::KeyValuePair_2<int32_t,::IgnoranceCore::IgnoranceClientStats>::__set_key(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& System::Collections::Generic::KeyValuePair_2<int32_t,::IgnoranceCore::IgnoranceClientStats>::__get_key()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& System::Collections::Generic::KeyValuePair_2<int32_t,::IgnoranceCore::IgnoranceClientStats>::__get_key() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::Collections::Generic::KeyValuePair_2<int32_t,::IgnoranceCore::IgnoranceClientStats>::__set_value(::IgnoranceCore::IgnoranceClientStats  value)  {
::cordl_internals::setInstanceField<::IgnoranceCore::IgnoranceClientStats, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::IgnoranceCore::IgnoranceClientStats>(value));
}
constexpr ::IgnoranceCore::IgnoranceClientStats& System::Collections::Generic::KeyValuePair_2<int32_t,::IgnoranceCore::IgnoranceClientStats>::__get_value()  {
return ::cordl_internals::getInstanceField<::IgnoranceCore::IgnoranceClientStats, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::IgnoranceCore::IgnoranceClientStats const& System::Collections::Generic::KeyValuePair_2<int32_t,::IgnoranceCore::IgnoranceClientStats>::__get_value() const {
return ::cordl_internals::getInstanceField<::IgnoranceCore::IgnoranceClientStats, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline void System::Collections::Generic::KeyValuePair_2<int32_t,::IgnoranceCore::IgnoranceClientStats>::_ctor(int32_t  key, ::IgnoranceCore::IgnoranceClientStats  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<int32_t,::IgnoranceCore::IgnoranceClientStats>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::IgnoranceCore::IgnoranceClientStats>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
inline int32_t System::Collections::Generic::KeyValuePair_2<int32_t,::IgnoranceCore::IgnoranceClientStats>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<int32_t,::IgnoranceCore::IgnoranceClientStats>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline ::IgnoranceCore::IgnoranceClientStats System::Collections::Generic::KeyValuePair_2<int32_t,::IgnoranceCore::IgnoranceClientStats>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<int32_t,::IgnoranceCore::IgnoranceClientStats>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::IgnoranceCore::IgnoranceClientStats, false>(*this, ___internal_method);
}
inline ::StringW System::Collections::Generic::KeyValuePair_2<int32_t,::IgnoranceCore::IgnoranceClientStats>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<int32_t,::IgnoranceCore::IgnoranceClientStats>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline void System::Collections::Generic::KeyValuePair_2<int32_t,::IgnoranceCore::IgnoranceClientStats>::Deconstruct(ByRef<int32_t>  key, ByRef<::IgnoranceCore::IgnoranceClientStats>  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<int32_t,::IgnoranceCore::IgnoranceClientStats>>::get(),
                            "Deconstruct",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::IgnoranceCore::IgnoranceClientStats>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
// Ctor Parameters [CppParam { name: "key", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "value", ty: "::IgnoranceCore::IgnoranceClientStats", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Collections::Generic::KeyValuePair_2<int32_t,::IgnoranceCore::IgnoranceClientStats>::KeyValuePair_2(int32_t  key, ::IgnoranceCore::IgnoranceClientStats  value) noexcept : ::bs_hook::ValueTypeWrapper<0x38>() {this->key = key;
this->value = value;
}
//  Writing Method size for method: ::System::Collections::Generic::KeyValuePair_2<int32_t,::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Generic::KeyValuePair_2<int32_t,::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>::*)(int32_t, ::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent)>(&::System::Collections::Generic::KeyValuePair_2<int32_t,::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<int32_t,::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::KeyValuePair_2<int32_t,::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>.get_Key
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Collections::Generic::KeyValuePair_2<int32_t,::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>::*)()>(&::System::Collections::Generic::KeyValuePair_2<int32_t,::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>::get_Key)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<int32_t,::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::KeyValuePair_2<int32_t,::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>.get_Value
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent (::System::Collections::Generic::KeyValuePair_2<int32_t,::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>::*)()>(&::System::Collections::Generic::KeyValuePair_2<int32_t,::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>::get_Value)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<int32_t,::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::KeyValuePair_2<int32_t,::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Collections::Generic::KeyValuePair_2<int32_t,::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>::*)()>(&::System::Collections::Generic::KeyValuePair_2<int32_t,::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>::ToString)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<int32_t,::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<int32_t,::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::KeyValuePair_2<int32_t,::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>.Deconstruct
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Generic::KeyValuePair_2<int32_t,::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>::*)(ByRef<int32_t>, ByRef<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>)>(&::System::Collections::Generic::KeyValuePair_2<int32_t,::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>::Deconstruct)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<int32_t,::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>>::get(),
                            "Deconstruct",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Collections::Generic::KeyValuePair_2<int32_t,::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>::__set_key(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& System::Collections::Generic::KeyValuePair_2<int32_t,::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>::__get_key()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& System::Collections::Generic::KeyValuePair_2<int32_t,::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>::__get_key() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::Collections::Generic::KeyValuePair_2<int32_t,::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>::__set_value(::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent  value)  {
::cordl_internals::setInstanceField<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>(value));
}
constexpr ::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent& System::Collections::Generic::KeyValuePair_2<int32_t,::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>::__get_value()  {
return ::cordl_internals::getInstanceField<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent const& System::Collections::Generic::KeyValuePair_2<int32_t,::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>::__get_value() const {
return ::cordl_internals::getInstanceField<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline void System::Collections::Generic::KeyValuePair_2<int32_t,::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>::_ctor(int32_t  key, ::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<int32_t,::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
inline int32_t System::Collections::Generic::KeyValuePair_2<int32_t,::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<int32_t,::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline ::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent System::Collections::Generic::KeyValuePair_2<int32_t,::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<int32_t,::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent, false>(*this, ___internal_method);
}
inline ::StringW System::Collections::Generic::KeyValuePair_2<int32_t,::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<int32_t,::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline void System::Collections::Generic::KeyValuePair_2<int32_t,::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>::Deconstruct(ByRef<int32_t>  key, ByRef<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<int32_t,::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>>::get(),
                            "Deconstruct",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
// Ctor Parameters [CppParam { name: "key", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "value", ty: "::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Collections::Generic::KeyValuePair_2<int32_t,::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>::KeyValuePair_2(int32_t  key, ::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent  value) noexcept : ::bs_hook::ValueTypeWrapper<0x38>() {this->key = key;
this->value = value;
}
//  Writing Method size for method: ::System::Collections::Generic::KeyValuePair_2<int32_t,char16_t>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Generic::KeyValuePair_2<int32_t,char16_t>::*)(int32_t, char16_t)>(&::System::Collections::Generic::KeyValuePair_2<int32_t,char16_t>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<int32_t,char16_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::KeyValuePair_2<int32_t,char16_t>.get_Key
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Collections::Generic::KeyValuePair_2<int32_t,char16_t>::*)()>(&::System::Collections::Generic::KeyValuePair_2<int32_t,char16_t>::get_Key)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<int32_t,char16_t>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::KeyValuePair_2<int32_t,char16_t>.get_Value
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<char16_t (::System::Collections::Generic::KeyValuePair_2<int32_t,char16_t>::*)()>(&::System::Collections::Generic::KeyValuePair_2<int32_t,char16_t>::get_Value)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<int32_t,char16_t>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::KeyValuePair_2<int32_t,char16_t>.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Collections::Generic::KeyValuePair_2<int32_t,char16_t>::*)()>(&::System::Collections::Generic::KeyValuePair_2<int32_t,char16_t>::ToString)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<int32_t,char16_t>>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<int32_t,char16_t>>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::KeyValuePair_2<int32_t,char16_t>.Deconstruct
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Generic::KeyValuePair_2<int32_t,char16_t>::*)(ByRef<int32_t>, ByRef<char16_t>)>(&::System::Collections::Generic::KeyValuePair_2<int32_t,char16_t>::Deconstruct)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<int32_t,char16_t>>::get(),
                            "Deconstruct",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<char16_t>>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Collections::Generic::KeyValuePair_2<int32_t,char16_t>::__set_key(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& System::Collections::Generic::KeyValuePair_2<int32_t,char16_t>::__get_key()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& System::Collections::Generic::KeyValuePair_2<int32_t,char16_t>::__get_key() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::Collections::Generic::KeyValuePair_2<int32_t,char16_t>::__set_value(char16_t  value)  {
::cordl_internals::setInstanceField<char16_t, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<char16_t>(value));
}
constexpr char16_t& System::Collections::Generic::KeyValuePair_2<int32_t,char16_t>::__get_value()  {
return ::cordl_internals::getInstanceField<char16_t, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr char16_t const& System::Collections::Generic::KeyValuePair_2<int32_t,char16_t>::__get_value() const {
return ::cordl_internals::getInstanceField<char16_t, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline void System::Collections::Generic::KeyValuePair_2<int32_t,char16_t>::_ctor(int32_t  key, char16_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<int32_t,char16_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
inline int32_t System::Collections::Generic::KeyValuePair_2<int32_t,char16_t>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<int32_t,char16_t>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline char16_t System::Collections::Generic::KeyValuePair_2<int32_t,char16_t>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<int32_t,char16_t>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<char16_t, false>(*this, ___internal_method);
}
inline ::StringW System::Collections::Generic::KeyValuePair_2<int32_t,char16_t>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<int32_t,char16_t>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline void System::Collections::Generic::KeyValuePair_2<int32_t,char16_t>::Deconstruct(ByRef<int32_t>  key, ByRef<char16_t>  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<int32_t,char16_t>>::get(),
                            "Deconstruct",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<char16_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
// Ctor Parameters [CppParam { name: "key", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "value", ty: "char16_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Collections::Generic::KeyValuePair_2<int32_t,char16_t>::KeyValuePair_2(int32_t  key, char16_t  value) noexcept : ::bs_hook::ValueTypeWrapper<0x8>() {this->key = key;
this->value = value;
}
//  Writing Method size for method: ::System::Collections::Generic::KeyValuePair_2<int32_t,bool>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Generic::KeyValuePair_2<int32_t,bool>::*)(int32_t, bool)>(&::System::Collections::Generic::KeyValuePair_2<int32_t,bool>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<int32_t,bool>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::KeyValuePair_2<int32_t,bool>.get_Key
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Collections::Generic::KeyValuePair_2<int32_t,bool>::*)()>(&::System::Collections::Generic::KeyValuePair_2<int32_t,bool>::get_Key)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<int32_t,bool>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::KeyValuePair_2<int32_t,bool>.get_Value
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Collections::Generic::KeyValuePair_2<int32_t,bool>::*)()>(&::System::Collections::Generic::KeyValuePair_2<int32_t,bool>::get_Value)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<int32_t,bool>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::KeyValuePair_2<int32_t,bool>.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Collections::Generic::KeyValuePair_2<int32_t,bool>::*)()>(&::System::Collections::Generic::KeyValuePair_2<int32_t,bool>::ToString)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<int32_t,bool>>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<int32_t,bool>>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::KeyValuePair_2<int32_t,bool>.Deconstruct
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Generic::KeyValuePair_2<int32_t,bool>::*)(ByRef<int32_t>, ByRef<bool>)>(&::System::Collections::Generic::KeyValuePair_2<int32_t,bool>::Deconstruct)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<int32_t,bool>>::get(),
                            "Deconstruct",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Collections::Generic::KeyValuePair_2<int32_t,bool>::__set_key(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& System::Collections::Generic::KeyValuePair_2<int32_t,bool>::__get_key()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& System::Collections::Generic::KeyValuePair_2<int32_t,bool>::__get_key() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::Collections::Generic::KeyValuePair_2<int32_t,bool>::__set_value(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<bool>(value));
}
constexpr bool& System::Collections::Generic::KeyValuePair_2<int32_t,bool>::__get_value()  {
return ::cordl_internals::getInstanceField<bool, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr bool const& System::Collections::Generic::KeyValuePair_2<int32_t,bool>::__get_value() const {
return ::cordl_internals::getInstanceField<bool, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline void System::Collections::Generic::KeyValuePair_2<int32_t,bool>::_ctor(int32_t  key, bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<int32_t,bool>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
inline int32_t System::Collections::Generic::KeyValuePair_2<int32_t,bool>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<int32_t,bool>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline bool System::Collections::Generic::KeyValuePair_2<int32_t,bool>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<int32_t,bool>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline ::StringW System::Collections::Generic::KeyValuePair_2<int32_t,bool>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<int32_t,bool>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline void System::Collections::Generic::KeyValuePair_2<int32_t,bool>::Deconstruct(ByRef<int32_t>  key, ByRef<bool>  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<int32_t,bool>>::get(),
                            "Deconstruct",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
// Ctor Parameters [CppParam { name: "key", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "value", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Collections::Generic::KeyValuePair_2<int32_t,bool>::KeyValuePair_2(int32_t  key, bool  value) noexcept : ::bs_hook::ValueTypeWrapper<0x8>() {this->key = key;
this->value = value;
}
//  Writing Method size for method: ::System::Collections::Generic::KeyValuePair_2<::System::Guid,int32_t>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Generic::KeyValuePair_2<::System::Guid,int32_t>::*)(::System::Guid, int32_t)>(&::System::Collections::Generic::KeyValuePair_2<::System::Guid,int32_t>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::System::Guid,int32_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::KeyValuePair_2<::System::Guid,int32_t>.get_Key
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Guid (::System::Collections::Generic::KeyValuePair_2<::System::Guid,int32_t>::*)()>(&::System::Collections::Generic::KeyValuePair_2<::System::Guid,int32_t>::get_Key)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::System::Guid,int32_t>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::KeyValuePair_2<::System::Guid,int32_t>.get_Value
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Collections::Generic::KeyValuePair_2<::System::Guid,int32_t>::*)()>(&::System::Collections::Generic::KeyValuePair_2<::System::Guid,int32_t>::get_Value)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::System::Guid,int32_t>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::KeyValuePair_2<::System::Guid,int32_t>.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Collections::Generic::KeyValuePair_2<::System::Guid,int32_t>::*)()>(&::System::Collections::Generic::KeyValuePair_2<::System::Guid,int32_t>::ToString)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::System::Guid,int32_t>>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::System::Guid,int32_t>>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::KeyValuePair_2<::System::Guid,int32_t>.Deconstruct
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Generic::KeyValuePair_2<::System::Guid,int32_t>::*)(ByRef<::System::Guid>, ByRef<int32_t>)>(&::System::Collections::Generic::KeyValuePair_2<::System::Guid,int32_t>::Deconstruct)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::System::Guid,int32_t>>::get(),
                            "Deconstruct",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Guid>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Collections::Generic::KeyValuePair_2<::System::Guid,int32_t>::__set_key(::System::Guid  value)  {
::cordl_internals::setInstanceField<::System::Guid, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Guid>(value));
}
constexpr ::System::Guid& System::Collections::Generic::KeyValuePair_2<::System::Guid,int32_t>::__get_key()  {
return ::cordl_internals::getInstanceField<::System::Guid, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Guid const& System::Collections::Generic::KeyValuePair_2<::System::Guid,int32_t>::__get_key() const {
return ::cordl_internals::getInstanceField<::System::Guid, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::Collections::Generic::KeyValuePair_2<::System::Guid,int32_t>::__set_value(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& System::Collections::Generic::KeyValuePair_2<::System::Guid,int32_t>::__get_value()  {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& System::Collections::Generic::KeyValuePair_2<::System::Guid,int32_t>::__get_value() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline void System::Collections::Generic::KeyValuePair_2<::System::Guid,int32_t>::_ctor(::System::Guid  key, int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::System::Guid,int32_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
inline ::System::Guid System::Collections::Generic::KeyValuePair_2<::System::Guid,int32_t>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::System::Guid,int32_t>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Guid, false>(*this, ___internal_method);
}
inline int32_t System::Collections::Generic::KeyValuePair_2<::System::Guid,int32_t>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::System::Guid,int32_t>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline ::StringW System::Collections::Generic::KeyValuePair_2<::System::Guid,int32_t>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::System::Guid,int32_t>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline void System::Collections::Generic::KeyValuePair_2<::System::Guid,int32_t>::Deconstruct(ByRef<::System::Guid>  key, ByRef<int32_t>  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::System::Guid,int32_t>>::get(),
                            "Deconstruct",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Guid>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
// Ctor Parameters [CppParam { name: "key", ty: "::System::Guid", modifiers: "", def_value: Some("{}") }, CppParam { name: "value", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Collections::Generic::KeyValuePair_2<::System::Guid,int32_t>::KeyValuePair_2(::System::Guid  key, int32_t  value) noexcept : ::bs_hook::ValueTypeWrapper<0x14>() {this->key = key;
this->value = value;
}
//  Writing Method size for method: ::System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::EdgeLookup,float_t>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::EdgeLookup,float_t>::*)(::UnityEngine::ProBuilder::EdgeLookup, float_t)>(&::System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::EdgeLookup,float_t>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::EdgeLookup,float_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::EdgeLookup>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::EdgeLookup,float_t>.get_Key
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ProBuilder::EdgeLookup (::System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::EdgeLookup,float_t>::*)()>(&::System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::EdgeLookup,float_t>::get_Key)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::EdgeLookup,float_t>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::EdgeLookup,float_t>.get_Value
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::EdgeLookup,float_t>::*)()>(&::System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::EdgeLookup,float_t>::get_Value)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::EdgeLookup,float_t>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::EdgeLookup,float_t>.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::EdgeLookup,float_t>::*)()>(&::System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::EdgeLookup,float_t>::ToString)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::EdgeLookup,float_t>>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::EdgeLookup,float_t>>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::EdgeLookup,float_t>.Deconstruct
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::EdgeLookup,float_t>::*)(ByRef<::UnityEngine::ProBuilder::EdgeLookup>, ByRef<float_t>)>(&::System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::EdgeLookup,float_t>::Deconstruct)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::EdgeLookup,float_t>>::get(),
                            "Deconstruct",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::ProBuilder::EdgeLookup>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::EdgeLookup,float_t>::__set_key(::UnityEngine::ProBuilder::EdgeLookup  value)  {
::cordl_internals::setInstanceField<::UnityEngine::ProBuilder::EdgeLookup, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::ProBuilder::EdgeLookup>(value));
}
constexpr ::UnityEngine::ProBuilder::EdgeLookup& System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::EdgeLookup,float_t>::__get_key()  {
return ::cordl_internals::getInstanceField<::UnityEngine::ProBuilder::EdgeLookup, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::UnityEngine::ProBuilder::EdgeLookup const& System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::EdgeLookup,float_t>::__get_key() const {
return ::cordl_internals::getInstanceField<::UnityEngine::ProBuilder::EdgeLookup, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::EdgeLookup,float_t>::__set_value(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<float_t>(value));
}
constexpr float_t& System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::EdgeLookup,float_t>::__get_value()  {
return ::cordl_internals::getInstanceField<float_t, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr float_t const& System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::EdgeLookup,float_t>::__get_value() const {
return ::cordl_internals::getInstanceField<float_t, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline void System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::EdgeLookup,float_t>::_ctor(::UnityEngine::ProBuilder::EdgeLookup  key, float_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::EdgeLookup,float_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::EdgeLookup>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
inline ::UnityEngine::ProBuilder::EdgeLookup System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::EdgeLookup,float_t>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::EdgeLookup,float_t>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::EdgeLookup, false>(*this, ___internal_method);
}
inline float_t System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::EdgeLookup,float_t>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::EdgeLookup,float_t>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
inline ::StringW System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::EdgeLookup,float_t>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::EdgeLookup,float_t>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline void System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::EdgeLookup,float_t>::Deconstruct(ByRef<::UnityEngine::ProBuilder::EdgeLookup>  key, ByRef<float_t>  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::EdgeLookup,float_t>>::get(),
                            "Deconstruct",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::ProBuilder::EdgeLookup>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
// Ctor Parameters [CppParam { name: "key", ty: "::UnityEngine::ProBuilder::EdgeLookup", modifiers: "", def_value: Some("{}") }, CppParam { name: "value", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::EdgeLookup,float_t>::KeyValuePair_2(::UnityEngine::ProBuilder::EdgeLookup  key, float_t  value) noexcept : ::bs_hook::ValueTypeWrapper<0x14>() {this->key = key;
this->value = value;
}
//  Writing Method size for method: ::System::Collections::Generic::KeyValuePair_2<int32_t,float_t>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Generic::KeyValuePair_2<int32_t,float_t>::*)(int32_t, float_t)>(&::System::Collections::Generic::KeyValuePair_2<int32_t,float_t>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<int32_t,float_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::KeyValuePair_2<int32_t,float_t>.get_Key
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Collections::Generic::KeyValuePair_2<int32_t,float_t>::*)()>(&::System::Collections::Generic::KeyValuePair_2<int32_t,float_t>::get_Key)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<int32_t,float_t>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::KeyValuePair_2<int32_t,float_t>.get_Value
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::System::Collections::Generic::KeyValuePair_2<int32_t,float_t>::*)()>(&::System::Collections::Generic::KeyValuePair_2<int32_t,float_t>::get_Value)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<int32_t,float_t>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::KeyValuePair_2<int32_t,float_t>.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Collections::Generic::KeyValuePair_2<int32_t,float_t>::*)()>(&::System::Collections::Generic::KeyValuePair_2<int32_t,float_t>::ToString)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<int32_t,float_t>>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<int32_t,float_t>>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::KeyValuePair_2<int32_t,float_t>.Deconstruct
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Generic::KeyValuePair_2<int32_t,float_t>::*)(ByRef<int32_t>, ByRef<float_t>)>(&::System::Collections::Generic::KeyValuePair_2<int32_t,float_t>::Deconstruct)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<int32_t,float_t>>::get(),
                            "Deconstruct",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Collections::Generic::KeyValuePair_2<int32_t,float_t>::__set_key(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& System::Collections::Generic::KeyValuePair_2<int32_t,float_t>::__get_key()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& System::Collections::Generic::KeyValuePair_2<int32_t,float_t>::__get_key() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::Collections::Generic::KeyValuePair_2<int32_t,float_t>::__set_value(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<float_t>(value));
}
constexpr float_t& System::Collections::Generic::KeyValuePair_2<int32_t,float_t>::__get_value()  {
return ::cordl_internals::getInstanceField<float_t, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr float_t const& System::Collections::Generic::KeyValuePair_2<int32_t,float_t>::__get_value() const {
return ::cordl_internals::getInstanceField<float_t, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline void System::Collections::Generic::KeyValuePair_2<int32_t,float_t>::_ctor(int32_t  key, float_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<int32_t,float_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
inline int32_t System::Collections::Generic::KeyValuePair_2<int32_t,float_t>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<int32_t,float_t>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline float_t System::Collections::Generic::KeyValuePair_2<int32_t,float_t>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<int32_t,float_t>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
inline ::StringW System::Collections::Generic::KeyValuePair_2<int32_t,float_t>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<int32_t,float_t>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline void System::Collections::Generic::KeyValuePair_2<int32_t,float_t>::Deconstruct(ByRef<int32_t>  key, ByRef<float_t>  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<int32_t,float_t>>::get(),
                            "Deconstruct",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
// Ctor Parameters [CppParam { name: "key", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "value", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Collections::Generic::KeyValuePair_2<int32_t,float_t>::KeyValuePair_2(int32_t  key, float_t  value) noexcept : ::bs_hook::ValueTypeWrapper<0x8>() {this->key = key;
this->value = value;
}
//  Writing Method size for method: ::System::Collections::Generic::KeyValuePair_2<int32_t,int32_t>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Generic::KeyValuePair_2<int32_t,int32_t>::*)(int32_t, int32_t)>(&::System::Collections::Generic::KeyValuePair_2<int32_t,int32_t>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<int32_t,int32_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::KeyValuePair_2<int32_t,int32_t>.get_Key
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Collections::Generic::KeyValuePair_2<int32_t,int32_t>::*)()>(&::System::Collections::Generic::KeyValuePair_2<int32_t,int32_t>::get_Key)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<int32_t,int32_t>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::KeyValuePair_2<int32_t,int32_t>.get_Value
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Collections::Generic::KeyValuePair_2<int32_t,int32_t>::*)()>(&::System::Collections::Generic::KeyValuePair_2<int32_t,int32_t>::get_Value)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<int32_t,int32_t>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::KeyValuePair_2<int32_t,int32_t>.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Collections::Generic::KeyValuePair_2<int32_t,int32_t>::*)()>(&::System::Collections::Generic::KeyValuePair_2<int32_t,int32_t>::ToString)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<int32_t,int32_t>>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<int32_t,int32_t>>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::KeyValuePair_2<int32_t,int32_t>.Deconstruct
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Generic::KeyValuePair_2<int32_t,int32_t>::*)(ByRef<int32_t>, ByRef<int32_t>)>(&::System::Collections::Generic::KeyValuePair_2<int32_t,int32_t>::Deconstruct)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<int32_t,int32_t>>::get(),
                            "Deconstruct",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Collections::Generic::KeyValuePair_2<int32_t,int32_t>::__set_key(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& System::Collections::Generic::KeyValuePair_2<int32_t,int32_t>::__get_key()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& System::Collections::Generic::KeyValuePair_2<int32_t,int32_t>::__get_key() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::Collections::Generic::KeyValuePair_2<int32_t,int32_t>::__set_value(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& System::Collections::Generic::KeyValuePair_2<int32_t,int32_t>::__get_value()  {
return ::cordl_internals::getInstanceField<int32_t, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& System::Collections::Generic::KeyValuePair_2<int32_t,int32_t>::__get_value() const {
return ::cordl_internals::getInstanceField<int32_t, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline void System::Collections::Generic::KeyValuePair_2<int32_t,int32_t>::_ctor(int32_t  key, int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<int32_t,int32_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
inline int32_t System::Collections::Generic::KeyValuePair_2<int32_t,int32_t>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<int32_t,int32_t>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline int32_t System::Collections::Generic::KeyValuePair_2<int32_t,int32_t>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<int32_t,int32_t>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline ::StringW System::Collections::Generic::KeyValuePair_2<int32_t,int32_t>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<int32_t,int32_t>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline void System::Collections::Generic::KeyValuePair_2<int32_t,int32_t>::Deconstruct(ByRef<int32_t>  key, ByRef<int32_t>  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<int32_t,int32_t>>::get(),
                            "Deconstruct",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
// Ctor Parameters [CppParam { name: "key", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "value", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Collections::Generic::KeyValuePair_2<int32_t,int32_t>::KeyValuePair_2(int32_t  key, int32_t  value) noexcept : ::bs_hook::ValueTypeWrapper<0x8>() {this->key = key;
this->value = value;
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr void System::Collections::Generic::KeyValuePair_2<TKey,TValue>::__set_key(TKey  value)  {
::cordl_internals::setInstanceField<TKey, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<TKey>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr TKey& System::Collections::Generic::KeyValuePair_2<TKey,TValue>::__get_key()  {
return ::cordl_internals::getInstanceField<TKey, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr TKey const& System::Collections::Generic::KeyValuePair_2<TKey,TValue>::__get_key() const {
return ::cordl_internals::getInstanceField<TKey, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr void System::Collections::Generic::KeyValuePair_2<TKey,TValue>::__set_value(TValue  value)  {
::cordl_internals::setInstanceField<TValue, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<TValue>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr TValue& System::Collections::Generic::KeyValuePair_2<TKey,TValue>::__get_value()  {
return ::cordl_internals::getInstanceField<TValue, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr TValue const& System::Collections::Generic::KeyValuePair_2<TKey,TValue>::__get_value() const {
return ::cordl_internals::getInstanceField<TValue, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
inline void System::Collections::Generic::KeyValuePair_2<TKey,TValue>::_ctor(TKey  key, TValue  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
inline TKey System::Collections::Generic::KeyValuePair_2<TKey,TValue>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TKey, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
inline TValue System::Collections::Generic::KeyValuePair_2<TKey,TValue>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TValue, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
inline ::StringW System::Collections::Generic::KeyValuePair_2<TKey,TValue>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
inline void System::Collections::Generic::KeyValuePair_2<TKey,TValue>::Deconstruct(ByRef<TKey>  key, ByRef<TValue>  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>::get(),
                            "Deconstruct",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<TKey>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<TValue>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
// Ctor Parameters [CppParam { name: "key", ty: "TKey", modifiers: "", def_value: Some("csnull") }, CppParam { name: "value", ty: "TValue", modifiers: "", def_value: Some("csnull") }]
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::System::Collections::Generic::KeyValuePair_2<TKey,TValue>::KeyValuePair_2(TKey  key, TValue  value) noexcept : ::bs_hook::ValueTypeWrapper<0x10>() {this->key = key;
this->value = value;
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
