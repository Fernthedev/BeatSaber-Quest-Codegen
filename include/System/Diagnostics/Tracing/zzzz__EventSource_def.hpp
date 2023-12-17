#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EventSource)
namespace System {
class Object;
}
namespace System {
class IDisposable;
}
namespace System::Diagnostics::Tracing {
struct __EventSource__EventData;
}
namespace System {
struct Guid;
}
namespace System::Diagnostics::Tracing {
struct EventLevel;
}
namespace System::Diagnostics::Tracing {
struct EventKeywords;
}
// Forward declare root types
namespace System::Diagnostics::Tracing {
class EventSource;
}
namespace System::Diagnostics::Tracing {
struct __EventSource__EventData;
}
// Write type traits
MARK_REF_PTR_T(::System::Diagnostics::Tracing::EventSource);
MARK_VAL_T(::System::Diagnostics::Tracing::__EventSource__EventData);
// Type: ::EventData
namespace System::Diagnostics::Tracing {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3746))
// CS Name: ::EventSource::EventData
struct CORDL_TYPE __EventSource__EventData : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field <DataPointer>k__BackingField offset 0x0
 __declspec(property(get=__get__DataPointer_k__BackingField, put=__set__DataPointer_k__BackingField)) ::cordl_internals::intptr_t  _DataPointer_k__BackingField;

/// @brief Field <Size>k__BackingField offset 0x8
 __declspec(property(get=__get__Size_k__BackingField, put=__set__Size_k__BackingField)) int32_t  _Size_k__BackingField;

/// @brief Field <Reserved>k__BackingField offset 0xc
 __declspec(property(get=__get__Reserved_k__BackingField, put=__set__Reserved_k__BackingField)) int32_t  _Reserved_k__BackingField;

 __declspec(property(put=set_DataPointer)) ::cordl_internals::intptr_t  DataPointer;

 __declspec(property(put=set_Size)) int32_t  Size;

 __declspec(property(put=set_Reserved)) int32_t  Reserved;

constexpr void __set__DataPointer_k__BackingField(::cordl_internals::intptr_t  value) ;

constexpr ::cordl_internals::intptr_t& __get__DataPointer_k__BackingField() ;

constexpr ::cordl_internals::intptr_t const& __get__DataPointer_k__BackingField() const;

constexpr void __set__Size_k__BackingField(int32_t  value) ;

constexpr int32_t& __get__Size_k__BackingField() ;

constexpr int32_t const& __get__Size_k__BackingField() const;

constexpr void __set__Reserved_k__BackingField(int32_t  value) ;

constexpr int32_t& __get__Reserved_k__BackingField() ;

constexpr int32_t const& __get__Reserved_k__BackingField() const;

/// @brief Method set_DataPointer addr 0x257bf04 size 0x8 virtual false final false
inline void set_DataPointer(::cordl_internals::intptr_t  value) ;

/// @brief Method set_Size addr 0x257bf0c size 0x8 virtual false final false
inline void set_Size(int32_t  value) ;

/// @brief Method set_Reserved addr 0x257bf14 size 0x8 virtual false final false
inline void set_Reserved(int32_t  value) ;

// Ctor Parameters [CppParam { name: "_DataPointer_k__BackingField", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }, CppParam { name: "_Size_k__BackingField", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_Reserved_k__BackingField", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __EventSource__EventData(::cordl_internals::intptr_t  _DataPointer_k__BackingField, int32_t  _Size_k__BackingField, int32_t  _Reserved_k__BackingField) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __EventSource__EventData(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __EventSource__EventData()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Diagnostics::Tracing::__EventSource__EventData, 0x10>, "Size mismatch!");

} // namespace end def System::Diagnostics::Tracing
// Type: System.Diagnostics.Tracing::EventSource
namespace System::Diagnostics::Tracing {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3747))
// CS Name: ::System.Diagnostics.Tracing::EventSource*
class CORDL_TYPE EventSource : public ::System::Object {
public:
// Declarations
using EventData = ::System::Diagnostics::Tracing::__EventSource__EventData;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field <Name>k__BackingField offset 0x10
 __declspec(property(get=__get__Name_k__BackingField, put=__set__Name_k__BackingField)) ::StringW  _Name_k__BackingField;

