#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__EqualityComparer_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GenericEqualityComparer_1)
namespace System {
class Object;
}
namespace BeatSaber::AvatarCore {
struct AvatarSystemIdentifier;
}
namespace BeatSaber::AvatarCore {
struct OptionalAvatarData;
}
namespace GlobalNamespace {
struct LevelKey;
}
namespace GlobalNamespace {
struct OVRAnchor;
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
namespace IntervalTree {
template<typename TKey,typename TValue>
struct RangeValuePair_2;
}
namespace System {
struct DateTime;
}
namespace System {
struct DateTimeOffset;
}
namespace System {
struct Decimal;
}
namespace System {
struct Guid;
}
namespace System::Text::RegularExpressions {
struct __Regex__CachedCodeEntryKey;
}
namespace System {
struct TimeSpan;
}
namespace System {
template<typename T1>
struct ValueTuple_1;
}
namespace UnityEngine {
struct Vector3;
}
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
namespace System {
struct Int32Enum;
}
namespace System {
template<typename T1,typename T2,typename T3>
struct ValueTuple_3;
}
namespace UnityEngine::UIElements {
struct Vertex;
}
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
namespace UnityEngine {
struct BoneWeight;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine::InputSystem {
struct InputBinding;
}
namespace UnityEngine::InputSystem::Layouts {
struct InputDeviceDescription;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputEventPtr;
}
namespace UnityEngine::InputSystem::Utilities {
struct InternedString;
}
namespace UnityEngine::InputSystem::Utilities {
struct NamedValue;
}
namespace UnityEngine::InputSystem::Utilities {
struct Substring;
}
namespace UnityEngine::InputSystem::Utilities {
struct __JsonParser__JsonValue;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine::Playables {
struct Playable;
}
namespace UnityEngine {
struct Pose;
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
namespace UnityEngine::ProBuilder {
struct Triangle;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine::Rendering {
struct VertexAttributeDescriptor;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
template<typename TObject>
struct AsyncOperationHandle_1;
}
namespace UnityEngine::TextCore {
struct GlyphRect;
}
namespace UnityEngine::TextCore::LowLevel {
struct GlyphPairAdjustmentRecord;
}
namespace UnityEngine::UI {
struct ColorBlock;
}
namespace UnityEngine::UI {
struct Navigation;
}
namespace UnityEngine::UI {
struct SpriteState;
}
namespace UnityEngine::UIElements {
struct Background;
}
namespace UnityEngine::UIElements {
struct EasingFunction;
}
namespace UnityEngine::UIElements {
struct FontDefinition;
}
namespace UnityEngine::UIElements {
struct ManipulatorActivationFilter;
}
namespace UnityEngine::UIElements {
struct StylePropertyName;
}
namespace UnityEngine::UIElements {
struct TimeValue;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3Int;
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
// Forward declare root types
namespace System::Collections::Generic {
template<typename T>
class GenericEqualityComparer_1;
}
namespace System::Collections::Generic {
template<>
class GenericEqualityComparer_1<::BeatSaber::AvatarCore::AvatarSystemIdentifier>;
}
namespace System::Collections::Generic {
template<>
class GenericEqualityComparer_1<::BeatSaber::AvatarCore::OptionalAvatarData>;
}
namespace System::Collections::Generic {
template<>
class GenericEqualityComparer_1<::GlobalNamespace::LevelKey>;
}
namespace System::Collections::Generic {
template<>
class GenericEqualityComparer_1<::GlobalNamespace::OVRAnchor>;
}
namespace System::Collections::Generic {
template<>
class GenericEqualityComparer_1<::GlobalNamespace::OVRSpace>;
}
namespace System::Collections::Generic {
template<>
class GenericEqualityComparer_1<::GlobalNamespace::SongPackMask>;
}
namespace System::Collections::Generic {
template<>
class GenericEqualityComparer_1<::GlobalNamespace::__MirrorRendererSO__CameraTransformData>;
}
namespace System::Collections::Generic {
template<::il2cpp_utils::il2cpp_reference_type TKey_cordlgen_0,::il2cpp_utils::il2cpp_reference_type TValue_cordlgen_1>
class GenericEqualityComparer_1<::IntervalTree::RangeValuePair_2<TKey_cordlgen_0,TValue_cordlgen_1>>;
}
namespace System::Collections::Generic {
template<>
class GenericEqualityComparer_1<::System::DateTime>;
}
namespace System::Collections::Generic {
template<>
class GenericEqualityComparer_1<::System::DateTimeOffset>;
}
namespace System::Collections::Generic {
template<>
class GenericEqualityComparer_1<::System::Decimal>;
}
namespace System::Collections::Generic {
template<>
class GenericEqualityComparer_1<::System::Guid>;
}
namespace System::Collections::Generic {
template<>
class GenericEqualityComparer_1<::System::Text::RegularExpressions::__Regex__CachedCodeEntryKey>;
}
namespace System::Collections::Generic {
template<>
class GenericEqualityComparer_1<::System::TimeSpan>;
}
namespace System::Collections::Generic {
template<>
class GenericEqualityComparer_1<::System::ValueTuple_1<bool>>;
}
namespace System::Collections::Generic {
template<::il2cpp_utils::il2cpp_reference_type T1_cordlgen_0>
class GenericEqualityComparer_1<::System::ValueTuple_2<T1_cordlgen_0,::UnityEngine::Vector3>>;
}
namespace System::Collections::Generic {
template<::il2cpp_utils::il2cpp_reference_type T1_cordlgen_0,::il2cpp_utils::il2cpp_reference_type T2_cordlgen_1>
class GenericEqualityComparer_1<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>;
}
namespace System::Collections::Generic {
template<::cordl_internals::is_or_is_backed_by<int32_t> T1_cordlgen_0,::il2cpp_utils::il2cpp_reference_type T2_cordlgen_1>
class GenericEqualityComparer_1<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>;
}
namespace System::Collections::Generic {
template<::il2cpp_utils::il2cpp_reference_type T1_cordlgen_0>
class GenericEqualityComparer_1<::System::ValueTuple_2<T1_cordlgen_0,int32_t>>;
}
namespace System::Collections::Generic {
template<::il2cpp_utils::il2cpp_reference_type T2_cordlgen_0>
class GenericEqualityComparer_1<::System::ValueTuple_2<int32_t,T2_cordlgen_0>>;
}
namespace System::Collections::Generic {
template<::il2cpp_utils::il2cpp_reference_type T1_cordlgen_0,::il2cpp_utils::il2cpp_reference_type T2_cordlgen_1,::il2cpp_utils::il2cpp_reference_type T3_cordlgen_2>
class GenericEqualityComparer_1<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,T3_cordlgen_2>>;
}
namespace System::Collections::Generic {
template<::cordl_internals::is_or_is_backed_by<int32_t> T1_cordlgen_0,::cordl_internals::is_or_is_backed_by<int32_t> T2_cordlgen_1,::il2cpp_utils::il2cpp_reference_type T3_cordlgen_2>
class GenericEqualityComparer_1<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,T3_cordlgen_2>>;
}
namespace System::Collections::Generic {
template<::il2cpp_utils::il2cpp_reference_type T2_cordlgen_0>
class GenericEqualityComparer_1<::System::ValueTuple_3<int32_t,T2_cordlgen_0,int32_t>>;
}
namespace System::Collections::Generic {
template<>
class GenericEqualityComparer_1<::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::Vertex>>;
}
namespace System::Collections::Generic {
template<>
class GenericEqualityComparer_1<::Unity::Collections::NativeArray_1<uint16_t>>;
}
namespace System::Collections::Generic {
template<>
class GenericEqualityComparer_1<::UnityEngine::BoneWeight>;
}
namespace System::Collections::Generic {
template<>
class GenericEqualityComparer_1<::UnityEngine::Color>;
}
namespace System::Collections::Generic {
template<>
class GenericEqualityComparer_1<::UnityEngine::InputSystem::InputBinding>;
}
namespace System::Collections::Generic {
template<>
class GenericEqualityComparer_1<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>;
}
namespace System::Collections::Generic {
template<>
class GenericEqualityComparer_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>;
}
namespace System::Collections::Generic {
template<>
class GenericEqualityComparer_1<::UnityEngine::InputSystem::Utilities::InternedString>;
}
namespace System::Collections::Generic {
template<>
class GenericEqualityComparer_1<::UnityEngine::InputSystem::Utilities::NamedValue>;
}
namespace System::Collections::Generic {
template<>
class GenericEqualityComparer_1<::UnityEngine::InputSystem::Utilities::Substring>;
}
namespace System::Collections::Generic {
template<>
class GenericEqualityComparer_1<::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue>;
}
namespace System::Collections::Generic {
template<>
class GenericEqualityComparer_1<::UnityEngine::Matrix4x4>;
}
namespace System::Collections::Generic {
template<>
class GenericEqualityComparer_1<::UnityEngine::Playables::Playable>;
}
namespace System::Collections::Generic {
template<>
class GenericEqualityComparer_1<::UnityEngine::Pose>;
}
namespace System::Collections::Generic {
template<>
class GenericEqualityComparer_1<::UnityEngine::ProBuilder::Edge>;
}
namespace System::Collections::Generic {
template<>
class GenericEqualityComparer_1<::UnityEngine::ProBuilder::EdgeLookup>;
}
namespace System::Collections::Generic {
template<>
class GenericEqualityComparer_1<::UnityEngine::ProBuilder::IntVec3>;
}
namespace System::Collections::Generic {
template<>
class GenericEqualityComparer_1<::UnityEngine::ProBuilder::Triangle>;
}
namespace System::Collections::Generic {
template<>
class GenericEqualityComparer_1<::UnityEngine::Quaternion>;
}
namespace System::Collections::Generic {
template<>
class GenericEqualityComparer_1<::UnityEngine::Rect>;
}
namespace System::Collections::Generic {
template<>
class GenericEqualityComparer_1<::UnityEngine::Rendering::VertexAttributeDescriptor>;
}
namespace System::Collections::Generic {
template<::il2cpp_utils::il2cpp_reference_type TObject_cordlgen_0>
class GenericEqualityComparer_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject_cordlgen_0>>;
}
namespace System::Collections::Generic {
template<>
class GenericEqualityComparer_1<::UnityEngine::TextCore::GlyphRect>;
}
namespace System::Collections::Generic {
template<>
class GenericEqualityComparer_1<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>;
}
namespace System::Collections::Generic {
template<>
class GenericEqualityComparer_1<::UnityEngine::UI::ColorBlock>;
}
namespace System::Collections::Generic {
template<>
class GenericEqualityComparer_1<::UnityEngine::UI::Navigation>;
}
namespace System::Collections::Generic {
template<>
class GenericEqualityComparer_1<::UnityEngine::UI::SpriteState>;
}
namespace System::Collections::Generic {
template<>
class GenericEqualityComparer_1<::UnityEngine::UIElements::Background>;
}
namespace System::Collections::Generic {
template<>
class GenericEqualityComparer_1<::UnityEngine::UIElements::EasingFunction>;
}
namespace System::Collections::Generic {
template<>
class GenericEqualityComparer_1<::UnityEngine::UIElements::FontDefinition>;
}
namespace System::Collections::Generic {
template<>
class GenericEqualityComparer_1<::UnityEngine::UIElements::ManipulatorActivationFilter>;
}
namespace System::Collections::Generic {
template<>
class GenericEqualityComparer_1<::UnityEngine::UIElements::StylePropertyName>;
}
namespace System::Collections::Generic {
template<>
class GenericEqualityComparer_1<::UnityEngine::UIElements::TimeValue>;
}
namespace System::Collections::Generic {
template<>
class GenericEqualityComparer_1<::UnityEngine::Vector2>;
}
namespace System::Collections::Generic {
template<>
class GenericEqualityComparer_1<::UnityEngine::Vector3>;
}
namespace System::Collections::Generic {
template<>
class GenericEqualityComparer_1<::UnityEngine::Vector3Int>;
}
namespace System::Collections::Generic {
template<>
class GenericEqualityComparer_1<::UnityEngine::Vector4>;
}
namespace System::Collections::Generic {
template<>
class GenericEqualityComparer_1<::Zenject::BindingId>;
}
namespace System::Collections::Generic {
template<>
class GenericEqualityComparer_1<::Zenject::SignalSubscriptionId>;
}
namespace System::Collections::Generic {
template<>
class GenericEqualityComparer_1<::cordl_internals::intptr_t>;
}
namespace System::Collections::Generic {
template<::il2cpp_utils::il2cpp_reference_type T>
class GenericEqualityComparer_1<T>;
}
namespace System::Collections::Generic {
template<>
class GenericEqualityComparer_1<bool>;
}
namespace System::Collections::Generic {
template<>
class GenericEqualityComparer_1<char16_t>;
}
namespace System::Collections::Generic {
template<>
class GenericEqualityComparer_1<double_t>;
}
namespace System::Collections::Generic {
template<>
class GenericEqualityComparer_1<float_t>;
}
namespace System::Collections::Generic {
template<>
class GenericEqualityComparer_1<int16_t>;
}
namespace System::Collections::Generic {
template<>
class GenericEqualityComparer_1<int32_t>;
}
namespace System::Collections::Generic {
template<>
class GenericEqualityComparer_1<int64_t>;
}
namespace System::Collections::Generic {
template<>
class GenericEqualityComparer_1<int8_t>;
}
namespace System::Collections::Generic {
template<>
class GenericEqualityComparer_1<uint16_t>;
}
namespace System::Collections::Generic {
template<>
class GenericEqualityComparer_1<uint32_t>;
}
namespace System::Collections::Generic {
template<>
class GenericEqualityComparer_1<uint64_t>;
}
namespace System::Collections::Generic {
template<>
class GenericEqualityComparer_1<uint8_t>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::Collections::Generic::GenericEqualityComparer_1);
// Type: System.Collections.Generic::GenericEqualityComparer`1
// Type: System.Collections.Generic::GenericEqualityComparer`1
namespace System::Collections::Generic {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T1_cordlgen_0,::il2cpp_utils::il2cpp_reference_type T2_cordlgen_1,::il2cpp_utils::il2cpp_reference_type T3_cordlgen_2>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3869)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3869), inst: 1701 }), TypeDefinitionIndex(TypeDefinitionIndex(3870))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3870), inst: 7239 })
// CS Name: ::System.Collections.Generic::GenericEqualityComparer`1<T>*
class CORDL_TYPE GenericEqualityComparer_1<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,T3_cordlgen_2>> : public ::System::Collections::Generic::EqualityComparer_1<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,T3_cordlgen_2>> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Collections::Generic::EqualityComparer_1<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,T3_cordlgen_2>>)]{};

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,T3_cordlgen_2>  x, ::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,T3_cordlgen_2>  y) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode(::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,T3_cordlgen_2>  obj) ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t IndexOf(::ArrayW<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,T3_cordlgen_2>,::Array<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,T3_cordlgen_2>>*>  array, ::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,T3_cordlgen_2>  value, int32_t  startIndex, int32_t  count) ;

/// @brief Method LastIndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t LastIndexOf(::ArrayW<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,T3_cordlgen_2>,::Array<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,T3_cordlgen_2>>*>  array, ::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,T3_cordlgen_2>  value, int32_t  startIndex, int32_t  count) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

