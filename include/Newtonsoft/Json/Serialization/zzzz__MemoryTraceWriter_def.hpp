#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(MemoryTraceWriter)
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Diagnostics {
struct TraceLevel;
}
namespace System::Collections::Generic {
template<typename T>
class Queue_1;
}
namespace System {
class Exception;
}
namespace Newtonsoft::Json::Serialization {
class ITraceWriter;
}
// Forward declare root types
namespace Newtonsoft::Json::Serialization {
class MemoryTraceWriter;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Serialization::MemoryTraceWriter);
// Type: Newtonsoft.Json.Serialization::MemoryTraceWriter
namespace Newtonsoft::Json::Serialization {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11908))
// CS Name: ::Newtonsoft.Json.Serialization::MemoryTraceWriter*
class CORDL_TYPE MemoryTraceWriter : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field _traceMessages offset 0x10
 __declspec(property(get=__get__traceMessages, put=__set__traceMessages)) ::System::Collections::Generic::Queue_1<::StringW>*  _traceMessages;

/// @brief Field <LevelFilter>k__BackingField offset 0x18
 __declspec(property(get=__get__LevelFilter_k__BackingField, put=__set__LevelFilter_k__BackingField)) ::System::Diagnostics::TraceLevel  _LevelFilter_k__BackingField;

 __declspec(property(get=get_LevelFilter, put=set_LevelFilter)) ::System::Diagnostics::TraceLevel  LevelFilter;

/// @brief Convert operator to "::Newtonsoft::Json::Serialization::ITraceWriter"
constexpr operator  ::Newtonsoft::Json::Serialization::ITraceWriter*() noexcept;

constexpr void __set__traceMessages(::System::Collections::Generic::Queue_1<::StringW>*  value) ;

constexpr ::System::Collections::Generic::Queue_1<::StringW>* __get__traceMessages() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Queue_1<::StringW>*> __get__traceMessages() const;

constexpr void __set__LevelFilter_k__BackingField(::System::Diagnostics::TraceLevel  value) ;

constexpr ::System::Diagnostics::TraceLevel& __get__LevelFilter_k__BackingField() ;

constexpr ::System::Diagnostics::TraceLevel const& __get__LevelFilter_k__BackingField() const;

/// @brief Method get_LevelFilter addr 0x266a9cc size 0x8 virtual true final true
inline ::System::Diagnostics::TraceLevel get_LevelFilter() ;

/// @brief Method set_LevelFilter addr 0x266a9d4 size 0x8 virtual false final false
inline void set_LevelFilter(::System::Diagnostics::TraceLevel  value) ;

static inline ::Newtonsoft::Json::Serialization::MemoryTraceWriter* New_ctor() ;

/// @brief Method .ctor addr 0x266a9dc size 0x88 virtual false final false
inline void _ctor() ;

/// @brief Method Trace addr 0x266aa64 size 0x230 virtual true final true
inline void Trace(::System::Diagnostics::TraceLevel  level, ::StringW  message, ::System::Exception*  ex) ;

/// @brief Method GetTraceMessages addr 0x266ac94 size 0x8 virtual false final false
inline ::System::Collections::Generic::IEnumerable_1<::StringW>* GetTraceMessages() ;

/// @brief Method ToString addr 0x266ac9c size 0x1b8 virtual true final false
inline ::StringW ToString() ;

// Ctor Parameters [CppParam { name: "", ty: "MemoryTraceWriter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MemoryTraceWriter(MemoryTraceWriter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MemoryTraceWriter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MemoryTraceWriter(MemoryTraceWriter const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MemoryTraceWriter()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Serialization::MemoryTraceWriter, 0x20>, "Size mismatch!");

} // namespace end def Newtonsoft::Json::Serialization
NEED_NO_BOX(::Newtonsoft::Json::Serialization::MemoryTraceWriter);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Serialization::MemoryTraceWriter*, "Newtonsoft.Json.Serialization", "MemoryTraceWriter");
