#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRTelemetry)
namespace GlobalNamespace {
class __OVRTelemetry__QPLTelemetryClient;
}
namespace GlobalNamespace {
struct __OVRPlugin__Qpl__ResultType;
}
namespace GlobalNamespace {
class __OVRTelemetry__TelemetryClient;
}
namespace GlobalNamespace {
struct OVRTelemetryMarker;
}
namespace GlobalNamespace {
struct __OVRTelemetry__MarkerPoint;
}
namespace GlobalNamespace {
class __OVRTelemetry__NullTelemetryClient;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRTelemetry;
}
namespace GlobalNamespace {
class __OVRTelemetry__NullTelemetryClient;
}
namespace GlobalNamespace {
class __OVRTelemetry__QPLTelemetryClient;
}
namespace GlobalNamespace {
class __OVRTelemetry__TelemetryClient;
}
namespace GlobalNamespace {
struct __OVRTelemetry__MarkerPoint;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OVRTelemetry);
MARK_REF_PTR_T(::GlobalNamespace::__OVRTelemetry__NullTelemetryClient);
MARK_REF_PTR_T(::GlobalNamespace::__OVRTelemetry__QPLTelemetryClient);
MARK_REF_PTR_T(::GlobalNamespace::__OVRTelemetry__TelemetryClient);
MARK_VAL_T(::GlobalNamespace::__OVRTelemetry__MarkerPoint);
// Type: ::MarkerPoint
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8007))
// CS Name: ::OVRTelemetry::MarkerPoint
struct CORDL_TYPE __OVRTelemetry__MarkerPoint : public ::bs_hook::ValueTypeWrapper<0x4> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field <NameHandle>k__BackingField offset 0x0
 __declspec(property(get=__get__NameHandle_k__BackingField, put=__set__NameHandle_k__BackingField)) int32_t  _NameHandle_k__BackingField;

 __declspec(property(get=get_NameHandle)) int32_t  NameHandle;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

constexpr void __set__NameHandle_k__BackingField(int32_t  value) ;

constexpr int32_t& __get__NameHandle_k__BackingField() ;

constexpr int32_t const& __get__NameHandle_k__BackingField() const;

/// @brief Method get_NameHandle addr 0x27933ac size 0x8 virtual false final false
inline int32_t get_NameHandle() ;

/// @brief Method .ctor addr 0x27933b4 size 0x88 virtual false final false
inline void _ctor(::StringW  name) ;

/// @brief Method Dispose addr 0x279343c size 0x68 virtual true final true
inline void Dispose() ;

// Ctor Parameters [CppParam { name: "_NameHandle_k__BackingField", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __OVRTelemetry__MarkerPoint(int32_t  _NameHandle_k__BackingField) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __OVRTelemetry__MarkerPoint(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __OVRTelemetry__MarkerPoint()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRTelemetry__MarkerPoint, 0x4>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::TelemetryClient
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8008))
// CS Name: ::OVRTelemetry::TelemetryClient*
class CORDL_TYPE __OVRTelemetry__TelemetryClient : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Method MarkerStart addr 0x0 size 0xffffffffffffffff virtual true final false
inline void MarkerStart(int32_t  markerId, int32_t  instanceKey, int64_t  timestampMs) ;

/// @brief Method MarkerPointCached addr 0x0 size 0xffffffffffffffff virtual true final false
inline void MarkerPointCached(int32_t  markerId, int32_t  nameHandle, int32_t  instanceKey, int64_t  timestampMs) ;

/// @brief Method MarkerAnnotation addr 0x0 size 0xffffffffffffffff virtual true final false
inline void MarkerAnnotation(int32_t  markerId, ::StringW  annotationKey, ::StringW  annotationValue, int32_t  instanceKey) ;

/// @brief Method MarkerEnd addr 0x0 size 0xffffffffffffffff virtual true final false
inline void MarkerEnd(int32_t  markerId, ::GlobalNamespace::__OVRPlugin__Qpl__ResultType  resultTypeId, int32_t  instanceKey, int64_t  timestampMs) ;

/// @brief Method CreateMarkerHandle addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool CreateMarkerHandle(::StringW  name, ByRef<int32_t>  nameHandle) ;

/// @brief Method DestroyMarkerHandle addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool DestroyMarkerHandle(int32_t  nameHandle) ;