static inline ::System::Collections::Generic::GenericEqualityComparer_1<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,T3_cordlgen_2>>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GenericEqualityComparer_1(GenericEqualityComparer_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GenericEqualityComparer_1(GenericEqualityComparer_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 GenericEqualityComparer_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::GenericEqualityComparer`1
namespace System::Collections::Generic {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T2_cordlgen_0>
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3869), inst: 1701 }), TypeDefinitionIndex(TypeDefinitionIndex(3869)), TypeDefinitionIndex(TypeDefinitionIndex(3870))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3870), inst: 7238 })
// CS Name: ::System.Collections.Generic::GenericEqualityComparer`1<T>*
class CORDL_TYPE GenericEqualityComparer_1<::System::ValueTuple_3<int32_t,T2_cordlgen_0,int32_t>> : public ::System::Collections::Generic::EqualityComparer_1<::System::ValueTuple_3<int32_t,T2_cordlgen_0,int32_t>> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Collections::Generic::EqualityComparer_1<::System::ValueTuple_3<int32_t,T2_cordlgen_0,int32_t>>)]{};

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::ValueTuple_3<int32_t,T2_cordlgen_0,int32_t>  x, ::System::ValueTuple_3<int32_t,T2_cordlgen_0,int32_t>  y) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode(::System::ValueTuple_3<int32_t,T2_cordlgen_0,int32_t>  obj) ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t IndexOf(::ArrayW<::System::ValueTuple_3<int32_t,T2_cordlgen_0,int32_t>,::Array<::System::ValueTuple_3<int32_t,T2_cordlgen_0,int32_t>>*>  array, ::System::ValueTuple_3<int32_t,T2_cordlgen_0,int32_t>  value, int32_t  startIndex, int32_t  count) ;

/// @brief Method LastIndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t LastIndexOf(::ArrayW<::System::ValueTuple_3<int32_t,T2_cordlgen_0,int32_t>,::Array<::System::ValueTuple_3<int32_t,T2_cordlgen_0,int32_t>>*>  array, ::System::ValueTuple_3<int32_t,T2_cordlgen_0,int32_t>  value, int32_t  startIndex, int32_t  count) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

static inline ::System::Collections::Generic::GenericEqualityComparer_1<::System::ValueTuple_3<int32_t,T2_cordlgen_0,int32_t>>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GenericEqualityComparer_1(GenericEqualityComparer_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GenericEqualityComparer_1(GenericEqualityComparer_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 GenericEqualityComparer_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::GenericEqualityComparer`1
namespace System::Collections::Generic {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T1_cordlgen_0>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3869)), TypeDefinitionIndex(TypeDefinitionIndex(3870)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3869), inst: 1701 })}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3870), inst: 7237 })
// CS Name: ::System.Collections.Generic::GenericEqualityComparer`1<T>*
class CORDL_TYPE GenericEqualityComparer_1<::System::ValueTuple_2<T1_cordlgen_0,int32_t>> : public ::System::Collections::Generic::EqualityComparer_1<::System::ValueTuple_2<T1_cordlgen_0,int32_t>> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Collections::Generic::EqualityComparer_1<::System::ValueTuple_2<T1_cordlgen_0,int32_t>>)]{};

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::ValueTuple_2<T1_cordlgen_0,int32_t>  x, ::System::ValueTuple_2<T1_cordlgen_0,int32_t>  y) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode(::System::ValueTuple_2<T1_cordlgen_0,int32_t>  obj) ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t IndexOf(::ArrayW<::System::ValueTuple_2<T1_cordlgen_0,int32_t>,::Array<::System::ValueTuple_2<T1_cordlgen_0,int32_t>>*>  array, ::System::ValueTuple_2<T1_cordlgen_0,int32_t>  value, int32_t  startIndex, int32_t  count) ;

/// @brief Method LastIndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t LastIndexOf(::ArrayW<::System::ValueTuple_2<T1_cordlgen_0,int32_t>,::Array<::System::ValueTuple_2<T1_cordlgen_0,int32_t>>*>  array, ::System::ValueTuple_2<T1_cordlgen_0,int32_t>  value, int32_t  startIndex, int32_t  count) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

static inline ::System::Collections::Generic::GenericEqualityComparer_1<::System::ValueTuple_2<T1_cordlgen_0,int32_t>>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GenericEqualityComparer_1(GenericEqualityComparer_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GenericEqualityComparer_1(GenericEqualityComparer_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 GenericEqualityComparer_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::GenericEqualityComparer`1
namespace System::Collections::Generic {
// cpp template
template<::cordl_internals::is_or_is_backed_by<int32_t> T1_cordlgen_0,::il2cpp_utils::il2cpp_reference_type T2_cordlgen_1>
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3869), inst: 1701 }), TypeDefinitionIndex(TypeDefinitionIndex(3870)), TypeDefinitionIndex(TypeDefinitionIndex(3869))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3870), inst: 7236 })
// CS Name: ::System.Collections.Generic::GenericEqualityComparer`1<T>*
class CORDL_TYPE GenericEqualityComparer_1<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>> : public ::System::Collections::Generic::EqualityComparer_1<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Collections::Generic::EqualityComparer_1<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>)]{};

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>  x, ::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>  y) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode(::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>  obj) ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t IndexOf(::ArrayW<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>,::Array<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>*>  array, ::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>  value, int32_t  startIndex, int32_t  count) ;

/// @brief Method LastIndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t LastIndexOf(::ArrayW<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>,::Array<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>*>  array, ::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>  value, int32_t  startIndex, int32_t  count) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

static inline ::System::Collections::Generic::GenericEqualityComparer_1<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GenericEqualityComparer_1(GenericEqualityComparer_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GenericEqualityComparer_1(GenericEqualityComparer_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 GenericEqualityComparer_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::GenericEqualityComparer`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3869), inst: 1701 }), TypeDefinitionIndex(TypeDefinitionIndex(3870)), TypeDefinitionIndex(TypeDefinitionIndex(3869))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3870), inst: 6927 })
// CS Name: ::System.Collections.Generic::GenericEqualityComparer`1<T>*
class CORDL_TYPE GenericEqualityComparer_1<::System::ValueTuple_1<bool>> : public ::System::Collections::Generic::EqualityComparer_1<::System::ValueTuple_1<bool>> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Collections::Generic::EqualityComparer_1<::System::ValueTuple_1<bool>>)]{};

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::ValueTuple_1<bool>  x, ::System::ValueTuple_1<bool>  y) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode(::System::ValueTuple_1<bool>  obj) ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t IndexOf(::ArrayW<::System::ValueTuple_1<bool>,::Array<::System::ValueTuple_1<bool>>*>  array, ::System::ValueTuple_1<bool>  value, int32_t  startIndex, int32_t  count) ;

/// @brief Method LastIndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t LastIndexOf(::ArrayW<::System::ValueTuple_1<bool>,::Array<::System::ValueTuple_1<bool>>*>  array, ::System::ValueTuple_1<bool>  value, int32_t  startIndex, int32_t  count) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

static inline ::System::Collections::Generic::GenericEqualityComparer_1<::System::ValueTuple_1<bool>>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GenericEqualityComparer_1(GenericEqualityComparer_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GenericEqualityComparer_1(GenericEqualityComparer_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 GenericEqualityComparer_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::GenericEqualityComparer`1
namespace System::Collections::Generic {
// cpp template
template<::cordl_internals::is_or_is_backed_by<int32_t> T1_cordlgen_0,::cordl_internals::is_or_is_backed_by<int32_t> T2_cordlgen_1,::il2cpp_utils::il2cpp_reference_type T3_cordlgen_2>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3869)), TypeDefinitionIndex(TypeDefinitionIndex(3870)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3869), inst: 1701 })}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3870), inst: 6440 })
// CS Name: ::System.Collections.Generic::GenericEqualityComparer`1<T>*
class CORDL_TYPE GenericEqualityComparer_1<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,T3_cordlgen_2>> : public ::System::Collections::Generic::EqualityComparer_1<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,T3_cordlgen_2>> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Collections::Generic::EqualityComparer_1<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,T3_cordlgen_2>>)]{};

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,T3_cordlgen_2>  x, ::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,T3_cordlgen_2>  y) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode(::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,T3_cordlgen_2>  obj) ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t IndexOf(::ArrayW<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,T3_cordlgen_2>,::Array<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,T3_cordlgen_2>>*>  array, ::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,T3_cordlgen_2>  value, int32_t  startIndex, int32_t  count) ;

/// @brief Method LastIndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t LastIndexOf(::ArrayW<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,T3_cordlgen_2>,::Array<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,T3_cordlgen_2>>*>  array, ::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,T3_cordlgen_2>  value, int32_t  startIndex, int32_t  count) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

static inline ::System::Collections::Generic::GenericEqualityComparer_1<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,T3_cordlgen_2>>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GenericEqualityComparer_1(GenericEqualityComparer_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GenericEqualityComparer_1(GenericEqualityComparer_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 GenericEqualityComparer_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::GenericEqualityComparer`1
namespace System::Collections::Generic {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T1_cordlgen_0>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3870)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3869), inst: 1701 }), TypeDefinitionIndex(TypeDefinitionIndex(3869))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3870), inst: 6439 })
// CS Name: ::System.Collections.Generic::GenericEqualityComparer`1<T>*
class CORDL_TYPE GenericEqualityComparer_1<::System::ValueTuple_2<T1_cordlgen_0,::UnityEngine::Vector3>> : public ::System::Collections::Generic::EqualityComparer_1<::System::ValueTuple_2<T1_cordlgen_0,::UnityEngine::Vector3>> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Collections::Generic::EqualityComparer_1<::System::ValueTuple_2<T1_cordlgen_0,::UnityEngine::Vector3>>)]{};

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::ValueTuple_2<T1_cordlgen_0,::UnityEngine::Vector3>  x, ::System::ValueTuple_2<T1_cordlgen_0,::UnityEngine::Vector3>  y) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode(::System::ValueTuple_2<T1_cordlgen_0,::UnityEngine::Vector3>  obj) ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t IndexOf(::ArrayW<::System::ValueTuple_2<T1_cordlgen_0,::UnityEngine::Vector3>,::Array<::System::ValueTuple_2<T1_cordlgen_0,::UnityEngine::Vector3>>*>  array, ::System::ValueTuple_2<T1_cordlgen_0,::UnityEngine::Vector3>  value, int32_t  startIndex, int32_t  count) ;

/// @brief Method LastIndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t LastIndexOf(::ArrayW<::System::ValueTuple_2<T1_cordlgen_0,::UnityEngine::Vector3>,::Array<::System::ValueTuple_2<T1_cordlgen_0,::UnityEngine::Vector3>>*>  array, ::System::ValueTuple_2<T1_cordlgen_0,::UnityEngine::Vector3>  value, int32_t  startIndex, int32_t  count) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

static inline ::System::Collections::Generic::GenericEqualityComparer_1<::System::ValueTuple_2<T1_cordlgen_0,::UnityEngine::Vector3>>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GenericEqualityComparer_1(GenericEqualityComparer_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GenericEqualityComparer_1(GenericEqualityComparer_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 GenericEqualityComparer_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::GenericEqualityComparer`1
namespace System::Collections::Generic {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T2_cordlgen_0>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3869)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3869), inst: 1701 }), TypeDefinitionIndex(TypeDefinitionIndex(3870))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3870), inst: 6438 })
// CS Name: ::System.Collections.Generic::GenericEqualityComparer`1<T>*
class CORDL_TYPE GenericEqualityComparer_1<::System::ValueTuple_2<int32_t,T2_cordlgen_0>> : public ::System::Collections::Generic::EqualityComparer_1<::System::ValueTuple_2<int32_t,T2_cordlgen_0>> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Collections::Generic::EqualityComparer_1<::System::ValueTuple_2<int32_t,T2_cordlgen_0>>)]{};

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::ValueTuple_2<int32_t,T2_cordlgen_0>  x, ::System::ValueTuple_2<int32_t,T2_cordlgen_0>  y) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode(::System::ValueTuple_2<int32_t,T2_cordlgen_0>  obj) ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t IndexOf(::ArrayW<::System::ValueTuple_2<int32_t,T2_cordlgen_0>,::Array<::System::ValueTuple_2<int32_t,T2_cordlgen_0>>*>  array, ::System::ValueTuple_2<int32_t,T2_cordlgen_0>  value, int32_t  startIndex, int32_t  count) ;

/// @brief Method LastIndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t LastIndexOf(::ArrayW<::System::ValueTuple_2<int32_t,T2_cordlgen_0>,::Array<::System::ValueTuple_2<int32_t,T2_cordlgen_0>>*>  array, ::System::ValueTuple_2<int32_t,T2_cordlgen_0>  value, int32_t  startIndex, int32_t  count) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

static inline ::System::Collections::Generic::GenericEqualityComparer_1<::System::ValueTuple_2<int32_t,T2_cordlgen_0>>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GenericEqualityComparer_1(GenericEqualityComparer_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GenericEqualityComparer_1(GenericEqualityComparer_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 GenericEqualityComparer_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::GenericEqualityComparer`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3869)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3869), inst: 1701 }), TypeDefinitionIndex(TypeDefinitionIndex(3870))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3870), inst: 6433 })
// CS Name: ::System.Collections.Generic::GenericEqualityComparer`1<T>*
class CORDL_TYPE GenericEqualityComparer_1<::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::Vertex>> : public ::System::Collections::Generic::EqualityComparer_1<::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::Vertex>> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Collections::Generic::EqualityComparer_1<::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::Vertex>>)]{};

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::Vertex>  x, ::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::Vertex>  y) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode(::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::Vertex>  obj) ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t IndexOf(::ArrayW<::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::Vertex>,::Array<::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::Vertex>>*>  array, ::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::Vertex>  value, int32_t  startIndex, int32_t  count) ;

/// @brief Method LastIndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t LastIndexOf(::ArrayW<::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::Vertex>,::Array<::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::Vertex>>*>  array, ::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::Vertex>  value, int32_t  startIndex, int32_t  count) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

static inline ::System::Collections::Generic::GenericEqualityComparer_1<::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::Vertex>>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GenericEqualityComparer_1(GenericEqualityComparer_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GenericEqualityComparer_1(GenericEqualityComparer_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 GenericEqualityComparer_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::GenericEqualityComparer`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3869), inst: 1701 }), TypeDefinitionIndex(TypeDefinitionIndex(3870)), TypeDefinitionIndex(TypeDefinitionIndex(3869))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3870), inst: 6432 })
// CS Name: ::System.Collections.Generic::GenericEqualityComparer`1<T>*
class CORDL_TYPE GenericEqualityComparer_1<::Unity::Collections::NativeArray_1<uint16_t>> : public ::System::Collections::Generic::EqualityComparer_1<::Unity::Collections::NativeArray_1<uint16_t>> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Collections::Generic::EqualityComparer_1<::Unity::Collections::NativeArray_1<uint16_t>>)]{};

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::Unity::Collections::NativeArray_1<uint16_t>  x, ::Unity::Collections::NativeArray_1<uint16_t>  y) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode(::Unity::Collections::NativeArray_1<uint16_t>  obj) ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t IndexOf(::ArrayW<::Unity::Collections::NativeArray_1<uint16_t>,::Array<::Unity::Collections::NativeArray_1<uint16_t>>*>  array, ::Unity::Collections::NativeArray_1<uint16_t>  value, int32_t  startIndex, int32_t  count) ;

/// @brief Method LastIndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t LastIndexOf(::ArrayW<::Unity::Collections::NativeArray_1<uint16_t>,::Array<::Unity::Collections::NativeArray_1<uint16_t>>*>  array, ::Unity::Collections::NativeArray_1<uint16_t>  value, int32_t  startIndex, int32_t  count) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

