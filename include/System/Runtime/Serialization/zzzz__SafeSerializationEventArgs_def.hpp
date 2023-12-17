#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__EventArgs_def.hpp"
CORDL_MODULE_EXPORT(SafeSerializationEventArgs)
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace System {
class Object;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace System::Runtime::Serialization {
class SafeSerializationEventArgs;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::SafeSerializationEventArgs);
// Type: System.Runtime.Serialization::SafeSerializationEventArgs
namespace System::Runtime::Serialization {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2376))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3225))
// CS Name: ::System.Runtime.Serialization::SafeSerializationEventArgs*
class CORDL_TYPE SafeSerializationEventArgs : public ::System::EventArgs {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::EventArgs)]{};

/// @brief Field m_streamingContext offset 0x10
 __declspec(property(get=__get_m_streamingContext, put=__set_m_streamingContext)) ::System::Runtime::Serialization::StreamingContext  m_streamingContext;

/// @brief Field m_serializedStates offset 0x20
 __declspec(property(get=__get_m_serializedStates, put=__set_m_serializedStates)) ::System::Collections::Generic::List_1<::System::Object*>*  m_serializedStates;

 __declspec(property(get=get_SerializedStates)) ::System::Collections::Generic::IList_1<::System::Object*>*  SerializedStates;

constexpr void __set_m_streamingContext(::System::Runtime::Serialization::StreamingContext  value) ;

constexpr ::System::Runtime::Serialization::StreamingContext& __get_m_streamingContext() ;

constexpr ::System::Runtime::Serialization::StreamingContext const& __get_m_streamingContext() const;

constexpr void __set_m_serializedStates(::System::Collections::Generic::List_1<::System::Object*>*  value) ;

constexpr ::System::Collections::Generic::List_1<::System::Object*>* __get_m_serializedStates() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::System::Object*>*> __get_m_serializedStates() const;

static inline ::System::Runtime::Serialization::SafeSerializationEventArgs* New_ctor(::System::Runtime::Serialization::StreamingContext  streamingContext) ;

/// @brief Method .ctor addr 0x24bcd94 size 0xb8 virtual false final false
inline void _ctor(::System::Runtime::Serialization::StreamingContext  streamingContext) ;

/// @brief Method get_SerializedStates addr 0x24bce4c size 0x8 virtual false final false
inline ::System::Collections::Generic::IList_1<::System::Object*>* get_SerializedStates() ;

// Ctor Parameters [CppParam { name: "", ty: "SafeSerializationEventArgs", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SafeSerializationEventArgs(SafeSerializationEventArgs && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SafeSerializationEventArgs", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SafeSerializationEventArgs(SafeSerializationEventArgs const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 SafeSerializationEventArgs()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::SafeSerializationEventArgs, 0x28>, "Size mismatch!");

} // namespace end def System::Runtime::Serialization
NEED_NO_BOX(::System::Runtime::Serialization::SafeSerializationEventArgs);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::SafeSerializationEventArgs*, "System.Runtime.Serialization", "SafeSerializationEventArgs");