static inline ::GlobalNamespace::__OVRTelemetry__TelemetryClient* New_ctor() ;

/// @brief Method .ctor addr 0x27934a4 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__OVRTelemetry__TelemetryClient", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__OVRTelemetry__TelemetryClient(__OVRTelemetry__TelemetryClient && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__OVRTelemetry__TelemetryClient", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__OVRTelemetry__TelemetryClient(__OVRTelemetry__TelemetryClient const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __OVRTelemetry__TelemetryClient()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRTelemetry__TelemetryClient, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::NullTelemetryClient
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8008))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8009))
// CS Name: ::OVRTelemetry::NullTelemetryClient*
class CORDL_TYPE __OVRTelemetry__NullTelemetryClient : public ::GlobalNamespace::__OVRTelemetry__TelemetryClient {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::GlobalNamespace::__OVRTelemetry__TelemetryClient)]{};

/// @brief Method MarkerStart addr 0x27934ac size 0x4 virtual true final false
inline void MarkerStart(int32_t  markerId, int32_t  instanceKey, int64_t  timestampMs) ;

/// @brief Method MarkerPointCached addr 0x27934b0 size 0x4 virtual true final false
inline void MarkerPointCached(int32_t  markerId, int32_t  nameHandle, int32_t  instanceKey, int64_t  timestampMs) ;

/// @brief Method MarkerAnnotation addr 0x27934b4 size 0x4 virtual true final false
inline void MarkerAnnotation(int32_t  markerId, ::StringW  annotationKey, ::StringW  annotationValue, int32_t  instanceKey) ;

/// @brief Method MarkerEnd addr 0x27934b8 size 0x4 virtual true final false
inline void MarkerEnd(int32_t  markerId, ::GlobalNamespace::__OVRPlugin__Qpl__ResultType  resultTypeId, int32_t  instanceKey, int64_t  timestampMs) ;

/// @brief Method CreateMarkerHandle addr 0x27934bc size 0xc virtual true final false
inline bool CreateMarkerHandle(::StringW  name, ByRef<int32_t>  nameHandle) ;

/// @brief Method DestroyMarkerHandle addr 0x27934c8 size 0x8 virtual true final false
inline bool DestroyMarkerHandle(int32_t  nameHandle) ;

static inline ::GlobalNamespace::__OVRTelemetry__NullTelemetryClient* New_ctor() ;

/// @brief Method .ctor addr 0x279339c size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__OVRTelemetry__NullTelemetryClient", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__OVRTelemetry__NullTelemetryClient(__OVRTelemetry__NullTelemetryClient && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__OVRTelemetry__NullTelemetryClient", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__OVRTelemetry__NullTelemetryClient(__OVRTelemetry__NullTelemetryClient const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __OVRTelemetry__NullTelemetryClient()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRTelemetry__NullTelemetryClient, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::QPLTelemetryClient
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8008))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8010))
// CS Name: ::OVRTelemetry::QPLTelemetryClient*
class CORDL_TYPE __OVRTelemetry__QPLTelemetryClient : public ::GlobalNamespace::__OVRTelemetry__TelemetryClient {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::GlobalNamespace::__OVRTelemetry__TelemetryClient)]{};

/// @brief Method MarkerStart addr 0x27934d0 size 0x14 virtual true final false
inline void MarkerStart(int32_t  markerId, int32_t  instanceKey, int64_t  timestampMs) ;

/// @brief Method MarkerPointCached addr 0x27934e4 size 0x18 virtual true final false
inline void MarkerPointCached(int32_t  markerId, int32_t  nameHandle, int32_t  instanceKey, int64_t  timestampMs) ;

/// @brief Method MarkerAnnotation addr 0x27934fc size 0x18 virtual true final false
inline void MarkerAnnotation(int32_t  markerId, ::StringW  annotationKey, ::StringW  annotationValue, int32_t  instanceKey) ;

/// @brief Method MarkerEnd addr 0x2793514 size 0x18 virtual true final false
inline void MarkerEnd(int32_t  markerId, ::GlobalNamespace::__OVRPlugin__Qpl__ResultType  resultTypeId, int32_t  instanceKey, int64_t  timestampMs) ;