static inline ::System::Collections::Generic::GenericEqualityComparer_1<::Unity::Collections::NativeArray_1<uint16_t>>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GenericEqualityComparer_1(GenericEqualityComparer_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GenericEqualityComparer_1(GenericEqualityComparer_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 GenericEqualityComparer_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::GenericEqualityComparer`1
namespace System::Collections::Generic {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TObject_cordlgen_0>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3869)), TypeDefinitionIndex(TypeDefinitionIndex(3870)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3869), inst: 1701 })}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3870), inst: 6429 })
// CS Name: ::System.Collections.Generic::GenericEqualityComparer`1<T>*
class CORDL_TYPE GenericEqualityComparer_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject_cordlgen_0>> : public ::System::Collections::Generic::EqualityComparer_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject_cordlgen_0>> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Collections::Generic::EqualityComparer_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject_cordlgen_0>>)]{};

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject_cordlgen_0>  x, ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject_cordlgen_0>  y) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject_cordlgen_0>  obj) ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t IndexOf(::ArrayW<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject_cordlgen_0>,::Array<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject_cordlgen_0>>*>  array, ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject_cordlgen_0>  value, int32_t  startIndex, int32_t  count) ;

/// @brief Method LastIndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t LastIndexOf(::ArrayW<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject_cordlgen_0>,::Array<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject_cordlgen_0>>*>  array, ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject_cordlgen_0>  value, int32_t  startIndex, int32_t  count) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

static inline ::System::Collections::Generic::GenericEqualityComparer_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject_cordlgen_0>>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GenericEqualityComparer_1(GenericEqualityComparer_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GenericEqualityComparer_1(GenericEqualityComparer_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 GenericEqualityComparer_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::GenericEqualityComparer`1
namespace System::Collections::Generic {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TKey_cordlgen_0,::il2cpp_utils::il2cpp_reference_type TValue_cordlgen_1>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3870)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3869), inst: 1701 }), TypeDefinitionIndex(TypeDefinitionIndex(3869))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3870), inst: 6151 })
// CS Name: ::System.Collections.Generic::GenericEqualityComparer`1<T>*
class CORDL_TYPE GenericEqualityComparer_1<::IntervalTree::RangeValuePair_2<TKey_cordlgen_0,TValue_cordlgen_1>> : public ::System::Collections::Generic::EqualityComparer_1<::IntervalTree::RangeValuePair_2<TKey_cordlgen_0,TValue_cordlgen_1>> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Collections::Generic::EqualityComparer_1<::IntervalTree::RangeValuePair_2<TKey_cordlgen_0,TValue_cordlgen_1>>)]{};

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::IntervalTree::RangeValuePair_2<TKey_cordlgen_0,TValue_cordlgen_1>  x, ::IntervalTree::RangeValuePair_2<TKey_cordlgen_0,TValue_cordlgen_1>  y) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode(::IntervalTree::RangeValuePair_2<TKey_cordlgen_0,TValue_cordlgen_1>  obj) ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t IndexOf(::ArrayW<::IntervalTree::RangeValuePair_2<TKey_cordlgen_0,TValue_cordlgen_1>,::Array<::IntervalTree::RangeValuePair_2<TKey_cordlgen_0,TValue_cordlgen_1>>*>  array, ::IntervalTree::RangeValuePair_2<TKey_cordlgen_0,TValue_cordlgen_1>  value, int32_t  startIndex, int32_t  count) ;

/// @brief Method LastIndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t LastIndexOf(::ArrayW<::IntervalTree::RangeValuePair_2<TKey_cordlgen_0,TValue_cordlgen_1>,::Array<::IntervalTree::RangeValuePair_2<TKey_cordlgen_0,TValue_cordlgen_1>>*>  array, ::IntervalTree::RangeValuePair_2<TKey_cordlgen_0,TValue_cordlgen_1>  value, int32_t  startIndex, int32_t  count) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

static inline ::System::Collections::Generic::GenericEqualityComparer_1<::IntervalTree::RangeValuePair_2<TKey_cordlgen_0,TValue_cordlgen_1>>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GenericEqualityComparer_1(GenericEqualityComparer_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GenericEqualityComparer_1(GenericEqualityComparer_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 GenericEqualityComparer_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::GenericEqualityComparer`1
namespace System::Collections::Generic {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T1_cordlgen_0,::il2cpp_utils::il2cpp_reference_type T2_cordlgen_1>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3869)), TypeDefinitionIndex(TypeDefinitionIndex(3870)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3869), inst: 1701 })}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3870), inst: 5059 })
// CS Name: ::System.Collections.Generic::GenericEqualityComparer`1<T>*
class CORDL_TYPE GenericEqualityComparer_1<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>> : public ::System::Collections::Generic::EqualityComparer_1<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Collections::Generic::EqualityComparer_1<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>)]{};

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>  x, ::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>  y) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode(::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>  obj) ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t IndexOf(::ArrayW<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>,::Array<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>*>  array, ::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>  value, int32_t  startIndex, int32_t  count) ;

/// @brief Method LastIndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t LastIndexOf(::ArrayW<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>,::Array<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>*>  array, ::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>  value, int32_t  startIndex, int32_t  count) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

static inline ::System::Collections::Generic::GenericEqualityComparer_1<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GenericEqualityComparer_1(GenericEqualityComparer_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GenericEqualityComparer_1(GenericEqualityComparer_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 GenericEqualityComparer_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::GenericEqualityComparer`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3869)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3869), inst: 1701 }), TypeDefinitionIndex(TypeDefinitionIndex(3870))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3870), inst: 3391 })
// CS Name: ::System.Collections.Generic::GenericEqualityComparer`1<T>*
class CORDL_TYPE GenericEqualityComparer_1<::System::Text::RegularExpressions::__Regex__CachedCodeEntryKey> : public ::System::Collections::Generic::EqualityComparer_1<::System::Text::RegularExpressions::__Regex__CachedCodeEntryKey> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Collections::Generic::EqualityComparer_1<::System::Text::RegularExpressions::__Regex__CachedCodeEntryKey>)]{};

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Text::RegularExpressions::__Regex__CachedCodeEntryKey  x, ::System::Text::RegularExpressions::__Regex__CachedCodeEntryKey  y) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode(::System::Text::RegularExpressions::__Regex__CachedCodeEntryKey  obj) ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t IndexOf(::ArrayW<::System::Text::RegularExpressions::__Regex__CachedCodeEntryKey,::Array<::System::Text::RegularExpressions::__Regex__CachedCodeEntryKey>*>  array, ::System::Text::RegularExpressions::__Regex__CachedCodeEntryKey  value, int32_t  startIndex, int32_t  count) ;

/// @brief Method LastIndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t LastIndexOf(::ArrayW<::System::Text::RegularExpressions::__Regex__CachedCodeEntryKey,::Array<::System::Text::RegularExpressions::__Regex__CachedCodeEntryKey>*>  array, ::System::Text::RegularExpressions::__Regex__CachedCodeEntryKey  value, int32_t  startIndex, int32_t  count) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

static inline ::System::Collections::Generic::GenericEqualityComparer_1<::System::Text::RegularExpressions::__Regex__CachedCodeEntryKey>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GenericEqualityComparer_1(GenericEqualityComparer_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GenericEqualityComparer_1(GenericEqualityComparer_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 GenericEqualityComparer_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::GenericEqualityComparer`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3870)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3869), inst: 1701 }), TypeDefinitionIndex(TypeDefinitionIndex(3869))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3870), inst: 3389 })
// CS Name: ::System.Collections.Generic::GenericEqualityComparer`1<T>*
class CORDL_TYPE GenericEqualityComparer_1<::GlobalNamespace::__MirrorRendererSO__CameraTransformData> : public ::System::Collections::Generic::EqualityComparer_1<::GlobalNamespace::__MirrorRendererSO__CameraTransformData> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Collections::Generic::EqualityComparer_1<::GlobalNamespace::__MirrorRendererSO__CameraTransformData>)]{};

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::GlobalNamespace::__MirrorRendererSO__CameraTransformData  x, ::GlobalNamespace::__MirrorRendererSO__CameraTransformData  y) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode(::GlobalNamespace::__MirrorRendererSO__CameraTransformData  obj) ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t IndexOf(::ArrayW<::GlobalNamespace::__MirrorRendererSO__CameraTransformData,::Array<::GlobalNamespace::__MirrorRendererSO__CameraTransformData>*>  array, ::GlobalNamespace::__MirrorRendererSO__CameraTransformData  value, int32_t  startIndex, int32_t  count) ;

/// @brief Method LastIndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t LastIndexOf(::ArrayW<::GlobalNamespace::__MirrorRendererSO__CameraTransformData,::Array<::GlobalNamespace::__MirrorRendererSO__CameraTransformData>*>  array, ::GlobalNamespace::__MirrorRendererSO__CameraTransformData  value, int32_t  startIndex, int32_t  count) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

static inline ::System::Collections::Generic::GenericEqualityComparer_1<::GlobalNamespace::__MirrorRendererSO__CameraTransformData>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GenericEqualityComparer_1(GenericEqualityComparer_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GenericEqualityComparer_1(GenericEqualityComparer_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 GenericEqualityComparer_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::GenericEqualityComparer`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3869), inst: 1701 }), TypeDefinitionIndex(TypeDefinitionIndex(3870)), TypeDefinitionIndex(TypeDefinitionIndex(3869))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3870), inst: 3386 })
// CS Name: ::System.Collections.Generic::GenericEqualityComparer`1<T>*
class CORDL_TYPE GenericEqualityComparer_1<::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue> : public ::System::Collections::Generic::EqualityComparer_1<::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Collections::Generic::EqualityComparer_1<::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue>)]{};

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue  x, ::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue  y) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode(::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue  obj) ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t IndexOf(::ArrayW<::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue,::Array<::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue>*>  array, ::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue  value, int32_t  startIndex, int32_t  count) ;

/// @brief Method LastIndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t LastIndexOf(::ArrayW<::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue,::Array<::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue>*>  array, ::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue  value, int32_t  startIndex, int32_t  count) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

static inline ::System::Collections::Generic::GenericEqualityComparer_1<::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GenericEqualityComparer_1(GenericEqualityComparer_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GenericEqualityComparer_1(GenericEqualityComparer_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 GenericEqualityComparer_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::GenericEqualityComparer`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3870)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3869), inst: 1701 }), TypeDefinitionIndex(TypeDefinitionIndex(3869))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3870), inst: 3372 })
// CS Name: ::System.Collections.Generic::GenericEqualityComparer`1<T>*
class CORDL_TYPE GenericEqualityComparer_1<::UnityEngine::ProBuilder::Triangle> : public ::System::Collections::Generic::EqualityComparer_1<::UnityEngine::ProBuilder::Triangle> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Collections::Generic::EqualityComparer_1<::UnityEngine::ProBuilder::Triangle>)]{};

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::UnityEngine::ProBuilder::Triangle  x, ::UnityEngine::ProBuilder::Triangle  y) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode(::UnityEngine::ProBuilder::Triangle  obj) ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t IndexOf(::ArrayW<::UnityEngine::ProBuilder::Triangle,::Array<::UnityEngine::ProBuilder::Triangle>*>  array, ::UnityEngine::ProBuilder::Triangle  value, int32_t  startIndex, int32_t  count) ;

/// @brief Method LastIndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t LastIndexOf(::ArrayW<::UnityEngine::ProBuilder::Triangle,::Array<::UnityEngine::ProBuilder::Triangle>*>  array, ::UnityEngine::ProBuilder::Triangle  value, int32_t  startIndex, int32_t  count) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

static inline ::System::Collections::Generic::GenericEqualityComparer_1<::UnityEngine::ProBuilder::Triangle>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GenericEqualityComparer_1(GenericEqualityComparer_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GenericEqualityComparer_1(GenericEqualityComparer_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 GenericEqualityComparer_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::GenericEqualityComparer`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3869)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3869), inst: 1701 }), TypeDefinitionIndex(TypeDefinitionIndex(3870))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3870), inst: 3368 })
// CS Name: ::System.Collections.Generic::GenericEqualityComparer`1<T>*
class CORDL_TYPE GenericEqualityComparer_1<::UnityEngine::UIElements::TimeValue> : public ::System::Collections::Generic::EqualityComparer_1<::UnityEngine::UIElements::TimeValue> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Collections::Generic::EqualityComparer_1<::UnityEngine::UIElements::TimeValue>)]{};

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::UnityEngine::UIElements::TimeValue  x, ::UnityEngine::UIElements::TimeValue  y) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode(::UnityEngine::UIElements::TimeValue  obj) ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t IndexOf(::ArrayW<::UnityEngine::UIElements::TimeValue,::Array<::UnityEngine::UIElements::TimeValue>*>  array, ::UnityEngine::UIElements::TimeValue  value, int32_t  startIndex, int32_t  count) ;

/// @brief Method LastIndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t LastIndexOf(::ArrayW<::UnityEngine::UIElements::TimeValue,::Array<::UnityEngine::UIElements::TimeValue>*>  array, ::UnityEngine::UIElements::TimeValue  value, int32_t  startIndex, int32_t  count) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

static inline ::System::Collections::Generic::GenericEqualityComparer_1<::UnityEngine::UIElements::TimeValue>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GenericEqualityComparer_1(GenericEqualityComparer_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GenericEqualityComparer_1(GenericEqualityComparer_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 GenericEqualityComparer_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::GenericEqualityComparer`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3870)), TypeDefinitionIndex(TypeDefinitionIndex(3869)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3869), inst: 1701 })}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3870), inst: 3353 })
// CS Name: ::System.Collections.Generic::GenericEqualityComparer`1<T>*
class CORDL_TYPE GenericEqualityComparer_1<::UnityEngine::UI::SpriteState> : public ::System::Collections::Generic::EqualityComparer_1<::UnityEngine::UI::SpriteState> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Collections::Generic::EqualityComparer_1<::UnityEngine::UI::SpriteState>)]{};

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::UnityEngine::UI::SpriteState  x, ::UnityEngine::UI::SpriteState  y) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode(::UnityEngine::UI::SpriteState  obj) ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t IndexOf(::ArrayW<::UnityEngine::UI::SpriteState,::Array<::UnityEngine::UI::SpriteState>*>  array, ::UnityEngine::UI::SpriteState  value, int32_t  startIndex, int32_t  count) ;

/// @brief Method LastIndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t LastIndexOf(::ArrayW<::UnityEngine::UI::SpriteState,::Array<::UnityEngine::UI::SpriteState>*>  array, ::UnityEngine::UI::SpriteState  value, int32_t  startIndex, int32_t  count) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

static inline ::System::Collections::Generic::GenericEqualityComparer_1<::UnityEngine::UI::SpriteState>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GenericEqualityComparer_1(GenericEqualityComparer_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GenericEqualityComparer_1(GenericEqualityComparer_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 GenericEqualityComparer_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::GenericEqualityComparer`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3870)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3869), inst: 1701 }), TypeDefinitionIndex(TypeDefinitionIndex(3869))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3870), inst: 3352 })
// CS Name: ::System.Collections.Generic::GenericEqualityComparer`1<T>*
class CORDL_TYPE GenericEqualityComparer_1<::GlobalNamespace::SongPackMask> : public ::System::Collections::Generic::EqualityComparer_1<::GlobalNamespace::SongPackMask> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Collections::Generic::EqualityComparer_1<::GlobalNamespace::SongPackMask>)]{};

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::GlobalNamespace::SongPackMask  x, ::GlobalNamespace::SongPackMask  y) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode(::GlobalNamespace::SongPackMask  obj) ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t IndexOf(::ArrayW<::GlobalNamespace::SongPackMask,::Array<::GlobalNamespace::SongPackMask>*>  array, ::GlobalNamespace::SongPackMask  value, int32_t  startIndex, int32_t  count) ;

/// @brief Method LastIndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t LastIndexOf(::ArrayW<::GlobalNamespace::SongPackMask,::Array<::GlobalNamespace::SongPackMask>*>  array, ::GlobalNamespace::SongPackMask  value, int32_t  startIndex, int32_t  count) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

