#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(DiagnosticsTraceWriter)
namespace System::Diagnostics {
struct TraceEventType;
}
namespace Newtonsoft::Json::Serialization {
class ITraceWriter;
}
namespace System::Diagnostics {
struct TraceLevel;
}
namespace System {
class Exception;
}
// Forward declare root types
namespace Newtonsoft::Json::Serialization {
class DiagnosticsTraceWriter;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Serialization::DiagnosticsTraceWriter);
// Type: Newtonsoft.Json.Serialization::DiagnosticsTraceWriter
namespace Newtonsoft::Json::Serialization {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11904))
// CS Name: ::Newtonsoft.Json.Serialization::DiagnosticsTraceWriter*
class CORDL_TYPE DiagnosticsTraceWriter : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field <LevelFilter>k__BackingField offset 0x10
 __declspec(property(get=__get__LevelFilter_k__BackingField, put=__set__LevelFilter_k__BackingField)) ::System::Diagnostics::TraceLevel  _LevelFilter_k__BackingField;

 __declspec(property(get=get_LevelFilter, put=set_LevelFilter)) ::System::Diagnostics::TraceLevel  LevelFilter;

/// @brief Convert operator to "::Newtonsoft::Json::Serialization::ITraceWriter"
constexpr operator  ::Newtonsoft::Json::Serialization::ITraceWriter*() noexcept;

constexpr void __set__LevelFilter_k__BackingField(::System::Diagnostics::TraceLevel  value) ;

constexpr ::System::Diagnostics::TraceLevel& __get__LevelFilter_k__BackingField() ;

constexpr ::System::Diagnostics::TraceLevel const& __get__LevelFilter_k__BackingField() const;

/// @brief Method get_LevelFilter addr 0x266a364 size 0x8 virtual true final true
inline ::System::Diagnostics::TraceLevel get_LevelFilter() ;

/// @brief Method set_LevelFilter addr 0x266a36c size 0x8 virtual false final false
inline void set_LevelFilter(::System::Diagnostics::TraceLevel  value) ;

/// @brief Method GetTraceEventType addr 0x266a374 size 0x70 virtual false final false
inline ::System::Diagnostics::TraceEventType GetTraceEventType(::System::Diagnostics::TraceLevel  level) ;

/// @brief Method Trace addr 0x266a3e4 size 0x470 virtual true final true
inline void Trace(::System::Diagnostics::TraceLevel  level, ::StringW  message, ::System::Exception*  ex) ;

static inline ::Newtonsoft::Json::Serialization::DiagnosticsTraceWriter* New_ctor() ;

/// @brief Method .ctor addr 0x266a854 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "DiagnosticsTraceWriter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DiagnosticsTraceWriter(DiagnosticsTraceWriter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DiagnosticsTraceWriter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DiagnosticsTraceWriter(DiagnosticsTraceWriter const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 DiagnosticsTraceWriter()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Serialization::DiagnosticsTraceWriter, 0x18>, "Size mismatch!");

} // namespace end def Newtonsoft::Json::Serialization
NEED_NO_BOX(::Newtonsoft::Json::Serialization::DiagnosticsTraceWriter);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Serialization::DiagnosticsTraceWriter*, "Newtonsoft.Json.Serialization", "DiagnosticsTraceWriter");