 __declspec(property(put=set_Name)) ::StringW  Name;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

constexpr void __set__Name_k__BackingField(::StringW  value) ;

constexpr ::StringW& __get__Name_k__BackingField() ;

constexpr ::StringW const& __get__Name_k__BackingField() const;

static inline ::System::Diagnostics::Tracing::EventSource* New_ctor() ;

/// @brief Method .ctor addr 0x257b90c size 0x3c virtual false final false
inline void _ctor() ;

static inline ::System::Diagnostics::Tracing::EventSource* New_ctor(::StringW  eventSourceName) ;

/// @brief Method .ctor addr 0x257b948 size 0x28 virtual false final false
inline void _ctor(::StringW  eventSourceName) ;

static inline ::System::Diagnostics::Tracing::EventSource* New_ctor(::System::Guid  eventSourceGuid, ::StringW  eventSourceName) ;

/// @brief Method .ctor addr 0x257b970 size 0x28 virtual false final false
inline void _ctor(::System::Guid  eventSourceGuid, ::StringW  eventSourceName) ;

/// @brief Method Finalize addr 0x257b998 size 0xa0 virtual true final false
inline void Finalize() ;

/// @brief Method set_Name addr 0x257ba38 size 0x8 virtual false final false
inline void set_Name(::StringW  value) ;

/// @brief Method IsEnabled addr 0x257ba40 size 0x8 virtual false final false
inline bool IsEnabled() ;

/// @brief Method IsEnabled addr 0x257ba48 size 0x8 virtual false final false
inline bool IsEnabled(::System::Diagnostics::Tracing::EventLevel  level, ::System::Diagnostics::Tracing::EventKeywords  keywords) ;

/// @brief Method Dispose addr 0x257ba50 size 0x6c virtual true final true
inline void Dispose() ;

/// @brief Method Dispose addr 0x257babc size 0x4 virtual true final false
inline void Dispose(bool  disposing) ;

/// @brief Method WriteEvent addr 0x257bac0 size 0x44 virtual false final false
inline void WriteEvent(int32_t  eventId) ;

/// @brief Method WriteEvent addr 0x257bb08 size 0xbc virtual false final false
inline void WriteEvent(int32_t  eventId, int32_t  arg1) ;

/// @brief Method WriteEvent addr 0x257bbc4 size 0x104 virtual false final false
inline void WriteEvent(int32_t  eventId, int32_t  arg1, int32_t  arg2) ;

/// @brief Method WriteEvent addr 0x257bcc8 size 0x14c virtual false final false
inline void WriteEvent(int32_t  eventId, int32_t  arg1, int32_t  arg2, int32_t  arg3) ;

/// @brief Method WriteEvent addr 0x257bb04 size 0x4 virtual false final false
inline void WriteEvent(int32_t  eventId, ::ArrayW<::System::Object*,::Array<::System::Object*>*>  args) ;

/// @brief Method WriteEvent addr 0x257be14 size 0xec virtual false final false
inline void WriteEvent(int32_t  eventId, ::StringW  arg1, ::StringW  arg2, ::StringW  arg3) ;

/// @brief Method WriteEventCore addr 0x257bf00 size 0x4 virtual false final false
inline void WriteEventCore(int32_t  eventId, int32_t  eventDataCount, ::cordl_internals::Ptr<::System::Diagnostics::Tracing::__EventSource__EventData>  data) ;

// Ctor Parameters [CppParam { name: "", ty: "EventSource", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EventSource(EventSource && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EventSource", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EventSource(EventSource const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 EventSource()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Diagnostics::Tracing::EventSource, 0x18>, "Size mismatch!");

} // namespace end def System::Diagnostics::Tracing
NEED_NO_BOX(::System::Diagnostics::Tracing::EventSource);
DEFINE_IL2CPP_ARG_TYPE(::System::Diagnostics::Tracing::EventSource*, "System.Diagnostics.Tracing", "EventSource");
DEFINE_IL2CPP_ARG_TYPE(::System::Diagnostics::Tracing::__EventSource__EventData, "System.Diagnostics.Tracing", "EventSource/EventData");
