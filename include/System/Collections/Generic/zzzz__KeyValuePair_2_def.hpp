#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(KeyValuePair_2)
namespace BeatSaber::AvatarCore {
struct AvatarSystemIdentifier;
}
namespace GlobalNamespace {
struct LevelKey;
}
namespace GlobalNamespace {
struct OVRSpace;
}
namespace GlobalNamespace {
struct SongPackMask;
}
namespace GlobalNamespace {
struct __MirrorRendererSO__CameraTransformData;
}
namespace MS::Internal::Xml::Cache {
struct XPathNodeRef;
}
namespace Newtonsoft::Json::Serialization {
struct ResolverContractKey;
}
namespace Newtonsoft::Json::Serialization {
struct __DefaultSerializationBinder__TypeNameKey;
}
namespace Newtonsoft::Json::Utilities {
struct __ConvertUtils__TypeConvertKey;
}
namespace GlobalNamespace {
struct OVRAnchor;
}
namespace System {
struct Guid;
}
namespace GlobalNamespace {
template<typename TResult>
struct __OVRTask_1__Callback;
}
namespace System {
struct Int32Enum;
}
namespace System {
class Object;
}
namespace GlobalNamespace {
template<typename TResult,typename TCapture>
struct __OVRSpatialAnchor__InvertedCapture_2;
}
namespace GlobalNamespace {
template<typename TResult,typename T>
struct __OVRTask_1__CallbackWithState_1;
}
namespace GlobalNamespace {
struct __OVRSpatialAnchor__UnboundAnchor;
}
namespace System::Text::RegularExpressions {
struct __Regex__CachedCodeEntryKey;
}
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
namespace System {
template<typename T1,typename T2,typename T3>
struct ValueTuple_3;
}
namespace UnityEngine::InputSystem::Utilities {
struct InternedString;
}
namespace GlobalNamespace {
struct __InputControlLayout__Collection__PrecompiledLayout;
}
namespace UnityEngine::ProBuilder {
struct Edge;
}
namespace UnityEngine::ProBuilder {
struct EdgeLookup;
}
namespace UnityEngine::ProBuilder {
struct IntVec3;
}
namespace UnityEngine {
struct PropertyName;
}
namespace UnityEngine::SceneManagement {
struct Scene;
}
namespace UnityEngine::TerrainUtils {
struct TerrainTileCoord;
}
namespace UnityEngine::UIElements::StyleSheets {
struct __StyleSheetCache__SheetHandleKey;
}
namespace UnityEngine::UIElements {
struct __StylePropertyAnimationSystem__ElementPropertyPair;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Vector4;
}
namespace Zenject {
struct BindingId;
}
namespace Zenject {
struct SignalSubscriptionId;
}
namespace GlobalNamespace {
struct __BeatmapLevelDataLoader__AssetBundleLevelInfo;
}
namespace GlobalNamespace {
struct __OVRPassthroughLayer__PassthroughMeshInstance;
}
namespace GlobalNamespace {
struct __SongPackMasksModel__LocalizedText;
}
namespace System::Resources {
struct ResourceLocator;
}
namespace System {
struct TimeSpan;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct Color32;
}
namespace UnityEngine::InputSystem::Layouts {
struct __InputControlLayout__ControlItem;
}
namespace UnityEngine::InputSystem::UI {
struct __InputSystemUIInputModule__InputActionReferenceState;
}
namespace UnityEngine::InputSystem::Utilities {
struct __JsonParser__JsonValue;
}
namespace UnityEngine::Playables {
struct Playable;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
struct AsyncOperationHandle;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
template<typename TObject>
struct AsyncOperationHandle_1;
}
namespace UnityEngine::UIElements::StyleSheets {
struct StylePropertyValue;
}
namespace UnityEngine::UIElements {
struct TextureId;
}
namespace UnityEngine::UIElements {
struct __StyleComplexSelector__PseudoStateData;
}
namespace UnityEngine {
struct Vector2;
}
namespace IgnoranceCore {
struct IgnoranceClientStats;
}
namespace UnityEngine::ProBuilder {
template<typename T1,typename T2,typename T3>
struct SimpleTuple_3;
}
namespace UnityEngine::ResourceManagement::Diagnostics {
struct DiagnosticEvent;
}
namespace UnityEngine::TextCore::Text {
struct __TextResourceManager__FontAssetRef;
}
namespace UnityEngine::UIElements {
struct ComputedStyle;
}
namespace BeatSaber::AvatarCore {
struct OptionalAvatarData;
}
namespace UnityEngine::ProBuilder {
template<typename T1,typename T2>
struct SimpleTuple_2;
}
namespace UnityEngine::TextCore::LowLevel {
struct GlyphPairAdjustmentRecord;
}
namespace GlobalNamespace {
struct __OVRSpatialAnchor__MultiAnchorDelegatePair;
}
// Forward declare root types
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
struct KeyValuePair_2;
}
namespace System::Collections::Generic {
template<::il2cpp_utils::il2cpp_reference_type TValue>
struct KeyValuePair_2<::BeatSaber::AvatarCore::AvatarSystemIdentifier,TValue>;
}
namespace System::Collections::Generic {
template<::il2cpp_utils::il2cpp_reference_type TValue>
struct KeyValuePair_2<::GlobalNamespace::LevelKey,TValue>;
}
namespace System::Collections::Generic {
template<>
struct KeyValuePair_2<::GlobalNamespace::OVRSpace,int32_t>;
}
namespace System::Collections::Generic {
template<::il2cpp_utils::il2cpp_reference_type TValue>
struct KeyValuePair_2<::GlobalNamespace::SongPackMask,TValue>;
}
namespace System::Collections::Generic {
template<::il2cpp_utils::il2cpp_reference_type TValue>
struct KeyValuePair_2<::GlobalNamespace::__MirrorRendererSO__CameraTransformData,TValue>;
}
namespace System::Collections::Generic {
template<>
struct KeyValuePair_2<::MS::Internal::Xml::Cache::XPathNodeRef,::MS::Internal::Xml::Cache::XPathNodeRef>;
}
namespace System::Collections::Generic {
template<::il2cpp_utils::il2cpp_reference_type TValue>
struct KeyValuePair_2<::Newtonsoft::Json::Serialization::ResolverContractKey,TValue>;
}
namespace System::Collections::Generic {
template<::il2cpp_utils::il2cpp_reference_type TValue>
struct KeyValuePair_2<::Newtonsoft::Json::Serialization::__DefaultSerializationBinder__TypeNameKey,TValue>;
}
namespace System::Collections::Generic {
template<::il2cpp_utils::il2cpp_reference_type TValue>
struct KeyValuePair_2<::Newtonsoft::Json::Utilities::__ConvertUtils__TypeConvertKey,TValue>;
}
namespace System::Collections::Generic {
template<>
struct KeyValuePair_2<::System::Guid,::GlobalNamespace::OVRAnchor>;
}
namespace System::Collections::Generic {
template<>
struct KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__Callback<::GlobalNamespace::OVRAnchor>>;
}
namespace System::Collections::Generic {
template<::cordl_internals::is_or_is_backed_by<int32_t> TResult_cordlgen_0>
struct KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__Callback<TResult_cordlgen_0>>;
}
namespace System::Collections::Generic {
template<::il2cpp_utils::il2cpp_reference_type TResult_cordlgen_0>
struct KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__Callback<TResult_cordlgen_0>>;
}
namespace System::Collections::Generic {
template<>
struct KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__Callback<bool>>;
}
namespace System::Collections::Generic {
template<::il2cpp_utils::il2cpp_reference_type TResult_cordlgen_0,::il2cpp_utils::il2cpp_reference_type TResult_cordlgen_1,::il2cpp_utils::il2cpp_reference_type TCapture_cordlgen_2>
struct KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__CallbackWithState_1<TResult_cordlgen_0,::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<TResult_cordlgen_1,TCapture_cordlgen_2>>>;
}
namespace System::Collections::Generic {
template<::il2cpp_utils::il2cpp_reference_type TResult_cordlgen_0,::il2cpp_utils::il2cpp_reference_type T_cordlgen_1>
struct KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__CallbackWithState_1<TResult_cordlgen_0,T_cordlgen_1>>;
}
namespace System::Collections::Generic {
template<>
struct KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,::GlobalNamespace::OVRAnchor>>;
}
namespace System::Collections::Generic {
template<>
struct KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<bool,::GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor>>>;
}
namespace System::Collections::Generic {
template<::il2cpp_utils::il2cpp_reference_type TCapture_cordlgen_0>
struct KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<bool,TCapture_cordlgen_0>>>;
}
namespace System::Collections::Generic {
template<::il2cpp_utils::il2cpp_reference_type T_cordlgen_0>
struct KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,T_cordlgen_0>>;
}
namespace System::Collections::Generic {
template<::cordl_internals::is_or_is_backed_by<int32_t> TValue>
struct KeyValuePair_2<::System::Guid,TValue>;
}
namespace System::Collections::Generic {
template<::il2cpp_utils::il2cpp_reference_type TValue>
struct KeyValuePair_2<::System::Guid,TValue>;
}
namespace System::Collections::Generic {
template<>
struct KeyValuePair_2<::System::Guid,bool>;
}
namespace System::Collections::Generic {
template<>
struct KeyValuePair_2<::System::Guid,int32_t>;
}
namespace System::Collections::Generic {
template<::il2cpp_utils::il2cpp_reference_type TValue>
struct KeyValuePair_2<::System::Text::RegularExpressions::__Regex__CachedCodeEntryKey,TValue>;
}
namespace System::Collections::Generic {
template<::cordl_internals::is_or_is_backed_by<int32_t> T1_cordlgen_0,::il2cpp_utils::il2cpp_reference_type T2_cordlgen_1,::il2cpp_utils::il2cpp_reference_type TValue>
struct KeyValuePair_2<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>,TValue>;
}
namespace System::Collections::Generic {
template<::il2cpp_utils::il2cpp_reference_type T1_cordlgen_0,::il2cpp_utils::il2cpp_reference_type T2_cordlgen_1,::il2cpp_utils::il2cpp_reference_type TValue>
struct KeyValuePair_2<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>,TValue>;
}
namespace System::Collections::Generic {
template<::il2cpp_utils::il2cpp_reference_type T1_cordlgen_0,::il2cpp_utils::il2cpp_reference_type TValue>
struct KeyValuePair_2<::System::ValueTuple_2<T1_cordlgen_0,int32_t>,TValue>;
}
namespace System::Collections::Generic {
template<::il2cpp_utils::il2cpp_reference_type T2_cordlgen_0,::il2cpp_utils::il2cpp_reference_type TValue>
struct KeyValuePair_2<::System::ValueTuple_3<int32_t,T2_cordlgen_0,int32_t>,TValue>;
}
namespace System::Collections::Generic {
template<>
struct KeyValuePair_2<::UnityEngine::InputSystem::Utilities::InternedString,::GlobalNamespace::__InputControlLayout__Collection__PrecompiledLayout>;
}
namespace System::Collections::Generic {
template<>
struct KeyValuePair_2<::UnityEngine::InputSystem::Utilities::InternedString,::UnityEngine::InputSystem::Utilities::InternedString>;
}
namespace System::Collections::Generic {
template<::il2cpp_utils::il2cpp_reference_type TValue>
struct KeyValuePair_2<::UnityEngine::InputSystem::Utilities::InternedString,TValue>;
}
namespace System::Collections::Generic {
template<::il2cpp_utils::il2cpp_reference_type TValue>
struct KeyValuePair_2<::UnityEngine::ProBuilder::Edge,TValue>;
}
namespace System::Collections::Generic {
template<::il2cpp_utils::il2cpp_reference_type TValue>
struct KeyValuePair_2<::UnityEngine::ProBuilder::EdgeLookup,TValue>;
}
namespace System::Collections::Generic {
template<>
struct KeyValuePair_2<::UnityEngine::ProBuilder::EdgeLookup,float_t>;
}
namespace System::Collections::Generic {
template<::il2cpp_utils::il2cpp_reference_type TValue>
struct KeyValuePair_2<::UnityEngine::ProBuilder::IntVec3,TValue>;
}
namespace System::Collections::Generic {
template<::il2cpp_utils::il2cpp_reference_type TValue>
struct KeyValuePair_2<::UnityEngine::PropertyName,TValue>;
}
namespace System::Collections::Generic {
template<::il2cpp_utils::il2cpp_reference_type TValue>
struct KeyValuePair_2<::UnityEngine::SceneManagement::Scene,TValue>;
}
namespace System::Collections::Generic {
template<::il2cpp_utils::il2cpp_reference_type TValue>
struct KeyValuePair_2<::UnityEngine::TerrainUtils::TerrainTileCoord,TValue>;
}
namespace System::Collections::Generic {
template<::il2cpp_utils::il2cpp_reference_type TValue>
struct KeyValuePair_2<::UnityEngine::UIElements::StyleSheets::__StyleSheetCache__SheetHandleKey,TValue>;
}
namespace System::Collections::Generic {
template<::il2cpp_utils::il2cpp_reference_type TValue>
struct KeyValuePair_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,TValue>;
}
namespace System::Collections::Generic {
template<::cordl_internals::is_or_is_backed_by<int32_t> TValue>
struct KeyValuePair_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,TValue>;
}
namespace System::Collections::Generic {
template<>
struct KeyValuePair_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>;
}
namespace System::Collections::Generic {
template<>
struct KeyValuePair_2<::UnityEngine::Vector3,int32_t>;
}
namespace System::Collections::Generic {
template<::il2cpp_utils::il2cpp_reference_type TValue>
struct KeyValuePair_2<::UnityEngine::Vector4,TValue>;
}
namespace System::Collections::Generic {
template<::il2cpp_utils::il2cpp_reference_type TValue>
struct KeyValuePair_2<::Zenject::BindingId,TValue>;
}
namespace System::Collections::Generic {
template<::il2cpp_utils::il2cpp_reference_type TValue>
struct KeyValuePair_2<::Zenject::SignalSubscriptionId,TValue>;
}
namespace System::Collections::Generic {
template<::il2cpp_utils::il2cpp_reference_type TKey>
struct KeyValuePair_2<TKey,::GlobalNamespace::SongPackMask>;
}
namespace System::Collections::Generic {
template<::il2cpp_utils::il2cpp_reference_type TKey>
struct KeyValuePair_2<TKey,::GlobalNamespace::__BeatmapLevelDataLoader__AssetBundleLevelInfo>;
}
namespace System::Collections::Generic {
template<::il2cpp_utils::il2cpp_reference_type TKey>
struct KeyValuePair_2<TKey,::GlobalNamespace::__OVRPassthroughLayer__PassthroughMeshInstance>;
}
namespace System::Collections::Generic {
template<::il2cpp_utils::il2cpp_reference_type TKey>
struct KeyValuePair_2<TKey,::GlobalNamespace::__SongPackMasksModel__LocalizedText>;
}
namespace System::Collections::Generic {
template<::il2cpp_utils::il2cpp_reference_type TKey>
struct KeyValuePair_2<TKey,::System::Guid>;
}
namespace System::Collections::Generic {
template<::il2cpp_utils::il2cpp_reference_type TKey>
struct KeyValuePair_2<TKey,::System::Resources::ResourceLocator>;
}
namespace System::Collections::Generic {
template<::cordl_internals::is_or_is_backed_by<int32_t> TKey>
struct KeyValuePair_2<TKey,::System::TimeSpan>;
}
namespace System::Collections::Generic {
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type T1_cordlgen_1,::il2cpp_utils::il2cpp_reference_type T2_cordlgen_2>
struct KeyValuePair_2<TKey,::System::ValueTuple_2<T1_cordlgen_1,T2_cordlgen_2>>;
}
namespace System::Collections::Generic {
template<::il2cpp_utils::il2cpp_reference_type TKey>
struct KeyValuePair_2<TKey,::UnityEngine::Color>;
}
namespace System::Collections::Generic {
template<::il2cpp_utils::il2cpp_reference_type TKey>
struct KeyValuePair_2<TKey,::UnityEngine::Color32>;
}
namespace System::Collections::Generic {
template<::il2cpp_utils::il2cpp_reference_type TKey>
struct KeyValuePair_2<TKey,::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>;
}
namespace System::Collections::Generic {
template<::il2cpp_utils::il2cpp_reference_type TKey>
struct KeyValuePair_2<TKey,::UnityEngine::InputSystem::UI::__InputSystemUIInputModule__InputActionReferenceState>;
}
namespace System::Collections::Generic {
template<::il2cpp_utils::il2cpp_reference_type TKey>
struct KeyValuePair_2<TKey,::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue>;
}
namespace System::Collections::Generic {
template<::il2cpp_utils::il2cpp_reference_type TKey>
struct KeyValuePair_2<TKey,::UnityEngine::Playables::Playable>;
}
namespace System::Collections::Generic {
template<::cordl_internals::is_or_is_backed_by<int32_t> TKey>
struct KeyValuePair_2<TKey,::UnityEngine::Quaternion>;
}
namespace System::Collections::Generic {
template<::il2cpp_utils::il2cpp_reference_type TKey>
struct KeyValuePair_2<TKey,::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>;
}
namespace System::Collections::Generic {
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TObject_cordlgen_1>
struct KeyValuePair_2<TKey,::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject_cordlgen_1>>;
}
namespace System::Collections::Generic {
template<::il2cpp_utils::il2cpp_reference_type TKey>
struct KeyValuePair_2<TKey,::UnityEngine::UIElements::StyleSheets::StylePropertyValue>;
}
namespace System::Collections::Generic {
template<::il2cpp_utils::il2cpp_reference_type TKey>
struct KeyValuePair_2<TKey,::UnityEngine::UIElements::TextureId>;
}
namespace System::Collections::Generic {
template<::il2cpp_utils::il2cpp_reference_type TKey>
struct KeyValuePair_2<TKey,::UnityEngine::UIElements::__StyleComplexSelector__PseudoStateData>;
}
namespace System::Collections::Generic {
template<::il2cpp_utils::il2cpp_reference_type TKey>
struct KeyValuePair_2<TKey,::UnityEngine::Vector2>;
}
namespace System::Collections::Generic {
template<::cordl_internals::is_or_is_backed_by<uint32_t> TKey,::il2cpp_utils::il2cpp_reference_type TValue>
struct KeyValuePair_2<TKey,TValue>;
}
namespace System::Collections::Generic {
template<::il2cpp_utils::il2cpp_reference_type TKey,::cordl_internals::is_or_is_backed_by<int32_t> TValue>
struct KeyValuePair_2<TKey,TValue>;
}
namespace System::Collections::Generic {
template<::cordl_internals::is_or_is_backed_by<int32_t> TKey,::il2cpp_utils::il2cpp_reference_type TValue>
struct KeyValuePair_2<TKey,TValue>;
}
namespace System::Collections::Generic {
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
struct KeyValuePair_2<TKey,TValue>;
}
namespace System::Collections::Generic {
template<::cordl_internals::is_or_is_backed_by<int32_t> TKey,::cordl_internals::is_or_is_backed_by<int32_t> TValue>
struct KeyValuePair_2<TKey,TValue>;
}
namespace System::Collections::Generic {
template<::cordl_internals::is_or_is_backed_by<uint32_t> TKey>
struct KeyValuePair_2<TKey,bool>;
}
namespace System::Collections::Generic {
template<::il2cpp_utils::il2cpp_reference_type TKey>
struct KeyValuePair_2<TKey,bool>;
}
namespace System::Collections::Generic {
template<::il2cpp_utils::il2cpp_reference_type TKey>
struct KeyValuePair_2<TKey,float_t>;
}
namespace System::Collections::Generic {
template<::cordl_internals::is_or_is_backed_by<int32_t> TKey>
struct KeyValuePair_2<TKey,float_t>;
}
namespace System::Collections::Generic {
template<::cordl_internals::is_or_is_backed_by<int32_t> TKey>
struct KeyValuePair_2<TKey,int32_t>;
}
namespace System::Collections::Generic {
template<::il2cpp_utils::il2cpp_reference_type TKey>
struct KeyValuePair_2<TKey,int32_t>;
}
namespace System::Collections::Generic {
template<::il2cpp_utils::il2cpp_reference_type TKey>
struct KeyValuePair_2<TKey,int64_t>;
}
namespace System::Collections::Generic {
template<::il2cpp_utils::il2cpp_reference_type TKey>
struct KeyValuePair_2<TKey,uint32_t>;
}
namespace System::Collections::Generic {
template<::il2cpp_utils::il2cpp_reference_type TKey>
struct KeyValuePair_2<TKey,uint8_t>;
}
namespace System::Collections::Generic {
template<::il2cpp_utils::il2cpp_reference_type TValue>
struct KeyValuePair_2<char16_t,TValue>;
}
namespace System::Collections::Generic {
template<::il2cpp_utils::il2cpp_reference_type TValue>
struct KeyValuePair_2<float_t,TValue>;
}
namespace System::Collections::Generic {
template<>
struct KeyValuePair_2<int32_t,::IgnoranceCore::IgnoranceClientStats>;
}
namespace System::Collections::Generic {
template<::il2cpp_utils::il2cpp_reference_type T3_cordlgen_0>
struct KeyValuePair_2<int32_t,::UnityEngine::ProBuilder::SimpleTuple_3<::UnityEngine::Vector3,::UnityEngine::Vector3,T3_cordlgen_0>>;
}
namespace System::Collections::Generic {
template<>
struct KeyValuePair_2<int32_t,::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>;
}
namespace System::Collections::Generic {
template<>
struct KeyValuePair_2<int32_t,::UnityEngine::TextCore::Text::__TextResourceManager__FontAssetRef>;
}
namespace System::Collections::Generic {
template<>
struct KeyValuePair_2<int32_t,::UnityEngine::Vector2>;
}
namespace System::Collections::Generic {
template<>
struct KeyValuePair_2<int32_t,::UnityEngine::Vector3>;
}
namespace System::Collections::Generic {
template<::il2cpp_utils::il2cpp_reference_type TValue>
struct KeyValuePair_2<int32_t,TValue>;
}
namespace System::Collections::Generic {
template<>
struct KeyValuePair_2<int32_t,bool>;
}
namespace System::Collections::Generic {
template<>
struct KeyValuePair_2<int32_t,char16_t>;
}
namespace System::Collections::Generic {
template<>
struct KeyValuePair_2<int32_t,float_t>;
}
namespace System::Collections::Generic {
template<>
struct KeyValuePair_2<int32_t,int32_t>;
}
namespace System::Collections::Generic {
template<>
struct KeyValuePair_2<int32_t,int64_t>;
}
namespace System::Collections::Generic {
template<>
struct KeyValuePair_2<int64_t,::UnityEngine::UIElements::ComputedStyle>;
}
namespace System::Collections::Generic {
template<::il2cpp_utils::il2cpp_reference_type TValue>
struct KeyValuePair_2<int64_t,TValue>;
}
namespace System::Collections::Generic {
template<::il2cpp_utils::il2cpp_reference_type TValue>
struct KeyValuePair_2<uint16_t,TValue>;
}
namespace System::Collections::Generic {
template<>
struct KeyValuePair_2<uint16_t,uint16_t>;
}
namespace System::Collections::Generic {
template<>
struct KeyValuePair_2<uint32_t,::BeatSaber::AvatarCore::OptionalAvatarData>;
}
namespace System::Collections::Generic {
template<::il2cpp_utils::il2cpp_reference_type T1_cordlgen_0>
struct KeyValuePair_2<uint32_t,::UnityEngine::ProBuilder::SimpleTuple_2<T1_cordlgen_0,::UnityEngine::ProBuilder::Edge>>;
}
namespace System::Collections::Generic {
template<::il2cpp_utils::il2cpp_reference_type T1_cordlgen_0,::il2cpp_utils::il2cpp_reference_type T2_cordlgen_1>
struct KeyValuePair_2<uint32_t,::UnityEngine::ProBuilder::SimpleTuple_2<T1_cordlgen_0,T2_cordlgen_1>>;
}
namespace System::Collections::Generic {
template<::il2cpp_utils::il2cpp_reference_type T1_cordlgen_0>
struct KeyValuePair_2<uint32_t,::UnityEngine::ProBuilder::SimpleTuple_2<T1_cordlgen_0,int32_t>>;
}
namespace System::Collections::Generic {
template<>
struct KeyValuePair_2<uint32_t,::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>;
}
namespace System::Collections::Generic {
template<::il2cpp_utils::il2cpp_reference_type TValue>
struct KeyValuePair_2<uint32_t,TValue>;
}
namespace System::Collections::Generic {
template<>
struct KeyValuePair_2<uint32_t,int32_t>;
}
namespace System::Collections::Generic {
template<>
struct KeyValuePair_2<uint32_t,uint32_t>;
}
namespace System::Collections::Generic {
template<>
struct KeyValuePair_2<uint64_t,::GlobalNamespace::__OVRSpatialAnchor__MultiAnchorDelegatePair>;
}
namespace System::Collections::Generic {
template<::il2cpp_utils::il2cpp_reference_type TValue>
struct KeyValuePair_2<uint64_t,TValue>;
}
namespace System::Collections::Generic {
template<::il2cpp_utils::il2cpp_reference_type TValue>
struct KeyValuePair_2<uint8_t,TValue>;
}
// Write type traits
MARK_GEN_VAL_T(::System::Collections::Generic::KeyValuePair_2);
// Type: System.Collections.Generic::KeyValuePair`2
// Type: System.Collections.Generic::KeyValuePair`2
namespace System::Collections::Generic {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TValue>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3841))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3841), inst: 3941 })
// CS Name: ::System.Collections.Generic::KeyValuePair`2<TKey,TValue>
struct CORDL_TYPE KeyValuePair_2<::UnityEngine::PropertyName,TValue> : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field key offset 0x0
 __declspec(property(get=__get_key, put=__set_key)) ::UnityEngine::PropertyName  key;

/// @brief Field value offset 0x8
 __declspec(property(get=__get_value, put=__set_value)) TValue  value;

 __declspec(property(get=get_Key)) ::UnityEngine::PropertyName  Key;

 __declspec(property(get=get_Value)) TValue  Value;

constexpr void __set_key(::UnityEngine::PropertyName  value) ;

constexpr ::UnityEngine::PropertyName& __get_key() ;

constexpr ::UnityEngine::PropertyName const& __get_key() const;

constexpr void __set_value(TValue  value) ;

constexpr TValue& __get_value() ;

constexpr TValue const& __get_value() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::UnityEngine::PropertyName  key, TValue  value) ;

/// @brief Method get_Key addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::PropertyName get_Key() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
inline TValue get_Value() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

/// @brief Method Deconstruct addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Deconstruct(ByRef<::UnityEngine::PropertyName>  key, ByRef<TValue>  value) ;

// Ctor Parameters [CppParam { name: "key", ty: "::UnityEngine::PropertyName", modifiers: "", def_value: None }, CppParam { name: "value", ty: "TValue", modifiers: "", def_value: None }]
constexpr KeyValuePair_2(::UnityEngine::PropertyName  key, TValue  value) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit KeyValuePair_2(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 KeyValuePair_2()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::KeyValuePair`2
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3841))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3841), inst: 3940 })
// CS Name: ::System.Collections.Generic::KeyValuePair`2<TKey,TValue>
struct CORDL_TYPE KeyValuePair_2<int32_t,::UnityEngine::Vector2> : public ::bs_hook::ValueTypeWrapper<0xc> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xc};

/// @brief Field key offset 0x0
 __declspec(property(get=__get_key, put=__set_key)) int32_t  key;

/// @brief Field value offset 0x4
 __declspec(property(get=__get_value, put=__set_value)) ::UnityEngine::Vector2  value;

 __declspec(property(get=get_Key)) int32_t  Key;

 __declspec(property(get=get_Value)) ::UnityEngine::Vector2  Value;

constexpr void __set_key(int32_t  value) ;

constexpr int32_t& __get_key() ;

constexpr int32_t const& __get_key() const;

constexpr void __set_value(::UnityEngine::Vector2  value) ;

constexpr ::UnityEngine::Vector2& __get_value() ;

constexpr ::UnityEngine::Vector2 const& __get_value() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(int32_t  key, ::UnityEngine::Vector2  value) ;

/// @brief Method get_Key addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t get_Key() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::Vector2 get_Value() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

/// @brief Method Deconstruct addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Deconstruct(ByRef<int32_t>  key, ByRef<::UnityEngine::Vector2>  value) ;

