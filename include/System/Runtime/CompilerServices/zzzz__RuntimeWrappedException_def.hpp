#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Exception_def.hpp"
CORDL_MODULE_EXPORT(RuntimeWrappedException)
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Runtime::CompilerServices {
class RuntimeWrappedException;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::CompilerServices::RuntimeWrappedException);
// Type: System.Runtime.CompilerServices::RuntimeWrappedException
namespace System::Runtime::CompilerServices {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2561))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3383))
// CS Name: ::System.Runtime.CompilerServices::RuntimeWrappedException*
class CORDL_TYPE RuntimeWrappedException : public ::System::Exception {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x98};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x98 - sizeof(::System::Exception)]{};

/// @brief Field _wrappedException offset 0x90
 __declspec(property(get=__get__wrappedException, put=__set__wrappedException)) ::System::Object*  _wrappedException;

constexpr void __set__wrappedException(::System::Object*  value) ;

constexpr ::System::Object* __get__wrappedException() ;

constexpr ::cordl_internals::to_const_pointer<::System::Object*> __get__wrappedException() const;

static inline ::System::Runtime::CompilerServices::RuntimeWrappedException* New_ctor(::System::Object*  thrownObject) ;

/// @brief Method .ctor addr 0x24db25c size 0x90 virtual false final false
inline void _ctor(::System::Object*  thrownObject) ;

static inline ::System::Runtime::CompilerServices::RuntimeWrappedException* New_ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method .ctor addr 0x24db2ec size 0x100 virtual false final false
inline void _ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method GetObjectData addr 0x24db3ec size 0xdc virtual true final false
inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

static inline ::System::Runtime::CompilerServices::RuntimeWrappedException* New_ctor() ;

/// @brief Method .ctor addr 0x24db4c8 size 0x38 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "RuntimeWrappedException", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RuntimeWrappedException(RuntimeWrappedException && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RuntimeWrappedException", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RuntimeWrappedException(RuntimeWrappedException const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 RuntimeWrappedException()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::CompilerServices::RuntimeWrappedException, 0x98>, "Size mismatch!");

} // namespace end def System::Runtime::CompilerServices
NEED_NO_BOX(::System::Runtime::CompilerServices::RuntimeWrappedException);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::CompilerServices::RuntimeWrappedException*, "System.Runtime.CompilerServices", "RuntimeWrappedException");
