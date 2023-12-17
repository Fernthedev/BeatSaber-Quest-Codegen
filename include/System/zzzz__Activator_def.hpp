#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(Activator)
namespace System::Reflection {
class Binder;
}
namespace System {
class Type;
}
namespace System {
class Object;
}
namespace System::Globalization {
class CultureInfo;
}
namespace System::Reflection {
struct BindingFlags;
}
// Forward declare root types
namespace System {
class Activator;
}
// Write type traits
MARK_REF_PTR_T(::System::Activator);
// Type: System::Activator
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2546))
// CS Name: ::System::Activator*
class CORDL_TYPE Activator : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Method CreateInstance addr 0x25d8dd4 size 0x8 virtual false final false
static inline ::System::Object* CreateInstance(::System::Type*  type, ::System::Reflection::BindingFlags  bindingAttr, ::System::Reflection::Binder*  binder, ::ArrayW<::System::Object*,::Array<::System::Object*>*>  args, ::System::Globalization::CultureInfo*  culture) ;

/// @brief Method CreateInstance addr 0x25d8ddc size 0x204 virtual false final false
static inline ::System::Object* CreateInstance(::System::Type*  type, ::System::Reflection::BindingFlags  bindingAttr, ::System::Reflection::Binder*  binder, ::ArrayW<::System::Object*,::Array<::System::Object*>*>  args, ::System::Globalization::CultureInfo*  culture, ::ArrayW<::System::Object*,::Array<::System::Object*>*>  activationAttributes) ;

/// @brief Method CreateInstance addr 0x25d9978 size 0x18 virtual false final false
static inline ::System::Object* CreateInstance(::System::Type*  type, ::ArrayW<::System::Object*,::Array<::System::Object*>*>  args) ;

/// @brief Method CreateInstance addr 0x25d9990 size 0x18 virtual false final false
static inline ::System::Object* CreateInstance(::System::Type*  type, ::ArrayW<::System::Object*,::Array<::System::Object*>*>  args, ::ArrayW<::System::Object*,::Array<::System::Object*>*>  activationAttributes) ;

/// @brief Method CreateInstance addr 0x25d99a8 size 0xc virtual false final false
static inline ::System::Object* CreateInstance(::System::Type*  type) ;

/// @brief Method CreateInstance addr 0x25d99b4 size 0xc virtual false final false
static inline ::System::Object* CreateInstance(::System::Type*  type, bool  nonPublic) ;

/// @brief Method CreateInstance addr 0x25d99c0 size 0x180 virtual false final false
static inline ::System::Object* CreateInstance(::System::Type*  type, bool  nonPublic, bool  wrapExceptions) ;

/// @brief Method CreateInstance addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static inline T CreateInstance() ;

// Ctor Parameters [CppParam { name: "", ty: "Activator", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Activator(Activator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Activator", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Activator(Activator const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Activator()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Activator, 0x10>, "Size mismatch!");

} // namespace end def System
NEED_NO_BOX(::System::Activator);
DEFINE_IL2CPP_ARG_TYPE(::System::Activator*, "System", "Activator");