// Ctor Parameters [CppParam { name: "key", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "value", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }]
constexpr KeyValuePair_2(int32_t  key, ::UnityEngine::Vector2  value) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit KeyValuePair_2(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0xc>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 KeyValuePair_2()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::KeyValuePair`2
namespace System::Collections::Generic {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TValue>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3841))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3841), inst: 1670 })
// CS Name: ::System.Collections.Generic::KeyValuePair`2<TKey,TValue>
struct CORDL_TYPE KeyValuePair_2<::UnityEngine::UIElements::StyleSheets::__StyleSheetCache__SheetHandleKey,TValue> : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field key offset 0x0
 __declspec(property(get=__get_key, put=__set_key)) ::UnityEngine::UIElements::StyleSheets::__StyleSheetCache__SheetHandleKey  key;

/// @brief Field value offset 0x8
 __declspec(property(get=__get_value, put=__set_value)) TValue  value;

 __declspec(property(get=get_Key)) ::UnityEngine::UIElements::StyleSheets::__StyleSheetCache__SheetHandleKey  Key;

 __declspec(property(get=get_Value)) TValue  Value;

constexpr void __set_key(::UnityEngine::UIElements::StyleSheets::__StyleSheetCache__SheetHandleKey  value) ;

constexpr ::UnityEngine::UIElements::StyleSheets::__StyleSheetCache__SheetHandleKey& __get_key() ;

constexpr ::UnityEngine::UIElements::StyleSheets::__StyleSheetCache__SheetHandleKey const& __get_key() const;

constexpr void __set_value(TValue  value) ;

constexpr TValue& __get_value() ;

constexpr TValue const& __get_value() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::UnityEngine::UIElements::StyleSheets::__StyleSheetCache__SheetHandleKey  key, TValue  value) ;

/// @brief Method get_Key addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::UIElements::StyleSheets::__StyleSheetCache__SheetHandleKey get_Key() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
inline TValue get_Value() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

/// @brief Method Deconstruct addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Deconstruct(ByRef<::UnityEngine::UIElements::StyleSheets::__StyleSheetCache__SheetHandleKey>  key, ByRef<TValue>  value) ;

// Ctor Parameters [CppParam { name: "key", ty: "::UnityEngine::UIElements::StyleSheets::__StyleSheetCache__SheetHandleKey", modifiers: "", def_value: None }, CppParam { name: "value", ty: "TValue", modifiers: "", def_value: None }]
constexpr KeyValuePair_2(::UnityEngine::UIElements::StyleSheets::__StyleSheetCache__SheetHandleKey  key, TValue  value) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit KeyValuePair_2(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 KeyValuePair_2()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::KeyValuePair`2
namespace System::Collections::Generic {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TValue>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3841))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3841), inst: 1669 })
// CS Name: ::System.Collections.Generic::KeyValuePair`2<TKey,TValue>
struct CORDL_TYPE KeyValuePair_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,TValue> : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field key offset 0x0
 __declspec(property(get=__get_key, put=__set_key)) ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair  key;

/// @brief Field value offset 0x10
 __declspec(property(get=__get_value, put=__set_value)) TValue  value;

 __declspec(property(get=get_Key)) ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair  Key;

 __declspec(property(get=get_Value)) TValue  Value;

constexpr void __set_key(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair  value) ;

constexpr ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair& __get_key() ;

constexpr ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair const& __get_key() const;

constexpr void __set_value(TValue  value) ;

constexpr TValue& __get_value() ;

constexpr TValue const& __get_value() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair  key, TValue  value) ;

/// @brief Method get_Key addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair get_Key() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
inline TValue get_Value() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

/// @brief Method Deconstruct addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Deconstruct(ByRef<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair>  key, ByRef<TValue>  value) ;

// Ctor Parameters [CppParam { name: "key", ty: "::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair", modifiers: "", def_value: None }, CppParam { name: "value", ty: "TValue", modifiers: "", def_value: None }]
constexpr KeyValuePair_2(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair  key, TValue  value) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit KeyValuePair_2(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 KeyValuePair_2()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::KeyValuePair`2
namespace System::Collections::Generic {
// cpp template
template<::cordl_internals::is_or_is_backed_by<int32_t> TValue>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3841))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3841), inst: 1668 })
// CS Name: ::System.Collections.Generic::KeyValuePair`2<TKey,TValue>
struct CORDL_TYPE KeyValuePair_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,TValue> : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field key offset 0x0
 __declspec(property(get=__get_key, put=__set_key)) ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair  key;

/// @brief Field value offset 0x10
 __declspec(property(get=__get_value, put=__set_value)) TValue  value;

 __declspec(property(get=get_Key)) ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair  Key;

 __declspec(property(get=get_Value)) TValue  Value;

constexpr void __set_key(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair  value) ;

constexpr ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair& __get_key() ;

constexpr ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair const& __get_key() const;

constexpr void __set_value(TValue  value) ;

constexpr TValue& __get_value() ;

constexpr TValue const& __get_value() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair  key, TValue  value) ;

/// @brief Method get_Key addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair get_Key() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
inline TValue get_Value() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

/// @brief Method Deconstruct addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Deconstruct(ByRef<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair>  key, ByRef<TValue>  value) ;

// Ctor Parameters [CppParam { name: "key", ty: "::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair", modifiers: "", def_value: None }, CppParam { name: "value", ty: "TValue", modifiers: "", def_value: None }]
constexpr KeyValuePair_2(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair  key, TValue  value) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit KeyValuePair_2(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 KeyValuePair_2()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::KeyValuePair`2
namespace System::Collections::Generic {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TValue>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3841))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3841), inst: 1667 })
// CS Name: ::System.Collections.Generic::KeyValuePair`2<TKey,TValue>
struct CORDL_TYPE KeyValuePair_2<::System::Text::RegularExpressions::__Regex__CachedCodeEntryKey,TValue> : public ::bs_hook::ValueTypeWrapper<0x20> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field key offset 0x0
 __declspec(property(get=__get_key, put=__set_key)) ::System::Text::RegularExpressions::__Regex__CachedCodeEntryKey  key;

/// @brief Field value offset 0x18
 __declspec(property(get=__get_value, put=__set_value)) TValue  value;

 __declspec(property(get=get_Key)) ::System::Text::RegularExpressions::__Regex__CachedCodeEntryKey  Key;

 __declspec(property(get=get_Value)) TValue  Value;

constexpr void __set_key(::System::Text::RegularExpressions::__Regex__CachedCodeEntryKey  value) ;

constexpr ::System::Text::RegularExpressions::__Regex__CachedCodeEntryKey& __get_key() ;

constexpr ::System::Text::RegularExpressions::__Regex__CachedCodeEntryKey const& __get_key() const;

constexpr void __set_value(TValue  value) ;

constexpr TValue& __get_value() ;

constexpr TValue const& __get_value() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Text::RegularExpressions::__Regex__CachedCodeEntryKey  key, TValue  value) ;

/// @brief Method get_Key addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Text::RegularExpressions::__Regex__CachedCodeEntryKey get_Key() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
inline TValue get_Value() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

/// @brief Method Deconstruct addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Deconstruct(ByRef<::System::Text::RegularExpressions::__Regex__CachedCodeEntryKey>  key, ByRef<TValue>  value) ;

// Ctor Parameters [CppParam { name: "key", ty: "::System::Text::RegularExpressions::__Regex__CachedCodeEntryKey", modifiers: "", def_value: None }, CppParam { name: "value", ty: "TValue", modifiers: "", def_value: None }]
constexpr KeyValuePair_2(::System::Text::RegularExpressions::__Regex__CachedCodeEntryKey  key, TValue  value) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit KeyValuePair_2(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x20>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 KeyValuePair_2()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::KeyValuePair`2
namespace System::Collections::Generic {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TValue>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3841))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3841), inst: 1666 })
// CS Name: ::System.Collections.Generic::KeyValuePair`2<TKey,TValue>
struct CORDL_TYPE KeyValuePair_2<::GlobalNamespace::__MirrorRendererSO__CameraTransformData,TValue> : public ::bs_hook::ValueTypeWrapper<0x30> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field key offset 0x0
 __declspec(property(get=__get_key, put=__set_key)) ::GlobalNamespace::__MirrorRendererSO__CameraTransformData  key;

/// @brief Field value offset 0x28
 __declspec(property(get=__get_value, put=__set_value)) TValue  value;

 __declspec(property(get=get_Key)) ::GlobalNamespace::__MirrorRendererSO__CameraTransformData  Key;

 __declspec(property(get=get_Value)) TValue  Value;

constexpr void __set_key(::GlobalNamespace::__MirrorRendererSO__CameraTransformData  value) ;

constexpr ::GlobalNamespace::__MirrorRendererSO__CameraTransformData& __get_key() ;

constexpr ::GlobalNamespace::__MirrorRendererSO__CameraTransformData const& __get_key() const;

constexpr void __set_value(TValue  value) ;

constexpr TValue& __get_value() ;

constexpr TValue const& __get_value() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::GlobalNamespace::__MirrorRendererSO__CameraTransformData  key, TValue  value) ;

/// @brief Method get_Key addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::GlobalNamespace::__MirrorRendererSO__CameraTransformData get_Key() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
inline TValue get_Value() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

/// @brief Method Deconstruct addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Deconstruct(ByRef<::GlobalNamespace::__MirrorRendererSO__CameraTransformData>  key, ByRef<TValue>  value) ;

// Ctor Parameters [CppParam { name: "key", ty: "::GlobalNamespace::__MirrorRendererSO__CameraTransformData", modifiers: "", def_value: None }, CppParam { name: "value", ty: "TValue", modifiers: "", def_value: None }]
constexpr KeyValuePair_2(::GlobalNamespace::__MirrorRendererSO__CameraTransformData  key, TValue  value) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit KeyValuePair_2(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x30>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 KeyValuePair_2()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::KeyValuePair`2
namespace System::Collections::Generic {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TValue>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3841))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3841), inst: 1665 })
// CS Name: ::System.Collections.Generic::KeyValuePair`2<TKey,TValue>
struct CORDL_TYPE KeyValuePair_2<::Newtonsoft::Json::Serialization::__DefaultSerializationBinder__TypeNameKey,TValue> : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field key offset 0x0
 __declspec(property(get=__get_key, put=__set_key)) ::Newtonsoft::Json::Serialization::__DefaultSerializationBinder__TypeNameKey  key;

/// @brief Field value offset 0x10
 __declspec(property(get=__get_value, put=__set_value)) TValue  value;

 __declspec(property(get=get_Key)) ::Newtonsoft::Json::Serialization::__DefaultSerializationBinder__TypeNameKey  Key;

 __declspec(property(get=get_Value)) TValue  Value;

constexpr void __set_key(::Newtonsoft::Json::Serialization::__DefaultSerializationBinder__TypeNameKey  value) ;

constexpr ::Newtonsoft::Json::Serialization::__DefaultSerializationBinder__TypeNameKey& __get_key() ;

constexpr ::Newtonsoft::Json::Serialization::__DefaultSerializationBinder__TypeNameKey const& __get_key() const;

constexpr void __set_value(TValue  value) ;

constexpr TValue& __get_value() ;

constexpr TValue const& __get_value() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::Newtonsoft::Json::Serialization::__DefaultSerializationBinder__TypeNameKey  key, TValue  value) ;

/// @brief Method get_Key addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::Newtonsoft::Json::Serialization::__DefaultSerializationBinder__TypeNameKey get_Key() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
inline TValue get_Value() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

/// @brief Method Deconstruct addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Deconstruct(ByRef<::Newtonsoft::Json::Serialization::__DefaultSerializationBinder__TypeNameKey>  key, ByRef<TValue>  value) ;

// Ctor Parameters [CppParam { name: "key", ty: "::Newtonsoft::Json::Serialization::__DefaultSerializationBinder__TypeNameKey", modifiers: "", def_value: None }, CppParam { name: "value", ty: "TValue", modifiers: "", def_value: None }]
constexpr KeyValuePair_2(::Newtonsoft::Json::Serialization::__DefaultSerializationBinder__TypeNameKey  key, TValue  value) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit KeyValuePair_2(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 KeyValuePair_2()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::KeyValuePair`2
namespace System::Collections::Generic {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TValue>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3841))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3841), inst: 1664 })
// CS Name: ::System.Collections.Generic::KeyValuePair`2<TKey,TValue>
struct CORDL_TYPE KeyValuePair_2<::Newtonsoft::Json::Utilities::__ConvertUtils__TypeConvertKey,TValue> : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field key offset 0x0
 __declspec(property(get=__get_key, put=__set_key)) ::Newtonsoft::Json::Utilities::__ConvertUtils__TypeConvertKey  key;

/// @brief Field value offset 0x10
 __declspec(property(get=__get_value, put=__set_value)) TValue  value;

 __declspec(property(get=get_Key)) ::Newtonsoft::Json::Utilities::__ConvertUtils__TypeConvertKey  Key;

 __declspec(property(get=get_Value)) TValue  Value;

constexpr void __set_key(::Newtonsoft::Json::Utilities::__ConvertUtils__TypeConvertKey  value) ;

constexpr ::Newtonsoft::Json::Utilities::__ConvertUtils__TypeConvertKey& __get_key() ;

constexpr ::Newtonsoft::Json::Utilities::__ConvertUtils__TypeConvertKey const& __get_key() const;

constexpr void __set_value(TValue  value) ;

constexpr TValue& __get_value() ;

constexpr TValue const& __get_value() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::Newtonsoft::Json::Utilities::__ConvertUtils__TypeConvertKey  key, TValue  value) ;

/// @brief Method get_Key addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::Newtonsoft::Json::Utilities::__ConvertUtils__TypeConvertKey get_Key() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
inline TValue get_Value() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

/// @brief Method Deconstruct addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Deconstruct(ByRef<::Newtonsoft::Json::Utilities::__ConvertUtils__TypeConvertKey>  key, ByRef<TValue>  value) ;

// Ctor Parameters [CppParam { name: "key", ty: "::Newtonsoft::Json::Utilities::__ConvertUtils__TypeConvertKey", modifiers: "", def_value: None }, CppParam { name: "value", ty: "TValue", modifiers: "", def_value: None }]
constexpr KeyValuePair_2(::Newtonsoft::Json::Utilities::__ConvertUtils__TypeConvertKey  key, TValue  value) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit KeyValuePair_2(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 KeyValuePair_2()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::KeyValuePair`2
namespace System::Collections::Generic {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TValue>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3841))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3841), inst: 1663 })
// CS Name: ::System.Collections.Generic::KeyValuePair`2<TKey,TValue>
struct CORDL_TYPE KeyValuePair_2<::UnityEngine::Vector4,TValue> : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field key offset 0x0
 __declspec(property(get=__get_key, put=__set_key)) ::UnityEngine::Vector4  key;

/// @brief Field value offset 0x10
 __declspec(property(get=__get_value, put=__set_value)) TValue  value;

 __declspec(property(get=get_Key)) ::UnityEngine::Vector4  Key;

 __declspec(property(get=get_Value)) TValue  Value;

constexpr void __set_key(::UnityEngine::Vector4  value) ;

constexpr ::UnityEngine::Vector4& __get_key() ;

constexpr ::UnityEngine::Vector4 const& __get_key() const;

constexpr void __set_value(TValue  value) ;

constexpr TValue& __get_value() ;

constexpr TValue const& __get_value() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::UnityEngine::Vector4  key, TValue  value) ;

/// @brief Method get_Key addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::Vector4 get_Key() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
inline TValue get_Value() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

/// @brief Method Deconstruct addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Deconstruct(ByRef<::UnityEngine::Vector4>  key, ByRef<TValue>  value) ;

