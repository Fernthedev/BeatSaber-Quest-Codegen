#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(SerializationObjectManager)
namespace System {
class Object;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Runtime::Serialization {
class SerializationEventHandler;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
// Forward declare root types
namespace System::Runtime::Serialization {
class SerializationObjectManager;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::SerializationObjectManager);
// Type: System.Runtime.Serialization::SerializationObjectManager
namespace System::Runtime::Serialization {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3210))
// CS Name: ::System.Runtime.Serialization::SerializationObjectManager*
class CORDL_TYPE SerializationObjectManager : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::System::Object)]{};

/// @brief Field _objectSeenTable offset 0x10
 __declspec(property(get=__get__objectSeenTable, put=__set__objectSeenTable)) ::System::Collections::Generic::Dictionary_2<::System::Object*,::System::Object*>*  _objectSeenTable;

/// @brief Field _context offset 0x18
 __declspec(property(get=__get__context, put=__set__context)) ::System::Runtime::Serialization::StreamingContext  _context;

/// @brief Field _onSerializedHandler offset 0x28
 __declspec(property(get=__get__onSerializedHandler, put=__set__onSerializedHandler)) ::System::Runtime::Serialization::SerializationEventHandler*  _onSerializedHandler;

constexpr void __set__objectSeenTable(::System::Collections::Generic::Dictionary_2<::System::Object*,::System::Object*>*  value) ;

constexpr ::System::Collections::Generic::Dictionary_2<::System::Object*,::System::Object*>* __get__objectSeenTable() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::System::Object*,::System::Object*>*> __get__objectSeenTable() const;

constexpr void __set__context(::System::Runtime::Serialization::StreamingContext  value) ;

constexpr ::System::Runtime::Serialization::StreamingContext& __get__context() ;

constexpr ::System::Runtime::Serialization::StreamingContext const& __get__context() const;

constexpr void __set__onSerializedHandler(::System::Runtime::Serialization::SerializationEventHandler*  value) ;

constexpr ::System::Runtime::Serialization::SerializationEventHandler* __get__onSerializedHandler() ;

constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::SerializationEventHandler*> __get__onSerializedHandler() const;

static inline ::System::Runtime::Serialization::SerializationObjectManager* New_ctor(::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method .ctor addr 0x24b5950 size 0x94 virtual false final false
inline void _ctor(::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method RegisterObject addr 0x24b59e4 size 0x110 virtual false final false
inline void RegisterObject(::System::Object*  obj) ;

/// @brief Method RaiseOnSerializedEvent addr 0x24b5b84 size 0x20 virtual false final false
inline void RaiseOnSerializedEvent() ;

/// @brief Method AddOnSerialized addr 0x24b5af4 size 0x90 virtual false final false
inline void AddOnSerialized(::System::Object*  obj) ;

// Ctor Parameters [CppParam { name: "", ty: "SerializationObjectManager", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SerializationObjectManager(SerializationObjectManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SerializationObjectManager", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SerializationObjectManager(SerializationObjectManager const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 SerializationObjectManager()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::SerializationObjectManager, 0x30>, "Size mismatch!");

} // namespace end def System::Runtime::Serialization
NEED_NO_BOX(::System::Runtime::Serialization::SerializationObjectManager);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::SerializationObjectManager*, "System.Runtime.Serialization", "SerializationObjectManager");