static inline ::System::Collections::Generic::GenericEqualityComparer_1<::GlobalNamespace::SongPackMask>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GenericEqualityComparer_1(GenericEqualityComparer_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GenericEqualityComparer_1(GenericEqualityComparer_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 GenericEqualityComparer_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::GenericEqualityComparer`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3869), inst: 1701 }), TypeDefinitionIndex(TypeDefinitionIndex(3869)), TypeDefinitionIndex(TypeDefinitionIndex(3870))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3870), inst: 3351 })
// CS Name: ::System.Collections.Generic::GenericEqualityComparer`1<T>*
class CORDL_TYPE GenericEqualityComparer_1<::Zenject::SignalSubscriptionId> : public ::System::Collections::Generic::EqualityComparer_1<::Zenject::SignalSubscriptionId> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Collections::Generic::EqualityComparer_1<::Zenject::SignalSubscriptionId>)]{};

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::Zenject::SignalSubscriptionId  x, ::Zenject::SignalSubscriptionId  y) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode(::Zenject::SignalSubscriptionId  obj) ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t IndexOf(::ArrayW<::Zenject::SignalSubscriptionId,::Array<::Zenject::SignalSubscriptionId>*>  array, ::Zenject::SignalSubscriptionId  value, int32_t  startIndex, int32_t  count) ;

/// @brief Method LastIndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t LastIndexOf(::ArrayW<::Zenject::SignalSubscriptionId,::Array<::Zenject::SignalSubscriptionId>*>  array, ::Zenject::SignalSubscriptionId  value, int32_t  startIndex, int32_t  count) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

static inline ::System::Collections::Generic::GenericEqualityComparer_1<::Zenject::SignalSubscriptionId>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GenericEqualityComparer_1(GenericEqualityComparer_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GenericEqualityComparer_1(GenericEqualityComparer_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 GenericEqualityComparer_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::GenericEqualityComparer`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3869), inst: 1701 }), TypeDefinitionIndex(TypeDefinitionIndex(3870)), TypeDefinitionIndex(TypeDefinitionIndex(3869))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3870), inst: 3345 })
// CS Name: ::System.Collections.Generic::GenericEqualityComparer`1<T>*
class CORDL_TYPE GenericEqualityComparer_1<::UnityEngine::Rect> : public ::System::Collections::Generic::EqualityComparer_1<::UnityEngine::Rect> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Collections::Generic::EqualityComparer_1<::UnityEngine::Rect>)]{};

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::UnityEngine::Rect  x, ::UnityEngine::Rect  y) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode(::UnityEngine::Rect  obj) ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t IndexOf(::ArrayW<::UnityEngine::Rect,::Array<::UnityEngine::Rect>*>  array, ::UnityEngine::Rect  value, int32_t  startIndex, int32_t  count) ;

/// @brief Method LastIndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t LastIndexOf(::ArrayW<::UnityEngine::Rect,::Array<::UnityEngine::Rect>*>  array, ::UnityEngine::Rect  value, int32_t  startIndex, int32_t  count) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

static inline ::System::Collections::Generic::GenericEqualityComparer_1<::UnityEngine::Rect>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GenericEqualityComparer_1(GenericEqualityComparer_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GenericEqualityComparer_1(GenericEqualityComparer_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 GenericEqualityComparer_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::GenericEqualityComparer`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3869), inst: 1701 }), TypeDefinitionIndex(TypeDefinitionIndex(3870)), TypeDefinitionIndex(TypeDefinitionIndex(3869))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3870), inst: 3342 })
// CS Name: ::System.Collections.Generic::GenericEqualityComparer`1<T>*
class CORDL_TYPE GenericEqualityComparer_1<::UnityEngine::Quaternion> : public ::System::Collections::Generic::EqualityComparer_1<::UnityEngine::Quaternion> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Collections::Generic::EqualityComparer_1<::UnityEngine::Quaternion>)]{};

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::UnityEngine::Quaternion  x, ::UnityEngine::Quaternion  y) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode(::UnityEngine::Quaternion  obj) ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t IndexOf(::ArrayW<::UnityEngine::Quaternion,::Array<::UnityEngine::Quaternion>*>  array, ::UnityEngine::Quaternion  value, int32_t  startIndex, int32_t  count) ;

/// @brief Method LastIndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t LastIndexOf(::ArrayW<::UnityEngine::Quaternion,::Array<::UnityEngine::Quaternion>*>  array, ::UnityEngine::Quaternion  value, int32_t  startIndex, int32_t  count) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

static inline ::System::Collections::Generic::GenericEqualityComparer_1<::UnityEngine::Quaternion>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GenericEqualityComparer_1(GenericEqualityComparer_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GenericEqualityComparer_1(GenericEqualityComparer_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 GenericEqualityComparer_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::GenericEqualityComparer`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3869)), TypeDefinitionIndex(TypeDefinitionIndex(3870)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3869), inst: 1701 })}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3870), inst: 3338 })
// CS Name: ::System.Collections.Generic::GenericEqualityComparer`1<T>*
class CORDL_TYPE GenericEqualityComparer_1<::UnityEngine::Pose> : public ::System::Collections::Generic::EqualityComparer_1<::UnityEngine::Pose> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Collections::Generic::EqualityComparer_1<::UnityEngine::Pose>)]{};

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::UnityEngine::Pose  x, ::UnityEngine::Pose  y) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode(::UnityEngine::Pose  obj) ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t IndexOf(::ArrayW<::UnityEngine::Pose,::Array<::UnityEngine::Pose>*>  array, ::UnityEngine::Pose  value, int32_t  startIndex, int32_t  count) ;

/// @brief Method LastIndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t LastIndexOf(::ArrayW<::UnityEngine::Pose,::Array<::UnityEngine::Pose>*>  array, ::UnityEngine::Pose  value, int32_t  startIndex, int32_t  count) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

static inline ::System::Collections::Generic::GenericEqualityComparer_1<::UnityEngine::Pose>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GenericEqualityComparer_1(GenericEqualityComparer_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GenericEqualityComparer_1(GenericEqualityComparer_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 GenericEqualityComparer_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::GenericEqualityComparer`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3869), inst: 1701 }), TypeDefinitionIndex(TypeDefinitionIndex(3869)), TypeDefinitionIndex(TypeDefinitionIndex(3870))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3870), inst: 3333 })
// CS Name: ::System.Collections.Generic::GenericEqualityComparer`1<T>*
class CORDL_TYPE GenericEqualityComparer_1<::UnityEngine::Playables::Playable> : public ::System::Collections::Generic::EqualityComparer_1<::UnityEngine::Playables::Playable> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Collections::Generic::EqualityComparer_1<::UnityEngine::Playables::Playable>)]{};

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::UnityEngine::Playables::Playable  x, ::UnityEngine::Playables::Playable  y) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode(::UnityEngine::Playables::Playable  obj) ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t IndexOf(::ArrayW<::UnityEngine::Playables::Playable,::Array<::UnityEngine::Playables::Playable>*>  array, ::UnityEngine::Playables::Playable  value, int32_t  startIndex, int32_t  count) ;

/// @brief Method LastIndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t LastIndexOf(::ArrayW<::UnityEngine::Playables::Playable,::Array<::UnityEngine::Playables::Playable>*>  array, ::UnityEngine::Playables::Playable  value, int32_t  startIndex, int32_t  count) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

static inline ::System::Collections::Generic::GenericEqualityComparer_1<::UnityEngine::Playables::Playable>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GenericEqualityComparer_1(GenericEqualityComparer_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GenericEqualityComparer_1(GenericEqualityComparer_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 GenericEqualityComparer_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::GenericEqualityComparer`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3869)), TypeDefinitionIndex(TypeDefinitionIndex(3870)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3869), inst: 1701 })}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3870), inst: 3328 })
// CS Name: ::System.Collections.Generic::GenericEqualityComparer`1<T>*
class CORDL_TYPE GenericEqualityComparer_1<::GlobalNamespace::OVRSpace> : public ::System::Collections::Generic::EqualityComparer_1<::GlobalNamespace::OVRSpace> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Collections::Generic::EqualityComparer_1<::GlobalNamespace::OVRSpace>)]{};

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::GlobalNamespace::OVRSpace  x, ::GlobalNamespace::OVRSpace  y) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode(::GlobalNamespace::OVRSpace  obj) ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t IndexOf(::ArrayW<::GlobalNamespace::OVRSpace,::Array<::GlobalNamespace::OVRSpace>*>  array, ::GlobalNamespace::OVRSpace  value, int32_t  startIndex, int32_t  count) ;

/// @brief Method LastIndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t LastIndexOf(::ArrayW<::GlobalNamespace::OVRSpace,::Array<::GlobalNamespace::OVRSpace>*>  array, ::GlobalNamespace::OVRSpace  value, int32_t  startIndex, int32_t  count) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

static inline ::System::Collections::Generic::GenericEqualityComparer_1<::GlobalNamespace::OVRSpace>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GenericEqualityComparer_1(GenericEqualityComparer_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GenericEqualityComparer_1(GenericEqualityComparer_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 GenericEqualityComparer_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::GenericEqualityComparer`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3869), inst: 1701 }), TypeDefinitionIndex(TypeDefinitionIndex(3870)), TypeDefinitionIndex(TypeDefinitionIndex(3869))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3870), inst: 3318 })
// CS Name: ::System.Collections.Generic::GenericEqualityComparer`1<T>*
class CORDL_TYPE GenericEqualityComparer_1<::UnityEngine::UI::Navigation> : public ::System::Collections::Generic::EqualityComparer_1<::UnityEngine::UI::Navigation> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Collections::Generic::EqualityComparer_1<::UnityEngine::UI::Navigation>)]{};

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::UnityEngine::UI::Navigation  x, ::UnityEngine::UI::Navigation  y) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode(::UnityEngine::UI::Navigation  obj) ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t IndexOf(::ArrayW<::UnityEngine::UI::Navigation,::Array<::UnityEngine::UI::Navigation>*>  array, ::UnityEngine::UI::Navigation  value, int32_t  startIndex, int32_t  count) ;

/// @brief Method LastIndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t LastIndexOf(::ArrayW<::UnityEngine::UI::Navigation,::Array<::UnityEngine::UI::Navigation>*>  array, ::UnityEngine::UI::Navigation  value, int32_t  startIndex, int32_t  count) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

static inline ::System::Collections::Generic::GenericEqualityComparer_1<::UnityEngine::UI::Navigation>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GenericEqualityComparer_1(GenericEqualityComparer_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GenericEqualityComparer_1(GenericEqualityComparer_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 GenericEqualityComparer_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::GenericEqualityComparer`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3869)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3869), inst: 1701 }), TypeDefinitionIndex(TypeDefinitionIndex(3870))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3870), inst: 3316 })
// CS Name: ::System.Collections.Generic::GenericEqualityComparer`1<T>*
class CORDL_TYPE GenericEqualityComparer_1<::UnityEngine::Matrix4x4> : public ::System::Collections::Generic::EqualityComparer_1<::UnityEngine::Matrix4x4> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Collections::Generic::EqualityComparer_1<::UnityEngine::Matrix4x4>)]{};

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::UnityEngine::Matrix4x4  x, ::UnityEngine::Matrix4x4  y) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode(::UnityEngine::Matrix4x4  obj) ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t IndexOf(::ArrayW<::UnityEngine::Matrix4x4,::Array<::UnityEngine::Matrix4x4>*>  array, ::UnityEngine::Matrix4x4  value, int32_t  startIndex, int32_t  count) ;

/// @brief Method LastIndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t LastIndexOf(::ArrayW<::UnityEngine::Matrix4x4,::Array<::UnityEngine::Matrix4x4>*>  array, ::UnityEngine::Matrix4x4  value, int32_t  startIndex, int32_t  count) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

static inline ::System::Collections::Generic::GenericEqualityComparer_1<::UnityEngine::Matrix4x4>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GenericEqualityComparer_1(GenericEqualityComparer_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GenericEqualityComparer_1(GenericEqualityComparer_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 GenericEqualityComparer_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::GenericEqualityComparer`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3869), inst: 1701 }), TypeDefinitionIndex(TypeDefinitionIndex(3870)), TypeDefinitionIndex(TypeDefinitionIndex(3869))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3870), inst: 3314 })
// CS Name: ::System.Collections.Generic::GenericEqualityComparer`1<T>*
class CORDL_TYPE GenericEqualityComparer_1<::UnityEngine::UIElements::ManipulatorActivationFilter> : public ::System::Collections::Generic::EqualityComparer_1<::UnityEngine::UIElements::ManipulatorActivationFilter> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Collections::Generic::EqualityComparer_1<::UnityEngine::UIElements::ManipulatorActivationFilter>)]{};

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::UnityEngine::UIElements::ManipulatorActivationFilter  x, ::UnityEngine::UIElements::ManipulatorActivationFilter  y) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode(::UnityEngine::UIElements::ManipulatorActivationFilter  obj) ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t IndexOf(::ArrayW<::UnityEngine::UIElements::ManipulatorActivationFilter,::Array<::UnityEngine::UIElements::ManipulatorActivationFilter>*>  array, ::UnityEngine::UIElements::ManipulatorActivationFilter  value, int32_t  startIndex, int32_t  count) ;

/// @brief Method LastIndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t LastIndexOf(::ArrayW<::UnityEngine::UIElements::ManipulatorActivationFilter,::Array<::UnityEngine::UIElements::ManipulatorActivationFilter>*>  array, ::UnityEngine::UIElements::ManipulatorActivationFilter  value, int32_t  startIndex, int32_t  count) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

static inline ::System::Collections::Generic::GenericEqualityComparer_1<::UnityEngine::UIElements::ManipulatorActivationFilter>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GenericEqualityComparer_1(GenericEqualityComparer_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GenericEqualityComparer_1(GenericEqualityComparer_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 GenericEqualityComparer_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::GenericEqualityComparer`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3869)), TypeDefinitionIndex(TypeDefinitionIndex(3870)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3869), inst: 1701 })}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3870), inst: 3311 })
// CS Name: ::System.Collections.Generic::GenericEqualityComparer`1<T>*
class CORDL_TYPE GenericEqualityComparer_1<::GlobalNamespace::LevelKey> : public ::System::Collections::Generic::EqualityComparer_1<::GlobalNamespace::LevelKey> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Collections::Generic::EqualityComparer_1<::GlobalNamespace::LevelKey>)]{};

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::GlobalNamespace::LevelKey  x, ::GlobalNamespace::LevelKey  y) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode(::GlobalNamespace::LevelKey  obj) ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t IndexOf(::ArrayW<::GlobalNamespace::LevelKey,::Array<::GlobalNamespace::LevelKey>*>  array, ::GlobalNamespace::LevelKey  value, int32_t  startIndex, int32_t  count) ;

/// @brief Method LastIndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t LastIndexOf(::ArrayW<::GlobalNamespace::LevelKey,::Array<::GlobalNamespace::LevelKey>*>  array, ::GlobalNamespace::LevelKey  value, int32_t  startIndex, int32_t  count) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

static inline ::System::Collections::Generic::GenericEqualityComparer_1<::GlobalNamespace::LevelKey>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GenericEqualityComparer_1(GenericEqualityComparer_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GenericEqualityComparer_1(GenericEqualityComparer_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 GenericEqualityComparer_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::GenericEqualityComparer`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3869)), TypeDefinitionIndex(TypeDefinitionIndex(3870)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3869), inst: 1701 })}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3870), inst: 3307 })
// CS Name: ::System.Collections.Generic::GenericEqualityComparer`1<T>*
class CORDL_TYPE GenericEqualityComparer_1<::UnityEngine::ProBuilder::IntVec3> : public ::System::Collections::Generic::EqualityComparer_1<::UnityEngine::ProBuilder::IntVec3> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Collections::Generic::EqualityComparer_1<::UnityEngine::ProBuilder::IntVec3>)]{};

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::UnityEngine::ProBuilder::IntVec3  x, ::UnityEngine::ProBuilder::IntVec3  y) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode(::UnityEngine::ProBuilder::IntVec3  obj) ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t IndexOf(::ArrayW<::UnityEngine::ProBuilder::IntVec3,::Array<::UnityEngine::ProBuilder::IntVec3>*>  array, ::UnityEngine::ProBuilder::IntVec3  value, int32_t  startIndex, int32_t  count) ;