// Ctor Parameters [CppParam { name: "key", ty: "::UnityEngine::Vector4", modifiers: "", def_value: None }, CppParam { name: "value", ty: "TValue", modifiers: "", def_value: None }]
constexpr KeyValuePair_2(::UnityEngine::Vector4  key, TValue  value) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit KeyValuePair_2(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 KeyValuePair_2()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::KeyValuePair`2
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3841))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3841), inst: 1662 })
// CS Name: ::System.Collections.Generic::KeyValuePair`2<TKey,TValue>
struct CORDL_TYPE KeyValuePair_2<::UnityEngine::Vector3,int32_t> : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field key offset 0x0
 __declspec(property(get=__get_key, put=__set_key)) ::UnityEngine::Vector3  key;

/// @brief Field value offset 0xc
 __declspec(property(get=__get_value, put=__set_value)) int32_t  value;

 __declspec(property(get=get_Key)) ::UnityEngine::Vector3  Key;

 __declspec(property(get=get_Value)) int32_t  Value;

constexpr void __set_key(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get_key() ;

constexpr ::UnityEngine::Vector3 const& __get_key() const;

constexpr void __set_value(int32_t  value) ;

constexpr int32_t& __get_value() ;

constexpr int32_t const& __get_value() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::UnityEngine::Vector3  key, int32_t  value) ;

/// @brief Method get_Key addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::Vector3 get_Key() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t get_Value() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

/// @brief Method Deconstruct addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Deconstruct(ByRef<::UnityEngine::Vector3>  key, ByRef<int32_t>  value) ;

// Ctor Parameters [CppParam { name: "key", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "value", ty: "int32_t", modifiers: "", def_value: None }]
constexpr KeyValuePair_2(::UnityEngine::Vector3  key, int32_t  value) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit KeyValuePair_2(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 KeyValuePair_2()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::KeyValuePair`2
namespace System::Collections::Generic {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TValue>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3841))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3841), inst: 1661 })
// CS Name: ::System.Collections.Generic::KeyValuePair`2<TKey,TValue>
struct CORDL_TYPE KeyValuePair_2<uint64_t,TValue> : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field key offset 0x0
 __declspec(property(get=__get_key, put=__set_key)) uint64_t  key;

/// @brief Field value offset 0x8
 __declspec(property(get=__get_value, put=__set_value)) TValue  value;

 __declspec(property(get=get_Key)) uint64_t  Key;

 __declspec(property(get=get_Value)) TValue  Value;

constexpr void __set_key(uint64_t  value) ;

constexpr uint64_t& __get_key() ;

constexpr uint64_t const& __get_key() const;

constexpr void __set_value(TValue  value) ;

constexpr TValue& __get_value() ;

constexpr TValue const& __get_value() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(uint64_t  key, TValue  value) ;

/// @brief Method get_Key addr 0x0 size 0xffffffffffffffff virtual false final false
inline uint64_t get_Key() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
inline TValue get_Value() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

/// @brief Method Deconstruct addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Deconstruct(ByRef<uint64_t>  key, ByRef<TValue>  value) ;

// Ctor Parameters [CppParam { name: "key", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "value", ty: "TValue", modifiers: "", def_value: None }]
constexpr KeyValuePair_2(uint64_t  key, TValue  value) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit KeyValuePair_2(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 KeyValuePair_2()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::KeyValuePair`2
namespace System::Collections::Generic {
// cpp template
template<::cordl_internals::is_or_is_backed_by<uint32_t> TKey,::il2cpp_utils::il2cpp_reference_type TValue>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3841))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3841), inst: 1660 })
// CS Name: ::System.Collections.Generic::KeyValuePair`2<TKey,TValue>
struct CORDL_TYPE KeyValuePair_2<TKey,TValue> : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field key offset 0x0
 __declspec(property(get=__get_key, put=__set_key)) TKey  key;

/// @brief Field value offset 0x8
 __declspec(property(get=__get_value, put=__set_value)) TValue  value;

 __declspec(property(get=get_Key)) TKey  Key;

 __declspec(property(get=get_Value)) TValue  Value;

constexpr void __set_key(TKey  value) ;

constexpr TKey& __get_key() ;

constexpr TKey const& __get_key() const;

constexpr void __set_value(TValue  value) ;

constexpr TValue& __get_value() ;

constexpr TValue const& __get_value() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(TKey  key, TValue  value) ;

/// @brief Method get_Key addr 0x0 size 0xffffffffffffffff virtual false final false
inline TKey get_Key() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
inline TValue get_Value() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

/// @brief Method Deconstruct addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Deconstruct(ByRef<TKey>  key, ByRef<TValue>  value) ;

// Ctor Parameters [CppParam { name: "key", ty: "TKey", modifiers: "", def_value: None }, CppParam { name: "value", ty: "TValue", modifiers: "", def_value: None }]
constexpr KeyValuePair_2(TKey  key, TValue  value) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit KeyValuePair_2(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 KeyValuePair_2()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::KeyValuePair`2
namespace System::Collections::Generic {
// cpp template
template<::cordl_internals::is_or_is_backed_by<uint32_t> TKey>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3841))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3841), inst: 1659 })
// CS Name: ::System.Collections.Generic::KeyValuePair`2<TKey,TValue>
struct CORDL_TYPE KeyValuePair_2<TKey,bool> : public ::bs_hook::ValueTypeWrapper<0x8> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field key offset 0x0
 __declspec(property(get=__get_key, put=__set_key)) TKey  key;

/// @brief Field value offset 0x4
 __declspec(property(get=__get_value, put=__set_value)) bool  value;

 __declspec(property(get=get_Key)) TKey  Key;

 __declspec(property(get=get_Value)) bool  Value;

constexpr void __set_key(TKey  value) ;

constexpr TKey& __get_key() ;

constexpr TKey const& __get_key() const;

constexpr void __set_value(bool  value) ;

constexpr bool& __get_value() ;

constexpr bool const& __get_value() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(TKey  key, bool  value) ;

/// @brief Method get_Key addr 0x0 size 0xffffffffffffffff virtual false final false
inline TKey get_Key() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_Value() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

/// @brief Method Deconstruct addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Deconstruct(ByRef<TKey>  key, ByRef<bool>  value) ;

// Ctor Parameters [CppParam { name: "key", ty: "TKey", modifiers: "", def_value: None }, CppParam { name: "value", ty: "bool", modifiers: "", def_value: None }]
constexpr KeyValuePair_2(TKey  key, bool  value) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit KeyValuePair_2(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x8>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 KeyValuePair_2()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::KeyValuePair`2
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3841))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3841), inst: 1658 })
// CS Name: ::System.Collections.Generic::KeyValuePair`2<TKey,TValue>
struct CORDL_TYPE KeyValuePair_2<uint32_t,uint32_t> : public ::bs_hook::ValueTypeWrapper<0x8> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field key offset 0x0
 __declspec(property(get=__get_key, put=__set_key)) uint32_t  key;

/// @brief Field value offset 0x4
 __declspec(property(get=__get_value, put=__set_value)) uint32_t  value;

 __declspec(property(get=get_Key)) uint32_t  Key;

 __declspec(property(get=get_Value)) uint32_t  Value;

constexpr void __set_key(uint32_t  value) ;

constexpr uint32_t& __get_key() ;

constexpr uint32_t const& __get_key() const;

constexpr void __set_value(uint32_t  value) ;

constexpr uint32_t& __get_value() ;

constexpr uint32_t const& __get_value() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(uint32_t  key, uint32_t  value) ;

/// @brief Method get_Key addr 0x0 size 0xffffffffffffffff virtual false final false
inline uint32_t get_Key() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
inline uint32_t get_Value() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

/// @brief Method Deconstruct addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Deconstruct(ByRef<uint32_t>  key, ByRef<uint32_t>  value) ;

// Ctor Parameters [CppParam { name: "key", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "value", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr KeyValuePair_2(uint32_t  key, uint32_t  value) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit KeyValuePair_2(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x8>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 KeyValuePair_2()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::KeyValuePair`2
namespace System::Collections::Generic {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TValue>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3841))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3841), inst: 1657 })
// CS Name: ::System.Collections.Generic::KeyValuePair`2<TKey,TValue>
struct CORDL_TYPE KeyValuePair_2<uint32_t,TValue> : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field key offset 0x0
 __declspec(property(get=__get_key, put=__set_key)) uint32_t  key;

/// @brief Field value offset 0x8
 __declspec(property(get=__get_value, put=__set_value)) TValue  value;

 __declspec(property(get=get_Key)) uint32_t  Key;

 __declspec(property(get=get_Value)) TValue  Value;

constexpr void __set_key(uint32_t  value) ;

constexpr uint32_t& __get_key() ;

constexpr uint32_t const& __get_key() const;

constexpr void __set_value(TValue  value) ;

constexpr TValue& __get_value() ;

constexpr TValue const& __get_value() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(uint32_t  key, TValue  value) ;

/// @brief Method get_Key addr 0x0 size 0xffffffffffffffff virtual false final false
inline uint32_t get_Key() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
inline TValue get_Value() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

/// @brief Method Deconstruct addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Deconstruct(ByRef<uint32_t>  key, ByRef<TValue>  value) ;

// Ctor Parameters [CppParam { name: "key", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "value", ty: "TValue", modifiers: "", def_value: None }]
constexpr KeyValuePair_2(uint32_t  key, TValue  value) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit KeyValuePair_2(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 KeyValuePair_2()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::KeyValuePair`2
namespace System::Collections::Generic {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T1_cordlgen_0,::il2cpp_utils::il2cpp_reference_type T2_cordlgen_1>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3841))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3841), inst: 1656 })
// CS Name: ::System.Collections.Generic::KeyValuePair`2<TKey,TValue>
struct CORDL_TYPE KeyValuePair_2<uint32_t,::UnityEngine::ProBuilder::SimpleTuple_2<T1_cordlgen_0,T2_cordlgen_1>> : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field key offset 0x0
 __declspec(property(get=__get_key, put=__set_key)) uint32_t  key;

/// @brief Field value offset 0x8
 __declspec(property(get=__get_value, put=__set_value)) ::UnityEngine::ProBuilder::SimpleTuple_2<T1_cordlgen_0,T2_cordlgen_1>  value;

 __declspec(property(get=get_Key)) uint32_t  Key;

 __declspec(property(get=get_Value)) ::UnityEngine::ProBuilder::SimpleTuple_2<T1_cordlgen_0,T2_cordlgen_1>  Value;

constexpr void __set_key(uint32_t  value) ;

constexpr uint32_t& __get_key() ;

constexpr uint32_t const& __get_key() const;

constexpr void __set_value(::UnityEngine::ProBuilder::SimpleTuple_2<T1_cordlgen_0,T2_cordlgen_1>  value) ;

constexpr ::UnityEngine::ProBuilder::SimpleTuple_2<T1_cordlgen_0,T2_cordlgen_1>& __get_value() ;

constexpr ::UnityEngine::ProBuilder::SimpleTuple_2<T1_cordlgen_0,T2_cordlgen_1> const& __get_value() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(uint32_t  key, ::UnityEngine::ProBuilder::SimpleTuple_2<T1_cordlgen_0,T2_cordlgen_1>  value) ;

/// @brief Method get_Key addr 0x0 size 0xffffffffffffffff virtual false final false
inline uint32_t get_Key() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::ProBuilder::SimpleTuple_2<T1_cordlgen_0,T2_cordlgen_1> get_Value() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

/// @brief Method Deconstruct addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Deconstruct(ByRef<uint32_t>  key, ByRef<::UnityEngine::ProBuilder::SimpleTuple_2<T1_cordlgen_0,T2_cordlgen_1>>  value) ;

// Ctor Parameters [CppParam { name: "key", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "value", ty: "::UnityEngine::ProBuilder::SimpleTuple_2<T1_cordlgen_0,T2_cordlgen_1>", modifiers: "", def_value: None }]
constexpr KeyValuePair_2(uint32_t  key, ::UnityEngine::ProBuilder::SimpleTuple_2<T1_cordlgen_0,T2_cordlgen_1>  value) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit KeyValuePair_2(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 KeyValuePair_2()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::KeyValuePair`2
namespace System::Collections::Generic {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T1_cordlgen_0>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3841))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3841), inst: 1655 })
// CS Name: ::System.Collections.Generic::KeyValuePair`2<TKey,TValue>
struct CORDL_TYPE KeyValuePair_2<uint32_t,::UnityEngine::ProBuilder::SimpleTuple_2<T1_cordlgen_0,int32_t>> : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field key offset 0x0
 __declspec(property(get=__get_key, put=__set_key)) uint32_t  key;

/// @brief Field value offset 0x8
 __declspec(property(get=__get_value, put=__set_value)) ::UnityEngine::ProBuilder::SimpleTuple_2<T1_cordlgen_0,int32_t>  value;

 __declspec(property(get=get_Key)) uint32_t  Key;

 __declspec(property(get=get_Value)) ::UnityEngine::ProBuilder::SimpleTuple_2<T1_cordlgen_0,int32_t>  Value;

constexpr void __set_key(uint32_t  value) ;

constexpr uint32_t& __get_key() ;

constexpr uint32_t const& __get_key() const;

constexpr void __set_value(::UnityEngine::ProBuilder::SimpleTuple_2<T1_cordlgen_0,int32_t>  value) ;

constexpr ::UnityEngine::ProBuilder::SimpleTuple_2<T1_cordlgen_0,int32_t>& __get_value() ;

constexpr ::UnityEngine::ProBuilder::SimpleTuple_2<T1_cordlgen_0,int32_t> const& __get_value() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(uint32_t  key, ::UnityEngine::ProBuilder::SimpleTuple_2<T1_cordlgen_0,int32_t>  value) ;

/// @brief Method get_Key addr 0x0 size 0xffffffffffffffff virtual false final false
inline uint32_t get_Key() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::ProBuilder::SimpleTuple_2<T1_cordlgen_0,int32_t> get_Value() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

/// @brief Method Deconstruct addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Deconstruct(ByRef<uint32_t>  key, ByRef<::UnityEngine::ProBuilder::SimpleTuple_2<T1_cordlgen_0,int32_t>>  value) ;

// Ctor Parameters [CppParam { name: "key", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "value", ty: "::UnityEngine::ProBuilder::SimpleTuple_2<T1_cordlgen_0,int32_t>", modifiers: "", def_value: None }]
constexpr KeyValuePair_2(uint32_t  key, ::UnityEngine::ProBuilder::SimpleTuple_2<T1_cordlgen_0,int32_t>  value) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit KeyValuePair_2(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 KeyValuePair_2()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::KeyValuePair`2
namespace System::Collections::Generic {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T1_cordlgen_0>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3841))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3841), inst: 1654 })
// CS Name: ::System.Collections.Generic::KeyValuePair`2<TKey,TValue>
struct CORDL_TYPE KeyValuePair_2<uint32_t,::UnityEngine::ProBuilder::SimpleTuple_2<T1_cordlgen_0,::UnityEngine::ProBuilder::Edge>> : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field key offset 0x0
 __declspec(property(get=__get_key, put=__set_key)) uint32_t  key;

/// @brief Field value offset 0x8
 __declspec(property(get=__get_value, put=__set_value)) ::UnityEngine::ProBuilder::SimpleTuple_2<T1_cordlgen_0,::UnityEngine::ProBuilder::Edge>  value;

 __declspec(property(get=get_Key)) uint32_t  Key;

 __declspec(property(get=get_Value)) ::UnityEngine::ProBuilder::SimpleTuple_2<T1_cordlgen_0,::UnityEngine::ProBuilder::Edge>  Value;

constexpr void __set_key(uint32_t  value) ;

constexpr uint32_t& __get_key() ;

constexpr uint32_t const& __get_key() const;

constexpr void __set_value(::UnityEngine::ProBuilder::SimpleTuple_2<T1_cordlgen_0,::UnityEngine::ProBuilder::Edge>  value) ;

constexpr ::UnityEngine::ProBuilder::SimpleTuple_2<T1_cordlgen_0,::UnityEngine::ProBuilder::Edge>& __get_value() ;

constexpr ::UnityEngine::ProBuilder::SimpleTuple_2<T1_cordlgen_0,::UnityEngine::ProBuilder::Edge> const& __get_value() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(uint32_t  key, ::UnityEngine::ProBuilder::SimpleTuple_2<T1_cordlgen_0,::UnityEngine::ProBuilder::Edge>  value) ;

/// @brief Method get_Key addr 0x0 size 0xffffffffffffffff virtual false final false
inline uint32_t get_Key() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::ProBuilder::SimpleTuple_2<T1_cordlgen_0,::UnityEngine::ProBuilder::Edge> get_Value() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

/// @brief Method Deconstruct addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Deconstruct(ByRef<uint32_t>  key, ByRef<::UnityEngine::ProBuilder::SimpleTuple_2<T1_cordlgen_0,::UnityEngine::ProBuilder::Edge>>  value) ;

// Ctor Parameters [CppParam { name: "key", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "value", ty: "::UnityEngine::ProBuilder::SimpleTuple_2<T1_cordlgen_0,::UnityEngine::ProBuilder::Edge>", modifiers: "", def_value: None }]
constexpr KeyValuePair_2(uint32_t  key, ::UnityEngine::ProBuilder::SimpleTuple_2<T1_cordlgen_0,::UnityEngine::ProBuilder::Edge>  value) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit KeyValuePair_2(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 KeyValuePair_2()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::KeyValuePair`2
namespace System::Collections::Generic {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TValue>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3841))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3841), inst: 1653 })
// CS Name: ::System.Collections.Generic::KeyValuePair`2<TKey,TValue>
struct CORDL_TYPE KeyValuePair_2<uint16_t,TValue> : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field key offset 0x0
 __declspec(property(get=__get_key, put=__set_key)) uint16_t  key;

/// @brief Field value offset 0x8
 __declspec(property(get=__get_value, put=__set_value)) TValue  value;

 __declspec(property(get=get_Key)) uint16_t  Key;

 __declspec(property(get=get_Value)) TValue  Value;

constexpr void __set_key(uint16_t  value) ;

constexpr uint16_t& __get_key() ;

constexpr uint16_t const& __get_key() const;

constexpr void __set_value(TValue  value) ;

constexpr TValue& __get_value() ;

constexpr TValue const& __get_value() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(uint16_t  key, TValue  value) ;

/// @brief Method get_Key addr 0x0 size 0xffffffffffffffff virtual false final false
inline uint16_t get_Key() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
inline TValue get_Value() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

/// @brief Method Deconstruct addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Deconstruct(ByRef<uint16_t>  key, ByRef<TValue>  value) ;

// Ctor Parameters [CppParam { name: "key", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "value", ty: "TValue", modifiers: "", def_value: None }]
constexpr KeyValuePair_2(uint16_t  key, TValue  value) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit KeyValuePair_2(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 KeyValuePair_2()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::KeyValuePair`2
namespace System::Collections::Generic {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TValue>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3841))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3841), inst: 1652 })
// CS Name: ::System.Collections.Generic::KeyValuePair`2<TKey,TValue>
struct CORDL_TYPE KeyValuePair_2<::UnityEngine::TerrainUtils::TerrainTileCoord,TValue> : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field key offset 0x0
 __declspec(property(get=__get_key, put=__set_key)) ::UnityEngine::TerrainUtils::TerrainTileCoord  key;

/// @brief Field value offset 0x8
 __declspec(property(get=__get_value, put=__set_value)) TValue  value;

 __declspec(property(get=get_Key)) ::UnityEngine::TerrainUtils::TerrainTileCoord  Key;

 __declspec(property(get=get_Value)) TValue  Value;

constexpr void __set_key(::UnityEngine::TerrainUtils::TerrainTileCoord  value) ;

constexpr ::UnityEngine::TerrainUtils::TerrainTileCoord& __get_key() ;

constexpr ::UnityEngine::TerrainUtils::TerrainTileCoord const& __get_key() const;

constexpr void __set_value(TValue  value) ;

constexpr TValue& __get_value() ;

constexpr TValue const& __get_value() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::UnityEngine::TerrainUtils::TerrainTileCoord  key, TValue  value) ;

/// @brief Method get_Key addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::TerrainUtils::TerrainTileCoord get_Key() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
inline TValue get_Value() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

/// @brief Method Deconstruct addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Deconstruct(ByRef<::UnityEngine::TerrainUtils::TerrainTileCoord>  key, ByRef<TValue>  value) ;

// Ctor Parameters [CppParam { name: "key", ty: "::UnityEngine::TerrainUtils::TerrainTileCoord", modifiers: "", def_value: None }, CppParam { name: "value", ty: "TValue", modifiers: "", def_value: None }]
constexpr KeyValuePair_2(::UnityEngine::TerrainUtils::TerrainTileCoord  key, TValue  value) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit KeyValuePair_2(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 KeyValuePair_2()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::KeyValuePair`2
namespace System::Collections::Generic {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TValue>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3841))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3841), inst: 1651 })
// CS Name: ::System.Collections.Generic::KeyValuePair`2<TKey,TValue>
struct CORDL_TYPE KeyValuePair_2<::GlobalNamespace::SongPackMask,TValue> : public ::bs_hook::ValueTypeWrapper<0x28> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field key offset 0x0
 __declspec(property(get=__get_key, put=__set_key)) ::GlobalNamespace::SongPackMask  key;

/// @brief Field value offset 0x20
 __declspec(property(get=__get_value, put=__set_value)) TValue  value;

 __declspec(property(get=get_Key)) ::GlobalNamespace::SongPackMask  Key;

 __declspec(property(get=get_Value)) TValue  Value;

constexpr void __set_key(::GlobalNamespace::SongPackMask  value) ;

constexpr ::GlobalNamespace::SongPackMask& __get_key() ;

constexpr ::GlobalNamespace::SongPackMask const& __get_key() const;

constexpr void __set_value(TValue  value) ;

constexpr TValue& __get_value() ;

constexpr TValue const& __get_value() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::GlobalNamespace::SongPackMask  key, TValue  value) ;

/// @brief Method get_Key addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::GlobalNamespace::SongPackMask get_Key() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
inline TValue get_Value() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

/// @brief Method Deconstruct addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Deconstruct(ByRef<::GlobalNamespace::SongPackMask>  key, ByRef<TValue>  value) ;

// Ctor Parameters [CppParam { name: "key", ty: "::GlobalNamespace::SongPackMask", modifiers: "", def_value: None }, CppParam { name: "value", ty: "TValue", modifiers: "", def_value: None }]
constexpr KeyValuePair_2(::GlobalNamespace::SongPackMask  key, TValue  value) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit KeyValuePair_2(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x28>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 KeyValuePair_2()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::KeyValuePair`2
namespace System::Collections::Generic {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TValue>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3841))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3841), inst: 1650 })
// CS Name: ::System.Collections.Generic::KeyValuePair`2<TKey,TValue>
struct CORDL_TYPE KeyValuePair_2<float_t,TValue> : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field key offset 0x0
 __declspec(property(get=__get_key, put=__set_key)) float_t  key;

/// @brief Field value offset 0x8
 __declspec(property(get=__get_value, put=__set_value)) TValue  value;

 __declspec(property(get=get_Key)) float_t  Key;

 __declspec(property(get=get_Value)) TValue  Value;

constexpr void __set_key(float_t  value) ;

constexpr float_t& __get_key() ;

constexpr float_t const& __get_key() const;

constexpr void __set_value(TValue  value) ;

constexpr TValue& __get_value() ;

constexpr TValue const& __get_value() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(float_t  key, TValue  value) ;

/// @brief Method get_Key addr 0x0 size 0xffffffffffffffff virtual false final false
inline float_t get_Key() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
inline TValue get_Value() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

/// @brief Method Deconstruct addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Deconstruct(ByRef<float_t>  key, ByRef<TValue>  value) ;

// Ctor Parameters [CppParam { name: "key", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "value", ty: "TValue", modifiers: "", def_value: None }]
constexpr KeyValuePair_2(float_t  key, TValue  value) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit KeyValuePair_2(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 KeyValuePair_2()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::KeyValuePair`2
namespace System::Collections::Generic {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TValue>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3841))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3841), inst: 1649 })
// CS Name: ::System.Collections.Generic::KeyValuePair`2<TKey,TValue>
struct CORDL_TYPE KeyValuePair_2<::Zenject::SignalSubscriptionId,TValue> : public ::bs_hook::ValueTypeWrapper<0x20> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field key offset 0x0
 __declspec(property(get=__get_key, put=__set_key)) ::Zenject::SignalSubscriptionId  key;

/// @brief Field value offset 0x18
 __declspec(property(get=__get_value, put=__set_value)) TValue  value;

 __declspec(property(get=get_Key)) ::Zenject::SignalSubscriptionId  Key;

 __declspec(property(get=get_Value)) TValue  Value;

constexpr void __set_key(::Zenject::SignalSubscriptionId  value) ;

constexpr ::Zenject::SignalSubscriptionId& __get_key() ;

constexpr ::Zenject::SignalSubscriptionId const& __get_key() const;

constexpr void __set_value(TValue  value) ;

constexpr TValue& __get_value() ;

constexpr TValue const& __get_value() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::Zenject::SignalSubscriptionId  key, TValue  value) ;

/// @brief Method get_Key addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::Zenject::SignalSubscriptionId get_Key() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
inline TValue get_Value() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

/// @brief Method Deconstruct addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Deconstruct(ByRef<::Zenject::SignalSubscriptionId>  key, ByRef<TValue>  value) ;

// Ctor Parameters [CppParam { name: "key", ty: "::Zenject::SignalSubscriptionId", modifiers: "", def_value: None }, CppParam { name: "value", ty: "TValue", modifiers: "", def_value: None }]
constexpr KeyValuePair_2(::Zenject::SignalSubscriptionId  key, TValue  value) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit KeyValuePair_2(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x20>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 KeyValuePair_2()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::KeyValuePair`2
namespace System::Collections::Generic {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TValue>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3841))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3841), inst: 1648 })
// CS Name: ::System.Collections.Generic::KeyValuePair`2<TKey,TValue>
struct CORDL_TYPE KeyValuePair_2<::UnityEngine::SceneManagement::Scene,TValue> : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field key offset 0x0
 __declspec(property(get=__get_key, put=__set_key)) ::UnityEngine::SceneManagement::Scene  key;

/// @brief Field value offset 0x8
 __declspec(property(get=__get_value, put=__set_value)) TValue  value;

 __declspec(property(get=get_Key)) ::UnityEngine::SceneManagement::Scene  Key;

 __declspec(property(get=get_Value)) TValue  Value;

constexpr void __set_key(::UnityEngine::SceneManagement::Scene  value) ;

constexpr ::UnityEngine::SceneManagement::Scene& __get_key() ;

constexpr ::UnityEngine::SceneManagement::Scene const& __get_key() const;

constexpr void __set_value(TValue  value) ;

constexpr TValue& __get_value() ;

constexpr TValue const& __get_value() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::UnityEngine::SceneManagement::Scene  key, TValue  value) ;

/// @brief Method get_Key addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::SceneManagement::Scene get_Key() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
inline TValue get_Value() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

/// @brief Method Deconstruct addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Deconstruct(ByRef<::UnityEngine::SceneManagement::Scene>  key, ByRef<TValue>  value) ;

// Ctor Parameters [CppParam { name: "key", ty: "::UnityEngine::SceneManagement::Scene", modifiers: "", def_value: None }, CppParam { name: "value", ty: "TValue", modifiers: "", def_value: None }]
constexpr KeyValuePair_2(::UnityEngine::SceneManagement::Scene  key, TValue  value) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit KeyValuePair_2(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 KeyValuePair_2()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::KeyValuePair`2
namespace System::Collections::Generic {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TValue>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3841))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3841), inst: 1647 })
// CS Name: ::System.Collections.Generic::KeyValuePair`2<TKey,TValue>
struct CORDL_TYPE KeyValuePair_2<::Newtonsoft::Json::Serialization::ResolverContractKey,TValue> : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field key offset 0x0
 __declspec(property(get=__get_key, put=__set_key)) ::Newtonsoft::Json::Serialization::ResolverContractKey  key;

/// @brief Field value offset 0x10
 __declspec(property(get=__get_value, put=__set_value)) TValue  value;

 __declspec(property(get=get_Key)) ::Newtonsoft::Json::Serialization::ResolverContractKey  Key;

 __declspec(property(get=get_Value)) TValue  Value;

constexpr void __set_key(::Newtonsoft::Json::Serialization::ResolverContractKey  value) ;

constexpr ::Newtonsoft::Json::Serialization::ResolverContractKey& __get_key() ;

constexpr ::Newtonsoft::Json::Serialization::ResolverContractKey const& __get_key() const;

constexpr void __set_value(TValue  value) ;

constexpr TValue& __get_value() ;

constexpr TValue const& __get_value() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::Newtonsoft::Json::Serialization::ResolverContractKey  key, TValue  value) ;

/// @brief Method get_Key addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::Newtonsoft::Json::Serialization::ResolverContractKey get_Key() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
inline TValue get_Value() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

/// @brief Method Deconstruct addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Deconstruct(ByRef<::Newtonsoft::Json::Serialization::ResolverContractKey>  key, ByRef<TValue>  value) ;

// Ctor Parameters [CppParam { name: "key", ty: "::Newtonsoft::Json::Serialization::ResolverContractKey", modifiers: "", def_value: None }, CppParam { name: "value", ty: "TValue", modifiers: "", def_value: None }]
constexpr KeyValuePair_2(::Newtonsoft::Json::Serialization::ResolverContractKey  key, TValue  value) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit KeyValuePair_2(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 KeyValuePair_2()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::KeyValuePair`2
namespace System::Collections::Generic {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TKey>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3841))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3841), inst: 1646 })
// CS Name: ::System.Collections.Generic::KeyValuePair`2<TKey,TValue>
struct CORDL_TYPE KeyValuePair_2<TKey,::UnityEngine::UIElements::__StyleComplexSelector__PseudoStateData> : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field key offset 0x0
 __declspec(property(get=__get_key, put=__set_key)) TKey  key;

/// @brief Field value offset 0x8
 __declspec(property(get=__get_value, put=__set_value)) ::UnityEngine::UIElements::__StyleComplexSelector__PseudoStateData  value;

 __declspec(property(get=get_Key)) TKey  Key;

 __declspec(property(get=get_Value)) ::UnityEngine::UIElements::__StyleComplexSelector__PseudoStateData  Value;

constexpr void __set_key(TKey  value) ;

constexpr TKey& __get_key() ;

constexpr TKey const& __get_key() const;

constexpr void __set_value(::UnityEngine::UIElements::__StyleComplexSelector__PseudoStateData  value) ;

constexpr ::UnityEngine::UIElements::__StyleComplexSelector__PseudoStateData& __get_value() ;

constexpr ::UnityEngine::UIElements::__StyleComplexSelector__PseudoStateData const& __get_value() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(TKey  key, ::UnityEngine::UIElements::__StyleComplexSelector__PseudoStateData  value) ;

/// @brief Method get_Key addr 0x0 size 0xffffffffffffffff virtual false final false
inline TKey get_Key() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::UIElements::__StyleComplexSelector__PseudoStateData get_Value() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

/// @brief Method Deconstruct addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Deconstruct(ByRef<TKey>  key, ByRef<::UnityEngine::UIElements::__StyleComplexSelector__PseudoStateData>  value) ;

// Ctor Parameters [CppParam { name: "key", ty: "TKey", modifiers: "", def_value: None }, CppParam { name: "value", ty: "::UnityEngine::UIElements::__StyleComplexSelector__PseudoStateData", modifiers: "", def_value: None }]
constexpr KeyValuePair_2(TKey  key, ::UnityEngine::UIElements::__StyleComplexSelector__PseudoStateData  value) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit KeyValuePair_2(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 KeyValuePair_2()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::KeyValuePair`2
namespace System::Collections::Generic {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TKey>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3841))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3841), inst: 1645 })
// CS Name: ::System.Collections.Generic::KeyValuePair`2<TKey,TValue>
struct CORDL_TYPE KeyValuePair_2<TKey,::GlobalNamespace::__SongPackMasksModel__LocalizedText> : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field key offset 0x0
 __declspec(property(get=__get_key, put=__set_key)) TKey  key;

/// @brief Field value offset 0x8
 __declspec(property(get=__get_value, put=__set_value)) ::GlobalNamespace::__SongPackMasksModel__LocalizedText  value;

 __declspec(property(get=get_Key)) TKey  Key;

 __declspec(property(get=get_Value)) ::GlobalNamespace::__SongPackMasksModel__LocalizedText  Value;

constexpr void __set_key(TKey  value) ;

constexpr TKey& __get_key() ;

constexpr TKey const& __get_key() const;

constexpr void __set_value(::GlobalNamespace::__SongPackMasksModel__LocalizedText  value) ;

constexpr ::GlobalNamespace::__SongPackMasksModel__LocalizedText& __get_value() ;

constexpr ::GlobalNamespace::__SongPackMasksModel__LocalizedText const& __get_value() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(TKey  key, ::GlobalNamespace::__SongPackMasksModel__LocalizedText  value) ;

/// @brief Method get_Key addr 0x0 size 0xffffffffffffffff virtual false final false
inline TKey get_Key() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::GlobalNamespace::__SongPackMasksModel__LocalizedText get_Value() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

/// @brief Method Deconstruct addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Deconstruct(ByRef<TKey>  key, ByRef<::GlobalNamespace::__SongPackMasksModel__LocalizedText>  value) ;

// Ctor Parameters [CppParam { name: "key", ty: "TKey", modifiers: "", def_value: None }, CppParam { name: "value", ty: "::GlobalNamespace::__SongPackMasksModel__LocalizedText", modifiers: "", def_value: None }]
constexpr KeyValuePair_2(TKey  key, ::GlobalNamespace::__SongPackMasksModel__LocalizedText  value) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit KeyValuePair_2(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 KeyValuePair_2()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::KeyValuePair`2
namespace System::Collections::Generic {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TKey>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3841))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3841), inst: 1644 })
// CS Name: ::System.Collections.Generic::KeyValuePair`2<TKey,TValue>
struct CORDL_TYPE KeyValuePair_2<TKey,::GlobalNamespace::__OVRPassthroughLayer__PassthroughMeshInstance> : public ::bs_hook::ValueTypeWrapper<0x60> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x60};

/// @brief Field key offset 0x0
 __declspec(property(get=__get_key, put=__set_key)) TKey  key;

/// @brief Field value offset 0x8
 __declspec(property(get=__get_value, put=__set_value)) ::GlobalNamespace::__OVRPassthroughLayer__PassthroughMeshInstance  value;

 __declspec(property(get=get_Key)) TKey  Key;

 __declspec(property(get=get_Value)) ::GlobalNamespace::__OVRPassthroughLayer__PassthroughMeshInstance  Value;

constexpr void __set_key(TKey  value) ;

constexpr TKey& __get_key() ;

constexpr TKey const& __get_key() const;

constexpr void __set_value(::GlobalNamespace::__OVRPassthroughLayer__PassthroughMeshInstance  value) ;

constexpr ::GlobalNamespace::__OVRPassthroughLayer__PassthroughMeshInstance& __get_value() ;

constexpr ::GlobalNamespace::__OVRPassthroughLayer__PassthroughMeshInstance const& __get_value() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(TKey  key, ::GlobalNamespace::__OVRPassthroughLayer__PassthroughMeshInstance  value) ;

/// @brief Method get_Key addr 0x0 size 0xffffffffffffffff virtual false final false
inline TKey get_Key() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::GlobalNamespace::__OVRPassthroughLayer__PassthroughMeshInstance get_Value() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

/// @brief Method Deconstruct addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Deconstruct(ByRef<TKey>  key, ByRef<::GlobalNamespace::__OVRPassthroughLayer__PassthroughMeshInstance>  value) ;

// Ctor Parameters [CppParam { name: "key", ty: "TKey", modifiers: "", def_value: None }, CppParam { name: "value", ty: "::GlobalNamespace::__OVRPassthroughLayer__PassthroughMeshInstance", modifiers: "", def_value: None }]
constexpr KeyValuePair_2(TKey  key, ::GlobalNamespace::__OVRPassthroughLayer__PassthroughMeshInstance  value) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit KeyValuePair_2(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x60>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 KeyValuePair_2()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::KeyValuePair`2
namespace System::Collections::Generic {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TKey>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3841))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3841), inst: 1643 })
// CS Name: ::System.Collections.Generic::KeyValuePair`2<TKey,TValue>
struct CORDL_TYPE KeyValuePair_2<TKey,::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue> : public ::bs_hook::ValueTypeWrapper<0x50> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x50};

/// @brief Field key offset 0x0
 __declspec(property(get=__get_key, put=__set_key)) TKey  key;

/// @brief Field value offset 0x8
 __declspec(property(get=__get_value, put=__set_value)) ::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue  value;

 __declspec(property(get=get_Key)) TKey  Key;

 __declspec(property(get=get_Value)) ::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue  Value;

constexpr void __set_key(TKey  value) ;

constexpr TKey& __get_key() ;

constexpr TKey const& __get_key() const;

constexpr void __set_value(::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue  value) ;

constexpr ::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue& __get_value() ;

constexpr ::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue const& __get_value() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(TKey  key, ::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue  value) ;

/// @brief Method get_Key addr 0x0 size 0xffffffffffffffff virtual false final false
inline TKey get_Key() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue get_Value() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

/// @brief Method Deconstruct addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Deconstruct(ByRef<TKey>  key, ByRef<::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue>  value) ;

// Ctor Parameters [CppParam { name: "key", ty: "TKey", modifiers: "", def_value: None }, CppParam { name: "value", ty: "::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue", modifiers: "", def_value: None }]
constexpr KeyValuePair_2(TKey  key, ::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue  value) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit KeyValuePair_2(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x50>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 KeyValuePair_2()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::KeyValuePair`2
namespace System::Collections::Generic {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TKey>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3841))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3841), inst: 1642 })
// CS Name: ::System.Collections.Generic::KeyValuePair`2<TKey,TValue>
struct CORDL_TYPE KeyValuePair_2<TKey,::UnityEngine::InputSystem::UI::__InputSystemUIInputModule__InputActionReferenceState> : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field key offset 0x0
 __declspec(property(get=__get_key, put=__set_key)) TKey  key;

/// @brief Field value offset 0x8
 __declspec(property(get=__get_value, put=__set_value)) ::UnityEngine::InputSystem::UI::__InputSystemUIInputModule__InputActionReferenceState  value;

 __declspec(property(get=get_Key)) TKey  Key;

 __declspec(property(get=get_Value)) ::UnityEngine::InputSystem::UI::__InputSystemUIInputModule__InputActionReferenceState  Value;

constexpr void __set_key(TKey  value) ;

constexpr TKey& __get_key() ;

constexpr TKey const& __get_key() const;

constexpr void __set_value(::UnityEngine::InputSystem::UI::__InputSystemUIInputModule__InputActionReferenceState  value) ;

constexpr ::UnityEngine::InputSystem::UI::__InputSystemUIInputModule__InputActionReferenceState& __get_value() ;

constexpr ::UnityEngine::InputSystem::UI::__InputSystemUIInputModule__InputActionReferenceState const& __get_value() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(TKey  key, ::UnityEngine::InputSystem::UI::__InputSystemUIInputModule__InputActionReferenceState  value) ;

/// @brief Method get_Key addr 0x0 size 0xffffffffffffffff virtual false final false
inline TKey get_Key() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::InputSystem::UI::__InputSystemUIInputModule__InputActionReferenceState get_Value() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

/// @brief Method Deconstruct addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Deconstruct(ByRef<TKey>  key, ByRef<::UnityEngine::InputSystem::UI::__InputSystemUIInputModule__InputActionReferenceState>  value) ;

// Ctor Parameters [CppParam { name: "key", ty: "TKey", modifiers: "", def_value: None }, CppParam { name: "value", ty: "::UnityEngine::InputSystem::UI::__InputSystemUIInputModule__InputActionReferenceState", modifiers: "", def_value: None }]
constexpr KeyValuePair_2(TKey  key, ::UnityEngine::InputSystem::UI::__InputSystemUIInputModule__InputActionReferenceState  value) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit KeyValuePair_2(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 KeyValuePair_2()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::KeyValuePair`2
namespace System::Collections::Generic {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TKey>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3841))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3841), inst: 1641 })
// CS Name: ::System.Collections.Generic::KeyValuePair`2<TKey,TValue>
struct CORDL_TYPE KeyValuePair_2<TKey,::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem> : public ::bs_hook::ValueTypeWrapper<0xd8> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xd8};

/// @brief Field key offset 0x0
 __declspec(property(get=__get_key, put=__set_key)) TKey  key;

/// @brief Field value offset 0x8
 __declspec(property(get=__get_value, put=__set_value)) ::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem  value;

 __declspec(property(get=get_Key)) TKey  Key;

 __declspec(property(get=get_Value)) ::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem  Value;

constexpr void __set_key(TKey  value) ;

constexpr TKey& __get_key() ;

constexpr TKey const& __get_key() const;

constexpr void __set_value(::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem  value) ;

constexpr ::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem& __get_value() ;

constexpr ::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem const& __get_value() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(TKey  key, ::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem  value) ;

/// @brief Method get_Key addr 0x0 size 0xffffffffffffffff virtual false final false
inline TKey get_Key() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem get_Value() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

/// @brief Method Deconstruct addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Deconstruct(ByRef<TKey>  key, ByRef<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>  value) ;

// Ctor Parameters [CppParam { name: "key", ty: "TKey", modifiers: "", def_value: None }, CppParam { name: "value", ty: "::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem", modifiers: "", def_value: None }]
constexpr KeyValuePair_2(TKey  key, ::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem  value) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit KeyValuePair_2(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0xd8>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 KeyValuePair_2()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::KeyValuePair`2
namespace System::Collections::Generic {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TKey>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3841))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3841), inst: 1640 })
// CS Name: ::System.Collections.Generic::KeyValuePair`2<TKey,TValue>
struct CORDL_TYPE KeyValuePair_2<TKey,::GlobalNamespace::__BeatmapLevelDataLoader__AssetBundleLevelInfo> : public ::bs_hook::ValueTypeWrapper<0x20> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field key offset 0x0
 __declspec(property(get=__get_key, put=__set_key)) TKey  key;

/// @brief Field value offset 0x8
 __declspec(property(get=__get_value, put=__set_value)) ::GlobalNamespace::__BeatmapLevelDataLoader__AssetBundleLevelInfo  value;

 __declspec(property(get=get_Key)) TKey  Key;

 __declspec(property(get=get_Value)) ::GlobalNamespace::__BeatmapLevelDataLoader__AssetBundleLevelInfo  Value;

constexpr void __set_key(TKey  value) ;

constexpr TKey& __get_key() ;

constexpr TKey const& __get_key() const;

constexpr void __set_value(::GlobalNamespace::__BeatmapLevelDataLoader__AssetBundleLevelInfo  value) ;

constexpr ::GlobalNamespace::__BeatmapLevelDataLoader__AssetBundleLevelInfo& __get_value() ;

constexpr ::GlobalNamespace::__BeatmapLevelDataLoader__AssetBundleLevelInfo const& __get_value() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(TKey  key, ::GlobalNamespace::__BeatmapLevelDataLoader__AssetBundleLevelInfo  value) ;

/// @brief Method get_Key addr 0x0 size 0xffffffffffffffff virtual false final false
inline TKey get_Key() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::GlobalNamespace::__BeatmapLevelDataLoader__AssetBundleLevelInfo get_Value() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

/// @brief Method Deconstruct addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Deconstruct(ByRef<TKey>  key, ByRef<::GlobalNamespace::__BeatmapLevelDataLoader__AssetBundleLevelInfo>  value) ;

// Ctor Parameters [CppParam { name: "key", ty: "TKey", modifiers: "", def_value: None }, CppParam { name: "value", ty: "::GlobalNamespace::__BeatmapLevelDataLoader__AssetBundleLevelInfo", modifiers: "", def_value: None }]
constexpr KeyValuePair_2(TKey  key, ::GlobalNamespace::__BeatmapLevelDataLoader__AssetBundleLevelInfo  value) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit KeyValuePair_2(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x20>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 KeyValuePair_2()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::KeyValuePair`2
namespace System::Collections::Generic {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TKey>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3841))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3841), inst: 1639 })
// CS Name: ::System.Collections.Generic::KeyValuePair`2<TKey,TValue>
struct CORDL_TYPE KeyValuePair_2<TKey,::UnityEngine::Vector2> : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field key offset 0x0
 __declspec(property(get=__get_key, put=__set_key)) TKey  key;

/// @brief Field value offset 0x8
 __declspec(property(get=__get_value, put=__set_value)) ::UnityEngine::Vector2  value;

 __declspec(property(get=get_Key)) TKey  Key;

 __declspec(property(get=get_Value)) ::UnityEngine::Vector2  Value;

constexpr void __set_key(TKey  value) ;

constexpr TKey& __get_key() ;

constexpr TKey const& __get_key() const;

constexpr void __set_value(::UnityEngine::Vector2  value) ;

constexpr ::UnityEngine::Vector2& __get_value() ;

constexpr ::UnityEngine::Vector2 const& __get_value() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(TKey  key, ::UnityEngine::Vector2  value) ;

/// @brief Method get_Key addr 0x0 size 0xffffffffffffffff virtual false final false
inline TKey get_Key() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::Vector2 get_Value() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

/// @brief Method Deconstruct addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Deconstruct(ByRef<TKey>  key, ByRef<::UnityEngine::Vector2>  value) ;

// Ctor Parameters [CppParam { name: "key", ty: "TKey", modifiers: "", def_value: None }, CppParam { name: "value", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }]
constexpr KeyValuePair_2(TKey  key, ::UnityEngine::Vector2  value) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit KeyValuePair_2(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 KeyValuePair_2()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::KeyValuePair`2
namespace System::Collections::Generic {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TKey>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3841))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3841), inst: 1638 })
// CS Name: ::System.Collections.Generic::KeyValuePair`2<TKey,TValue>
struct CORDL_TYPE KeyValuePair_2<TKey,uint32_t> : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field key offset 0x0
 __declspec(property(get=__get_key, put=__set_key)) TKey  key;

/// @brief Field value offset 0x8
 __declspec(property(get=__get_value, put=__set_value)) uint32_t  value;

 __declspec(property(get=get_Key)) TKey  Key;

 __declspec(property(get=get_Value)) uint32_t  Value;

constexpr void __set_key(TKey  value) ;

constexpr TKey& __get_key() ;

constexpr TKey const& __get_key() const;

constexpr void __set_value(uint32_t  value) ;

constexpr uint32_t& __get_value() ;

constexpr uint32_t const& __get_value() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(TKey  key, uint32_t  value) ;

/// @brief Method get_Key addr 0x0 size 0xffffffffffffffff virtual false final false
inline TKey get_Key() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
inline uint32_t get_Value() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

/// @brief Method Deconstruct addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Deconstruct(ByRef<TKey>  key, ByRef<uint32_t>  value) ;

// Ctor Parameters [CppParam { name: "key", ty: "TKey", modifiers: "", def_value: None }, CppParam { name: "value", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr KeyValuePair_2(TKey  key, uint32_t  value) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit KeyValuePair_2(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 KeyValuePair_2()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::KeyValuePair`2
namespace System::Collections::Generic {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TKey>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3841))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3841), inst: 1637 })
// CS Name: ::System.Collections.Generic::KeyValuePair`2<TKey,TValue>
struct CORDL_TYPE KeyValuePair_2<TKey,::UnityEngine::UIElements::TextureId> : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field key offset 0x0
 __declspec(property(get=__get_key, put=__set_key)) TKey  key;

/// @brief Field value offset 0x8
 __declspec(property(get=__get_value, put=__set_value)) ::UnityEngine::UIElements::TextureId  value;

 __declspec(property(get=get_Key)) TKey  Key;

 __declspec(property(get=get_Value)) ::UnityEngine::UIElements::TextureId  Value;

constexpr void __set_key(TKey  value) ;

constexpr TKey& __get_key() ;

constexpr TKey const& __get_key() const;

constexpr void __set_value(::UnityEngine::UIElements::TextureId  value) ;

constexpr ::UnityEngine::UIElements::TextureId& __get_value() ;

constexpr ::UnityEngine::UIElements::TextureId const& __get_value() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(TKey  key, ::UnityEngine::UIElements::TextureId  value) ;

/// @brief Method get_Key addr 0x0 size 0xffffffffffffffff virtual false final false
inline TKey get_Key() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::UIElements::TextureId get_Value() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

/// @brief Method Deconstruct addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Deconstruct(ByRef<TKey>  key, ByRef<::UnityEngine::UIElements::TextureId>  value) ;

// Ctor Parameters [CppParam { name: "key", ty: "TKey", modifiers: "", def_value: None }, CppParam { name: "value", ty: "::UnityEngine::UIElements::TextureId", modifiers: "", def_value: None }]
constexpr KeyValuePair_2(TKey  key, ::UnityEngine::UIElements::TextureId  value) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit KeyValuePair_2(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 KeyValuePair_2()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::KeyValuePair`2
namespace System::Collections::Generic {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TKey>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3841))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3841), inst: 1636 })
// CS Name: ::System.Collections.Generic::KeyValuePair`2<TKey,TValue>
struct CORDL_TYPE KeyValuePair_2<TKey,::UnityEngine::UIElements::StyleSheets::StylePropertyValue> : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field key offset 0x0
 __declspec(property(get=__get_key, put=__set_key)) TKey  key;

/// @brief Field value offset 0x8
 __declspec(property(get=__get_value, put=__set_value)) ::UnityEngine::UIElements::StyleSheets::StylePropertyValue  value;

 __declspec(property(get=get_Key)) TKey  Key;

 __declspec(property(get=get_Value)) ::UnityEngine::UIElements::StyleSheets::StylePropertyValue  Value;

constexpr void __set_key(TKey  value) ;

constexpr TKey& __get_key() ;

constexpr TKey const& __get_key() const;

constexpr void __set_value(::UnityEngine::UIElements::StyleSheets::StylePropertyValue  value) ;

constexpr ::UnityEngine::UIElements::StyleSheets::StylePropertyValue& __get_value() ;

constexpr ::UnityEngine::UIElements::StyleSheets::StylePropertyValue const& __get_value() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(TKey  key, ::UnityEngine::UIElements::StyleSheets::StylePropertyValue  value) ;

/// @brief Method get_Key addr 0x0 size 0xffffffffffffffff virtual false final false
inline TKey get_Key() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::UIElements::StyleSheets::StylePropertyValue get_Value() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

/// @brief Method Deconstruct addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Deconstruct(ByRef<TKey>  key, ByRef<::UnityEngine::UIElements::StyleSheets::StylePropertyValue>  value) ;

// Ctor Parameters [CppParam { name: "key", ty: "TKey", modifiers: "", def_value: None }, CppParam { name: "value", ty: "::UnityEngine::UIElements::StyleSheets::StylePropertyValue", modifiers: "", def_value: None }]
constexpr KeyValuePair_2(TKey  key, ::UnityEngine::UIElements::StyleSheets::StylePropertyValue  value) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit KeyValuePair_2(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 KeyValuePair_2()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::KeyValuePair`2
namespace System::Collections::Generic {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TKey>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3841))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3841), inst: 1635 })
// CS Name: ::System.Collections.Generic::KeyValuePair`2<TKey,TValue>
struct CORDL_TYPE KeyValuePair_2<TKey,::GlobalNamespace::SongPackMask> : public ::bs_hook::ValueTypeWrapper<0x28> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field key offset 0x0
 __declspec(property(get=__get_key, put=__set_key)) TKey  key;

/// @brief Field value offset 0x8
 __declspec(property(get=__get_value, put=__set_value)) ::GlobalNamespace::SongPackMask  value;

 __declspec(property(get=get_Key)) TKey  Key;

 __declspec(property(get=get_Value)) ::GlobalNamespace::SongPackMask  Value;

constexpr void __set_key(TKey  value) ;

constexpr TKey& __get_key() ;

constexpr TKey const& __get_key() const;

constexpr void __set_value(::GlobalNamespace::SongPackMask  value) ;

constexpr ::GlobalNamespace::SongPackMask& __get_value() ;

constexpr ::GlobalNamespace::SongPackMask const& __get_value() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(TKey  key, ::GlobalNamespace::SongPackMask  value) ;

/// @brief Method get_Key addr 0x0 size 0xffffffffffffffff virtual false final false
inline TKey get_Key() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::GlobalNamespace::SongPackMask get_Value() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

/// @brief Method Deconstruct addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Deconstruct(ByRef<TKey>  key, ByRef<::GlobalNamespace::SongPackMask>  value) ;

// Ctor Parameters [CppParam { name: "key", ty: "TKey", modifiers: "", def_value: None }, CppParam { name: "value", ty: "::GlobalNamespace::SongPackMask", modifiers: "", def_value: None }]
constexpr KeyValuePair_2(TKey  key, ::GlobalNamespace::SongPackMask  value) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit KeyValuePair_2(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x28>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 KeyValuePair_2()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::KeyValuePair`2
namespace System::Collections::Generic {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TKey>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3841))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3841), inst: 1634 })
// CS Name: ::System.Collections.Generic::KeyValuePair`2<TKey,TValue>
struct CORDL_TYPE KeyValuePair_2<TKey,float_t> : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field key offset 0x0
 __declspec(property(get=__get_key, put=__set_key)) TKey  key;

/// @brief Field value offset 0x8
 __declspec(property(get=__get_value, put=__set_value)) float_t  value;

 __declspec(property(get=get_Key)) TKey  Key;

 __declspec(property(get=get_Value)) float_t  Value;

constexpr void __set_key(TKey  value) ;

constexpr TKey& __get_key() ;

constexpr TKey const& __get_key() const;

constexpr void __set_value(float_t  value) ;

constexpr float_t& __get_value() ;

constexpr float_t const& __get_value() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(TKey  key, float_t  value) ;

/// @brief Method get_Key addr 0x0 size 0xffffffffffffffff virtual false final false
inline TKey get_Key() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
inline float_t get_Value() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

/// @brief Method Deconstruct addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Deconstruct(ByRef<TKey>  key, ByRef<float_t>  value) ;

// Ctor Parameters [CppParam { name: "key", ty: "TKey", modifiers: "", def_value: None }, CppParam { name: "value", ty: "float_t", modifiers: "", def_value: None }]
constexpr KeyValuePair_2(TKey  key, float_t  value) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit KeyValuePair_2(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 KeyValuePair_2()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::KeyValuePair`2
namespace System::Collections::Generic {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TKey>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3841))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3841), inst: 1633 })
// CS Name: ::System.Collections.Generic::KeyValuePair`2<TKey,TValue>
struct CORDL_TYPE KeyValuePair_2<TKey,::System::Resources::ResourceLocator> : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field key offset 0x0
 __declspec(property(get=__get_key, put=__set_key)) TKey  key;

/// @brief Field value offset 0x8
 __declspec(property(get=__get_value, put=__set_value)) ::System::Resources::ResourceLocator  value;

 __declspec(property(get=get_Key)) TKey  Key;

 __declspec(property(get=get_Value)) ::System::Resources::ResourceLocator  Value;

constexpr void __set_key(TKey  value) ;

constexpr TKey& __get_key() ;

constexpr TKey const& __get_key() const;

constexpr void __set_value(::System::Resources::ResourceLocator  value) ;

constexpr ::System::Resources::ResourceLocator& __get_value() ;

constexpr ::System::Resources::ResourceLocator const& __get_value() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(TKey  key, ::System::Resources::ResourceLocator  value) ;

/// @brief Method get_Key addr 0x0 size 0xffffffffffffffff virtual false final false
inline TKey get_Key() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Resources::ResourceLocator get_Value() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

/// @brief Method Deconstruct addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Deconstruct(ByRef<TKey>  key, ByRef<::System::Resources::ResourceLocator>  value) ;

// Ctor Parameters [CppParam { name: "key", ty: "TKey", modifiers: "", def_value: None }, CppParam { name: "value", ty: "::System::Resources::ResourceLocator", modifiers: "", def_value: None }]
constexpr KeyValuePair_2(TKey  key, ::System::Resources::ResourceLocator  value) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit KeyValuePair_2(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 KeyValuePair_2()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::KeyValuePair`2
namespace System::Collections::Generic {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TKey>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3841))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3841), inst: 1632 })
// CS Name: ::System.Collections.Generic::KeyValuePair`2<TKey,TValue>
struct CORDL_TYPE KeyValuePair_2<TKey,::UnityEngine::Playables::Playable> : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field key offset 0x0
 __declspec(property(get=__get_key, put=__set_key)) TKey  key;

/// @brief Field value offset 0x8
 __declspec(property(get=__get_value, put=__set_value)) ::UnityEngine::Playables::Playable  value;

 __declspec(property(get=get_Key)) TKey  Key;

 __declspec(property(get=get_Value)) ::UnityEngine::Playables::Playable  Value;

constexpr void __set_key(TKey  value) ;

constexpr TKey& __get_key() ;

constexpr TKey const& __get_key() const;

constexpr void __set_value(::UnityEngine::Playables::Playable  value) ;

constexpr ::UnityEngine::Playables::Playable& __get_value() ;

constexpr ::UnityEngine::Playables::Playable const& __get_value() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(TKey  key, ::UnityEngine::Playables::Playable  value) ;

/// @brief Method get_Key addr 0x0 size 0xffffffffffffffff virtual false final false
inline TKey get_Key() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::Playables::Playable get_Value() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

/// @brief Method Deconstruct addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Deconstruct(ByRef<TKey>  key, ByRef<::UnityEngine::Playables::Playable>  value) ;

// Ctor Parameters [CppParam { name: "key", ty: "TKey", modifiers: "", def_value: None }, CppParam { name: "value", ty: "::UnityEngine::Playables::Playable", modifiers: "", def_value: None }]
constexpr KeyValuePair_2(TKey  key, ::UnityEngine::Playables::Playable  value) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit KeyValuePair_2(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 KeyValuePair_2()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::KeyValuePair`2
namespace System::Collections::Generic {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TKey>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3841))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3841), inst: 1631 })
// CS Name: ::System.Collections.Generic::KeyValuePair`2<TKey,TValue>
struct CORDL_TYPE KeyValuePair_2<TKey,int64_t> : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field key offset 0x0
 __declspec(property(get=__get_key, put=__set_key)) TKey  key;

/// @brief Field value offset 0x8
 __declspec(property(get=__get_value, put=__set_value)) int64_t  value;

 __declspec(property(get=get_Key)) TKey  Key;

 __declspec(property(get=get_Value)) int64_t  Value;

constexpr void __set_key(TKey  value) ;

constexpr TKey& __get_key() ;

constexpr TKey const& __get_key() const;

constexpr void __set_value(int64_t  value) ;

constexpr int64_t& __get_value() ;

constexpr int64_t const& __get_value() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(TKey  key, int64_t  value) ;

/// @brief Method get_Key addr 0x0 size 0xffffffffffffffff virtual false final false
inline TKey get_Key() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
inline int64_t get_Value() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

/// @brief Method Deconstruct addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Deconstruct(ByRef<TKey>  key, ByRef<int64_t>  value) ;

// Ctor Parameters [CppParam { name: "key", ty: "TKey", modifiers: "", def_value: None }, CppParam { name: "value", ty: "int64_t", modifiers: "", def_value: None }]
constexpr KeyValuePair_2(TKey  key, int64_t  value) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit KeyValuePair_2(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 KeyValuePair_2()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::KeyValuePair`2
namespace System::Collections::Generic {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TKey,::cordl_internals::is_or_is_backed_by<int32_t> TValue>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3841))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3841), inst: 1630 })
// CS Name: ::System.Collections.Generic::KeyValuePair`2<TKey,TValue>
struct CORDL_TYPE KeyValuePair_2<TKey,TValue> : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field key offset 0x0
 __declspec(property(get=__get_key, put=__set_key)) TKey  key;

/// @brief Field value offset 0x8
 __declspec(property(get=__get_value, put=__set_value)) TValue  value;

 __declspec(property(get=get_Key)) TKey  Key;

 __declspec(property(get=get_Value)) TValue  Value;

constexpr void __set_key(TKey  value) ;

constexpr TKey& __get_key() ;

constexpr TKey const& __get_key() const;

constexpr void __set_value(TValue  value) ;

constexpr TValue& __get_value() ;

constexpr TValue const& __get_value() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(TKey  key, TValue  value) ;

/// @brief Method get_Key addr 0x0 size 0xffffffffffffffff virtual false final false
inline TKey get_Key() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
inline TValue get_Value() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

/// @brief Method Deconstruct addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Deconstruct(ByRef<TKey>  key, ByRef<TValue>  value) ;

// Ctor Parameters [CppParam { name: "key", ty: "TKey", modifiers: "", def_value: None }, CppParam { name: "value", ty: "TValue", modifiers: "", def_value: None }]
constexpr KeyValuePair_2(TKey  key, TValue  value) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit KeyValuePair_2(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 KeyValuePair_2()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::KeyValuePair`2
namespace System::Collections::Generic {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TKey>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3841))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3841), inst: 1629 })
// CS Name: ::System.Collections.Generic::KeyValuePair`2<TKey,TValue>
struct CORDL_TYPE KeyValuePair_2<TKey,int32_t> : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field key offset 0x0
 __declspec(property(get=__get_key, put=__set_key)) TKey  key;

/// @brief Field value offset 0x8
 __declspec(property(get=__get_value, put=__set_value)) int32_t  value;

 __declspec(property(get=get_Key)) TKey  Key;

 __declspec(property(get=get_Value)) int32_t  Value;

constexpr void __set_key(TKey  value) ;

constexpr TKey& __get_key() ;

constexpr TKey const& __get_key() const;

constexpr void __set_value(int32_t  value) ;

constexpr int32_t& __get_value() ;

constexpr int32_t const& __get_value() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(TKey  key, int32_t  value) ;

/// @brief Method get_Key addr 0x0 size 0xffffffffffffffff virtual false final false
inline TKey get_Key() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t get_Value() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

/// @brief Method Deconstruct addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Deconstruct(ByRef<TKey>  key, ByRef<int32_t>  value) ;

// Ctor Parameters [CppParam { name: "key", ty: "TKey", modifiers: "", def_value: None }, CppParam { name: "value", ty: "int32_t", modifiers: "", def_value: None }]
constexpr KeyValuePair_2(TKey  key, int32_t  value) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit KeyValuePair_2(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 KeyValuePair_2()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::KeyValuePair`2
namespace System::Collections::Generic {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TKey>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3841))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3841), inst: 1628 })
// CS Name: ::System.Collections.Generic::KeyValuePair`2<TKey,TValue>
struct CORDL_TYPE KeyValuePair_2<TKey,::System::Guid> : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field key offset 0x0
 __declspec(property(get=__get_key, put=__set_key)) TKey  key;

/// @brief Field value offset 0x8
 __declspec(property(get=__get_value, put=__set_value)) ::System::Guid  value;

 __declspec(property(get=get_Key)) TKey  Key;

 __declspec(property(get=get_Value)) ::System::Guid  Value;

constexpr void __set_key(TKey  value) ;

constexpr TKey& __get_key() ;

constexpr TKey const& __get_key() const;

constexpr void __set_value(::System::Guid  value) ;

constexpr ::System::Guid& __get_value() ;

constexpr ::System::Guid const& __get_value() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(TKey  key, ::System::Guid  value) ;

/// @brief Method get_Key addr 0x0 size 0xffffffffffffffff virtual false final false
inline TKey get_Key() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Guid get_Value() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

/// @brief Method Deconstruct addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Deconstruct(ByRef<TKey>  key, ByRef<::System::Guid>  value) ;

// Ctor Parameters [CppParam { name: "key", ty: "TKey", modifiers: "", def_value: None }, CppParam { name: "value", ty: "::System::Guid", modifiers: "", def_value: None }]
constexpr KeyValuePair_2(TKey  key, ::System::Guid  value) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit KeyValuePair_2(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 KeyValuePair_2()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::KeyValuePair`2
namespace System::Collections::Generic {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TKey>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3841))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3841), inst: 1627 })
// CS Name: ::System.Collections.Generic::KeyValuePair`2<TKey,TValue>
struct CORDL_TYPE KeyValuePair_2<TKey,::UnityEngine::Color32> : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field key offset 0x0
 __declspec(property(get=__get_key, put=__set_key)) TKey  key;

/// @brief Field value offset 0x8
 __declspec(property(get=__get_value, put=__set_value)) ::UnityEngine::Color32  value;

 __declspec(property(get=get_Key)) TKey  Key;

 __declspec(property(get=get_Value)) ::UnityEngine::Color32  Value;

constexpr void __set_key(TKey  value) ;

constexpr TKey& __get_key() ;

constexpr TKey const& __get_key() const;

constexpr void __set_value(::UnityEngine::Color32  value) ;

constexpr ::UnityEngine::Color32& __get_value() ;

constexpr ::UnityEngine::Color32 const& __get_value() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(TKey  key, ::UnityEngine::Color32  value) ;

/// @brief Method get_Key addr 0x0 size 0xffffffffffffffff virtual false final false
inline TKey get_Key() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::Color32 get_Value() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

/// @brief Method Deconstruct addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Deconstruct(ByRef<TKey>  key, ByRef<::UnityEngine::Color32>  value) ;

// Ctor Parameters [CppParam { name: "key", ty: "TKey", modifiers: "", def_value: None }, CppParam { name: "value", ty: "::UnityEngine::Color32", modifiers: "", def_value: None }]
constexpr KeyValuePair_2(TKey  key, ::UnityEngine::Color32  value) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit KeyValuePair_2(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 KeyValuePair_2()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::KeyValuePair`2
namespace System::Collections::Generic {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TKey>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3841))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3841), inst: 1626 })
// CS Name: ::System.Collections.Generic::KeyValuePair`2<TKey,TValue>
struct CORDL_TYPE KeyValuePair_2<TKey,::UnityEngine::Color> : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field key offset 0x0
 __declspec(property(get=__get_key, put=__set_key)) TKey  key;

/// @brief Field value offset 0x8
 __declspec(property(get=__get_value, put=__set_value)) ::UnityEngine::Color  value;

 __declspec(property(get=get_Key)) TKey  Key;

 __declspec(property(get=get_Value)) ::UnityEngine::Color  Value;

constexpr void __set_key(TKey  value) ;

constexpr TKey& __get_key() ;

constexpr TKey const& __get_key() const;

constexpr void __set_value(::UnityEngine::Color  value) ;

constexpr ::UnityEngine::Color& __get_value() ;

constexpr ::UnityEngine::Color const& __get_value() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(TKey  key, ::UnityEngine::Color  value) ;

/// @brief Method get_Key addr 0x0 size 0xffffffffffffffff virtual false final false
inline TKey get_Key() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::Color get_Value() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

/// @brief Method Deconstruct addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Deconstruct(ByRef<TKey>  key, ByRef<::UnityEngine::Color>  value) ;

// Ctor Parameters [CppParam { name: "key", ty: "TKey", modifiers: "", def_value: None }, CppParam { name: "value", ty: "::UnityEngine::Color", modifiers: "", def_value: None }]
constexpr KeyValuePair_2(TKey  key, ::UnityEngine::Color  value) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit KeyValuePair_2(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 KeyValuePair_2()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::KeyValuePair`2
namespace System::Collections::Generic {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TKey>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3841))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3841), inst: 1625 })
// CS Name: ::System.Collections.Generic::KeyValuePair`2<TKey,TValue>
struct CORDL_TYPE KeyValuePair_2<TKey,uint8_t> : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field key offset 0x0
 __declspec(property(get=__get_key, put=__set_key)) TKey  key;

/// @brief Field value offset 0x8
 __declspec(property(get=__get_value, put=__set_value)) uint8_t  value;

 __declspec(property(get=get_Key)) TKey  Key;

 __declspec(property(get=get_Value)) uint8_t  Value;

constexpr void __set_key(TKey  value) ;

constexpr TKey& __get_key() ;

constexpr TKey const& __get_key() const;

constexpr void __set_value(uint8_t  value) ;

constexpr uint8_t& __get_value() ;

constexpr uint8_t const& __get_value() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(TKey  key, uint8_t  value) ;

/// @brief Method get_Key addr 0x0 size 0xffffffffffffffff virtual false final false
inline TKey get_Key() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
inline uint8_t get_Value() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

/// @brief Method Deconstruct addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Deconstruct(ByRef<TKey>  key, ByRef<uint8_t>  value) ;

// Ctor Parameters [CppParam { name: "key", ty: "TKey", modifiers: "", def_value: None }, CppParam { name: "value", ty: "uint8_t", modifiers: "", def_value: None }]
constexpr KeyValuePair_2(TKey  key, uint8_t  value) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit KeyValuePair_2(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 KeyValuePair_2()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::KeyValuePair`2
namespace System::Collections::Generic {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TKey>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3841))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3841), inst: 1624 })
// CS Name: ::System.Collections.Generic::KeyValuePair`2<TKey,TValue>
struct CORDL_TYPE KeyValuePair_2<TKey,bool> : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field key offset 0x0
 __declspec(property(get=__get_key, put=__set_key)) TKey  key;

/// @brief Field value offset 0x8
 __declspec(property(get=__get_value, put=__set_value)) bool  value;

 __declspec(property(get=get_Key)) TKey  Key;

 __declspec(property(get=get_Value)) bool  Value;

constexpr void __set_key(TKey  value) ;

constexpr TKey& __get_key() ;

constexpr TKey const& __get_key() const;

constexpr void __set_value(bool  value) ;

constexpr bool& __get_value() ;

constexpr bool const& __get_value() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(TKey  key, bool  value) ;

/// @brief Method get_Key addr 0x0 size 0xffffffffffffffff virtual false final false
inline TKey get_Key() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_Value() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

/// @brief Method Deconstruct addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Deconstruct(ByRef<TKey>  key, ByRef<bool>  value) ;

// Ctor Parameters [CppParam { name: "key", ty: "TKey", modifiers: "", def_value: None }, CppParam { name: "value", ty: "bool", modifiers: "", def_value: None }]
constexpr KeyValuePair_2(TKey  key, bool  value) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit KeyValuePair_2(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 KeyValuePair_2()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::KeyValuePair`2
namespace System::Collections::Generic {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type T1_cordlgen_1,::il2cpp_utils::il2cpp_reference_type T2_cordlgen_2>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3841))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3841), inst: 1623 })
// CS Name: ::System.Collections.Generic::KeyValuePair`2<TKey,TValue>
struct CORDL_TYPE KeyValuePair_2<TKey,::System::ValueTuple_2<T1_cordlgen_1,T2_cordlgen_2>> : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field key offset 0x0
 __declspec(property(get=__get_key, put=__set_key)) TKey  key;

/// @brief Field value offset 0x8
 __declspec(property(get=__get_value, put=__set_value)) ::System::ValueTuple_2<T1_cordlgen_1,T2_cordlgen_2>  value;

 __declspec(property(get=get_Key)) TKey  Key;

 __declspec(property(get=get_Value)) ::System::ValueTuple_2<T1_cordlgen_1,T2_cordlgen_2>  Value;

constexpr void __set_key(TKey  value) ;

constexpr TKey& __get_key() ;

constexpr TKey const& __get_key() const;

constexpr void __set_value(::System::ValueTuple_2<T1_cordlgen_1,T2_cordlgen_2>  value) ;

constexpr ::System::ValueTuple_2<T1_cordlgen_1,T2_cordlgen_2>& __get_value() ;

constexpr ::System::ValueTuple_2<T1_cordlgen_1,T2_cordlgen_2> const& __get_value() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(TKey  key, ::System::ValueTuple_2<T1_cordlgen_1,T2_cordlgen_2>  value) ;

/// @brief Method get_Key addr 0x0 size 0xffffffffffffffff virtual false final false
inline TKey get_Key() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::ValueTuple_2<T1_cordlgen_1,T2_cordlgen_2> get_Value() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

/// @brief Method Deconstruct addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Deconstruct(ByRef<TKey>  key, ByRef<::System::ValueTuple_2<T1_cordlgen_1,T2_cordlgen_2>>  value) ;

// Ctor Parameters [CppParam { name: "key", ty: "TKey", modifiers: "", def_value: None }, CppParam { name: "value", ty: "::System::ValueTuple_2<T1_cordlgen_1,T2_cordlgen_2>", modifiers: "", def_value: None }]
constexpr KeyValuePair_2(TKey  key, ::System::ValueTuple_2<T1_cordlgen_1,T2_cordlgen_2>  value) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit KeyValuePair_2(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 KeyValuePair_2()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::KeyValuePair`2
namespace System::Collections::Generic {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TObject_cordlgen_1>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3841))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3841), inst: 1622 })
// CS Name: ::System.Collections.Generic::KeyValuePair`2<TKey,TValue>
struct CORDL_TYPE KeyValuePair_2<TKey,::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject_cordlgen_1>> : public ::bs_hook::ValueTypeWrapper<0x28> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field key offset 0x0
 __declspec(property(get=__get_key, put=__set_key)) TKey  key;

/// @brief Field value offset 0x8
 __declspec(property(get=__get_value, put=__set_value)) ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject_cordlgen_1>  value;

 __declspec(property(get=get_Key)) TKey  Key;

 __declspec(property(get=get_Value)) ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject_cordlgen_1>  Value;

constexpr void __set_key(TKey  value) ;

constexpr TKey& __get_key() ;

constexpr TKey const& __get_key() const;

constexpr void __set_value(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject_cordlgen_1>  value) ;

constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject_cordlgen_1>& __get_value() ;

constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject_cordlgen_1> const& __get_value() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(TKey  key, ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject_cordlgen_1>  value) ;

/// @brief Method get_Key addr 0x0 size 0xffffffffffffffff virtual false final false
inline TKey get_Key() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject_cordlgen_1> get_Value() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

/// @brief Method Deconstruct addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Deconstruct(ByRef<TKey>  key, ByRef<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject_cordlgen_1>>  value) ;

// Ctor Parameters [CppParam { name: "key", ty: "TKey", modifiers: "", def_value: None }, CppParam { name: "value", ty: "::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject_cordlgen_1>", modifiers: "", def_value: None }]
constexpr KeyValuePair_2(TKey  key, ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject_cordlgen_1>  value) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit KeyValuePair_2(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x28>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 KeyValuePair_2()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::KeyValuePair`2
namespace System::Collections::Generic {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TValue>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3841))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3841), inst: 1621 })
// CS Name: ::System.Collections.Generic::KeyValuePair`2<TKey,TValue>
struct CORDL_TYPE KeyValuePair_2<::GlobalNamespace::LevelKey,TValue> : public ::bs_hook::ValueTypeWrapper<0x20> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field key offset 0x0
 __declspec(property(get=__get_key, put=__set_key)) ::GlobalNamespace::LevelKey  key;

/// @brief Field value offset 0x18
 __declspec(property(get=__get_value, put=__set_value)) TValue  value;

 __declspec(property(get=get_Key)) ::GlobalNamespace::LevelKey  Key;

 __declspec(property(get=get_Value)) TValue  Value;

constexpr void __set_key(::GlobalNamespace::LevelKey  value) ;

constexpr ::GlobalNamespace::LevelKey& __get_key() ;

constexpr ::GlobalNamespace::LevelKey const& __get_key() const;

constexpr void __set_value(TValue  value) ;

constexpr TValue& __get_value() ;

constexpr TValue const& __get_value() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::GlobalNamespace::LevelKey  key, TValue  value) ;

/// @brief Method get_Key addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::GlobalNamespace::LevelKey get_Key() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
inline TValue get_Value() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

/// @brief Method Deconstruct addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Deconstruct(ByRef<::GlobalNamespace::LevelKey>  key, ByRef<TValue>  value) ;

// Ctor Parameters [CppParam { name: "key", ty: "::GlobalNamespace::LevelKey", modifiers: "", def_value: None }, CppParam { name: "value", ty: "TValue", modifiers: "", def_value: None }]
constexpr KeyValuePair_2(::GlobalNamespace::LevelKey  key, TValue  value) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit KeyValuePair_2(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x20>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 KeyValuePair_2()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::KeyValuePair`2
namespace System::Collections::Generic {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TValue>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3841))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3841), inst: 1620 })
// CS Name: ::System.Collections.Generic::KeyValuePair`2<TKey,TValue>
struct CORDL_TYPE KeyValuePair_2<::UnityEngine::InputSystem::Utilities::InternedString,TValue> : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field key offset 0x0
 __declspec(property(get=__get_key, put=__set_key)) ::UnityEngine::InputSystem::Utilities::InternedString  key;

/// @brief Field value offset 0x10
 __declspec(property(get=__get_value, put=__set_value)) TValue  value;

 __declspec(property(get=get_Key)) ::UnityEngine::InputSystem::Utilities::InternedString  Key;

 __declspec(property(get=get_Value)) TValue  Value;

constexpr void __set_key(::UnityEngine::InputSystem::Utilities::InternedString  value) ;

constexpr ::UnityEngine::InputSystem::Utilities::InternedString& __get_key() ;

constexpr ::UnityEngine::InputSystem::Utilities::InternedString const& __get_key() const;

constexpr void __set_value(TValue  value) ;

constexpr TValue& __get_value() ;

constexpr TValue const& __get_value() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::UnityEngine::InputSystem::Utilities::InternedString  key, TValue  value) ;

/// @brief Method get_Key addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::InputSystem::Utilities::InternedString get_Key() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
inline TValue get_Value() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

/// @brief Method Deconstruct addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Deconstruct(ByRef<::UnityEngine::InputSystem::Utilities::InternedString>  key, ByRef<TValue>  value) ;

// Ctor Parameters [CppParam { name: "key", ty: "::UnityEngine::InputSystem::Utilities::InternedString", modifiers: "", def_value: None }, CppParam { name: "value", ty: "TValue", modifiers: "", def_value: None }]
constexpr KeyValuePair_2(::UnityEngine::InputSystem::Utilities::InternedString  key, TValue  value) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit KeyValuePair_2(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 KeyValuePair_2()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::KeyValuePair`2
namespace System::Collections::Generic {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TValue>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3841))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3841), inst: 1619 })
// CS Name: ::System.Collections.Generic::KeyValuePair`2<TKey,TValue>
struct CORDL_TYPE KeyValuePair_2<::UnityEngine::ProBuilder::IntVec3,TValue> : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field key offset 0x0
 __declspec(property(get=__get_key, put=__set_key)) ::UnityEngine::ProBuilder::IntVec3  key;

/// @brief Field value offset 0x10
 __declspec(property(get=__get_value, put=__set_value)) TValue  value;

 __declspec(property(get=get_Key)) ::UnityEngine::ProBuilder::IntVec3  Key;

 __declspec(property(get=get_Value)) TValue  Value;

constexpr void __set_key(::UnityEngine::ProBuilder::IntVec3  value) ;

constexpr ::UnityEngine::ProBuilder::IntVec3& __get_key() ;

constexpr ::UnityEngine::ProBuilder::IntVec3 const& __get_key() const;

constexpr void __set_value(TValue  value) ;

constexpr TValue& __get_value() ;

constexpr TValue const& __get_value() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::UnityEngine::ProBuilder::IntVec3  key, TValue  value) ;

/// @brief Method get_Key addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::ProBuilder::IntVec3 get_Key() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
inline TValue get_Value() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

/// @brief Method Deconstruct addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Deconstruct(ByRef<::UnityEngine::ProBuilder::IntVec3>  key, ByRef<TValue>  value) ;

// Ctor Parameters [CppParam { name: "key", ty: "::UnityEngine::ProBuilder::IntVec3", modifiers: "", def_value: None }, CppParam { name: "value", ty: "TValue", modifiers: "", def_value: None }]
constexpr KeyValuePair_2(::UnityEngine::ProBuilder::IntVec3  key, TValue  value) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit KeyValuePair_2(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 KeyValuePair_2()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::KeyValuePair`2
namespace System::Collections::Generic {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TValue>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3841))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3841), inst: 1618 })
// CS Name: ::System.Collections.Generic::KeyValuePair`2<TKey,TValue>
struct CORDL_TYPE KeyValuePair_2<int64_t,TValue> : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field key offset 0x0
 __declspec(property(get=__get_key, put=__set_key)) int64_t  key;

/// @brief Field value offset 0x8
 __declspec(property(get=__get_value, put=__set_value)) TValue  value;

 __declspec(property(get=get_Key)) int64_t  Key;

 __declspec(property(get=get_Value)) TValue  Value;

constexpr void __set_key(int64_t  value) ;

constexpr int64_t& __get_key() ;

constexpr int64_t const& __get_key() const;

constexpr void __set_value(TValue  value) ;

constexpr TValue& __get_value() ;

constexpr TValue const& __get_value() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(int64_t  key, TValue  value) ;

/// @brief Method get_Key addr 0x0 size 0xffffffffffffffff virtual false final false
inline int64_t get_Key() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
inline TValue get_Value() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

/// @brief Method Deconstruct addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Deconstruct(ByRef<int64_t>  key, ByRef<TValue>  value) ;

// Ctor Parameters [CppParam { name: "key", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "value", ty: "TValue", modifiers: "", def_value: None }]
constexpr KeyValuePair_2(int64_t  key, TValue  value) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit KeyValuePair_2(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 KeyValuePair_2()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::KeyValuePair`2
namespace System::Collections::Generic {
// cpp template
template<::cordl_internals::is_or_is_backed_by<int32_t> TKey>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3841))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3841), inst: 1617 })
// CS Name: ::System.Collections.Generic::KeyValuePair`2<TKey,TValue>
struct CORDL_TYPE KeyValuePair_2<TKey,::System::TimeSpan> : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field key offset 0x0
 __declspec(property(get=__get_key, put=__set_key)) TKey  key;

/// @brief Field value offset 0x8
 __declspec(property(get=__get_value, put=__set_value)) ::System::TimeSpan  value;

 __declspec(property(get=get_Key)) TKey  Key;

 __declspec(property(get=get_Value)) ::System::TimeSpan  Value;

constexpr void __set_key(TKey  value) ;

constexpr TKey& __get_key() ;

constexpr TKey const& __get_key() const;

constexpr void __set_value(::System::TimeSpan  value) ;

constexpr ::System::TimeSpan& __get_value() ;

constexpr ::System::TimeSpan const& __get_value() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(TKey  key, ::System::TimeSpan  value) ;

/// @brief Method get_Key addr 0x0 size 0xffffffffffffffff virtual false final false
inline TKey get_Key() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::TimeSpan get_Value() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

/// @brief Method Deconstruct addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Deconstruct(ByRef<TKey>  key, ByRef<::System::TimeSpan>  value) ;

// Ctor Parameters [CppParam { name: "key", ty: "TKey", modifiers: "", def_value: None }, CppParam { name: "value", ty: "::System::TimeSpan", modifiers: "", def_value: None }]
constexpr KeyValuePair_2(TKey  key, ::System::TimeSpan  value) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit KeyValuePair_2(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 KeyValuePair_2()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::KeyValuePair`2
namespace System::Collections::Generic {
// cpp template
template<::cordl_internals::is_or_is_backed_by<int32_t> TKey>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3841))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3841), inst: 1616 })
// CS Name: ::System.Collections.Generic::KeyValuePair`2<TKey,TValue>
struct CORDL_TYPE KeyValuePair_2<TKey,float_t> : public ::bs_hook::ValueTypeWrapper<0x8> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field key offset 0x0
 __declspec(property(get=__get_key, put=__set_key)) TKey  key;

/// @brief Field value offset 0x4
 __declspec(property(get=__get_value, put=__set_value)) float_t  value;

 __declspec(property(get=get_Key)) TKey  Key;

 __declspec(property(get=get_Value)) float_t  Value;

constexpr void __set_key(TKey  value) ;

constexpr TKey& __get_key() ;

constexpr TKey const& __get_key() const;

constexpr void __set_value(float_t  value) ;

constexpr float_t& __get_value() ;

constexpr float_t const& __get_value() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(TKey  key, float_t  value) ;

/// @brief Method get_Key addr 0x0 size 0xffffffffffffffff virtual false final false
inline TKey get_Key() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
inline float_t get_Value() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

/// @brief Method Deconstruct addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Deconstruct(ByRef<TKey>  key, ByRef<float_t>  value) ;

// Ctor Parameters [CppParam { name: "key", ty: "TKey", modifiers: "", def_value: None }, CppParam { name: "value", ty: "float_t", modifiers: "", def_value: None }]
constexpr KeyValuePair_2(TKey  key, float_t  value) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit KeyValuePair_2(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x8>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 KeyValuePair_2()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::KeyValuePair`2
namespace System::Collections::Generic {
// cpp template
template<::cordl_internals::is_or_is_backed_by<int32_t> TKey>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3841))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3841), inst: 1615 })
// CS Name: ::System.Collections.Generic::KeyValuePair`2<TKey,TValue>
struct CORDL_TYPE KeyValuePair_2<TKey,::UnityEngine::Quaternion> : public ::bs_hook::ValueTypeWrapper<0x14> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x14};

/// @brief Field key offset 0x0
 __declspec(property(get=__get_key, put=__set_key)) TKey  key;

/// @brief Field value offset 0x4
 __declspec(property(get=__get_value, put=__set_value)) ::UnityEngine::Quaternion  value;

 __declspec(property(get=get_Key)) TKey  Key;

 __declspec(property(get=get_Value)) ::UnityEngine::Quaternion  Value;

constexpr void __set_key(TKey  value) ;

constexpr TKey& __get_key() ;

constexpr TKey const& __get_key() const;

constexpr void __set_value(::UnityEngine::Quaternion  value) ;

constexpr ::UnityEngine::Quaternion& __get_value() ;

constexpr ::UnityEngine::Quaternion const& __get_value() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(TKey  key, ::UnityEngine::Quaternion  value) ;

/// @brief Method get_Key addr 0x0 size 0xffffffffffffffff virtual false final false
inline TKey get_Key() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::Quaternion get_Value() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

/// @brief Method Deconstruct addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Deconstruct(ByRef<TKey>  key, ByRef<::UnityEngine::Quaternion>  value) ;

// Ctor Parameters [CppParam { name: "key", ty: "TKey", modifiers: "", def_value: None }, CppParam { name: "value", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: None }]
constexpr KeyValuePair_2(TKey  key, ::UnityEngine::Quaternion  value) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit KeyValuePair_2(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x14>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 KeyValuePair_2()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::KeyValuePair`2
namespace System::Collections::Generic {
// cpp template
template<::cordl_internals::is_or_is_backed_by<int32_t> TKey,::il2cpp_utils::il2cpp_reference_type TValue>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3841))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3841), inst: 1614 })
// CS Name: ::System.Collections.Generic::KeyValuePair`2<TKey,TValue>
struct CORDL_TYPE KeyValuePair_2<TKey,TValue> : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field key offset 0x0
 __declspec(property(get=__get_key, put=__set_key)) TKey  key;

/// @brief Field value offset 0x8
 __declspec(property(get=__get_value, put=__set_value)) TValue  value;

 __declspec(property(get=get_Key)) TKey  Key;

 __declspec(property(get=get_Value)) TValue  Value;

constexpr void __set_key(TKey  value) ;

constexpr TKey& __get_key() ;

constexpr TKey const& __get_key() const;

constexpr void __set_value(TValue  value) ;

constexpr TValue& __get_value() ;

constexpr TValue const& __get_value() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(TKey  key, TValue  value) ;

/// @brief Method get_Key addr 0x0 size 0xffffffffffffffff virtual false final false
inline TKey get_Key() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
inline TValue get_Value() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

/// @brief Method Deconstruct addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Deconstruct(ByRef<TKey>  key, ByRef<TValue>  value) ;

// Ctor Parameters [CppParam { name: "key", ty: "TKey", modifiers: "", def_value: None }, CppParam { name: "value", ty: "TValue", modifiers: "", def_value: None }]
constexpr KeyValuePair_2(TKey  key, TValue  value) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit KeyValuePair_2(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 KeyValuePair_2()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::KeyValuePair`2
namespace System::Collections::Generic {
// cpp template
template<::cordl_internals::is_or_is_backed_by<int32_t> TKey,::cordl_internals::is_or_is_backed_by<int32_t> TValue>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3841))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3841), inst: 1613 })
// CS Name: ::System.Collections.Generic::KeyValuePair`2<TKey,TValue>
struct CORDL_TYPE KeyValuePair_2<TKey,TValue> : public ::bs_hook::ValueTypeWrapper<0x8> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field key offset 0x0
 __declspec(property(get=__get_key, put=__set_key)) TKey  key;

/// @brief Field value offset 0x4
 __declspec(property(get=__get_value, put=__set_value)) TValue  value;

 __declspec(property(get=get_Key)) TKey  Key;

 __declspec(property(get=get_Value)) TValue  Value;

constexpr void __set_key(TKey  value) ;

constexpr TKey& __get_key() ;

constexpr TKey const& __get_key() const;

constexpr void __set_value(TValue  value) ;

constexpr TValue& __get_value() ;

constexpr TValue const& __get_value() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(TKey  key, TValue  value) ;

/// @brief Method get_Key addr 0x0 size 0xffffffffffffffff virtual false final false
inline TKey get_Key() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
inline TValue get_Value() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

/// @brief Method Deconstruct addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Deconstruct(ByRef<TKey>  key, ByRef<TValue>  value) ;

// Ctor Parameters [CppParam { name: "key", ty: "TKey", modifiers: "", def_value: None }, CppParam { name: "value", ty: "TValue", modifiers: "", def_value: None }]
constexpr KeyValuePair_2(TKey  key, TValue  value) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit KeyValuePair_2(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x8>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 KeyValuePair_2()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::KeyValuePair`2
namespace System::Collections::Generic {
// cpp template
template<::cordl_internals::is_or_is_backed_by<int32_t> TKey>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3841))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3841), inst: 1612 })
// CS Name: ::System.Collections.Generic::KeyValuePair`2<TKey,TValue>
struct CORDL_TYPE KeyValuePair_2<TKey,int32_t> : public ::bs_hook::ValueTypeWrapper<0x8> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field key offset 0x0
 __declspec(property(get=__get_key, put=__set_key)) TKey  key;

/// @brief Field value offset 0x4
 __declspec(property(get=__get_value, put=__set_value)) int32_t  value;

 __declspec(property(get=get_Key)) TKey  Key;

 __declspec(property(get=get_Value)) int32_t  Value;

constexpr void __set_key(TKey  value) ;

constexpr TKey& __get_key() ;

constexpr TKey const& __get_key() const;

constexpr void __set_value(int32_t  value) ;

constexpr int32_t& __get_value() ;

constexpr int32_t const& __get_value() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(TKey  key, int32_t  value) ;

/// @brief Method get_Key addr 0x0 size 0xffffffffffffffff virtual false final false
inline TKey get_Key() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t get_Value() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

/// @brief Method Deconstruct addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Deconstruct(ByRef<TKey>  key, ByRef<int32_t>  value) ;

// Ctor Parameters [CppParam { name: "key", ty: "TKey", modifiers: "", def_value: None }, CppParam { name: "value", ty: "int32_t", modifiers: "", def_value: None }]
constexpr KeyValuePair_2(TKey  key, int32_t  value) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit KeyValuePair_2(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x8>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 KeyValuePair_2()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::KeyValuePair`2
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3841))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3841), inst: 1611 })
// CS Name: ::System.Collections.Generic::KeyValuePair`2<TKey,TValue>
struct CORDL_TYPE KeyValuePair_2<int32_t,::UnityEngine::Vector3> : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field key offset 0x0
 __declspec(property(get=__get_key, put=__set_key)) int32_t  key;

/// @brief Field value offset 0x4
 __declspec(property(get=__get_value, put=__set_value)) ::UnityEngine::Vector3  value;

 __declspec(property(get=get_Key)) int32_t  Key;

 __declspec(property(get=get_Value)) ::UnityEngine::Vector3  Value;

constexpr void __set_key(int32_t  value) ;

constexpr int32_t& __get_key() ;

constexpr int32_t const& __get_key() const;

constexpr void __set_value(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get_value() ;

constexpr ::UnityEngine::Vector3 const& __get_value() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(int32_t  key, ::UnityEngine::Vector3  value) ;

/// @brief Method get_Key addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t get_Key() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::Vector3 get_Value() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

/// @brief Method Deconstruct addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Deconstruct(ByRef<int32_t>  key, ByRef<::UnityEngine::Vector3>  value) ;

// Ctor Parameters [CppParam { name: "key", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "value", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }]
constexpr KeyValuePair_2(int32_t  key, ::UnityEngine::Vector3  value) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit KeyValuePair_2(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 KeyValuePair_2()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::KeyValuePair`2
namespace System::Collections::Generic {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TValue>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3841))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3841), inst: 1610 })
// CS Name: ::System.Collections.Generic::KeyValuePair`2<TKey,TValue>
struct CORDL_TYPE KeyValuePair_2<int32_t,TValue> : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field key offset 0x0
 __declspec(property(get=__get_key, put=__set_key)) int32_t  key;

/// @brief Field value offset 0x8
 __declspec(property(get=__get_value, put=__set_value)) TValue  value;

 __declspec(property(get=get_Key)) int32_t  Key;

 __declspec(property(get=get_Value)) TValue  Value;

constexpr void __set_key(int32_t  value) ;

constexpr int32_t& __get_key() ;

constexpr int32_t const& __get_key() const;

constexpr void __set_value(TValue  value) ;

constexpr TValue& __get_value() ;

constexpr TValue const& __get_value() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(int32_t  key, TValue  value) ;

/// @brief Method get_Key addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t get_Key() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
inline TValue get_Value() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

/// @brief Method Deconstruct addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Deconstruct(ByRef<int32_t>  key, ByRef<TValue>  value) ;

// Ctor Parameters [CppParam { name: "key", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "value", ty: "TValue", modifiers: "", def_value: None }]
constexpr KeyValuePair_2(int32_t  key, TValue  value) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit KeyValuePair_2(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 KeyValuePair_2()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::KeyValuePair`2
namespace System::Collections::Generic {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T3_cordlgen_0>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3841))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3841), inst: 1609 })
// CS Name: ::System.Collections.Generic::KeyValuePair`2<TKey,TValue>
struct CORDL_TYPE KeyValuePair_2<int32_t,::UnityEngine::ProBuilder::SimpleTuple_3<::UnityEngine::Vector3,::UnityEngine::Vector3,T3_cordlgen_0>> : public ::bs_hook::ValueTypeWrapper<0x28> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field key offset 0x0
 __declspec(property(get=__get_key, put=__set_key)) int32_t  key;

/// @brief Field value offset 0x8
 __declspec(property(get=__get_value, put=__set_value)) ::UnityEngine::ProBuilder::SimpleTuple_3<::UnityEngine::Vector3,::UnityEngine::Vector3,T3_cordlgen_0>  value;

 __declspec(property(get=get_Key)) int32_t  Key;

 __declspec(property(get=get_Value)) ::UnityEngine::ProBuilder::SimpleTuple_3<::UnityEngine::Vector3,::UnityEngine::Vector3,T3_cordlgen_0>  Value;

constexpr void __set_key(int32_t  value) ;

constexpr int32_t& __get_key() ;

constexpr int32_t const& __get_key() const;

constexpr void __set_value(::UnityEngine::ProBuilder::SimpleTuple_3<::UnityEngine::Vector3,::UnityEngine::Vector3,T3_cordlgen_0>  value) ;

constexpr ::UnityEngine::ProBuilder::SimpleTuple_3<::UnityEngine::Vector3,::UnityEngine::Vector3,T3_cordlgen_0>& __get_value() ;

constexpr ::UnityEngine::ProBuilder::SimpleTuple_3<::UnityEngine::Vector3,::UnityEngine::Vector3,T3_cordlgen_0> const& __get_value() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(int32_t  key, ::UnityEngine::ProBuilder::SimpleTuple_3<::UnityEngine::Vector3,::UnityEngine::Vector3,T3_cordlgen_0>  value) ;

/// @brief Method get_Key addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t get_Key() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::ProBuilder::SimpleTuple_3<::UnityEngine::Vector3,::UnityEngine::Vector3,T3_cordlgen_0> get_Value() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

/// @brief Method Deconstruct addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Deconstruct(ByRef<int32_t>  key, ByRef<::UnityEngine::ProBuilder::SimpleTuple_3<::UnityEngine::Vector3,::UnityEngine::Vector3,T3_cordlgen_0>>  value) ;

// Ctor Parameters [CppParam { name: "key", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "value", ty: "::UnityEngine::ProBuilder::SimpleTuple_3<::UnityEngine::Vector3,::UnityEngine::Vector3,T3_cordlgen_0>", modifiers: "", def_value: None }]
constexpr KeyValuePair_2(int32_t  key, ::UnityEngine::ProBuilder::SimpleTuple_3<::UnityEngine::Vector3,::UnityEngine::Vector3,T3_cordlgen_0>  value) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit KeyValuePair_2(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x28>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 KeyValuePair_2()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::KeyValuePair`2
namespace System::Collections::Generic {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TValue>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3841))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3841), inst: 1608 })
// CS Name: ::System.Collections.Generic::KeyValuePair`2<TKey,TValue>
struct CORDL_TYPE KeyValuePair_2<::System::Guid,TValue> : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field key offset 0x0
 __declspec(property(get=__get_key, put=__set_key)) ::System::Guid  key;

/// @brief Field value offset 0x10
 __declspec(property(get=__get_value, put=__set_value)) TValue  value;

 __declspec(property(get=get_Key)) ::System::Guid  Key;

 __declspec(property(get=get_Value)) TValue  Value;

constexpr void __set_key(::System::Guid  value) ;

constexpr ::System::Guid& __get_key() ;

constexpr ::System::Guid const& __get_key() const;

constexpr void __set_value(TValue  value) ;

constexpr TValue& __get_value() ;

constexpr TValue const& __get_value() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Guid  key, TValue  value) ;

/// @brief Method get_Key addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Guid get_Key() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
inline TValue get_Value() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

/// @brief Method Deconstruct addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Deconstruct(ByRef<::System::Guid>  key, ByRef<TValue>  value) ;

// Ctor Parameters [CppParam { name: "key", ty: "::System::Guid", modifiers: "", def_value: None }, CppParam { name: "value", ty: "TValue", modifiers: "", def_value: None }]
constexpr KeyValuePair_2(::System::Guid  key, TValue  value) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit KeyValuePair_2(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 KeyValuePair_2()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::KeyValuePair`2
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3841))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3841), inst: 1607 })
// CS Name: ::System.Collections.Generic::KeyValuePair`2<TKey,TValue>
struct CORDL_TYPE KeyValuePair_2<::System::Guid,::GlobalNamespace::OVRAnchor> : public ::bs_hook::ValueTypeWrapper<0x28> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field key offset 0x0
 __declspec(property(get=__get_key, put=__set_key)) ::System::Guid  key;

/// @brief Field value offset 0x10
 __declspec(property(get=__get_value, put=__set_value)) ::GlobalNamespace::OVRAnchor  value;

 __declspec(property(get=get_Key)) ::System::Guid  Key;

 __declspec(property(get=get_Value)) ::GlobalNamespace::OVRAnchor  Value;

constexpr void __set_key(::System::Guid  value) ;

constexpr ::System::Guid& __get_key() ;

constexpr ::System::Guid const& __get_key() const;

constexpr void __set_value(::GlobalNamespace::OVRAnchor  value) ;

constexpr ::GlobalNamespace::OVRAnchor& __get_value() ;

constexpr ::GlobalNamespace::OVRAnchor const& __get_value() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Guid  key, ::GlobalNamespace::OVRAnchor  value) ;

/// @brief Method get_Key addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Guid get_Key() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::GlobalNamespace::OVRAnchor get_Value() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

/// @brief Method Deconstruct addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Deconstruct(ByRef<::System::Guid>  key, ByRef<::GlobalNamespace::OVRAnchor>  value) ;

// Ctor Parameters [CppParam { name: "key", ty: "::System::Guid", modifiers: "", def_value: None }, CppParam { name: "value", ty: "::GlobalNamespace::OVRAnchor", modifiers: "", def_value: None }]
constexpr KeyValuePair_2(::System::Guid  key, ::GlobalNamespace::OVRAnchor  value) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit KeyValuePair_2(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x28>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 KeyValuePair_2()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::KeyValuePair`2
namespace System::Collections::Generic {
// cpp template
template<::cordl_internals::is_or_is_backed_by<int32_t> TValue>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3841))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3841), inst: 1606 })
// CS Name: ::System.Collections.Generic::KeyValuePair`2<TKey,TValue>
struct CORDL_TYPE KeyValuePair_2<::System::Guid,TValue> : public ::bs_hook::ValueTypeWrapper<0x14> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x14};

/// @brief Field key offset 0x0
 __declspec(property(get=__get_key, put=__set_key)) ::System::Guid  key;

/// @brief Field value offset 0x10
 __declspec(property(get=__get_value, put=__set_value)) TValue  value;

 __declspec(property(get=get_Key)) ::System::Guid  Key;

 __declspec(property(get=get_Value)) TValue  Value;

constexpr void __set_key(::System::Guid  value) ;

constexpr ::System::Guid& __get_key() ;

constexpr ::System::Guid const& __get_key() const;

constexpr void __set_value(TValue  value) ;

constexpr TValue& __get_value() ;

constexpr TValue const& __get_value() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Guid  key, TValue  value) ;

/// @brief Method get_Key addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Guid get_Key() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
inline TValue get_Value() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

/// @brief Method Deconstruct addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Deconstruct(ByRef<::System::Guid>  key, ByRef<TValue>  value) ;

// Ctor Parameters [CppParam { name: "key", ty: "::System::Guid", modifiers: "", def_value: None }, CppParam { name: "value", ty: "TValue", modifiers: "", def_value: None }]
constexpr KeyValuePair_2(::System::Guid  key, TValue  value) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit KeyValuePair_2(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x14>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 KeyValuePair_2()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::KeyValuePair`2
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3841))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3841), inst: 1605 })
// CS Name: ::System.Collections.Generic::KeyValuePair`2<TKey,TValue>
struct CORDL_TYPE KeyValuePair_2<::System::Guid,bool> : public ::bs_hook::ValueTypeWrapper<0x14> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x14};

/// @brief Field key offset 0x0
 __declspec(property(get=__get_key, put=__set_key)) ::System::Guid  key;

/// @brief Field value offset 0x10
 __declspec(property(get=__get_value, put=__set_value)) bool  value;

 __declspec(property(get=get_Key)) ::System::Guid  Key;

 __declspec(property(get=get_Value)) bool  Value;

constexpr void __set_key(::System::Guid  value) ;

constexpr ::System::Guid& __get_key() ;

constexpr ::System::Guid const& __get_key() const;

constexpr void __set_value(bool  value) ;

constexpr bool& __get_value() ;

constexpr bool const& __get_value() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Guid  key, bool  value) ;

/// @brief Method get_Key addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Guid get_Key() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_Value() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

/// @brief Method Deconstruct addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Deconstruct(ByRef<::System::Guid>  key, ByRef<bool>  value) ;

// Ctor Parameters [CppParam { name: "key", ty: "::System::Guid", modifiers: "", def_value: None }, CppParam { name: "value", ty: "bool", modifiers: "", def_value: None }]
constexpr KeyValuePair_2(::System::Guid  key, bool  value) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit KeyValuePair_2(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x14>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 KeyValuePair_2()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::KeyValuePair`2
namespace System::Collections::Generic {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TResult_cordlgen_0,::il2cpp_utils::il2cpp_reference_type T_cordlgen_1>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3841))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3841), inst: 1604 })
// CS Name: ::System.Collections.Generic::KeyValuePair`2<TKey,TValue>
struct CORDL_TYPE KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__CallbackWithState_1<TResult_cordlgen_0,T_cordlgen_1>> : public ::bs_hook::ValueTypeWrapper<0x20> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field key offset 0x0
 __declspec(property(get=__get_key, put=__set_key)) ::System::Guid  key;

/// @brief Field value offset 0x10
 __declspec(property(get=__get_value, put=__set_value)) ::GlobalNamespace::__OVRTask_1__CallbackWithState_1<TResult_cordlgen_0,T_cordlgen_1>  value;

 __declspec(property(get=get_Key)) ::System::Guid  Key;

 __declspec(property(get=get_Value)) ::GlobalNamespace::__OVRTask_1__CallbackWithState_1<TResult_cordlgen_0,T_cordlgen_1>  Value;

constexpr void __set_key(::System::Guid  value) ;

constexpr ::System::Guid& __get_key() ;

constexpr ::System::Guid const& __get_key() const;

constexpr void __set_value(::GlobalNamespace::__OVRTask_1__CallbackWithState_1<TResult_cordlgen_0,T_cordlgen_1>  value) ;

constexpr ::GlobalNamespace::__OVRTask_1__CallbackWithState_1<TResult_cordlgen_0,T_cordlgen_1>& __get_value() ;

constexpr ::GlobalNamespace::__OVRTask_1__CallbackWithState_1<TResult_cordlgen_0,T_cordlgen_1> const& __get_value() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Guid  key, ::GlobalNamespace::__OVRTask_1__CallbackWithState_1<TResult_cordlgen_0,T_cordlgen_1>  value) ;

/// @brief Method get_Key addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Guid get_Key() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::GlobalNamespace::__OVRTask_1__CallbackWithState_1<TResult_cordlgen_0,T_cordlgen_1> get_Value() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

/// @brief Method Deconstruct addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Deconstruct(ByRef<::System::Guid>  key, ByRef<::GlobalNamespace::__OVRTask_1__CallbackWithState_1<TResult_cordlgen_0,T_cordlgen_1>>  value) ;

// Ctor Parameters [CppParam { name: "key", ty: "::System::Guid", modifiers: "", def_value: None }, CppParam { name: "value", ty: "::GlobalNamespace::__OVRTask_1__CallbackWithState_1<TResult_cordlgen_0,T_cordlgen_1>", modifiers: "", def_value: None }]
constexpr KeyValuePair_2(::System::Guid  key, ::GlobalNamespace::__OVRTask_1__CallbackWithState_1<TResult_cordlgen_0,T_cordlgen_1>  value) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit KeyValuePair_2(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x20>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 KeyValuePair_2()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::KeyValuePair`2
namespace System::Collections::Generic {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TResult_cordlgen_0,::il2cpp_utils::il2cpp_reference_type TResult_cordlgen_1,::il2cpp_utils::il2cpp_reference_type TCapture_cordlgen_2>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3841))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3841), inst: 1603 })
// CS Name: ::System.Collections.Generic::KeyValuePair`2<TKey,TValue>
struct CORDL_TYPE KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__CallbackWithState_1<TResult_cordlgen_0,::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<TResult_cordlgen_1,TCapture_cordlgen_2>>> : public ::bs_hook::ValueTypeWrapper<0x28> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field key offset 0x0
 __declspec(property(get=__get_key, put=__set_key)) ::System::Guid  key;

/// @brief Field value offset 0x10
 __declspec(property(get=__get_value, put=__set_value)) ::GlobalNamespace::__OVRTask_1__CallbackWithState_1<TResult_cordlgen_0,::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<TResult_cordlgen_1,TCapture_cordlgen_2>>  value;

 __declspec(property(get=get_Key)) ::System::Guid  Key;

 __declspec(property(get=get_Value)) ::GlobalNamespace::__OVRTask_1__CallbackWithState_1<TResult_cordlgen_0,::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<TResult_cordlgen_1,TCapture_cordlgen_2>>  Value;

constexpr void __set_key(::System::Guid  value) ;

constexpr ::System::Guid& __get_key() ;

constexpr ::System::Guid const& __get_key() const;

constexpr void __set_value(::GlobalNamespace::__OVRTask_1__CallbackWithState_1<TResult_cordlgen_0,::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<TResult_cordlgen_1,TCapture_cordlgen_2>>  value) ;

constexpr ::GlobalNamespace::__OVRTask_1__CallbackWithState_1<TResult_cordlgen_0,::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<TResult_cordlgen_1,TCapture_cordlgen_2>>& __get_value() ;

constexpr ::GlobalNamespace::__OVRTask_1__CallbackWithState_1<TResult_cordlgen_0,::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<TResult_cordlgen_1,TCapture_cordlgen_2>> const& __get_value() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Guid  key, ::GlobalNamespace::__OVRTask_1__CallbackWithState_1<TResult_cordlgen_0,::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<TResult_cordlgen_1,TCapture_cordlgen_2>>  value) ;

/// @brief Method get_Key addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Guid get_Key() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::GlobalNamespace::__OVRTask_1__CallbackWithState_1<TResult_cordlgen_0,::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<TResult_cordlgen_1,TCapture_cordlgen_2>> get_Value() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

/// @brief Method Deconstruct addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Deconstruct(ByRef<::System::Guid>  key, ByRef<::GlobalNamespace::__OVRTask_1__CallbackWithState_1<TResult_cordlgen_0,::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<TResult_cordlgen_1,TCapture_cordlgen_2>>>  value) ;

// Ctor Parameters [CppParam { name: "key", ty: "::System::Guid", modifiers: "", def_value: None }, CppParam { name: "value", ty: "::GlobalNamespace::__OVRTask_1__CallbackWithState_1<TResult_cordlgen_0,::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<TResult_cordlgen_1,TCapture_cordlgen_2>>", modifiers: "", def_value: None }]
constexpr KeyValuePair_2(::System::Guid  key, ::GlobalNamespace::__OVRTask_1__CallbackWithState_1<TResult_cordlgen_0,::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<TResult_cordlgen_1,TCapture_cordlgen_2>>  value) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit KeyValuePair_2(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x28>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 KeyValuePair_2()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::KeyValuePair`2
namespace System::Collections::Generic {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T_cordlgen_0>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3841))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3841), inst: 1602 })
// CS Name: ::System.Collections.Generic::KeyValuePair`2<TKey,TValue>
struct CORDL_TYPE KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,T_cordlgen_0>> : public ::bs_hook::ValueTypeWrapper<0x20> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field key offset 0x0
 __declspec(property(get=__get_key, put=__set_key)) ::System::Guid  key;

/// @brief Field value offset 0x10
 __declspec(property(get=__get_value, put=__set_value)) ::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,T_cordlgen_0>  value;

 __declspec(property(get=get_Key)) ::System::Guid  Key;

 __declspec(property(get=get_Value)) ::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,T_cordlgen_0>  Value;

constexpr void __set_key(::System::Guid  value) ;

constexpr ::System::Guid& __get_key() ;

constexpr ::System::Guid const& __get_key() const;

constexpr void __set_value(::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,T_cordlgen_0>  value) ;

constexpr ::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,T_cordlgen_0>& __get_value() ;

constexpr ::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,T_cordlgen_0> const& __get_value() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Guid  key, ::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,T_cordlgen_0>  value) ;

/// @brief Method get_Key addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Guid get_Key() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,T_cordlgen_0> get_Value() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

/// @brief Method Deconstruct addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Deconstruct(ByRef<::System::Guid>  key, ByRef<::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,T_cordlgen_0>>  value) ;

// Ctor Parameters [CppParam { name: "key", ty: "::System::Guid", modifiers: "", def_value: None }, CppParam { name: "value", ty: "::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,T_cordlgen_0>", modifiers: "", def_value: None }]
constexpr KeyValuePair_2(::System::Guid  key, ::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,T_cordlgen_0>  value) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit KeyValuePair_2(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x20>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 KeyValuePair_2()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::KeyValuePair`2
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3841))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3841), inst: 1601 })
// CS Name: ::System.Collections.Generic::KeyValuePair`2<TKey,TValue>
struct CORDL_TYPE KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,::GlobalNamespace::OVRAnchor>> : public ::bs_hook::ValueTypeWrapper<0x30> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field key offset 0x0
 __declspec(property(get=__get_key, put=__set_key)) ::System::Guid  key;

/// @brief Field value offset 0x10
 __declspec(property(get=__get_value, put=__set_value)) ::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,::GlobalNamespace::OVRAnchor>  value;

 __declspec(property(get=get_Key)) ::System::Guid  Key;

 __declspec(property(get=get_Value)) ::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,::GlobalNamespace::OVRAnchor>  Value;

constexpr void __set_key(::System::Guid  value) ;

constexpr ::System::Guid& __get_key() ;

constexpr ::System::Guid const& __get_key() const;

constexpr void __set_value(::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,::GlobalNamespace::OVRAnchor>  value) ;

constexpr ::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,::GlobalNamespace::OVRAnchor>& __get_value() ;

constexpr ::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,::GlobalNamespace::OVRAnchor> const& __get_value() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Guid  key, ::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,::GlobalNamespace::OVRAnchor>  value) ;

/// @brief Method get_Key addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Guid get_Key() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,::GlobalNamespace::OVRAnchor> get_Value() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

/// @brief Method Deconstruct addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Deconstruct(ByRef<::System::Guid>  key, ByRef<::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,::GlobalNamespace::OVRAnchor>>  value) ;

// Ctor Parameters [CppParam { name: "key", ty: "::System::Guid", modifiers: "", def_value: None }, CppParam { name: "value", ty: "::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,::GlobalNamespace::OVRAnchor>", modifiers: "", def_value: None }]
constexpr KeyValuePair_2(::System::Guid  key, ::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,::GlobalNamespace::OVRAnchor>  value) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit KeyValuePair_2(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x30>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 KeyValuePair_2()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::KeyValuePair`2
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3841))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3841), inst: 1600 })
// CS Name: ::System.Collections.Generic::KeyValuePair`2<TKey,TValue>
struct CORDL_TYPE KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<bool,::GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor>>> : public ::bs_hook::ValueTypeWrapper<0x38> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field key offset 0x0
 __declspec(property(get=__get_key, put=__set_key)) ::System::Guid  key;

/// @brief Field value offset 0x10
 __declspec(property(get=__get_value, put=__set_value)) ::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<bool,::GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor>>  value;

 __declspec(property(get=get_Key)) ::System::Guid  Key;

 __declspec(property(get=get_Value)) ::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<bool,::GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor>>  Value;

constexpr void __set_key(::System::Guid  value) ;

constexpr ::System::Guid& __get_key() ;

constexpr ::System::Guid const& __get_key() const;

constexpr void __set_value(::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<bool,::GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor>>  value) ;

constexpr ::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<bool,::GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor>>& __get_value() ;

constexpr ::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<bool,::GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor>> const& __get_value() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Guid  key, ::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<bool,::GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor>>  value) ;

/// @brief Method get_Key addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Guid get_Key() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<bool,::GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor>> get_Value() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

/// @brief Method Deconstruct addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Deconstruct(ByRef<::System::Guid>  key, ByRef<::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<bool,::GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor>>>  value) ;

// Ctor Parameters [CppParam { name: "key", ty: "::System::Guid", modifiers: "", def_value: None }, CppParam { name: "value", ty: "::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<bool,::GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor>>", modifiers: "", def_value: None }]
constexpr KeyValuePair_2(::System::Guid  key, ::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<bool,::GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor>>  value) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit KeyValuePair_2(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x38>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 KeyValuePair_2()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::KeyValuePair`2
namespace System::Collections::Generic {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TCapture_cordlgen_0>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3841))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3841), inst: 1599 })
// CS Name: ::System.Collections.Generic::KeyValuePair`2<TKey,TValue>
struct CORDL_TYPE KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<bool,TCapture_cordlgen_0>>> : public ::bs_hook::ValueTypeWrapper<0x28> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field key offset 0x0
 __declspec(property(get=__get_key, put=__set_key)) ::System::Guid  key;

/// @brief Field value offset 0x10
 __declspec(property(get=__get_value, put=__set_value)) ::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<bool,TCapture_cordlgen_0>>  value;

 __declspec(property(get=get_Key)) ::System::Guid  Key;

 __declspec(property(get=get_Value)) ::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<bool,TCapture_cordlgen_0>>  Value;

constexpr void __set_key(::System::Guid  value) ;

constexpr ::System::Guid& __get_key() ;

constexpr ::System::Guid const& __get_key() const;

constexpr void __set_value(::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<bool,TCapture_cordlgen_0>>  value) ;

constexpr ::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<bool,TCapture_cordlgen_0>>& __get_value() ;

constexpr ::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<bool,TCapture_cordlgen_0>> const& __get_value() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Guid  key, ::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<bool,TCapture_cordlgen_0>>  value) ;

/// @brief Method get_Key addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Guid get_Key() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<bool,TCapture_cordlgen_0>> get_Value() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

/// @brief Method Deconstruct addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Deconstruct(ByRef<::System::Guid>  key, ByRef<::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<bool,TCapture_cordlgen_0>>>  value) ;

// Ctor Parameters [CppParam { name: "key", ty: "::System::Guid", modifiers: "", def_value: None }, CppParam { name: "value", ty: "::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<bool,TCapture_cordlgen_0>>", modifiers: "", def_value: None }]
constexpr KeyValuePair_2(::System::Guid  key, ::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<bool,TCapture_cordlgen_0>>  value) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit KeyValuePair_2(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x28>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 KeyValuePair_2()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::KeyValuePair`2
namespace System::Collections::Generic {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TResult_cordlgen_0>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3841))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3841), inst: 1598 })
// CS Name: ::System.Collections.Generic::KeyValuePair`2<TKey,TValue>
struct CORDL_TYPE KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__Callback<TResult_cordlgen_0>> : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field key offset 0x0
 __declspec(property(get=__get_key, put=__set_key)) ::System::Guid  key;

/// @brief Field value offset 0x10
 __declspec(property(get=__get_value, put=__set_value)) ::GlobalNamespace::__OVRTask_1__Callback<TResult_cordlgen_0>  value;

 __declspec(property(get=get_Key)) ::System::Guid  Key;

 __declspec(property(get=get_Value)) ::GlobalNamespace::__OVRTask_1__Callback<TResult_cordlgen_0>  Value;

constexpr void __set_key(::System::Guid  value) ;

constexpr ::System::Guid& __get_key() ;

constexpr ::System::Guid const& __get_key() const;

constexpr void __set_value(::GlobalNamespace::__OVRTask_1__Callback<TResult_cordlgen_0>  value) ;

constexpr ::GlobalNamespace::__OVRTask_1__Callback<TResult_cordlgen_0>& __get_value() ;

constexpr ::GlobalNamespace::__OVRTask_1__Callback<TResult_cordlgen_0> const& __get_value() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Guid  key, ::GlobalNamespace::__OVRTask_1__Callback<TResult_cordlgen_0>  value) ;

/// @brief Method get_Key addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Guid get_Key() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::GlobalNamespace::__OVRTask_1__Callback<TResult_cordlgen_0> get_Value() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

/// @brief Method Deconstruct addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Deconstruct(ByRef<::System::Guid>  key, ByRef<::GlobalNamespace::__OVRTask_1__Callback<TResult_cordlgen_0>>  value) ;

// Ctor Parameters [CppParam { name: "key", ty: "::System::Guid", modifiers: "", def_value: None }, CppParam { name: "value", ty: "::GlobalNamespace::__OVRTask_1__Callback<TResult_cordlgen_0>", modifiers: "", def_value: None }]
constexpr KeyValuePair_2(::System::Guid  key, ::GlobalNamespace::__OVRTask_1__Callback<TResult_cordlgen_0>  value) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit KeyValuePair_2(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 KeyValuePair_2()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::KeyValuePair`2
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3841))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3841), inst: 1597 })
// CS Name: ::System.Collections.Generic::KeyValuePair`2<TKey,TValue>
struct CORDL_TYPE KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__Callback<::GlobalNamespace::OVRAnchor>> : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field key offset 0x0
 __declspec(property(get=__get_key, put=__set_key)) ::System::Guid  key;

/// @brief Field value offset 0x10
 __declspec(property(get=__get_value, put=__set_value)) ::GlobalNamespace::__OVRTask_1__Callback<::GlobalNamespace::OVRAnchor>  value;

 __declspec(property(get=get_Key)) ::System::Guid  Key;

 __declspec(property(get=get_Value)) ::GlobalNamespace::__OVRTask_1__Callback<::GlobalNamespace::OVRAnchor>  Value;

constexpr void __set_key(::System::Guid  value) ;

constexpr ::System::Guid& __get_key() ;

constexpr ::System::Guid const& __get_key() const;

constexpr void __set_value(::GlobalNamespace::__OVRTask_1__Callback<::GlobalNamespace::OVRAnchor>  value) ;

constexpr ::GlobalNamespace::__OVRTask_1__Callback<::GlobalNamespace::OVRAnchor>& __get_value() ;

constexpr ::GlobalNamespace::__OVRTask_1__Callback<::GlobalNamespace::OVRAnchor> const& __get_value() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Guid  key, ::GlobalNamespace::__OVRTask_1__Callback<::GlobalNamespace::OVRAnchor>  value) ;

/// @brief Method get_Key addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Guid get_Key() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::GlobalNamespace::__OVRTask_1__Callback<::GlobalNamespace::OVRAnchor> get_Value() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

/// @brief Method Deconstruct addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Deconstruct(ByRef<::System::Guid>  key, ByRef<::GlobalNamespace::__OVRTask_1__Callback<::GlobalNamespace::OVRAnchor>>  value) ;

// Ctor Parameters [CppParam { name: "key", ty: "::System::Guid", modifiers: "", def_value: None }, CppParam { name: "value", ty: "::GlobalNamespace::__OVRTask_1__Callback<::GlobalNamespace::OVRAnchor>", modifiers: "", def_value: None }]
constexpr KeyValuePair_2(::System::Guid  key, ::GlobalNamespace::__OVRTask_1__Callback<::GlobalNamespace::OVRAnchor>  value) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit KeyValuePair_2(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 KeyValuePair_2()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::KeyValuePair`2
namespace System::Collections::Generic {
// cpp template
template<::cordl_internals::is_or_is_backed_by<int32_t> TResult_cordlgen_0>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3841))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3841), inst: 1596 })
// CS Name: ::System.Collections.Generic::KeyValuePair`2<TKey,TValue>
struct CORDL_TYPE KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__Callback<TResult_cordlgen_0>> : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field key offset 0x0
 __declspec(property(get=__get_key, put=__set_key)) ::System::Guid  key;

/// @brief Field value offset 0x10
 __declspec(property(get=__get_value, put=__set_value)) ::GlobalNamespace::__OVRTask_1__Callback<TResult_cordlgen_0>  value;

 __declspec(property(get=get_Key)) ::System::Guid  Key;

 __declspec(property(get=get_Value)) ::GlobalNamespace::__OVRTask_1__Callback<TResult_cordlgen_0>  Value;

constexpr void __set_key(::System::Guid  value) ;

constexpr ::System::Guid& __get_key() ;

constexpr ::System::Guid const& __get_key() const;

constexpr void __set_value(::GlobalNamespace::__OVRTask_1__Callback<TResult_cordlgen_0>  value) ;

constexpr ::GlobalNamespace::__OVRTask_1__Callback<TResult_cordlgen_0>& __get_value() ;

constexpr ::GlobalNamespace::__OVRTask_1__Callback<TResult_cordlgen_0> const& __get_value() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Guid  key, ::GlobalNamespace::__OVRTask_1__Callback<TResult_cordlgen_0>  value) ;

/// @brief Method get_Key addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Guid get_Key() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::GlobalNamespace::__OVRTask_1__Callback<TResult_cordlgen_0> get_Value() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

/// @brief Method Deconstruct addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Deconstruct(ByRef<::System::Guid>  key, ByRef<::GlobalNamespace::__OVRTask_1__Callback<TResult_cordlgen_0>>  value) ;

// Ctor Parameters [CppParam { name: "key", ty: "::System::Guid", modifiers: "", def_value: None }, CppParam { name: "value", ty: "::GlobalNamespace::__OVRTask_1__Callback<TResult_cordlgen_0>", modifiers: "", def_value: None }]
constexpr KeyValuePair_2(::System::Guid  key, ::GlobalNamespace::__OVRTask_1__Callback<TResult_cordlgen_0>  value) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit KeyValuePair_2(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 KeyValuePair_2()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::KeyValuePair`2
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3841))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3841), inst: 1595 })
// CS Name: ::System.Collections.Generic::KeyValuePair`2<TKey,TValue>
struct CORDL_TYPE KeyValuePair_2<::System::Guid,::GlobalNamespace::__OVRTask_1__Callback<bool>> : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field key offset 0x0
 __declspec(property(get=__get_key, put=__set_key)) ::System::Guid  key;

/// @brief Field value offset 0x10
 __declspec(property(get=__get_value, put=__set_value)) ::GlobalNamespace::__OVRTask_1__Callback<bool>  value;

 __declspec(property(get=get_Key)) ::System::Guid  Key;

 __declspec(property(get=get_Value)) ::GlobalNamespace::__OVRTask_1__Callback<bool>  Value;

constexpr void __set_key(::System::Guid  value) ;

constexpr ::System::Guid& __get_key() ;

constexpr ::System::Guid const& __get_key() const;

constexpr void __set_value(::GlobalNamespace::__OVRTask_1__Callback<bool>  value) ;

constexpr ::GlobalNamespace::__OVRTask_1__Callback<bool>& __get_value() ;

constexpr ::GlobalNamespace::__OVRTask_1__Callback<bool> const& __get_value() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Guid  key, ::GlobalNamespace::__OVRTask_1__Callback<bool>  value) ;

/// @brief Method get_Key addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Guid get_Key() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::GlobalNamespace::__OVRTask_1__Callback<bool> get_Value() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

/// @brief Method Deconstruct addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Deconstruct(ByRef<::System::Guid>  key, ByRef<::GlobalNamespace::__OVRTask_1__Callback<bool>>  value) ;

// Ctor Parameters [CppParam { name: "key", ty: "::System::Guid", modifiers: "", def_value: None }, CppParam { name: "value", ty: "::GlobalNamespace::__OVRTask_1__Callback<bool>", modifiers: "", def_value: None }]
constexpr KeyValuePair_2(::System::Guid  key, ::GlobalNamespace::__OVRTask_1__Callback<bool>  value) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit KeyValuePair_2(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 KeyValuePair_2()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::KeyValuePair`2
namespace System::Collections::Generic {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TValue>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3841))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3841), inst: 1594 })
// CS Name: ::System.Collections.Generic::KeyValuePair`2<TKey,TValue>
struct CORDL_TYPE KeyValuePair_2<::UnityEngine::ProBuilder::EdgeLookup,TValue> : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field key offset 0x0
 __declspec(property(get=__get_key, put=__set_key)) ::UnityEngine::ProBuilder::EdgeLookup  key;

/// @brief Field value offset 0x10
 __declspec(property(get=__get_value, put=__set_value)) TValue  value;

 __declspec(property(get=get_Key)) ::UnityEngine::ProBuilder::EdgeLookup  Key;

 __declspec(property(get=get_Value)) TValue  Value;

constexpr void __set_key(::UnityEngine::ProBuilder::EdgeLookup  value) ;

constexpr ::UnityEngine::ProBuilder::EdgeLookup& __get_key() ;

constexpr ::UnityEngine::ProBuilder::EdgeLookup const& __get_key() const;

constexpr void __set_value(TValue  value) ;

constexpr TValue& __get_value() ;

constexpr TValue const& __get_value() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::UnityEngine::ProBuilder::EdgeLookup  key, TValue  value) ;

/// @brief Method get_Key addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::ProBuilder::EdgeLookup get_Key() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
inline TValue get_Value() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

/// @brief Method Deconstruct addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Deconstruct(ByRef<::UnityEngine::ProBuilder::EdgeLookup>  key, ByRef<TValue>  value) ;

// Ctor Parameters [CppParam { name: "key", ty: "::UnityEngine::ProBuilder::EdgeLookup", modifiers: "", def_value: None }, CppParam { name: "value", ty: "TValue", modifiers: "", def_value: None }]
constexpr KeyValuePair_2(::UnityEngine::ProBuilder::EdgeLookup  key, TValue  value) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit KeyValuePair_2(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 KeyValuePair_2()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::KeyValuePair`2
namespace System::Collections::Generic {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TValue>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3841))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3841), inst: 1593 })
// CS Name: ::System.Collections.Generic::KeyValuePair`2<TKey,TValue>
struct CORDL_TYPE KeyValuePair_2<::UnityEngine::ProBuilder::Edge,TValue> : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field key offset 0x0
 __declspec(property(get=__get_key, put=__set_key)) ::UnityEngine::ProBuilder::Edge  key;

/// @brief Field value offset 0x8
 __declspec(property(get=__get_value, put=__set_value)) TValue  value;

 __declspec(property(get=get_Key)) ::UnityEngine::ProBuilder::Edge  Key;

 __declspec(property(get=get_Value)) TValue  Value;

constexpr void __set_key(::UnityEngine::ProBuilder::Edge  value) ;

constexpr ::UnityEngine::ProBuilder::Edge& __get_key() ;

constexpr ::UnityEngine::ProBuilder::Edge const& __get_key() const;

constexpr void __set_value(TValue  value) ;

constexpr TValue& __get_value() ;

constexpr TValue const& __get_value() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::UnityEngine::ProBuilder::Edge  key, TValue  value) ;

/// @brief Method get_Key addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::ProBuilder::Edge get_Key() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
inline TValue get_Value() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

/// @brief Method Deconstruct addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Deconstruct(ByRef<::UnityEngine::ProBuilder::Edge>  key, ByRef<TValue>  value) ;

// Ctor Parameters [CppParam { name: "key", ty: "::UnityEngine::ProBuilder::Edge", modifiers: "", def_value: None }, CppParam { name: "value", ty: "TValue", modifiers: "", def_value: None }]
constexpr KeyValuePair_2(::UnityEngine::ProBuilder::Edge  key, TValue  value) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit KeyValuePair_2(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 KeyValuePair_2()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::KeyValuePair`2
namespace System::Collections::Generic {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TValue>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3841))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3841), inst: 1592 })
// CS Name: ::System.Collections.Generic::KeyValuePair`2<TKey,TValue>
struct CORDL_TYPE KeyValuePair_2<char16_t,TValue> : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field key offset 0x0
 __declspec(property(get=__get_key, put=__set_key)) char16_t  key;

/// @brief Field value offset 0x8
 __declspec(property(get=__get_value, put=__set_value)) TValue  value;

 __declspec(property(get=get_Key)) char16_t  Key;

 __declspec(property(get=get_Value)) TValue  Value;

constexpr void __set_key(char16_t  value) ;

constexpr char16_t& __get_key() ;

constexpr char16_t const& __get_key() const;

constexpr void __set_value(TValue  value) ;

constexpr TValue& __get_value() ;

constexpr TValue const& __get_value() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(char16_t  key, TValue  value) ;

/// @brief Method get_Key addr 0x0 size 0xffffffffffffffff virtual false final false
inline char16_t get_Key() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
inline TValue get_Value() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

/// @brief Method Deconstruct addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Deconstruct(ByRef<char16_t>  key, ByRef<TValue>  value) ;

// Ctor Parameters [CppParam { name: "key", ty: "char16_t", modifiers: "", def_value: None }, CppParam { name: "value", ty: "TValue", modifiers: "", def_value: None }]
constexpr KeyValuePair_2(char16_t  key, TValue  value) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit KeyValuePair_2(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 KeyValuePair_2()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::KeyValuePair`2
namespace System::Collections::Generic {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TValue>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3841))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3841), inst: 1591 })
// CS Name: ::System.Collections.Generic::KeyValuePair`2<TKey,TValue>
struct CORDL_TYPE KeyValuePair_2<uint8_t,TValue> : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field key offset 0x0
 __declspec(property(get=__get_key, put=__set_key)) uint8_t  key;

/// @brief Field value offset 0x8
 __declspec(property(get=__get_value, put=__set_value)) TValue  value;

 __declspec(property(get=get_Key)) uint8_t  Key;

 __declspec(property(get=get_Value)) TValue  Value;

constexpr void __set_key(uint8_t  value) ;

constexpr uint8_t& __get_key() ;

constexpr uint8_t const& __get_key() const;

constexpr void __set_value(TValue  value) ;

constexpr TValue& __get_value() ;

constexpr TValue const& __get_value() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(uint8_t  key, TValue  value) ;

/// @brief Method get_Key addr 0x0 size 0xffffffffffffffff virtual false final false
inline uint8_t get_Key() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
inline TValue get_Value() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

/// @brief Method Deconstruct addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Deconstruct(ByRef<uint8_t>  key, ByRef<TValue>  value) ;

// Ctor Parameters [CppParam { name: "key", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "value", ty: "TValue", modifiers: "", def_value: None }]
constexpr KeyValuePair_2(uint8_t  key, TValue  value) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit KeyValuePair_2(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 KeyValuePair_2()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::KeyValuePair`2
namespace System::Collections::Generic {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TValue>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3841))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3841), inst: 1590 })
// CS Name: ::System.Collections.Generic::KeyValuePair`2<TKey,TValue>
struct CORDL_TYPE KeyValuePair_2<::Zenject::BindingId,TValue> : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field key offset 0x0
 __declspec(property(get=__get_key, put=__set_key)) ::Zenject::BindingId  key;

/// @brief Field value offset 0x10
 __declspec(property(get=__get_value, put=__set_value)) TValue  value;

 __declspec(property(get=get_Key)) ::Zenject::BindingId  Key;

 __declspec(property(get=get_Value)) TValue  Value;

constexpr void __set_key(::Zenject::BindingId  value) ;

constexpr ::Zenject::BindingId& __get_key() ;

constexpr ::Zenject::BindingId const& __get_key() const;

constexpr void __set_value(TValue  value) ;

constexpr TValue& __get_value() ;

constexpr TValue const& __get_value() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::Zenject::BindingId  key, TValue  value) ;

/// @brief Method get_Key addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::Zenject::BindingId get_Key() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
inline TValue get_Value() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

/// @brief Method Deconstruct addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Deconstruct(ByRef<::Zenject::BindingId>  key, ByRef<TValue>  value) ;

// Ctor Parameters [CppParam { name: "key", ty: "::Zenject::BindingId", modifiers: "", def_value: None }, CppParam { name: "value", ty: "TValue", modifiers: "", def_value: None }]
constexpr KeyValuePair_2(::Zenject::BindingId  key, TValue  value) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit KeyValuePair_2(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 KeyValuePair_2()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::KeyValuePair`2
namespace System::Collections::Generic {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TValue>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3841))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3841), inst: 1589 })
// CS Name: ::System.Collections.Generic::KeyValuePair`2<TKey,TValue>
struct CORDL_TYPE KeyValuePair_2<::BeatSaber::AvatarCore::AvatarSystemIdentifier,TValue> : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field key offset 0x0
 __declspec(property(get=__get_key, put=__set_key)) ::BeatSaber::AvatarCore::AvatarSystemIdentifier  key;

/// @brief Field value offset 0x10
 __declspec(property(get=__get_value, put=__set_value)) TValue  value;

 __declspec(property(get=get_Key)) ::BeatSaber::AvatarCore::AvatarSystemIdentifier  Key;

 __declspec(property(get=get_Value)) TValue  Value;

constexpr void __set_key(::BeatSaber::AvatarCore::AvatarSystemIdentifier  value) ;

constexpr ::BeatSaber::AvatarCore::AvatarSystemIdentifier& __get_key() ;

constexpr ::BeatSaber::AvatarCore::AvatarSystemIdentifier const& __get_key() const;

constexpr void __set_value(TValue  value) ;

constexpr TValue& __get_value() ;

constexpr TValue const& __get_value() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::BeatSaber::AvatarCore::AvatarSystemIdentifier  key, TValue  value) ;

/// @brief Method get_Key addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::BeatSaber::AvatarCore::AvatarSystemIdentifier get_Key() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
inline TValue get_Value() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

/// @brief Method Deconstruct addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Deconstruct(ByRef<::BeatSaber::AvatarCore::AvatarSystemIdentifier>  key, ByRef<TValue>  value) ;

// Ctor Parameters [CppParam { name: "key", ty: "::BeatSaber::AvatarCore::AvatarSystemIdentifier", modifiers: "", def_value: None }, CppParam { name: "value", ty: "TValue", modifiers: "", def_value: None }]
constexpr KeyValuePair_2(::BeatSaber::AvatarCore::AvatarSystemIdentifier  key, TValue  value) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit KeyValuePair_2(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 KeyValuePair_2()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::KeyValuePair`2
namespace System::Collections::Generic {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T2_cordlgen_0,::il2cpp_utils::il2cpp_reference_type TValue>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3841))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3841), inst: 1588 })
// CS Name: ::System.Collections.Generic::KeyValuePair`2<TKey,TValue>
struct CORDL_TYPE KeyValuePair_2<::System::ValueTuple_3<int32_t,T2_cordlgen_0,int32_t>,TValue> : public ::bs_hook::ValueTypeWrapper<0x20> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field key offset 0x0
 __declspec(property(get=__get_key, put=__set_key)) ::System::ValueTuple_3<int32_t,T2_cordlgen_0,int32_t>  key;

/// @brief Field value offset 0x18
 __declspec(property(get=__get_value, put=__set_value)) TValue  value;

 __declspec(property(get=get_Key)) ::System::ValueTuple_3<int32_t,T2_cordlgen_0,int32_t>  Key;

 __declspec(property(get=get_Value)) TValue  Value;

constexpr void __set_key(::System::ValueTuple_3<int32_t,T2_cordlgen_0,int32_t>  value) ;

constexpr ::System::ValueTuple_3<int32_t,T2_cordlgen_0,int32_t>& __get_key() ;

constexpr ::System::ValueTuple_3<int32_t,T2_cordlgen_0,int32_t> const& __get_key() const;

constexpr void __set_value(TValue  value) ;

constexpr TValue& __get_value() ;

constexpr TValue const& __get_value() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::ValueTuple_3<int32_t,T2_cordlgen_0,int32_t>  key, TValue  value) ;

/// @brief Method get_Key addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::ValueTuple_3<int32_t,T2_cordlgen_0,int32_t> get_Key() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
inline TValue get_Value() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

/// @brief Method Deconstruct addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Deconstruct(ByRef<::System::ValueTuple_3<int32_t,T2_cordlgen_0,int32_t>>  key, ByRef<TValue>  value) ;

// Ctor Parameters [CppParam { name: "key", ty: "::System::ValueTuple_3<int32_t,T2_cordlgen_0,int32_t>", modifiers: "", def_value: None }, CppParam { name: "value", ty: "TValue", modifiers: "", def_value: None }]
constexpr KeyValuePair_2(::System::ValueTuple_3<int32_t,T2_cordlgen_0,int32_t>  key, TValue  value) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit KeyValuePair_2(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x20>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 KeyValuePair_2()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::KeyValuePair`2
namespace System::Collections::Generic {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T1_cordlgen_0,::il2cpp_utils::il2cpp_reference_type T2_cordlgen_1,::il2cpp_utils::il2cpp_reference_type TValue>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3841))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3841), inst: 1587 })
// CS Name: ::System.Collections.Generic::KeyValuePair`2<TKey,TValue>
struct CORDL_TYPE KeyValuePair_2<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>,TValue> : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field key offset 0x0
 __declspec(property(get=__get_key, put=__set_key)) ::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>  key;

/// @brief Field value offset 0x10
 __declspec(property(get=__get_value, put=__set_value)) TValue  value;

 __declspec(property(get=get_Key)) ::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>  Key;

 __declspec(property(get=get_Value)) TValue  Value;

constexpr void __set_key(::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>  value) ;

constexpr ::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>& __get_key() ;

constexpr ::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1> const& __get_key() const;

constexpr void __set_value(TValue  value) ;

constexpr TValue& __get_value() ;

constexpr TValue const& __get_value() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>  key, TValue  value) ;

/// @brief Method get_Key addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1> get_Key() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
inline TValue get_Value() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

/// @brief Method Deconstruct addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Deconstruct(ByRef<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>  key, ByRef<TValue>  value) ;

// Ctor Parameters [CppParam { name: "key", ty: "::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>", modifiers: "", def_value: None }, CppParam { name: "value", ty: "TValue", modifiers: "", def_value: None }]
constexpr KeyValuePair_2(::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>  key, TValue  value) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit KeyValuePair_2(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 KeyValuePair_2()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::KeyValuePair`2
namespace System::Collections::Generic {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T1_cordlgen_0,::il2cpp_utils::il2cpp_reference_type TValue>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3841))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3841), inst: 1586 })
// CS Name: ::System.Collections.Generic::KeyValuePair`2<TKey,TValue>
struct CORDL_TYPE KeyValuePair_2<::System::ValueTuple_2<T1_cordlgen_0,int32_t>,TValue> : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field key offset 0x0
 __declspec(property(get=__get_key, put=__set_key)) ::System::ValueTuple_2<T1_cordlgen_0,int32_t>  key;

/// @brief Field value offset 0x10
 __declspec(property(get=__get_value, put=__set_value)) TValue  value;

 __declspec(property(get=get_Key)) ::System::ValueTuple_2<T1_cordlgen_0,int32_t>  Key;

 __declspec(property(get=get_Value)) TValue  Value;

constexpr void __set_key(::System::ValueTuple_2<T1_cordlgen_0,int32_t>  value) ;

constexpr ::System::ValueTuple_2<T1_cordlgen_0,int32_t>& __get_key() ;

constexpr ::System::ValueTuple_2<T1_cordlgen_0,int32_t> const& __get_key() const;

constexpr void __set_value(TValue  value) ;

constexpr TValue& __get_value() ;

constexpr TValue const& __get_value() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::ValueTuple_2<T1_cordlgen_0,int32_t>  key, TValue  value) ;

/// @brief Method get_Key addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::ValueTuple_2<T1_cordlgen_0,int32_t> get_Key() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
inline TValue get_Value() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

/// @brief Method Deconstruct addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Deconstruct(ByRef<::System::ValueTuple_2<T1_cordlgen_0,int32_t>>  key, ByRef<TValue>  value) ;

// Ctor Parameters [CppParam { name: "key", ty: "::System::ValueTuple_2<T1_cordlgen_0,int32_t>", modifiers: "", def_value: None }, CppParam { name: "value", ty: "TValue", modifiers: "", def_value: None }]
constexpr KeyValuePair_2(::System::ValueTuple_2<T1_cordlgen_0,int32_t>  key, TValue  value) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit KeyValuePair_2(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 KeyValuePair_2()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::KeyValuePair`2
namespace System::Collections::Generic {
// cpp template
template<::cordl_internals::is_or_is_backed_by<int32_t> T1_cordlgen_0,::il2cpp_utils::il2cpp_reference_type T2_cordlgen_1,::il2cpp_utils::il2cpp_reference_type TValue>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3841))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3841), inst: 1585 })
// CS Name: ::System.Collections.Generic::KeyValuePair`2<TKey,TValue>
struct CORDL_TYPE KeyValuePair_2<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>,TValue> : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field key offset 0x0
 __declspec(property(get=__get_key, put=__set_key)) ::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>  key;

/// @brief Field value offset 0x10
 __declspec(property(get=__get_value, put=__set_value)) TValue  value;

 __declspec(property(get=get_Key)) ::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>  Key;

 __declspec(property(get=get_Value)) TValue  Value;

constexpr void __set_key(::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>  value) ;

constexpr ::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>& __get_key() ;

constexpr ::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1> const& __get_key() const;

constexpr void __set_value(TValue  value) ;

constexpr TValue& __get_value() ;

constexpr TValue const& __get_value() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>  key, TValue  value) ;

/// @brief Method get_Key addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1> get_Key() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
inline TValue get_Value() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

/// @brief Method Deconstruct addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Deconstruct(ByRef<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>  key, ByRef<TValue>  value) ;

// Ctor Parameters [CppParam { name: "key", ty: "::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>", modifiers: "", def_value: None }, CppParam { name: "value", ty: "TValue", modifiers: "", def_value: None }]
constexpr KeyValuePair_2(::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>  key, TValue  value) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit KeyValuePair_2(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 KeyValuePair_2()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::KeyValuePair`2
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3841))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3841), inst: 1559 })
// CS Name: ::System.Collections.Generic::KeyValuePair`2<TKey,TValue>
struct CORDL_TYPE KeyValuePair_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,int32_t> : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field key offset 0x0
 __declspec(property(get=__get_key, put=__set_key)) ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair  key;

/// @brief Field value offset 0x10
 __declspec(property(get=__get_value, put=__set_value)) int32_t  value;

 __declspec(property(get=get_Key)) ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair  Key;

 __declspec(property(get=get_Value)) int32_t  Value;

constexpr void __set_key(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair  value) ;

constexpr ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair& __get_key() ;

constexpr ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair const& __get_key() const;

constexpr void __set_value(int32_t  value) ;

constexpr int32_t& __get_value() ;

constexpr int32_t const& __get_value() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair  key, int32_t  value) ;

/// @brief Method get_Key addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair get_Key() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t get_Value() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

/// @brief Method Deconstruct addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Deconstruct(ByRef<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair>  key, ByRef<int32_t>  value) ;

// Ctor Parameters [CppParam { name: "key", ty: "::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair", modifiers: "", def_value: None }, CppParam { name: "value", ty: "int32_t", modifiers: "", def_value: None }]
constexpr KeyValuePair_2(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair  key, int32_t  value) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit KeyValuePair_2(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 KeyValuePair_2()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::KeyValuePair`2
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3841))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3841), inst: 1532 })
// CS Name: ::System.Collections.Generic::KeyValuePair`2<TKey,TValue>
struct CORDL_TYPE KeyValuePair_2<::MS::Internal::Xml::Cache::XPathNodeRef,::MS::Internal::Xml::Cache::XPathNodeRef> : public ::bs_hook::ValueTypeWrapper<0x20> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field key offset 0x0
 __declspec(property(get=__get_key, put=__set_key)) ::MS::Internal::Xml::Cache::XPathNodeRef  key;

/// @brief Field value offset 0x10
 __declspec(property(get=__get_value, put=__set_value)) ::MS::Internal::Xml::Cache::XPathNodeRef  value;

 __declspec(property(get=get_Key)) ::MS::Internal::Xml::Cache::XPathNodeRef  Key;

 __declspec(property(get=get_Value)) ::MS::Internal::Xml::Cache::XPathNodeRef  Value;

constexpr void __set_key(::MS::Internal::Xml::Cache::XPathNodeRef  value) ;

constexpr ::MS::Internal::Xml::Cache::XPathNodeRef& __get_key() ;

constexpr ::MS::Internal::Xml::Cache::XPathNodeRef const& __get_key() const;

constexpr void __set_value(::MS::Internal::Xml::Cache::XPathNodeRef  value) ;

constexpr ::MS::Internal::Xml::Cache::XPathNodeRef& __get_value() ;

constexpr ::MS::Internal::Xml::Cache::XPathNodeRef const& __get_value() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::MS::Internal::Xml::Cache::XPathNodeRef  key, ::MS::Internal::Xml::Cache::XPathNodeRef  value) ;

/// @brief Method get_Key addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::MS::Internal::Xml::Cache::XPathNodeRef get_Key() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::MS::Internal::Xml::Cache::XPathNodeRef get_Value() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

/// @brief Method Deconstruct addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Deconstruct(ByRef<::MS::Internal::Xml::Cache::XPathNodeRef>  key, ByRef<::MS::Internal::Xml::Cache::XPathNodeRef>  value) ;

// Ctor Parameters [CppParam { name: "key", ty: "::MS::Internal::Xml::Cache::XPathNodeRef", modifiers: "", def_value: None }, CppParam { name: "value", ty: "::MS::Internal::Xml::Cache::XPathNodeRef", modifiers: "", def_value: None }]
constexpr KeyValuePair_2(::MS::Internal::Xml::Cache::XPathNodeRef  key, ::MS::Internal::Xml::Cache::XPathNodeRef  value) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit KeyValuePair_2(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x20>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 KeyValuePair_2()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::KeyValuePair`2
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3841))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3841), inst: 1525 })
// CS Name: ::System.Collections.Generic::KeyValuePair`2<TKey,TValue>
struct CORDL_TYPE KeyValuePair_2<uint64_t,::GlobalNamespace::__OVRSpatialAnchor__MultiAnchorDelegatePair> : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field key offset 0x0
 __declspec(property(get=__get_key, put=__set_key)) uint64_t  key;

/// @brief Field value offset 0x8
 __declspec(property(get=__get_value, put=__set_value)) ::GlobalNamespace::__OVRSpatialAnchor__MultiAnchorDelegatePair  value;

 __declspec(property(get=get_Key)) uint64_t  Key;

 __declspec(property(get=get_Value)) ::GlobalNamespace::__OVRSpatialAnchor__MultiAnchorDelegatePair  Value;

constexpr void __set_key(uint64_t  value) ;

constexpr uint64_t& __get_key() ;

constexpr uint64_t const& __get_key() const;

constexpr void __set_value(::GlobalNamespace::__OVRSpatialAnchor__MultiAnchorDelegatePair  value) ;

constexpr ::GlobalNamespace::__OVRSpatialAnchor__MultiAnchorDelegatePair& __get_value() ;

constexpr ::GlobalNamespace::__OVRSpatialAnchor__MultiAnchorDelegatePair const& __get_value() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(uint64_t  key, ::GlobalNamespace::__OVRSpatialAnchor__MultiAnchorDelegatePair  value) ;

/// @brief Method get_Key addr 0x0 size 0xffffffffffffffff virtual false final false
inline uint64_t get_Key() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::GlobalNamespace::__OVRSpatialAnchor__MultiAnchorDelegatePair get_Value() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

/// @brief Method Deconstruct addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Deconstruct(ByRef<uint64_t>  key, ByRef<::GlobalNamespace::__OVRSpatialAnchor__MultiAnchorDelegatePair>  value) ;

// Ctor Parameters [CppParam { name: "key", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "value", ty: "::GlobalNamespace::__OVRSpatialAnchor__MultiAnchorDelegatePair", modifiers: "", def_value: None }]
constexpr KeyValuePair_2(uint64_t  key, ::GlobalNamespace::__OVRSpatialAnchor__MultiAnchorDelegatePair  value) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit KeyValuePair_2(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 KeyValuePair_2()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::KeyValuePair`2
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3841))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3841), inst: 1513 })
// CS Name: ::System.Collections.Generic::KeyValuePair`2<TKey,TValue>
struct CORDL_TYPE KeyValuePair_2<uint32_t,::BeatSaber::AvatarCore::OptionalAvatarData> : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field key offset 0x0
 __declspec(property(get=__get_key, put=__set_key)) uint32_t  key;

/// @brief Field value offset 0x8
 __declspec(property(get=__get_value, put=__set_value)) ::BeatSaber::AvatarCore::OptionalAvatarData  value;

 __declspec(property(get=get_Key)) uint32_t  Key;

 __declspec(property(get=get_Value)) ::BeatSaber::AvatarCore::OptionalAvatarData  Value;

constexpr void __set_key(uint32_t  value) ;

constexpr uint32_t& __get_key() ;

constexpr uint32_t const& __get_key() const;

constexpr void __set_value(::BeatSaber::AvatarCore::OptionalAvatarData  value) ;

constexpr ::BeatSaber::AvatarCore::OptionalAvatarData& __get_value() ;

constexpr ::BeatSaber::AvatarCore::OptionalAvatarData const& __get_value() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(uint32_t  key, ::BeatSaber::AvatarCore::OptionalAvatarData  value) ;

/// @brief Method get_Key addr 0x0 size 0xffffffffffffffff virtual false final false
inline uint32_t get_Key() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::BeatSaber::AvatarCore::OptionalAvatarData get_Value() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

/// @brief Method Deconstruct addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Deconstruct(ByRef<uint32_t>  key, ByRef<::BeatSaber::AvatarCore::OptionalAvatarData>  value) ;

// Ctor Parameters [CppParam { name: "key", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "value", ty: "::BeatSaber::AvatarCore::OptionalAvatarData", modifiers: "", def_value: None }]
constexpr KeyValuePair_2(uint32_t  key, ::BeatSaber::AvatarCore::OptionalAvatarData  value) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit KeyValuePair_2(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 KeyValuePair_2()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::KeyValuePair`2
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3841))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3841), inst: 1512 })
// CS Name: ::System.Collections.Generic::KeyValuePair`2<TKey,TValue>
struct CORDL_TYPE KeyValuePair_2<uint32_t,int32_t> : public ::bs_hook::ValueTypeWrapper<0x8> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field key offset 0x0
 __declspec(property(get=__get_key, put=__set_key)) uint32_t  key;

/// @brief Field value offset 0x4
 __declspec(property(get=__get_value, put=__set_value)) int32_t  value;

 __declspec(property(get=get_Key)) uint32_t  Key;

 __declspec(property(get=get_Value)) int32_t  Value;

constexpr void __set_key(uint32_t  value) ;

constexpr uint32_t& __get_key() ;

constexpr uint32_t const& __get_key() const;

constexpr void __set_value(int32_t  value) ;

constexpr int32_t& __get_value() ;

constexpr int32_t const& __get_value() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(uint32_t  key, int32_t  value) ;

/// @brief Method get_Key addr 0x0 size 0xffffffffffffffff virtual false final false
inline uint32_t get_Key() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t get_Value() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

/// @brief Method Deconstruct addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Deconstruct(ByRef<uint32_t>  key, ByRef<int32_t>  value) ;

// Ctor Parameters [CppParam { name: "key", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "value", ty: "int32_t", modifiers: "", def_value: None }]
constexpr KeyValuePair_2(uint32_t  key, int32_t  value) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit KeyValuePair_2(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x8>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 KeyValuePair_2()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::KeyValuePair`2
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3841))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3841), inst: 1510 })
// CS Name: ::System.Collections.Generic::KeyValuePair`2<TKey,TValue>
struct CORDL_TYPE KeyValuePair_2<uint32_t,::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord> : public ::bs_hook::ValueTypeWrapper<0x30> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field key offset 0x0
 __declspec(property(get=__get_key, put=__set_key)) uint32_t  key;

/// @brief Field value offset 0x4
 __declspec(property(get=__get_value, put=__set_value)) ::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord  value;

 __declspec(property(get=get_Key)) uint32_t  Key;

 __declspec(property(get=get_Value)) ::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord  Value;

constexpr void __set_key(uint32_t  value) ;

constexpr uint32_t& __get_key() ;

constexpr uint32_t const& __get_key() const;

constexpr void __set_value(::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord  value) ;

constexpr ::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord& __get_value() ;

constexpr ::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord const& __get_value() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(uint32_t  key, ::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord  value) ;

/// @brief Method get_Key addr 0x0 size 0xffffffffffffffff virtual false final false
inline uint32_t get_Key() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord get_Value() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

/// @brief Method Deconstruct addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Deconstruct(ByRef<uint32_t>  key, ByRef<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>  value) ;

// Ctor Parameters [CppParam { name: "key", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "value", ty: "::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord", modifiers: "", def_value: None }]
constexpr KeyValuePair_2(uint32_t  key, ::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord  value) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit KeyValuePair_2(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x30>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 KeyValuePair_2()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::KeyValuePair`2
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3841))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3841), inst: 1503 })
// CS Name: ::System.Collections.Generic::KeyValuePair`2<TKey,TValue>
struct CORDL_TYPE KeyValuePair_2<uint16_t,uint16_t> : public ::bs_hook::ValueTypeWrapper<0x4> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field key offset 0x0
 __declspec(property(get=__get_key, put=__set_key)) uint16_t  key;

/// @brief Field value offset 0x2
 __declspec(property(get=__get_value, put=__set_value)) uint16_t  value;

 __declspec(property(get=get_Key)) uint16_t  Key;

 __declspec(property(get=get_Value)) uint16_t  Value;

constexpr void __set_key(uint16_t  value) ;

constexpr uint16_t& __get_key() ;

constexpr uint16_t const& __get_key() const;

constexpr void __set_value(uint16_t  value) ;

constexpr uint16_t& __get_value() ;

constexpr uint16_t const& __get_value() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(uint16_t  key, uint16_t  value) ;

/// @brief Method get_Key addr 0x0 size 0xffffffffffffffff virtual false final false
inline uint16_t get_Key() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
inline uint16_t get_Value() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

/// @brief Method Deconstruct addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Deconstruct(ByRef<uint16_t>  key, ByRef<uint16_t>  value) ;

// Ctor Parameters [CppParam { name: "key", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "value", ty: "uint16_t", modifiers: "", def_value: None }]
constexpr KeyValuePair_2(uint16_t  key, uint16_t  value) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit KeyValuePair_2(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 KeyValuePair_2()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::KeyValuePair`2
namespace System::Collections::Generic {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TKey>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3841))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3841), inst: 1386 })
// CS Name: ::System.Collections.Generic::KeyValuePair`2<TKey,TValue>
struct CORDL_TYPE KeyValuePair_2<TKey,::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle> : public ::bs_hook::ValueTypeWrapper<0x20> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field key offset 0x0
 __declspec(property(get=__get_key, put=__set_key)) TKey  key;

/// @brief Field value offset 0x8
 __declspec(property(get=__get_value, put=__set_value)) ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle  value;

 __declspec(property(get=get_Key)) TKey  Key;

 __declspec(property(get=get_Value)) ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle  Value;

constexpr void __set_key(TKey  value) ;

constexpr TKey& __get_key() ;

constexpr TKey const& __get_key() const;

constexpr void __set_value(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle  value) ;

constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle& __get_value() ;

constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle const& __get_value() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(TKey  key, ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle  value) ;

/// @brief Method get_Key addr 0x0 size 0xffffffffffffffff virtual false final false
inline TKey get_Key() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle get_Value() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

/// @brief Method Deconstruct addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Deconstruct(ByRef<TKey>  key, ByRef<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>  value) ;

// Ctor Parameters [CppParam { name: "key", ty: "TKey", modifiers: "", def_value: None }, CppParam { name: "value", ty: "::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle", modifiers: "", def_value: None }]
constexpr KeyValuePair_2(TKey  key, ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle  value) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit KeyValuePair_2(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x20>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 KeyValuePair_2()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::KeyValuePair`2
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3841))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3841), inst: 1382 })
// CS Name: ::System.Collections.Generic::KeyValuePair`2<TKey,TValue>
struct CORDL_TYPE KeyValuePair_2<::GlobalNamespace::OVRSpace,int32_t> : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field key offset 0x0
 __declspec(property(get=__get_key, put=__set_key)) ::GlobalNamespace::OVRSpace  key;

/// @brief Field value offset 0x8
 __declspec(property(get=__get_value, put=__set_value)) int32_t  value;

 __declspec(property(get=get_Key)) ::GlobalNamespace::OVRSpace  Key;

 __declspec(property(get=get_Value)) int32_t  Value;

constexpr void __set_key(::GlobalNamespace::OVRSpace  value) ;

constexpr ::GlobalNamespace::OVRSpace& __get_key() ;

constexpr ::GlobalNamespace::OVRSpace const& __get_key() const;

constexpr void __set_value(int32_t  value) ;

constexpr int32_t& __get_value() ;

constexpr int32_t const& __get_value() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::GlobalNamespace::OVRSpace  key, int32_t  value) ;

/// @brief Method get_Key addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::GlobalNamespace::OVRSpace get_Key() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t get_Value() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

/// @brief Method Deconstruct addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Deconstruct(ByRef<::GlobalNamespace::OVRSpace>  key, ByRef<int32_t>  value) ;

// Ctor Parameters [CppParam { name: "key", ty: "::GlobalNamespace::OVRSpace", modifiers: "", def_value: None }, CppParam { name: "value", ty: "int32_t", modifiers: "", def_value: None }]
constexpr KeyValuePair_2(::GlobalNamespace::OVRSpace  key, int32_t  value) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit KeyValuePair_2(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 KeyValuePair_2()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::KeyValuePair`2
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3841))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3841), inst: 1366 })
// CS Name: ::System.Collections.Generic::KeyValuePair`2<TKey,TValue>
struct CORDL_TYPE KeyValuePair_2<::UnityEngine::InputSystem::Utilities::InternedString,::GlobalNamespace::__InputControlLayout__Collection__PrecompiledLayout> : public ::bs_hook::ValueTypeWrapper<0x20> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field key offset 0x0
 __declspec(property(get=__get_key, put=__set_key)) ::UnityEngine::InputSystem::Utilities::InternedString  key;

/// @brief Field value offset 0x10
 __declspec(property(get=__get_value, put=__set_value)) ::GlobalNamespace::__InputControlLayout__Collection__PrecompiledLayout  value;

 __declspec(property(get=get_Key)) ::UnityEngine::InputSystem::Utilities::InternedString  Key;

 __declspec(property(get=get_Value)) ::GlobalNamespace::__InputControlLayout__Collection__PrecompiledLayout  Value;

constexpr void __set_key(::UnityEngine::InputSystem::Utilities::InternedString  value) ;

constexpr ::UnityEngine::InputSystem::Utilities::InternedString& __get_key() ;

constexpr ::UnityEngine::InputSystem::Utilities::InternedString const& __get_key() const;

constexpr void __set_value(::GlobalNamespace::__InputControlLayout__Collection__PrecompiledLayout  value) ;

constexpr ::GlobalNamespace::__InputControlLayout__Collection__PrecompiledLayout& __get_value() ;

constexpr ::GlobalNamespace::__InputControlLayout__Collection__PrecompiledLayout const& __get_value() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::UnityEngine::InputSystem::Utilities::InternedString  key, ::GlobalNamespace::__InputControlLayout__Collection__PrecompiledLayout  value) ;

/// @brief Method get_Key addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::InputSystem::Utilities::InternedString get_Key() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::GlobalNamespace::__InputControlLayout__Collection__PrecompiledLayout get_Value() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

/// @brief Method Deconstruct addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Deconstruct(ByRef<::UnityEngine::InputSystem::Utilities::InternedString>  key, ByRef<::GlobalNamespace::__InputControlLayout__Collection__PrecompiledLayout>  value) ;

// Ctor Parameters [CppParam { name: "key", ty: "::UnityEngine::InputSystem::Utilities::InternedString", modifiers: "", def_value: None }, CppParam { name: "value", ty: "::GlobalNamespace::__InputControlLayout__Collection__PrecompiledLayout", modifiers: "", def_value: None }]
constexpr KeyValuePair_2(::UnityEngine::InputSystem::Utilities::InternedString  key, ::GlobalNamespace::__InputControlLayout__Collection__PrecompiledLayout  value) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit KeyValuePair_2(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x20>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 KeyValuePair_2()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::KeyValuePair`2
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3841))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3841), inst: 1363 })
// CS Name: ::System.Collections.Generic::KeyValuePair`2<TKey,TValue>
struct CORDL_TYPE KeyValuePair_2<::UnityEngine::InputSystem::Utilities::InternedString,::UnityEngine::InputSystem::Utilities::InternedString> : public ::bs_hook::ValueTypeWrapper<0x20> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field key offset 0x0
 __declspec(property(get=__get_key, put=__set_key)) ::UnityEngine::InputSystem::Utilities::InternedString  key;

/// @brief Field value offset 0x10
 __declspec(property(get=__get_value, put=__set_value)) ::UnityEngine::InputSystem::Utilities::InternedString  value;

 __declspec(property(get=get_Key)) ::UnityEngine::InputSystem::Utilities::InternedString  Key;

 __declspec(property(get=get_Value)) ::UnityEngine::InputSystem::Utilities::InternedString  Value;

constexpr void __set_key(::UnityEngine::InputSystem::Utilities::InternedString  value) ;

constexpr ::UnityEngine::InputSystem::Utilities::InternedString& __get_key() ;

constexpr ::UnityEngine::InputSystem::Utilities::InternedString const& __get_key() const;

constexpr void __set_value(::UnityEngine::InputSystem::Utilities::InternedString  value) ;

constexpr ::UnityEngine::InputSystem::Utilities::InternedString& __get_value() ;

constexpr ::UnityEngine::InputSystem::Utilities::InternedString const& __get_value() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::UnityEngine::InputSystem::Utilities::InternedString  key, ::UnityEngine::InputSystem::Utilities::InternedString  value) ;

/// @brief Method get_Key addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::InputSystem::Utilities::InternedString get_Key() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::InputSystem::Utilities::InternedString get_Value() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

/// @brief Method Deconstruct addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Deconstruct(ByRef<::UnityEngine::InputSystem::Utilities::InternedString>  key, ByRef<::UnityEngine::InputSystem::Utilities::InternedString>  value) ;

// Ctor Parameters [CppParam { name: "key", ty: "::UnityEngine::InputSystem::Utilities::InternedString", modifiers: "", def_value: None }, CppParam { name: "value", ty: "::UnityEngine::InputSystem::Utilities::InternedString", modifiers: "", def_value: None }]
constexpr KeyValuePair_2(::UnityEngine::InputSystem::Utilities::InternedString  key, ::UnityEngine::InputSystem::Utilities::InternedString  value) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit KeyValuePair_2(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x20>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 KeyValuePair_2()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::KeyValuePair`2
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3841))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3841), inst: 1355 })
// CS Name: ::System.Collections.Generic::KeyValuePair`2<TKey,TValue>
struct CORDL_TYPE KeyValuePair_2<int64_t,::UnityEngine::UIElements::ComputedStyle> : public ::bs_hook::ValueTypeWrapper<0x60> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x60};

/// @brief Field key offset 0x0
 __declspec(property(get=__get_key, put=__set_key)) int64_t  key;

/// @brief Field value offset 0x8
 __declspec(property(get=__get_value, put=__set_value)) ::UnityEngine::UIElements::ComputedStyle  value;

 __declspec(property(get=get_Key)) int64_t  Key;

 __declspec(property(get=get_Value)) ::UnityEngine::UIElements::ComputedStyle  Value;

constexpr void __set_key(int64_t  value) ;

constexpr int64_t& __get_key() ;

constexpr int64_t const& __get_key() const;

constexpr void __set_value(::UnityEngine::UIElements::ComputedStyle  value) ;

constexpr ::UnityEngine::UIElements::ComputedStyle& __get_value() ;

constexpr ::UnityEngine::UIElements::ComputedStyle const& __get_value() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(int64_t  key, ::UnityEngine::UIElements::ComputedStyle  value) ;

/// @brief Method get_Key addr 0x0 size 0xffffffffffffffff virtual false final false
inline int64_t get_Key() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::UIElements::ComputedStyle get_Value() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

/// @brief Method Deconstruct addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Deconstruct(ByRef<int64_t>  key, ByRef<::UnityEngine::UIElements::ComputedStyle>  value) ;

// Ctor Parameters [CppParam { name: "key", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "value", ty: "::UnityEngine::UIElements::ComputedStyle", modifiers: "", def_value: None }]
constexpr KeyValuePair_2(int64_t  key, ::UnityEngine::UIElements::ComputedStyle  value) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit KeyValuePair_2(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x60>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 KeyValuePair_2()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::KeyValuePair`2
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3841))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3841), inst: 1354 })
// CS Name: ::System.Collections.Generic::KeyValuePair`2<TKey,TValue>
struct CORDL_TYPE KeyValuePair_2<int32_t,::UnityEngine::TextCore::Text::__TextResourceManager__FontAssetRef> : public ::bs_hook::ValueTypeWrapper<0x28> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field key offset 0x0
 __declspec(property(get=__get_key, put=__set_key)) int32_t  key;

/// @brief Field value offset 0x8
 __declspec(property(get=__get_value, put=__set_value)) ::UnityEngine::TextCore::Text::__TextResourceManager__FontAssetRef  value;

 __declspec(property(get=get_Key)) int32_t  Key;

 __declspec(property(get=get_Value)) ::UnityEngine::TextCore::Text::__TextResourceManager__FontAssetRef  Value;

constexpr void __set_key(int32_t  value) ;

constexpr int32_t& __get_key() ;

constexpr int32_t const& __get_key() const;

constexpr void __set_value(::UnityEngine::TextCore::Text::__TextResourceManager__FontAssetRef  value) ;

constexpr ::UnityEngine::TextCore::Text::__TextResourceManager__FontAssetRef& __get_value() ;

constexpr ::UnityEngine::TextCore::Text::__TextResourceManager__FontAssetRef const& __get_value() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(int32_t  key, ::UnityEngine::TextCore::Text::__TextResourceManager__FontAssetRef  value) ;

/// @brief Method get_Key addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t get_Key() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::TextCore::Text::__TextResourceManager__FontAssetRef get_Value() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

/// @brief Method Deconstruct addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Deconstruct(ByRef<int32_t>  key, ByRef<::UnityEngine::TextCore::Text::__TextResourceManager__FontAssetRef>  value) ;

// Ctor Parameters [CppParam { name: "key", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "value", ty: "::UnityEngine::TextCore::Text::__TextResourceManager__FontAssetRef", modifiers: "", def_value: None }]
constexpr KeyValuePair_2(int32_t  key, ::UnityEngine::TextCore::Text::__TextResourceManager__FontAssetRef  value) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit KeyValuePair_2(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x28>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 KeyValuePair_2()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::KeyValuePair`2
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3841))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3841), inst: 1327 })
// CS Name: ::System.Collections.Generic::KeyValuePair`2<TKey,TValue>
struct CORDL_TYPE KeyValuePair_2<int32_t,int64_t> : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field key offset 0x0
 __declspec(property(get=__get_key, put=__set_key)) int32_t  key;

/// @brief Field value offset 0x8
 __declspec(property(get=__get_value, put=__set_value)) int64_t  value;

 __declspec(property(get=get_Key)) int32_t  Key;

 __declspec(property(get=get_Value)) int64_t  Value;

constexpr void __set_key(int32_t  value) ;

constexpr int32_t& __get_key() ;

constexpr int32_t const& __get_key() const;

constexpr void __set_value(int64_t  value) ;

constexpr int64_t& __get_value() ;

constexpr int64_t const& __get_value() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(int32_t  key, int64_t  value) ;

/// @brief Method get_Key addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t get_Key() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
inline int64_t get_Value() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

/// @brief Method Deconstruct addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Deconstruct(ByRef<int32_t>  key, ByRef<int64_t>  value) ;

// Ctor Parameters [CppParam { name: "key", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "value", ty: "int64_t", modifiers: "", def_value: None }]
constexpr KeyValuePair_2(int32_t  key, int64_t  value) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit KeyValuePair_2(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 KeyValuePair_2()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::KeyValuePair`2
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3841))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3841), inst: 1325 })
// CS Name: ::System.Collections.Generic::KeyValuePair`2<TKey,TValue>
struct CORDL_TYPE KeyValuePair_2<int32_t,::IgnoranceCore::IgnoranceClientStats> : public ::bs_hook::ValueTypeWrapper<0x38> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field key offset 0x0
 __declspec(property(get=__get_key, put=__set_key)) int32_t  key;

/// @brief Field value offset 0x8
 __declspec(property(get=__get_value, put=__set_value)) ::IgnoranceCore::IgnoranceClientStats  value;

 __declspec(property(get=get_Key)) int32_t  Key;

 __declspec(property(get=get_Value)) ::IgnoranceCore::IgnoranceClientStats  Value;

constexpr void __set_key(int32_t  value) ;

constexpr int32_t& __get_key() ;

constexpr int32_t const& __get_key() const;

constexpr void __set_value(::IgnoranceCore::IgnoranceClientStats  value) ;

constexpr ::IgnoranceCore::IgnoranceClientStats& __get_value() ;

constexpr ::IgnoranceCore::IgnoranceClientStats const& __get_value() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(int32_t  key, ::IgnoranceCore::IgnoranceClientStats  value) ;

/// @brief Method get_Key addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t get_Key() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::IgnoranceCore::IgnoranceClientStats get_Value() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

/// @brief Method Deconstruct addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Deconstruct(ByRef<int32_t>  key, ByRef<::IgnoranceCore::IgnoranceClientStats>  value) ;

// Ctor Parameters [CppParam { name: "key", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "value", ty: "::IgnoranceCore::IgnoranceClientStats", modifiers: "", def_value: None }]
constexpr KeyValuePair_2(int32_t  key, ::IgnoranceCore::IgnoranceClientStats  value) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit KeyValuePair_2(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x38>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 KeyValuePair_2()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::KeyValuePair`2
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3841))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3841), inst: 1315 })
// CS Name: ::System.Collections.Generic::KeyValuePair`2<TKey,TValue>
struct CORDL_TYPE KeyValuePair_2<int32_t,::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent> : public ::bs_hook::ValueTypeWrapper<0x38> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field key offset 0x0
 __declspec(property(get=__get_key, put=__set_key)) int32_t  key;

/// @brief Field value offset 0x8
 __declspec(property(get=__get_value, put=__set_value)) ::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent  value;

 __declspec(property(get=get_Key)) int32_t  Key;

 __declspec(property(get=get_Value)) ::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent  Value;

constexpr void __set_key(int32_t  value) ;

constexpr int32_t& __get_key() ;

constexpr int32_t const& __get_key() const;

constexpr void __set_value(::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent  value) ;

constexpr ::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent& __get_value() ;

constexpr ::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent const& __get_value() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(int32_t  key, ::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent  value) ;

/// @brief Method get_Key addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t get_Key() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent get_Value() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

/// @brief Method Deconstruct addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Deconstruct(ByRef<int32_t>  key, ByRef<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>  value) ;

// Ctor Parameters [CppParam { name: "key", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "value", ty: "::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent", modifiers: "", def_value: None }]
constexpr KeyValuePair_2(int32_t  key, ::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent  value) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit KeyValuePair_2(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x38>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 KeyValuePair_2()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::KeyValuePair`2
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3841))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3841), inst: 1312 })
// CS Name: ::System.Collections.Generic::KeyValuePair`2<TKey,TValue>
struct CORDL_TYPE KeyValuePair_2<int32_t,char16_t> : public ::bs_hook::ValueTypeWrapper<0x8> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field key offset 0x0
 __declspec(property(get=__get_key, put=__set_key)) int32_t  key;

/// @brief Field value offset 0x4
 __declspec(property(get=__get_value, put=__set_value)) char16_t  value;

 __declspec(property(get=get_Key)) int32_t  Key;

 __declspec(property(get=get_Value)) char16_t  Value;

constexpr void __set_key(int32_t  value) ;

constexpr int32_t& __get_key() ;

constexpr int32_t const& __get_key() const;

constexpr void __set_value(char16_t  value) ;

constexpr char16_t& __get_value() ;

constexpr char16_t const& __get_value() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(int32_t  key, char16_t  value) ;

/// @brief Method get_Key addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t get_Key() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
inline char16_t get_Value() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

/// @brief Method Deconstruct addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Deconstruct(ByRef<int32_t>  key, ByRef<char16_t>  value) ;

// Ctor Parameters [CppParam { name: "key", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "value", ty: "char16_t", modifiers: "", def_value: None }]
constexpr KeyValuePair_2(int32_t  key, char16_t  value) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit KeyValuePair_2(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x8>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 KeyValuePair_2()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::KeyValuePair`2
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3841))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3841), inst: 1311 })
// CS Name: ::System.Collections.Generic::KeyValuePair`2<TKey,TValue>
struct CORDL_TYPE KeyValuePair_2<int32_t,bool> : public ::bs_hook::ValueTypeWrapper<0x8> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field key offset 0x0
 __declspec(property(get=__get_key, put=__set_key)) int32_t  key;

/// @brief Field value offset 0x4
 __declspec(property(get=__get_value, put=__set_value)) bool  value;

 __declspec(property(get=get_Key)) int32_t  Key;

 __declspec(property(get=get_Value)) bool  Value;

constexpr void __set_key(int32_t  value) ;

constexpr int32_t& __get_key() ;

constexpr int32_t const& __get_key() const;

constexpr void __set_value(bool  value) ;

constexpr bool& __get_value() ;

constexpr bool const& __get_value() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(int32_t  key, bool  value) ;

/// @brief Method get_Key addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t get_Key() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_Value() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

/// @brief Method Deconstruct addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Deconstruct(ByRef<int32_t>  key, ByRef<bool>  value) ;

// Ctor Parameters [CppParam { name: "key", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "value", ty: "bool", modifiers: "", def_value: None }]
constexpr KeyValuePair_2(int32_t  key, bool  value) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit KeyValuePair_2(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x8>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 KeyValuePair_2()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::KeyValuePair`2
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3841))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3841), inst: 1271 })
// CS Name: ::System.Collections.Generic::KeyValuePair`2<TKey,TValue>
struct CORDL_TYPE KeyValuePair_2<::System::Guid,int32_t> : public ::bs_hook::ValueTypeWrapper<0x14> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x14};

/// @brief Field key offset 0x0
 __declspec(property(get=__get_key, put=__set_key)) ::System::Guid  key;

/// @brief Field value offset 0x10
 __declspec(property(get=__get_value, put=__set_value)) int32_t  value;

 __declspec(property(get=get_Key)) ::System::Guid  Key;

 __declspec(property(get=get_Value)) int32_t  Value;

constexpr void __set_key(::System::Guid  value) ;

constexpr ::System::Guid& __get_key() ;

constexpr ::System::Guid const& __get_key() const;

constexpr void __set_value(int32_t  value) ;

constexpr int32_t& __get_value() ;

constexpr int32_t const& __get_value() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Guid  key, int32_t  value) ;

/// @brief Method get_Key addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Guid get_Key() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t get_Value() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

/// @brief Method Deconstruct addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Deconstruct(ByRef<::System::Guid>  key, ByRef<int32_t>  value) ;

// Ctor Parameters [CppParam { name: "key", ty: "::System::Guid", modifiers: "", def_value: None }, CppParam { name: "value", ty: "int32_t", modifiers: "", def_value: None }]
constexpr KeyValuePair_2(::System::Guid  key, int32_t  value) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit KeyValuePair_2(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x14>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 KeyValuePair_2()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::KeyValuePair`2
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3841))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3841), inst: 1247 })
// CS Name: ::System.Collections.Generic::KeyValuePair`2<TKey,TValue>
struct CORDL_TYPE KeyValuePair_2<::UnityEngine::ProBuilder::EdgeLookup,float_t> : public ::bs_hook::ValueTypeWrapper<0x14> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x14};

/// @brief Field key offset 0x0
 __declspec(property(get=__get_key, put=__set_key)) ::UnityEngine::ProBuilder::EdgeLookup  key;

/// @brief Field value offset 0x10
 __declspec(property(get=__get_value, put=__set_value)) float_t  value;

 __declspec(property(get=get_Key)) ::UnityEngine::ProBuilder::EdgeLookup  Key;

 __declspec(property(get=get_Value)) float_t  Value;

constexpr void __set_key(::UnityEngine::ProBuilder::EdgeLookup  value) ;

constexpr ::UnityEngine::ProBuilder::EdgeLookup& __get_key() ;

constexpr ::UnityEngine::ProBuilder::EdgeLookup const& __get_key() const;

constexpr void __set_value(float_t  value) ;

constexpr float_t& __get_value() ;

constexpr float_t const& __get_value() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::UnityEngine::ProBuilder::EdgeLookup  key, float_t  value) ;

/// @brief Method get_Key addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::ProBuilder::EdgeLookup get_Key() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
inline float_t get_Value() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

/// @brief Method Deconstruct addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Deconstruct(ByRef<::UnityEngine::ProBuilder::EdgeLookup>  key, ByRef<float_t>  value) ;

// Ctor Parameters [CppParam { name: "key", ty: "::UnityEngine::ProBuilder::EdgeLookup", modifiers: "", def_value: None }, CppParam { name: "value", ty: "float_t", modifiers: "", def_value: None }]
constexpr KeyValuePair_2(::UnityEngine::ProBuilder::EdgeLookup  key, float_t  value) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit KeyValuePair_2(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x14>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 KeyValuePair_2()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::KeyValuePair`2
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3841))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3841), inst: 534 })
// CS Name: ::System.Collections.Generic::KeyValuePair`2<TKey,TValue>
struct CORDL_TYPE KeyValuePair_2<int32_t,float_t> : public ::bs_hook::ValueTypeWrapper<0x8> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field key offset 0x0
 __declspec(property(get=__get_key, put=__set_key)) int32_t  key;

/// @brief Field value offset 0x4
 __declspec(property(get=__get_value, put=__set_value)) float_t  value;

 __declspec(property(get=get_Key)) int32_t  Key;

 __declspec(property(get=get_Value)) float_t  Value;

constexpr void __set_key(int32_t  value) ;

constexpr int32_t& __get_key() ;

constexpr int32_t const& __get_key() const;

constexpr void __set_value(float_t  value) ;

constexpr float_t& __get_value() ;

constexpr float_t const& __get_value() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(int32_t  key, float_t  value) ;

/// @brief Method get_Key addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t get_Key() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
inline float_t get_Value() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

/// @brief Method Deconstruct addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Deconstruct(ByRef<int32_t>  key, ByRef<float_t>  value) ;

// Ctor Parameters [CppParam { name: "key", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "value", ty: "float_t", modifiers: "", def_value: None }]
constexpr KeyValuePair_2(int32_t  key, float_t  value) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit KeyValuePair_2(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x8>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 KeyValuePair_2()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::KeyValuePair`2
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3841))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3841), inst: 533 })
// CS Name: ::System.Collections.Generic::KeyValuePair`2<TKey,TValue>
struct CORDL_TYPE KeyValuePair_2<int32_t,int32_t> : public ::bs_hook::ValueTypeWrapper<0x8> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field key offset 0x0
 __declspec(property(get=__get_key, put=__set_key)) int32_t  key;

/// @brief Field value offset 0x4
 __declspec(property(get=__get_value, put=__set_value)) int32_t  value;

 __declspec(property(get=get_Key)) int32_t  Key;

 __declspec(property(get=get_Value)) int32_t  Value;

constexpr void __set_key(int32_t  value) ;

constexpr int32_t& __get_key() ;

constexpr int32_t const& __get_key() const;

constexpr void __set_value(int32_t  value) ;

constexpr int32_t& __get_value() ;

constexpr int32_t const& __get_value() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(int32_t  key, int32_t  value) ;

/// @brief Method get_Key addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t get_Key() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t get_Value() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

/// @brief Method Deconstruct addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Deconstruct(ByRef<int32_t>  key, ByRef<int32_t>  value) ;

// Ctor Parameters [CppParam { name: "key", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "value", ty: "int32_t", modifiers: "", def_value: None }]
constexpr KeyValuePair_2(int32_t  key, int32_t  value) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit KeyValuePair_2(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x8>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 KeyValuePair_2()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::KeyValuePair`2
namespace System::Collections::Generic {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3841))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3841), inst: 81 })
// CS Name: ::System.Collections.Generic::KeyValuePair`2<TKey,TValue>
struct CORDL_TYPE KeyValuePair_2<TKey,TValue> : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field key offset 0x0
 __declspec(property(get=__get_key, put=__set_key)) TKey  key;

/// @brief Field value offset 0x8
 __declspec(property(get=__get_value, put=__set_value)) TValue  value;

 __declspec(property(get=get_Key)) TKey  Key;

 __declspec(property(get=get_Value)) TValue  Value;

constexpr void __set_key(TKey  value) ;

constexpr TKey& __get_key() ;

constexpr TKey const& __get_key() const;

constexpr void __set_value(TValue  value) ;

constexpr TValue& __get_value() ;

constexpr TValue const& __get_value() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(TKey  key, TValue  value) ;

/// @brief Method get_Key addr 0x0 size 0xffffffffffffffff virtual false final false
inline TKey get_Key() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
inline TValue get_Value() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

/// @brief Method Deconstruct addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Deconstruct(ByRef<TKey>  key, ByRef<TValue>  value) ;

// Ctor Parameters [CppParam { name: "key", ty: "TKey", modifiers: "", def_value: None }, CppParam { name: "value", ty: "TValue", modifiers: "", def_value: None }]
constexpr KeyValuePair_2(TKey  key, TValue  value) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit KeyValuePair_2(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 KeyValuePair_2()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::System::Collections::Generic::KeyValuePair_2, "System.Collections.Generic", "KeyValuePair`2");
