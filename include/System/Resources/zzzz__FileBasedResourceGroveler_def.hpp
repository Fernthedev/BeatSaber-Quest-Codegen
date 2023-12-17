#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(FileBasedResourceGroveler)
namespace System::Resources {
class __ResourceManager__ResourceManagerMediator;
}
namespace System::Resources {
class IResourceGroveler;
}
// Forward declare root types
namespace System::Resources {
class FileBasedResourceGroveler;
}
// Write type traits
MARK_REF_PTR_T(::System::Resources::FileBasedResourceGroveler);
// Type: System.Resources::FileBasedResourceGroveler
namespace System::Resources {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3433))
// CS Name: ::System.Resources::FileBasedResourceGroveler*
class CORDL_TYPE FileBasedResourceGroveler : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field _mediator offset 0x10
 __declspec(property(get=__get__mediator, put=__set__mediator)) ::System::Resources::__ResourceManager__ResourceManagerMediator*  _mediator;

/// @brief Convert operator to "::System::Resources::IResourceGroveler"
constexpr operator  ::System::Resources::IResourceGroveler*() noexcept;

constexpr void __set__mediator(::System::Resources::__ResourceManager__ResourceManagerMediator*  value) ;

constexpr ::System::Resources::__ResourceManager__ResourceManagerMediator* __get__mediator() ;

constexpr ::cordl_internals::to_const_pointer<::System::Resources::__ResourceManager__ResourceManagerMediator*> __get__mediator() const;

static inline ::System::Resources::FileBasedResourceGroveler* New_ctor(::System::Resources::__ResourceManager__ResourceManagerMediator*  mediator) ;

/// @brief Method .ctor addr 0x24e0f64 size 0x28 virtual false final false
inline void _ctor(::System::Resources::__ResourceManager__ResourceManagerMediator*  mediator) ;

// Ctor Parameters [CppParam { name: "", ty: "FileBasedResourceGroveler", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FileBasedResourceGroveler(FileBasedResourceGroveler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FileBasedResourceGroveler", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FileBasedResourceGroveler(FileBasedResourceGroveler const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 FileBasedResourceGroveler()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Resources::FileBasedResourceGroveler, 0x18>, "Size mismatch!");

} // namespace end def System::Resources
NEED_NO_BOX(::System::Resources::FileBasedResourceGroveler);
DEFINE_IL2CPP_ARG_TYPE(::System::Resources::FileBasedResourceGroveler*, "System.Resources", "FileBasedResourceGroveler");