/// @brief Method LastIndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t LastIndexOf(::ArrayW<::UnityEngine::ProBuilder::IntVec3,::Array<::UnityEngine::ProBuilder::IntVec3>*>  array, ::UnityEngine::ProBuilder::IntVec3  value, int32_t  startIndex, int32_t  count) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

static inline ::System::Collections::Generic::GenericEqualityComparer_1<::UnityEngine::ProBuilder::IntVec3>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GenericEqualityComparer_1(GenericEqualityComparer_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GenericEqualityComparer_1(GenericEqualityComparer_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 GenericEqualityComparer_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::GenericEqualityComparer`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3869), inst: 1701 }), TypeDefinitionIndex(TypeDefinitionIndex(3869)), TypeDefinitionIndex(TypeDefinitionIndex(3870))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3870), inst: 3301 })
// CS Name: ::System.Collections.Generic::GenericEqualityComparer`1<T>*
class CORDL_TYPE GenericEqualityComparer_1<::UnityEngine::InputSystem::Layouts::InputDeviceDescription> : public ::System::Collections::Generic::EqualityComparer_1<::UnityEngine::InputSystem::Layouts::InputDeviceDescription> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Collections::Generic::EqualityComparer_1<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>)]{};

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::UnityEngine::InputSystem::Layouts::InputDeviceDescription  x, ::UnityEngine::InputSystem::Layouts::InputDeviceDescription  y) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode(::UnityEngine::InputSystem::Layouts::InputDeviceDescription  obj) ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t IndexOf(::ArrayW<::UnityEngine::InputSystem::Layouts::InputDeviceDescription,::Array<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>*>  array, ::UnityEngine::InputSystem::Layouts::InputDeviceDescription  value, int32_t  startIndex, int32_t  count) ;

/// @brief Method LastIndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t LastIndexOf(::ArrayW<::UnityEngine::InputSystem::Layouts::InputDeviceDescription,::Array<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>*>  array, ::UnityEngine::InputSystem::Layouts::InputDeviceDescription  value, int32_t  startIndex, int32_t  count) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

static inline ::System::Collections::Generic::GenericEqualityComparer_1<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GenericEqualityComparer_1(GenericEqualityComparer_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GenericEqualityComparer_1(GenericEqualityComparer_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 GenericEqualityComparer_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::GenericEqualityComparer`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3869)), TypeDefinitionIndex(TypeDefinitionIndex(3870)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3869), inst: 1701 })}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3870), inst: 3291 })
// CS Name: ::System.Collections.Generic::GenericEqualityComparer`1<T>*
class CORDL_TYPE GenericEqualityComparer_1<::UnityEngine::TextCore::GlyphRect> : public ::System::Collections::Generic::EqualityComparer_1<::UnityEngine::TextCore::GlyphRect> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Collections::Generic::EqualityComparer_1<::UnityEngine::TextCore::GlyphRect>)]{};

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::UnityEngine::TextCore::GlyphRect  x, ::UnityEngine::TextCore::GlyphRect  y) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode(::UnityEngine::TextCore::GlyphRect  obj) ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t IndexOf(::ArrayW<::UnityEngine::TextCore::GlyphRect,::Array<::UnityEngine::TextCore::GlyphRect>*>  array, ::UnityEngine::TextCore::GlyphRect  value, int32_t  startIndex, int32_t  count) ;

/// @brief Method LastIndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t LastIndexOf(::ArrayW<::UnityEngine::TextCore::GlyphRect,::Array<::UnityEngine::TextCore::GlyphRect>*>  array, ::UnityEngine::TextCore::GlyphRect  value, int32_t  startIndex, int32_t  count) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

static inline ::System::Collections::Generic::GenericEqualityComparer_1<::UnityEngine::TextCore::GlyphRect>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GenericEqualityComparer_1(GenericEqualityComparer_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GenericEqualityComparer_1(GenericEqualityComparer_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 GenericEqualityComparer_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::GenericEqualityComparer`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3869)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3869), inst: 1701 }), TypeDefinitionIndex(TypeDefinitionIndex(3870))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3870), inst: 3290 })
// CS Name: ::System.Collections.Generic::GenericEqualityComparer`1<T>*
class CORDL_TYPE GenericEqualityComparer_1<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord> : public ::System::Collections::Generic::EqualityComparer_1<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Collections::Generic::EqualityComparer_1<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>)]{};

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord  x, ::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord  y) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode(::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord  obj) ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t IndexOf(::ArrayW<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord,::Array<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>*>  array, ::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord  value, int32_t  startIndex, int32_t  count) ;

/// @brief Method LastIndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t LastIndexOf(::ArrayW<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord,::Array<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>*>  array, ::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord  value, int32_t  startIndex, int32_t  count) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

static inline ::System::Collections::Generic::GenericEqualityComparer_1<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GenericEqualityComparer_1(GenericEqualityComparer_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GenericEqualityComparer_1(GenericEqualityComparer_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 GenericEqualityComparer_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::GenericEqualityComparer`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3869)), TypeDefinitionIndex(TypeDefinitionIndex(3870)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3869), inst: 1701 })}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3870), inst: 3282 })
// CS Name: ::System.Collections.Generic::GenericEqualityComparer`1<T>*
class CORDL_TYPE GenericEqualityComparer_1<::UnityEngine::UIElements::EasingFunction> : public ::System::Collections::Generic::EqualityComparer_1<::UnityEngine::UIElements::EasingFunction> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Collections::Generic::EqualityComparer_1<::UnityEngine::UIElements::EasingFunction>)]{};

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::UnityEngine::UIElements::EasingFunction  x, ::UnityEngine::UIElements::EasingFunction  y) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode(::UnityEngine::UIElements::EasingFunction  obj) ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t IndexOf(::ArrayW<::UnityEngine::UIElements::EasingFunction,::Array<::UnityEngine::UIElements::EasingFunction>*>  array, ::UnityEngine::UIElements::EasingFunction  value, int32_t  startIndex, int32_t  count) ;

/// @brief Method LastIndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t LastIndexOf(::ArrayW<::UnityEngine::UIElements::EasingFunction,::Array<::UnityEngine::UIElements::EasingFunction>*>  array, ::UnityEngine::UIElements::EasingFunction  value, int32_t  startIndex, int32_t  count) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

static inline ::System::Collections::Generic::GenericEqualityComparer_1<::UnityEngine::UIElements::EasingFunction>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GenericEqualityComparer_1(GenericEqualityComparer_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GenericEqualityComparer_1(GenericEqualityComparer_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 GenericEqualityComparer_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::GenericEqualityComparer`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3870)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3869), inst: 1701 }), TypeDefinitionIndex(TypeDefinitionIndex(3869))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3870), inst: 3275 })
// CS Name: ::System.Collections.Generic::GenericEqualityComparer`1<T>*
class CORDL_TYPE GenericEqualityComparer_1<::UnityEngine::UI::ColorBlock> : public ::System::Collections::Generic::EqualityComparer_1<::UnityEngine::UI::ColorBlock> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Collections::Generic::EqualityComparer_1<::UnityEngine::UI::ColorBlock>)]{};

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::UnityEngine::UI::ColorBlock  x, ::UnityEngine::UI::ColorBlock  y) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode(::UnityEngine::UI::ColorBlock  obj) ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t IndexOf(::ArrayW<::UnityEngine::UI::ColorBlock,::Array<::UnityEngine::UI::ColorBlock>*>  array, ::UnityEngine::UI::ColorBlock  value, int32_t  startIndex, int32_t  count) ;

/// @brief Method LastIndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t LastIndexOf(::ArrayW<::UnityEngine::UI::ColorBlock,::Array<::UnityEngine::UI::ColorBlock>*>  array, ::UnityEngine::UI::ColorBlock  value, int32_t  startIndex, int32_t  count) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

static inline ::System::Collections::Generic::GenericEqualityComparer_1<::UnityEngine::UI::ColorBlock>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GenericEqualityComparer_1(GenericEqualityComparer_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GenericEqualityComparer_1(GenericEqualityComparer_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 GenericEqualityComparer_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::GenericEqualityComparer`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3870)), TypeDefinitionIndex(TypeDefinitionIndex(3869)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3869), inst: 1701 })}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3870), inst: 3264 })
// CS Name: ::System.Collections.Generic::GenericEqualityComparer`1<T>*
class CORDL_TYPE GenericEqualityComparer_1<::BeatSaber::AvatarCore::AvatarSystemIdentifier> : public ::System::Collections::Generic::EqualityComparer_1<::BeatSaber::AvatarCore::AvatarSystemIdentifier> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Collections::Generic::EqualityComparer_1<::BeatSaber::AvatarCore::AvatarSystemIdentifier>)]{};

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::BeatSaber::AvatarCore::AvatarSystemIdentifier  x, ::BeatSaber::AvatarCore::AvatarSystemIdentifier  y) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode(::BeatSaber::AvatarCore::AvatarSystemIdentifier  obj) ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t IndexOf(::ArrayW<::BeatSaber::AvatarCore::AvatarSystemIdentifier,::Array<::BeatSaber::AvatarCore::AvatarSystemIdentifier>*>  array, ::BeatSaber::AvatarCore::AvatarSystemIdentifier  value, int32_t  startIndex, int32_t  count) ;

/// @brief Method LastIndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t LastIndexOf(::ArrayW<::BeatSaber::AvatarCore::AvatarSystemIdentifier,::Array<::BeatSaber::AvatarCore::AvatarSystemIdentifier>*>  array, ::BeatSaber::AvatarCore::AvatarSystemIdentifier  value, int32_t  startIndex, int32_t  count) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

static inline ::System::Collections::Generic::GenericEqualityComparer_1<::BeatSaber::AvatarCore::AvatarSystemIdentifier>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GenericEqualityComparer_1(GenericEqualityComparer_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GenericEqualityComparer_1(GenericEqualityComparer_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 GenericEqualityComparer_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::GenericEqualityComparer`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3870)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3869), inst: 1701 }), TypeDefinitionIndex(TypeDefinitionIndex(3869))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3870), inst: 3114 })
// CS Name: ::System.Collections.Generic::GenericEqualityComparer`1<T>*
class CORDL_TYPE GenericEqualityComparer_1<::UnityEngine::InputSystem::Utilities::NamedValue> : public ::System::Collections::Generic::EqualityComparer_1<::UnityEngine::InputSystem::Utilities::NamedValue> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Collections::Generic::EqualityComparer_1<::UnityEngine::InputSystem::Utilities::NamedValue>)]{};

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::UnityEngine::InputSystem::Utilities::NamedValue  x, ::UnityEngine::InputSystem::Utilities::NamedValue  y) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode(::UnityEngine::InputSystem::Utilities::NamedValue  obj) ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t IndexOf(::ArrayW<::UnityEngine::InputSystem::Utilities::NamedValue,::Array<::UnityEngine::InputSystem::Utilities::NamedValue>*>  array, ::UnityEngine::InputSystem::Utilities::NamedValue  value, int32_t  startIndex, int32_t  count) ;

/// @brief Method LastIndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t LastIndexOf(::ArrayW<::UnityEngine::InputSystem::Utilities::NamedValue,::Array<::UnityEngine::InputSystem::Utilities::NamedValue>*>  array, ::UnityEngine::InputSystem::Utilities::NamedValue  value, int32_t  startIndex, int32_t  count) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

static inline ::System::Collections::Generic::GenericEqualityComparer_1<::UnityEngine::InputSystem::Utilities::NamedValue>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GenericEqualityComparer_1(GenericEqualityComparer_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GenericEqualityComparer_1(GenericEqualityComparer_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 GenericEqualityComparer_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::GenericEqualityComparer`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3869), inst: 1701 }), TypeDefinitionIndex(TypeDefinitionIndex(3870)), TypeDefinitionIndex(TypeDefinitionIndex(3869))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3870), inst: 3105 })
// CS Name: ::System.Collections.Generic::GenericEqualityComparer`1<T>*
class CORDL_TYPE GenericEqualityComparer_1<::UnityEngine::InputSystem::InputBinding> : public ::System::Collections::Generic::EqualityComparer_1<::UnityEngine::InputSystem::InputBinding> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Collections::Generic::EqualityComparer_1<::UnityEngine::InputSystem::InputBinding>)]{};

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::UnityEngine::InputSystem::InputBinding  x, ::UnityEngine::InputSystem::InputBinding  y) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode(::UnityEngine::InputSystem::InputBinding  obj) ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t IndexOf(::ArrayW<::UnityEngine::InputSystem::InputBinding,::Array<::UnityEngine::InputSystem::InputBinding>*>  array, ::UnityEngine::InputSystem::InputBinding  value, int32_t  startIndex, int32_t  count) ;

/// @brief Method LastIndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t LastIndexOf(::ArrayW<::UnityEngine::InputSystem::InputBinding,::Array<::UnityEngine::InputSystem::InputBinding>*>  array, ::UnityEngine::InputSystem::InputBinding  value, int32_t  startIndex, int32_t  count) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

static inline ::System::Collections::Generic::GenericEqualityComparer_1<::UnityEngine::InputSystem::InputBinding>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GenericEqualityComparer_1(GenericEqualityComparer_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GenericEqualityComparer_1(GenericEqualityComparer_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 GenericEqualityComparer_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::GenericEqualityComparer`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3870)), TypeDefinitionIndex(TypeDefinitionIndex(3869)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3869), inst: 1701 })}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3870), inst: 3081 })
// CS Name: ::System.Collections.Generic::GenericEqualityComparer`1<T>*
class CORDL_TYPE GenericEqualityComparer_1<::Zenject::BindingId> : public ::System::Collections::Generic::EqualityComparer_1<::Zenject::BindingId> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Collections::Generic::EqualityComparer_1<::Zenject::BindingId>)]{};

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::Zenject::BindingId  x, ::Zenject::BindingId  y) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode(::Zenject::BindingId  obj) ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t IndexOf(::ArrayW<::Zenject::BindingId,::Array<::Zenject::BindingId>*>  array, ::Zenject::BindingId  value, int32_t  startIndex, int32_t  count) ;

/// @brief Method LastIndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t LastIndexOf(::ArrayW<::Zenject::BindingId,::Array<::Zenject::BindingId>*>  array, ::Zenject::BindingId  value, int32_t  startIndex, int32_t  count) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

static inline ::System::Collections::Generic::GenericEqualityComparer_1<::Zenject::BindingId>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GenericEqualityComparer_1(GenericEqualityComparer_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GenericEqualityComparer_1(GenericEqualityComparer_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 GenericEqualityComparer_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::GenericEqualityComparer`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3869), inst: 1701 }), TypeDefinitionIndex(TypeDefinitionIndex(3870)), TypeDefinitionIndex(TypeDefinitionIndex(3869))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3870), inst: 2711 })
// CS Name: ::System.Collections.Generic::GenericEqualityComparer`1<T>*
class CORDL_TYPE GenericEqualityComparer_1<::System::TimeSpan> : public ::System::Collections::Generic::EqualityComparer_1<::System::TimeSpan> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Collections::Generic::EqualityComparer_1<::System::TimeSpan>)]{};

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::TimeSpan  x, ::System::TimeSpan  y) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode(::System::TimeSpan  obj) ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t IndexOf(::ArrayW<::System::TimeSpan,::Array<::System::TimeSpan>*>  array, ::System::TimeSpan  value, int32_t  startIndex, int32_t  count) ;