/// @brief Method CreateMarkerHandle addr 0x279352c size 0x10 virtual true final false
inline bool CreateMarkerHandle(::StringW  name, ByRef<int32_t>  nameHandle) ;

/// @brief Method DestroyMarkerHandle addr 0x279353c size 0xc virtual true final false
inline bool DestroyMarkerHandle(int32_t  nameHandle) ;

static inline ::GlobalNamespace::__OVRTelemetry__QPLTelemetryClient* New_ctor() ;

/// @brief Method .ctor addr 0x27933a4 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__OVRTelemetry__QPLTelemetryClient", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__OVRTelemetry__QPLTelemetryClient(__OVRTelemetry__QPLTelemetryClient && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__OVRTelemetry__QPLTelemetryClient", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__OVRTelemetry__QPLTelemetryClient(__OVRTelemetry__QPLTelemetryClient const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __OVRTelemetry__QPLTelemetryClient()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRTelemetry__QPLTelemetryClient, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::OVRTelemetry
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8011))
// CS Name: ::OVRTelemetry*
class CORDL_TYPE OVRTelemetry : public ::System::Object {
public:
// Declarations
using QPLTelemetryClient = ::GlobalNamespace::__OVRTelemetry__QPLTelemetryClient;

using NullTelemetryClient = ::GlobalNamespace::__OVRTelemetry__NullTelemetryClient;

using TelemetryClient = ::GlobalNamespace::__OVRTelemetry__TelemetryClient;

using MarkerPoint = ::GlobalNamespace::__OVRTelemetry__MarkerPoint;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF_InactiveClient(::GlobalNamespace::__OVRTelemetry__TelemetryClient*  value) ;

static inline ::GlobalNamespace::__OVRTelemetry__TelemetryClient* getStaticF_InactiveClient() ;

static inline void setStaticF_ActiveClient(::GlobalNamespace::__OVRTelemetry__TelemetryClient*  value) ;

static inline ::GlobalNamespace::__OVRTelemetry__TelemetryClient* getStaticF_ActiveClient() ;

static inline void setStaticF__sdkVersionString(::StringW  value) ;

static inline ::StringW getStaticF__sdkVersionString() ;

/// @brief Method get_IsActive addr 0x2792ed4 size 0x20 virtual false final false
static inline bool get_IsActive() ;

/// @brief Method get_Client addr 0x2792ef4 size 0x80 virtual false final false
static inline ::GlobalNamespace::__OVRTelemetry__TelemetryClient* get_Client() ;

/// @brief Method Start addr 0x2792f74 size 0x1c virtual false final false
static inline ::GlobalNamespace::OVRTelemetryMarker Start(int32_t  markerId, int32_t  instanceKey, int64_t  timestampMs) ;

/// @brief Method SendEvent addr 0x279302c size 0xb8 virtual false final false
static inline void SendEvent(int32_t  markerId, ::GlobalNamespace::__OVRPlugin__Qpl__ResultType  result) ;

/// @brief Method AddSDKVersionAnnotation addr 0x2793168 size 0x134 virtual false final false
static inline ::GlobalNamespace::OVRTelemetryMarker AddSDKVersionAnnotation(::GlobalNamespace::OVRTelemetryMarker  marker) ;

// Ctor Parameters [CppParam { name: "", ty: "OVRTelemetry", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRTelemetry(OVRTelemetry && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRTelemetry", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRTelemetry(OVRTelemetry const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 OVRTelemetry()  = default;
public:


// Fields

// Static field InactiveClient

// Static field ActiveClient

// Static field _sdkVersionString


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRTelemetry, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVRTelemetry);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRTelemetry*, "", "OVRTelemetry");
NEED_NO_BOX(::GlobalNamespace::__OVRTelemetry__NullTelemetryClient);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRTelemetry__NullTelemetryClient*, "", "OVRTelemetry/NullTelemetryClient");
NEED_NO_BOX(::GlobalNamespace::__OVRTelemetry__QPLTelemetryClient);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRTelemetry__QPLTelemetryClient*, "", "OVRTelemetry/QPLTelemetryClient");
NEED_NO_BOX(::GlobalNamespace::__OVRTelemetry__TelemetryClient);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRTelemetry__TelemetryClient*, "", "OVRTelemetry/TelemetryClient");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRTelemetry__MarkerPoint, "", "OVRTelemetry/MarkerPoint");
