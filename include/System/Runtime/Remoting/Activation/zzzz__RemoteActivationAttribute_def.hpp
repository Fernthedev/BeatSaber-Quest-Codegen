#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(RemoteActivationAttribute)
namespace System::Runtime::Remoting::Contexts {
class Context;
}
namespace System::Runtime::Remoting::Contexts {
class IContextAttribute;
}
namespace System::Collections {
class IList;
}
namespace System::Runtime::Remoting::Activation {
class IConstructionCallMessage;
}
// Forward declare root types
namespace System::Runtime::Remoting::Activation {
class RemoteActivationAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Remoting::Activation::RemoteActivationAttribute);
// Type: System.Runtime.Remoting.Activation::RemoteActivationAttribute
namespace System::Runtime::Remoting::Activation {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2547))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3136))
// CS Name: ::System.Runtime.Remoting.Activation::RemoteActivationAttribute*
class CORDL_TYPE RemoteActivationAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Attribute)]{};

/// @brief Field _contextProperties offset 0x10
 __declspec(property(get=__get__contextProperties, put=__set__contextProperties)) ::System::Collections::IList*  _contextProperties;

/// @brief Convert operator to "::System::Runtime::Remoting::Contexts::IContextAttribute"
constexpr operator  ::System::Runtime::Remoting::Contexts::IContextAttribute*() noexcept;

constexpr void __set__contextProperties(::System::Collections::IList*  value) ;

constexpr ::System::Collections::IList* __get__contextProperties() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::IList*> __get__contextProperties() const;

static inline ::System::Runtime::Remoting::Activation::RemoteActivationAttribute* New_ctor(::System::Collections::IList*  contextProperties) ;

/// @brief Method .ctor addr 0x24a53b8 size 0x28 virtual false final false
inline void _ctor(::System::Collections::IList*  contextProperties) ;

/// @brief Method IsContextOK addr 0x24a53e0 size 0x8 virtual true final true
inline bool IsContextOK(::System::Runtime::Remoting::Contexts::Context*  ctx, ::System::Runtime::Remoting::Activation::IConstructionCallMessage*  ctor) ;

/// @brief Method GetPropertiesForNewContext addr 0x24a53e8 size 0x3e8 virtual true final true
inline void GetPropertiesForNewContext(::System::Runtime::Remoting::Activation::IConstructionCallMessage*  ctor) ;

// Ctor Parameters [CppParam { name: "", ty: "RemoteActivationAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RemoteActivationAttribute(RemoteActivationAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RemoteActivationAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RemoteActivationAttribute(RemoteActivationAttribute const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 RemoteActivationAttribute()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Remoting::Activation::RemoteActivationAttribute, 0x18>, "Size mismatch!");

} // namespace end def System::Runtime::Remoting::Activation
NEED_NO_BOX(::System::Runtime::Remoting::Activation::RemoteActivationAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Activation::RemoteActivationAttribute*, "System.Runtime.Remoting.Activation", "RemoteActivationAttribute");