/// @brief Method LastIndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t LastIndexOf(::ArrayW<::System::TimeSpan,::Array<::System::TimeSpan>*>  array, ::System::TimeSpan  value, int32_t  startIndex, int32_t  count) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

static inline ::System::Collections::Generic::GenericEqualityComparer_1<::System::TimeSpan>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GenericEqualityComparer_1(GenericEqualityComparer_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GenericEqualityComparer_1(GenericEqualityComparer_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 GenericEqualityComparer_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::GenericEqualityComparer`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3869)), TypeDefinitionIndex(TypeDefinitionIndex(3870)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3869), inst: 1701 })}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3870), inst: 2710 })
// CS Name: ::System.Collections.Generic::GenericEqualityComparer`1<T>*
class CORDL_TYPE GenericEqualityComparer_1<::UnityEngine::InputSystem::Utilities::Substring> : public ::System::Collections::Generic::EqualityComparer_1<::UnityEngine::InputSystem::Utilities::Substring> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Collections::Generic::EqualityComparer_1<::UnityEngine::InputSystem::Utilities::Substring>)]{};

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::UnityEngine::InputSystem::Utilities::Substring  x, ::UnityEngine::InputSystem::Utilities::Substring  y) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode(::UnityEngine::InputSystem::Utilities::Substring  obj) ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t IndexOf(::ArrayW<::UnityEngine::InputSystem::Utilities::Substring,::Array<::UnityEngine::InputSystem::Utilities::Substring>*>  array, ::UnityEngine::InputSystem::Utilities::Substring  value, int32_t  startIndex, int32_t  count) ;

/// @brief Method LastIndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t LastIndexOf(::ArrayW<::UnityEngine::InputSystem::Utilities::Substring,::Array<::UnityEngine::InputSystem::Utilities::Substring>*>  array, ::UnityEngine::InputSystem::Utilities::Substring  value, int32_t  startIndex, int32_t  count) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

static inline ::System::Collections::Generic::GenericEqualityComparer_1<::UnityEngine::InputSystem::Utilities::Substring>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GenericEqualityComparer_1(GenericEqualityComparer_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GenericEqualityComparer_1(GenericEqualityComparer_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 GenericEqualityComparer_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::GenericEqualityComparer`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3869), inst: 1701 }), TypeDefinitionIndex(TypeDefinitionIndex(3869)), TypeDefinitionIndex(TypeDefinitionIndex(3870))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3870), inst: 2707 })
// CS Name: ::System.Collections.Generic::GenericEqualityComparer`1<T>*
class CORDL_TYPE GenericEqualityComparer_1<int8_t> : public ::System::Collections::Generic::EqualityComparer_1<int8_t> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Collections::Generic::EqualityComparer_1<int8_t>)]{};

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(int8_t  x, int8_t  y) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode(int8_t  obj) ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t IndexOf(::ArrayW<int8_t,::Array<int8_t>*>  array, int8_t  value, int32_t  startIndex, int32_t  count) ;

/// @brief Method LastIndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t LastIndexOf(::ArrayW<int8_t,::Array<int8_t>*>  array, int8_t  value, int32_t  startIndex, int32_t  count) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

static inline ::System::Collections::Generic::GenericEqualityComparer_1<int8_t>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GenericEqualityComparer_1(GenericEqualityComparer_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GenericEqualityComparer_1(GenericEqualityComparer_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 GenericEqualityComparer_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::GenericEqualityComparer`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3869)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3869), inst: 1701 }), TypeDefinitionIndex(TypeDefinitionIndex(3870))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3870), inst: 2704 })
// CS Name: ::System.Collections.Generic::GenericEqualityComparer`1<T>*
class CORDL_TYPE GenericEqualityComparer_1<double_t> : public ::System::Collections::Generic::EqualityComparer_1<double_t> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Collections::Generic::EqualityComparer_1<double_t>)]{};

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(double_t  x, double_t  y) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode(double_t  obj) ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t IndexOf(::ArrayW<double_t,::Array<double_t>*>  array, double_t  value, int32_t  startIndex, int32_t  count) ;

/// @brief Method LastIndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t LastIndexOf(::ArrayW<double_t,::Array<double_t>*>  array, double_t  value, int32_t  startIndex, int32_t  count) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

static inline ::System::Collections::Generic::GenericEqualityComparer_1<double_t>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GenericEqualityComparer_1(GenericEqualityComparer_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GenericEqualityComparer_1(GenericEqualityComparer_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 GenericEqualityComparer_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::GenericEqualityComparer`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3870)), TypeDefinitionIndex(TypeDefinitionIndex(3869)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3869), inst: 1701 })}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3870), inst: 2703 })
// CS Name: ::System.Collections.Generic::GenericEqualityComparer`1<T>*
class CORDL_TYPE GenericEqualityComparer_1<::System::Decimal> : public ::System::Collections::Generic::EqualityComparer_1<::System::Decimal> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Collections::Generic::EqualityComparer_1<::System::Decimal>)]{};

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Decimal  x, ::System::Decimal  y) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode(::System::Decimal  obj) ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t IndexOf(::ArrayW<::System::Decimal,::Array<::System::Decimal>*>  array, ::System::Decimal  value, int32_t  startIndex, int32_t  count) ;

/// @brief Method LastIndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t LastIndexOf(::ArrayW<::System::Decimal,::Array<::System::Decimal>*>  array, ::System::Decimal  value, int32_t  startIndex, int32_t  count) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

static inline ::System::Collections::Generic::GenericEqualityComparer_1<::System::Decimal>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GenericEqualityComparer_1(GenericEqualityComparer_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GenericEqualityComparer_1(GenericEqualityComparer_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 GenericEqualityComparer_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::GenericEqualityComparer`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3869), inst: 1701 }), TypeDefinitionIndex(TypeDefinitionIndex(3869)), TypeDefinitionIndex(TypeDefinitionIndex(3870))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3870), inst: 2702 })
// CS Name: ::System.Collections.Generic::GenericEqualityComparer`1<T>*
class CORDL_TYPE GenericEqualityComparer_1<::System::DateTimeOffset> : public ::System::Collections::Generic::EqualityComparer_1<::System::DateTimeOffset> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Collections::Generic::EqualityComparer_1<::System::DateTimeOffset>)]{};

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::DateTimeOffset  x, ::System::DateTimeOffset  y) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode(::System::DateTimeOffset  obj) ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t IndexOf(::ArrayW<::System::DateTimeOffset,::Array<::System::DateTimeOffset>*>  array, ::System::DateTimeOffset  value, int32_t  startIndex, int32_t  count) ;

/// @brief Method LastIndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t LastIndexOf(::ArrayW<::System::DateTimeOffset,::Array<::System::DateTimeOffset>*>  array, ::System::DateTimeOffset  value, int32_t  startIndex, int32_t  count) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

static inline ::System::Collections::Generic::GenericEqualityComparer_1<::System::DateTimeOffset>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GenericEqualityComparer_1(GenericEqualityComparer_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GenericEqualityComparer_1(GenericEqualityComparer_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 GenericEqualityComparer_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::GenericEqualityComparer`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3869), inst: 1701 }), TypeDefinitionIndex(TypeDefinitionIndex(3870)), TypeDefinitionIndex(TypeDefinitionIndex(3869))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3870), inst: 2701 })
// CS Name: ::System.Collections.Generic::GenericEqualityComparer`1<T>*
class CORDL_TYPE GenericEqualityComparer_1<::System::DateTime> : public ::System::Collections::Generic::EqualityComparer_1<::System::DateTime> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Collections::Generic::EqualityComparer_1<::System::DateTime>)]{};

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::DateTime  x, ::System::DateTime  y) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode(::System::DateTime  obj) ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t IndexOf(::ArrayW<::System::DateTime,::Array<::System::DateTime>*>  array, ::System::DateTime  value, int32_t  startIndex, int32_t  count) ;

/// @brief Method LastIndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t LastIndexOf(::ArrayW<::System::DateTime,::Array<::System::DateTime>*>  array, ::System::DateTime  value, int32_t  startIndex, int32_t  count) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

static inline ::System::Collections::Generic::GenericEqualityComparer_1<::System::DateTime>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GenericEqualityComparer_1(GenericEqualityComparer_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GenericEqualityComparer_1(GenericEqualityComparer_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 GenericEqualityComparer_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::GenericEqualityComparer`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3869)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3869), inst: 1701 }), TypeDefinitionIndex(TypeDefinitionIndex(3870))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3870), inst: 2598 })
// CS Name: ::System.Collections.Generic::GenericEqualityComparer`1<T>*
class CORDL_TYPE GenericEqualityComparer_1<::UnityEngine::InputSystem::Utilities::InternedString> : public ::System::Collections::Generic::EqualityComparer_1<::UnityEngine::InputSystem::Utilities::InternedString> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Collections::Generic::EqualityComparer_1<::UnityEngine::InputSystem::Utilities::InternedString>)]{};

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::UnityEngine::InputSystem::Utilities::InternedString  x, ::UnityEngine::InputSystem::Utilities::InternedString  y) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode(::UnityEngine::InputSystem::Utilities::InternedString  obj) ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t IndexOf(::ArrayW<::UnityEngine::InputSystem::Utilities::InternedString,::Array<::UnityEngine::InputSystem::Utilities::InternedString>*>  array, ::UnityEngine::InputSystem::Utilities::InternedString  value, int32_t  startIndex, int32_t  count) ;

/// @brief Method LastIndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t LastIndexOf(::ArrayW<::UnityEngine::InputSystem::Utilities::InternedString,::Array<::UnityEngine::InputSystem::Utilities::InternedString>*>  array, ::UnityEngine::InputSystem::Utilities::InternedString  value, int32_t  startIndex, int32_t  count) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

static inline ::System::Collections::Generic::GenericEqualityComparer_1<::UnityEngine::InputSystem::Utilities::InternedString>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GenericEqualityComparer_1(GenericEqualityComparer_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GenericEqualityComparer_1(GenericEqualityComparer_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 GenericEqualityComparer_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::GenericEqualityComparer`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3870)), TypeDefinitionIndex(TypeDefinitionIndex(3869)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3869), inst: 1701 })}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3870), inst: 2593 })
// CS Name: ::System.Collections.Generic::GenericEqualityComparer`1<T>*
class CORDL_TYPE GenericEqualityComparer_1<::UnityEngine::ProBuilder::EdgeLookup> : public ::System::Collections::Generic::EqualityComparer_1<::UnityEngine::ProBuilder::EdgeLookup> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Collections::Generic::EqualityComparer_1<::UnityEngine::ProBuilder::EdgeLookup>)]{};

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::UnityEngine::ProBuilder::EdgeLookup  x, ::UnityEngine::ProBuilder::EdgeLookup  y) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode(::UnityEngine::ProBuilder::EdgeLookup  obj) ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t IndexOf(::ArrayW<::UnityEngine::ProBuilder::EdgeLookup,::Array<::UnityEngine::ProBuilder::EdgeLookup>*>  array, ::UnityEngine::ProBuilder::EdgeLookup  value, int32_t  startIndex, int32_t  count) ;

/// @brief Method LastIndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t LastIndexOf(::ArrayW<::UnityEngine::ProBuilder::EdgeLookup,::Array<::UnityEngine::ProBuilder::EdgeLookup>*>  array, ::UnityEngine::ProBuilder::EdgeLookup  value, int32_t  startIndex, int32_t  count) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

static inline ::System::Collections::Generic::GenericEqualityComparer_1<::UnityEngine::ProBuilder::EdgeLookup>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GenericEqualityComparer_1(GenericEqualityComparer_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GenericEqualityComparer_1(GenericEqualityComparer_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 GenericEqualityComparer_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::GenericEqualityComparer`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3870)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3869), inst: 1701 }), TypeDefinitionIndex(TypeDefinitionIndex(3869))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3870), inst: 2592 })
// CS Name: ::System.Collections.Generic::GenericEqualityComparer`1<T>*
class CORDL_TYPE GenericEqualityComparer_1<::UnityEngine::ProBuilder::Edge> : public ::System::Collections::Generic::EqualityComparer_1<::UnityEngine::ProBuilder::Edge> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Collections::Generic::EqualityComparer_1<::UnityEngine::ProBuilder::Edge>)]{};

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::UnityEngine::ProBuilder::Edge  x, ::UnityEngine::ProBuilder::Edge  y) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode(::UnityEngine::ProBuilder::Edge  obj) ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t IndexOf(::ArrayW<::UnityEngine::ProBuilder::Edge,::Array<::UnityEngine::ProBuilder::Edge>*>  array, ::UnityEngine::ProBuilder::Edge  value, int32_t  startIndex, int32_t  count) ;

/// @brief Method LastIndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t LastIndexOf(::ArrayW<::UnityEngine::ProBuilder::Edge,::Array<::UnityEngine::ProBuilder::Edge>*>  array, ::UnityEngine::ProBuilder::Edge  value, int32_t  startIndex, int32_t  count) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

static inline ::System::Collections::Generic::GenericEqualityComparer_1<::UnityEngine::ProBuilder::Edge>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GenericEqualityComparer_1(GenericEqualityComparer_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GenericEqualityComparer_1(GenericEqualityComparer_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 GenericEqualityComparer_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::GenericEqualityComparer`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3869)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3869), inst: 1701 }), TypeDefinitionIndex(TypeDefinitionIndex(3870))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3870), inst: 1693 })
// CS Name: ::System.Collections.Generic::GenericEqualityComparer`1<T>*
class CORDL_TYPE GenericEqualityComparer_1<::UnityEngine::UIElements::StylePropertyName> : public ::System::Collections::Generic::EqualityComparer_1<::UnityEngine::UIElements::StylePropertyName> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Collections::Generic::EqualityComparer_1<::UnityEngine::UIElements::StylePropertyName>)]{};

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::UnityEngine::UIElements::StylePropertyName  x, ::UnityEngine::UIElements::StylePropertyName  y) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode(::UnityEngine::UIElements::StylePropertyName  obj) ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t IndexOf(::ArrayW<::UnityEngine::UIElements::StylePropertyName,::Array<::UnityEngine::UIElements::StylePropertyName>*>  array, ::UnityEngine::UIElements::StylePropertyName  value, int32_t  startIndex, int32_t  count) ;

/// @brief Method LastIndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t LastIndexOf(::ArrayW<::UnityEngine::UIElements::StylePropertyName,::Array<::UnityEngine::UIElements::StylePropertyName>*>  array, ::UnityEngine::UIElements::StylePropertyName  value, int32_t  startIndex, int32_t  count) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

static inline ::System::Collections::Generic::GenericEqualityComparer_1<::UnityEngine::UIElements::StylePropertyName>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GenericEqualityComparer_1(GenericEqualityComparer_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GenericEqualityComparer_1(GenericEqualityComparer_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 GenericEqualityComparer_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::GenericEqualityComparer`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3869), inst: 1701 }), TypeDefinitionIndex(TypeDefinitionIndex(3869)), TypeDefinitionIndex(TypeDefinitionIndex(3870))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3870), inst: 1569 })
// CS Name: ::System.Collections.Generic::GenericEqualityComparer`1<T>*
class CORDL_TYPE GenericEqualityComparer_1<::UnityEngine::UIElements::FontDefinition> : public ::System::Collections::Generic::EqualityComparer_1<::UnityEngine::UIElements::FontDefinition> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Collections::Generic::EqualityComparer_1<::UnityEngine::UIElements::FontDefinition>)]{};

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::UnityEngine::UIElements::FontDefinition  x, ::UnityEngine::UIElements::FontDefinition  y) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode(::UnityEngine::UIElements::FontDefinition  obj) ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t IndexOf(::ArrayW<::UnityEngine::UIElements::FontDefinition,::Array<::UnityEngine::UIElements::FontDefinition>*>  array, ::UnityEngine::UIElements::FontDefinition  value, int32_t  startIndex, int32_t  count) ;

/// @brief Method LastIndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t LastIndexOf(::ArrayW<::UnityEngine::UIElements::FontDefinition,::Array<::UnityEngine::UIElements::FontDefinition>*>  array, ::UnityEngine::UIElements::FontDefinition  value, int32_t  startIndex, int32_t  count) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

static inline ::System::Collections::Generic::GenericEqualityComparer_1<::UnityEngine::UIElements::FontDefinition>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GenericEqualityComparer_1(GenericEqualityComparer_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GenericEqualityComparer_1(GenericEqualityComparer_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 GenericEqualityComparer_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::GenericEqualityComparer`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3869)), TypeDefinitionIndex(TypeDefinitionIndex(3870)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3869), inst: 1701 })}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3870), inst: 1568 })
// CS Name: ::System.Collections.Generic::GenericEqualityComparer`1<T>*
class CORDL_TYPE GenericEqualityComparer_1<::UnityEngine::UIElements::Background> : public ::System::Collections::Generic::EqualityComparer_1<::UnityEngine::UIElements::Background> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Collections::Generic::EqualityComparer_1<::UnityEngine::UIElements::Background>)]{};

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::UnityEngine::UIElements::Background  x, ::UnityEngine::UIElements::Background  y) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode(::UnityEngine::UIElements::Background  obj) ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t IndexOf(::ArrayW<::UnityEngine::UIElements::Background,::Array<::UnityEngine::UIElements::Background>*>  array, ::UnityEngine::UIElements::Background  value, int32_t  startIndex, int32_t  count) ;

/// @brief Method LastIndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t LastIndexOf(::ArrayW<::UnityEngine::UIElements::Background,::Array<::UnityEngine::UIElements::Background>*>  array, ::UnityEngine::UIElements::Background  value, int32_t  startIndex, int32_t  count) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

static inline ::System::Collections::Generic::GenericEqualityComparer_1<::UnityEngine::UIElements::Background>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GenericEqualityComparer_1(GenericEqualityComparer_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GenericEqualityComparer_1(GenericEqualityComparer_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 GenericEqualityComparer_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::GenericEqualityComparer`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3870)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3869), inst: 1701 }), TypeDefinitionIndex(TypeDefinitionIndex(3869))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3870), inst: 980 })
// CS Name: ::System.Collections.Generic::GenericEqualityComparer`1<T>*
class CORDL_TYPE GenericEqualityComparer_1<::GlobalNamespace::OVRAnchor> : public ::System::Collections::Generic::EqualityComparer_1<::GlobalNamespace::OVRAnchor> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Collections::Generic::EqualityComparer_1<::GlobalNamespace::OVRAnchor>)]{};

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::GlobalNamespace::OVRAnchor  x, ::GlobalNamespace::OVRAnchor  y) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode(::GlobalNamespace::OVRAnchor  obj) ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t IndexOf(::ArrayW<::GlobalNamespace::OVRAnchor,::Array<::GlobalNamespace::OVRAnchor>*>  array, ::GlobalNamespace::OVRAnchor  value, int32_t  startIndex, int32_t  count) ;

/// @brief Method LastIndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t LastIndexOf(::ArrayW<::GlobalNamespace::OVRAnchor,::Array<::GlobalNamespace::OVRAnchor>*>  array, ::GlobalNamespace::OVRAnchor  value, int32_t  startIndex, int32_t  count) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

static inline ::System::Collections::Generic::GenericEqualityComparer_1<::GlobalNamespace::OVRAnchor>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GenericEqualityComparer_1(GenericEqualityComparer_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GenericEqualityComparer_1(GenericEqualityComparer_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 GenericEqualityComparer_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::GenericEqualityComparer`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3869), inst: 1701 }), TypeDefinitionIndex(TypeDefinitionIndex(3870)), TypeDefinitionIndex(TypeDefinitionIndex(3869))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3870), inst: 757 })
// CS Name: ::System.Collections.Generic::GenericEqualityComparer`1<T>*
class CORDL_TYPE GenericEqualityComparer_1<::UnityEngine::Rendering::VertexAttributeDescriptor> : public ::System::Collections::Generic::EqualityComparer_1<::UnityEngine::Rendering::VertexAttributeDescriptor> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Collections::Generic::EqualityComparer_1<::UnityEngine::Rendering::VertexAttributeDescriptor>)]{};

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::UnityEngine::Rendering::VertexAttributeDescriptor  x, ::UnityEngine::Rendering::VertexAttributeDescriptor  y) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode(::UnityEngine::Rendering::VertexAttributeDescriptor  obj) ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t IndexOf(::ArrayW<::UnityEngine::Rendering::VertexAttributeDescriptor,::Array<::UnityEngine::Rendering::VertexAttributeDescriptor>*>  array, ::UnityEngine::Rendering::VertexAttributeDescriptor  value, int32_t  startIndex, int32_t  count) ;

/// @brief Method LastIndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t LastIndexOf(::ArrayW<::UnityEngine::Rendering::VertexAttributeDescriptor,::Array<::UnityEngine::Rendering::VertexAttributeDescriptor>*>  array, ::UnityEngine::Rendering::VertexAttributeDescriptor  value, int32_t  startIndex, int32_t  count) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

static inline ::System::Collections::Generic::GenericEqualityComparer_1<::UnityEngine::Rendering::VertexAttributeDescriptor>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GenericEqualityComparer_1(GenericEqualityComparer_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GenericEqualityComparer_1(GenericEqualityComparer_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 GenericEqualityComparer_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::GenericEqualityComparer`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3870)), TypeDefinitionIndex(TypeDefinitionIndex(3869)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3869), inst: 1701 })}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3870), inst: 755 })
// CS Name: ::System.Collections.Generic::GenericEqualityComparer`1<T>*
class CORDL_TYPE GenericEqualityComparer_1<::UnityEngine::Vector4> : public ::System::Collections::Generic::EqualityComparer_1<::UnityEngine::Vector4> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Collections::Generic::EqualityComparer_1<::UnityEngine::Vector4>)]{};

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::UnityEngine::Vector4  x, ::UnityEngine::Vector4  y) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode(::UnityEngine::Vector4  obj) ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t IndexOf(::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*>  array, ::UnityEngine::Vector4  value, int32_t  startIndex, int32_t  count) ;

/// @brief Method LastIndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t LastIndexOf(::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*>  array, ::UnityEngine::Vector4  value, int32_t  startIndex, int32_t  count) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

static inline ::System::Collections::Generic::GenericEqualityComparer_1<::UnityEngine::Vector4>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GenericEqualityComparer_1(GenericEqualityComparer_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GenericEqualityComparer_1(GenericEqualityComparer_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 GenericEqualityComparer_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::GenericEqualityComparer`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3869), inst: 1701 }), TypeDefinitionIndex(TypeDefinitionIndex(3870)), TypeDefinitionIndex(TypeDefinitionIndex(3869))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3870), inst: 754 })
// CS Name: ::System.Collections.Generic::GenericEqualityComparer`1<T>*
class CORDL_TYPE GenericEqualityComparer_1<::UnityEngine::Vector3Int> : public ::System::Collections::Generic::EqualityComparer_1<::UnityEngine::Vector3Int> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Collections::Generic::EqualityComparer_1<::UnityEngine::Vector3Int>)]{};

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::UnityEngine::Vector3Int  x, ::UnityEngine::Vector3Int  y) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode(::UnityEngine::Vector3Int  obj) ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t IndexOf(::ArrayW<::UnityEngine::Vector3Int,::Array<::UnityEngine::Vector3Int>*>  array, ::UnityEngine::Vector3Int  value, int32_t  startIndex, int32_t  count) ;

/// @brief Method LastIndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t LastIndexOf(::ArrayW<::UnityEngine::Vector3Int,::Array<::UnityEngine::Vector3Int>*>  array, ::UnityEngine::Vector3Int  value, int32_t  startIndex, int32_t  count) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

static inline ::System::Collections::Generic::GenericEqualityComparer_1<::UnityEngine::Vector3Int>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GenericEqualityComparer_1(GenericEqualityComparer_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GenericEqualityComparer_1(GenericEqualityComparer_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 GenericEqualityComparer_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::GenericEqualityComparer`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3870)), TypeDefinitionIndex(TypeDefinitionIndex(3869)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3869), inst: 1701 })}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3870), inst: 753 })
// CS Name: ::System.Collections.Generic::GenericEqualityComparer`1<T>*
class CORDL_TYPE GenericEqualityComparer_1<uint32_t> : public ::System::Collections::Generic::EqualityComparer_1<uint32_t> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Collections::Generic::EqualityComparer_1<uint32_t>)]{};

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(uint32_t  x, uint32_t  y) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode(uint32_t  obj) ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t IndexOf(::ArrayW<uint32_t,::Array<uint32_t>*>  array, uint32_t  value, int32_t  startIndex, int32_t  count) ;

/// @brief Method LastIndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t LastIndexOf(::ArrayW<uint32_t,::Array<uint32_t>*>  array, uint32_t  value, int32_t  startIndex, int32_t  count) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

static inline ::System::Collections::Generic::GenericEqualityComparer_1<uint32_t>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GenericEqualityComparer_1(GenericEqualityComparer_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GenericEqualityComparer_1(GenericEqualityComparer_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 GenericEqualityComparer_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::GenericEqualityComparer`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3870)), TypeDefinitionIndex(TypeDefinitionIndex(3869)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3869), inst: 1701 })}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3870), inst: 752 })
// CS Name: ::System.Collections.Generic::GenericEqualityComparer`1<T>*
class CORDL_TYPE GenericEqualityComparer_1<uint16_t> : public ::System::Collections::Generic::EqualityComparer_1<uint16_t> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Collections::Generic::EqualityComparer_1<uint16_t>)]{};

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(uint16_t  x, uint16_t  y) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode(uint16_t  obj) ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t IndexOf(::ArrayW<uint16_t,::Array<uint16_t>*>  array, uint16_t  value, int32_t  startIndex, int32_t  count) ;

/// @brief Method LastIndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t LastIndexOf(::ArrayW<uint16_t,::Array<uint16_t>*>  array, uint16_t  value, int32_t  startIndex, int32_t  count) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

static inline ::System::Collections::Generic::GenericEqualityComparer_1<uint16_t>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GenericEqualityComparer_1(GenericEqualityComparer_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GenericEqualityComparer_1(GenericEqualityComparer_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 GenericEqualityComparer_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::GenericEqualityComparer`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3869), inst: 1701 }), TypeDefinitionIndex(TypeDefinitionIndex(3869)), TypeDefinitionIndex(TypeDefinitionIndex(3870))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3870), inst: 745 })
// CS Name: ::System.Collections.Generic::GenericEqualityComparer`1<T>*
class CORDL_TYPE GenericEqualityComparer_1<int16_t> : public ::System::Collections::Generic::EqualityComparer_1<int16_t> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Collections::Generic::EqualityComparer_1<int16_t>)]{};

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(int16_t  x, int16_t  y) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode(int16_t  obj) ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t IndexOf(::ArrayW<int16_t,::Array<int16_t>*>  array, int16_t  value, int32_t  startIndex, int32_t  count) ;

/// @brief Method LastIndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t LastIndexOf(::ArrayW<int16_t,::Array<int16_t>*>  array, int16_t  value, int32_t  startIndex, int32_t  count) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

static inline ::System::Collections::Generic::GenericEqualityComparer_1<int16_t>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GenericEqualityComparer_1(GenericEqualityComparer_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GenericEqualityComparer_1(GenericEqualityComparer_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 GenericEqualityComparer_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::GenericEqualityComparer`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3870)), TypeDefinitionIndex(TypeDefinitionIndex(3869)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3869), inst: 1701 })}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3870), inst: 741 })
// CS Name: ::System.Collections.Generic::GenericEqualityComparer`1<T>*
class CORDL_TYPE GenericEqualityComparer_1<uint8_t> : public ::System::Collections::Generic::EqualityComparer_1<uint8_t> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Collections::Generic::EqualityComparer_1<uint8_t>)]{};

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(uint8_t  x, uint8_t  y) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode(uint8_t  obj) ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t IndexOf(::ArrayW<uint8_t,::Array<uint8_t>*>  array, uint8_t  value, int32_t  startIndex, int32_t  count) ;

/// @brief Method LastIndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t LastIndexOf(::ArrayW<uint8_t,::Array<uint8_t>*>  array, uint8_t  value, int32_t  startIndex, int32_t  count) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

static inline ::System::Collections::Generic::GenericEqualityComparer_1<uint8_t>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GenericEqualityComparer_1(GenericEqualityComparer_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GenericEqualityComparer_1(GenericEqualityComparer_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 GenericEqualityComparer_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::GenericEqualityComparer`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3869)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3869), inst: 1701 }), TypeDefinitionIndex(TypeDefinitionIndex(3870))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3870), inst: 739 })
// CS Name: ::System.Collections.Generic::GenericEqualityComparer`1<T>*
class CORDL_TYPE GenericEqualityComparer_1<::UnityEngine::BoneWeight> : public ::System::Collections::Generic::EqualityComparer_1<::UnityEngine::BoneWeight> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Collections::Generic::EqualityComparer_1<::UnityEngine::BoneWeight>)]{};

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::UnityEngine::BoneWeight  x, ::UnityEngine::BoneWeight  y) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode(::UnityEngine::BoneWeight  obj) ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t IndexOf(::ArrayW<::UnityEngine::BoneWeight,::Array<::UnityEngine::BoneWeight>*>  array, ::UnityEngine::BoneWeight  value, int32_t  startIndex, int32_t  count) ;

/// @brief Method LastIndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t LastIndexOf(::ArrayW<::UnityEngine::BoneWeight,::Array<::UnityEngine::BoneWeight>*>  array, ::UnityEngine::BoneWeight  value, int32_t  startIndex, int32_t  count) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

static inline ::System::Collections::Generic::GenericEqualityComparer_1<::UnityEngine::BoneWeight>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GenericEqualityComparer_1(GenericEqualityComparer_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GenericEqualityComparer_1(GenericEqualityComparer_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 GenericEqualityComparer_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::GenericEqualityComparer`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3870)), TypeDefinitionIndex(TypeDefinitionIndex(3869)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3869), inst: 1701 })}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3870), inst: 412 })
// CS Name: ::System.Collections.Generic::GenericEqualityComparer`1<T>*
class CORDL_TYPE GenericEqualityComparer_1<::UnityEngine::Vector3> : public ::System::Collections::Generic::EqualityComparer_1<::UnityEngine::Vector3> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Collections::Generic::EqualityComparer_1<::UnityEngine::Vector3>)]{};

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::UnityEngine::Vector3  x, ::UnityEngine::Vector3  y) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode(::UnityEngine::Vector3  obj) ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t IndexOf(::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>  array, ::UnityEngine::Vector3  value, int32_t  startIndex, int32_t  count) ;

/// @brief Method LastIndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t LastIndexOf(::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>  array, ::UnityEngine::Vector3  value, int32_t  startIndex, int32_t  count) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

static inline ::System::Collections::Generic::GenericEqualityComparer_1<::UnityEngine::Vector3>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GenericEqualityComparer_1(GenericEqualityComparer_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GenericEqualityComparer_1(GenericEqualityComparer_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 GenericEqualityComparer_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::GenericEqualityComparer`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3869), inst: 1701 }), TypeDefinitionIndex(TypeDefinitionIndex(3870)), TypeDefinitionIndex(TypeDefinitionIndex(3869))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3870), inst: 411 })
// CS Name: ::System.Collections.Generic::GenericEqualityComparer`1<T>*
class CORDL_TYPE GenericEqualityComparer_1<::UnityEngine::Vector2> : public ::System::Collections::Generic::EqualityComparer_1<::UnityEngine::Vector2> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Collections::Generic::EqualityComparer_1<::UnityEngine::Vector2>)]{};

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::UnityEngine::Vector2  x, ::UnityEngine::Vector2  y) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode(::UnityEngine::Vector2  obj) ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t IndexOf(::ArrayW<::UnityEngine::Vector2,::Array<::UnityEngine::Vector2>*>  array, ::UnityEngine::Vector2  value, int32_t  startIndex, int32_t  count) ;

/// @brief Method LastIndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t LastIndexOf(::ArrayW<::UnityEngine::Vector2,::Array<::UnityEngine::Vector2>*>  array, ::UnityEngine::Vector2  value, int32_t  startIndex, int32_t  count) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

static inline ::System::Collections::Generic::GenericEqualityComparer_1<::UnityEngine::Vector2>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GenericEqualityComparer_1(GenericEqualityComparer_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GenericEqualityComparer_1(GenericEqualityComparer_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 GenericEqualityComparer_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::GenericEqualityComparer`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3869)), TypeDefinitionIndex(TypeDefinitionIndex(3870)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3869), inst: 1701 })}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3870), inst: 407 })
// CS Name: ::System.Collections.Generic::GenericEqualityComparer`1<T>*
class CORDL_TYPE GenericEqualityComparer_1<uint64_t> : public ::System::Collections::Generic::EqualityComparer_1<uint64_t> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Collections::Generic::EqualityComparer_1<uint64_t>)]{};

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(uint64_t  x, uint64_t  y) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode(uint64_t  obj) ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t IndexOf(::ArrayW<uint64_t,::Array<uint64_t>*>  array, uint64_t  value, int32_t  startIndex, int32_t  count) ;

/// @brief Method LastIndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t LastIndexOf(::ArrayW<uint64_t,::Array<uint64_t>*>  array, uint64_t  value, int32_t  startIndex, int32_t  count) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

static inline ::System::Collections::Generic::GenericEqualityComparer_1<uint64_t>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GenericEqualityComparer_1(GenericEqualityComparer_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GenericEqualityComparer_1(GenericEqualityComparer_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 GenericEqualityComparer_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::GenericEqualityComparer`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3869)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3869), inst: 1701 }), TypeDefinitionIndex(TypeDefinitionIndex(3870))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3870), inst: 391 })
// CS Name: ::System.Collections.Generic::GenericEqualityComparer`1<T>*
class CORDL_TYPE GenericEqualityComparer_1<float_t> : public ::System::Collections::Generic::EqualityComparer_1<float_t> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Collections::Generic::EqualityComparer_1<float_t>)]{};

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(float_t  x, float_t  y) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode(float_t  obj) ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t IndexOf(::ArrayW<float_t,::Array<float_t>*>  array, float_t  value, int32_t  startIndex, int32_t  count) ;

/// @brief Method LastIndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t LastIndexOf(::ArrayW<float_t,::Array<float_t>*>  array, float_t  value, int32_t  startIndex, int32_t  count) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

static inline ::System::Collections::Generic::GenericEqualityComparer_1<float_t>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GenericEqualityComparer_1(GenericEqualityComparer_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GenericEqualityComparer_1(GenericEqualityComparer_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 GenericEqualityComparer_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::GenericEqualityComparer`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3869), inst: 1701 }), TypeDefinitionIndex(TypeDefinitionIndex(3869)), TypeDefinitionIndex(TypeDefinitionIndex(3870))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3870), inst: 375 })
// CS Name: ::System.Collections.Generic::GenericEqualityComparer`1<T>*
class CORDL_TYPE GenericEqualityComparer_1<::BeatSaber::AvatarCore::OptionalAvatarData> : public ::System::Collections::Generic::EqualityComparer_1<::BeatSaber::AvatarCore::OptionalAvatarData> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Collections::Generic::EqualityComparer_1<::BeatSaber::AvatarCore::OptionalAvatarData>)]{};

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::BeatSaber::AvatarCore::OptionalAvatarData  x, ::BeatSaber::AvatarCore::OptionalAvatarData  y) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode(::BeatSaber::AvatarCore::OptionalAvatarData  obj) ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t IndexOf(::ArrayW<::BeatSaber::AvatarCore::OptionalAvatarData,::Array<::BeatSaber::AvatarCore::OptionalAvatarData>*>  array, ::BeatSaber::AvatarCore::OptionalAvatarData  value, int32_t  startIndex, int32_t  count) ;

/// @brief Method LastIndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t LastIndexOf(::ArrayW<::BeatSaber::AvatarCore::OptionalAvatarData,::Array<::BeatSaber::AvatarCore::OptionalAvatarData>*>  array, ::BeatSaber::AvatarCore::OptionalAvatarData  value, int32_t  startIndex, int32_t  count) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

static inline ::System::Collections::Generic::GenericEqualityComparer_1<::BeatSaber::AvatarCore::OptionalAvatarData>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GenericEqualityComparer_1(GenericEqualityComparer_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GenericEqualityComparer_1(GenericEqualityComparer_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 GenericEqualityComparer_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::GenericEqualityComparer`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3869), inst: 1701 }), TypeDefinitionIndex(TypeDefinitionIndex(3870)), TypeDefinitionIndex(TypeDefinitionIndex(3869))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3870), inst: 334 })
// CS Name: ::System.Collections.Generic::GenericEqualityComparer`1<T>*
class CORDL_TYPE GenericEqualityComparer_1<::cordl_internals::intptr_t> : public ::System::Collections::Generic::EqualityComparer_1<::cordl_internals::intptr_t> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Collections::Generic::EqualityComparer_1<::cordl_internals::intptr_t>)]{};

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::cordl_internals::intptr_t  x, ::cordl_internals::intptr_t  y) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode(::cordl_internals::intptr_t  obj) ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t IndexOf(::ArrayW<::cordl_internals::intptr_t,::Array<::cordl_internals::intptr_t>*>  array, ::cordl_internals::intptr_t  value, int32_t  startIndex, int32_t  count) ;

/// @brief Method LastIndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t LastIndexOf(::ArrayW<::cordl_internals::intptr_t,::Array<::cordl_internals::intptr_t>*>  array, ::cordl_internals::intptr_t  value, int32_t  startIndex, int32_t  count) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

static inline ::System::Collections::Generic::GenericEqualityComparer_1<::cordl_internals::intptr_t>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GenericEqualityComparer_1(GenericEqualityComparer_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GenericEqualityComparer_1(GenericEqualityComparer_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 GenericEqualityComparer_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::GenericEqualityComparer`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3869)), TypeDefinitionIndex(TypeDefinitionIndex(3870)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3869), inst: 1701 })}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3870), inst: 333 })
// CS Name: ::System.Collections.Generic::GenericEqualityComparer`1<T>*
class CORDL_TYPE GenericEqualityComparer_1<int64_t> : public ::System::Collections::Generic::EqualityComparer_1<int64_t> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Collections::Generic::EqualityComparer_1<int64_t>)]{};

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(int64_t  x, int64_t  y) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode(int64_t  obj) ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t IndexOf(::ArrayW<int64_t,::Array<int64_t>*>  array, int64_t  value, int32_t  startIndex, int32_t  count) ;

/// @brief Method LastIndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t LastIndexOf(::ArrayW<int64_t,::Array<int64_t>*>  array, int64_t  value, int32_t  startIndex, int32_t  count) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

static inline ::System::Collections::Generic::GenericEqualityComparer_1<int64_t>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GenericEqualityComparer_1(GenericEqualityComparer_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GenericEqualityComparer_1(GenericEqualityComparer_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 GenericEqualityComparer_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::GenericEqualityComparer`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3870)), TypeDefinitionIndex(TypeDefinitionIndex(3869)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3869), inst: 1701 })}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3870), inst: 330 })
// CS Name: ::System.Collections.Generic::GenericEqualityComparer`1<T>*
class CORDL_TYPE GenericEqualityComparer_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr> : public ::System::Collections::Generic::EqualityComparer_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Collections::Generic::EqualityComparer_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>)]{};

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::UnityEngine::InputSystem::LowLevel::InputEventPtr  x, ::UnityEngine::InputSystem::LowLevel::InputEventPtr  y) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode(::UnityEngine::InputSystem::LowLevel::InputEventPtr  obj) ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t IndexOf(::ArrayW<::UnityEngine::InputSystem::LowLevel::InputEventPtr,::Array<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*>  array, ::UnityEngine::InputSystem::LowLevel::InputEventPtr  value, int32_t  startIndex, int32_t  count) ;

/// @brief Method LastIndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t LastIndexOf(::ArrayW<::UnityEngine::InputSystem::LowLevel::InputEventPtr,::Array<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*>  array, ::UnityEngine::InputSystem::LowLevel::InputEventPtr  value, int32_t  startIndex, int32_t  count) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

static inline ::System::Collections::Generic::GenericEqualityComparer_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GenericEqualityComparer_1(GenericEqualityComparer_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GenericEqualityComparer_1(GenericEqualityComparer_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 GenericEqualityComparer_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::GenericEqualityComparer`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3869)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3869), inst: 1701 }), TypeDefinitionIndex(TypeDefinitionIndex(3870))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3870), inst: 314 })
// CS Name: ::System.Collections.Generic::GenericEqualityComparer`1<T>*
class CORDL_TYPE GenericEqualityComparer_1<::System::Guid> : public ::System::Collections::Generic::EqualityComparer_1<::System::Guid> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Collections::Generic::EqualityComparer_1<::System::Guid>)]{};

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Guid  x, ::System::Guid  y) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode(::System::Guid  obj) ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t IndexOf(::ArrayW<::System::Guid,::Array<::System::Guid>*>  array, ::System::Guid  value, int32_t  startIndex, int32_t  count) ;

/// @brief Method LastIndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t LastIndexOf(::ArrayW<::System::Guid,::Array<::System::Guid>*>  array, ::System::Guid  value, int32_t  startIndex, int32_t  count) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

static inline ::System::Collections::Generic::GenericEqualityComparer_1<::System::Guid>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GenericEqualityComparer_1(GenericEqualityComparer_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GenericEqualityComparer_1(GenericEqualityComparer_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 GenericEqualityComparer_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::GenericEqualityComparer`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3869)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3869), inst: 1701 }), TypeDefinitionIndex(TypeDefinitionIndex(3870))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3870), inst: 293 })
// CS Name: ::System.Collections.Generic::GenericEqualityComparer`1<T>*
class CORDL_TYPE GenericEqualityComparer_1<::UnityEngine::Color> : public ::System::Collections::Generic::EqualityComparer_1<::UnityEngine::Color> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Collections::Generic::EqualityComparer_1<::UnityEngine::Color>)]{};

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::UnityEngine::Color  x, ::UnityEngine::Color  y) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode(::UnityEngine::Color  obj) ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t IndexOf(::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*>  array, ::UnityEngine::Color  value, int32_t  startIndex, int32_t  count) ;

/// @brief Method LastIndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t LastIndexOf(::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*>  array, ::UnityEngine::Color  value, int32_t  startIndex, int32_t  count) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

static inline ::System::Collections::Generic::GenericEqualityComparer_1<::UnityEngine::Color>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GenericEqualityComparer_1(GenericEqualityComparer_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GenericEqualityComparer_1(GenericEqualityComparer_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 GenericEqualityComparer_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::GenericEqualityComparer`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3870)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3869), inst: 1701 }), TypeDefinitionIndex(TypeDefinitionIndex(3869))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3870), inst: 292 })
// CS Name: ::System.Collections.Generic::GenericEqualityComparer`1<T>*
class CORDL_TYPE GenericEqualityComparer_1<char16_t> : public ::System::Collections::Generic::EqualityComparer_1<char16_t> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Collections::Generic::EqualityComparer_1<char16_t>)]{};

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(char16_t  x, char16_t  y) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode(char16_t  obj) ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t IndexOf(::ArrayW<char16_t,::Array<char16_t>*>  array, char16_t  value, int32_t  startIndex, int32_t  count) ;

/// @brief Method LastIndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t LastIndexOf(::ArrayW<char16_t,::Array<char16_t>*>  array, char16_t  value, int32_t  startIndex, int32_t  count) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

static inline ::System::Collections::Generic::GenericEqualityComparer_1<char16_t>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GenericEqualityComparer_1(GenericEqualityComparer_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GenericEqualityComparer_1(GenericEqualityComparer_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 GenericEqualityComparer_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::GenericEqualityComparer`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3869)), TypeDefinitionIndex(TypeDefinitionIndex(3870)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3869), inst: 1701 })}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3870), inst: 105 })
// CS Name: ::System.Collections.Generic::GenericEqualityComparer`1<T>*
class CORDL_TYPE GenericEqualityComparer_1<bool> : public ::System::Collections::Generic::EqualityComparer_1<bool> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Collections::Generic::EqualityComparer_1<bool>)]{};

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(bool  x, bool  y) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode(bool  obj) ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t IndexOf(::ArrayW<bool,::Array<bool>*>  array, bool  value, int32_t  startIndex, int32_t  count) ;

/// @brief Method LastIndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t LastIndexOf(::ArrayW<bool,::Array<bool>*>  array, bool  value, int32_t  startIndex, int32_t  count) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

static inline ::System::Collections::Generic::GenericEqualityComparer_1<bool>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GenericEqualityComparer_1(GenericEqualityComparer_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GenericEqualityComparer_1(GenericEqualityComparer_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 GenericEqualityComparer_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::GenericEqualityComparer`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3870)), TypeDefinitionIndex(TypeDefinitionIndex(3869)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3869), inst: 1701 })}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3870), inst: 98 })
// CS Name: ::System.Collections.Generic::GenericEqualityComparer`1<T>*
class CORDL_TYPE GenericEqualityComparer_1<int32_t> : public ::System::Collections::Generic::EqualityComparer_1<int32_t> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Collections::Generic::EqualityComparer_1<int32_t>)]{};

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(int32_t  x, int32_t  y) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode(int32_t  obj) ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t IndexOf(::ArrayW<int32_t,::Array<int32_t>*>  array, int32_t  value, int32_t  startIndex, int32_t  count) ;

/// @brief Method LastIndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t LastIndexOf(::ArrayW<int32_t,::Array<int32_t>*>  array, int32_t  value, int32_t  startIndex, int32_t  count) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

static inline ::System::Collections::Generic::GenericEqualityComparer_1<int32_t>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GenericEqualityComparer_1(GenericEqualityComparer_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GenericEqualityComparer_1(GenericEqualityComparer_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 GenericEqualityComparer_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::GenericEqualityComparer`1
namespace System::Collections::Generic {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3869)), TypeDefinitionIndex(TypeDefinitionIndex(3870)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3869), inst: 1701 })}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3870), inst: 2 })
// CS Name: ::System.Collections.Generic::GenericEqualityComparer`1<T>*
class CORDL_TYPE GenericEqualityComparer_1<T> : public ::System::Collections::Generic::EqualityComparer_1<T> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Collections::Generic::EqualityComparer_1<T>)]{};

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(T  x, T  y) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode(T  obj) ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t IndexOf(::ArrayW<T,::Array<T>*>  array, T  value, int32_t  startIndex, int32_t  count) ;

/// @brief Method LastIndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t LastIndexOf(::ArrayW<T,::Array<T>*>  array, T  value, int32_t  startIndex, int32_t  count) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

static inline ::System::Collections::Generic::GenericEqualityComparer_1<T>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GenericEqualityComparer_1(GenericEqualityComparer_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GenericEqualityComparer_1(GenericEqualityComparer_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 GenericEqualityComparer_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Collections::Generic::GenericEqualityComparer_1, "System.Collections.Generic", "GenericEqualityComparer`1");
