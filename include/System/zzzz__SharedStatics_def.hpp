#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
CORDL_MODULE_EXPORT(SharedStatics)
namespace System::Security::Util {
class __Tokenizer__StringMaker;
}
// Forward declare root types
namespace System {
class SharedStatics;
}
// Write type traits
MARK_REF_PTR_T(::System::SharedStatics);
// Type: System::SharedStatics
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2569))
// CS Name: ::System::SharedStatics*
class CORDL_TYPE SharedStatics : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field _maker offset 0x10
 __declspec(property(get=__get__maker, put=__set__maker)) ::System::Security::Util::__Tokenizer__StringMaker*  _maker;

static inline void setStaticF__sharedStatics(::System::SharedStatics*  value) ;

static inline ::System::SharedStatics* getStaticF__sharedStatics() ;

constexpr void __set__maker(::System::Security::Util::__Tokenizer__StringMaker*  value) ;

constexpr ::System::Security::Util::__Tokenizer__StringMaker* __get__maker() ;

constexpr ::cordl_internals::to_const_pointer<::System::Security::Util::__Tokenizer__StringMaker*> __get__maker() const;

static inline ::System::SharedStatics* New_ctor() ;

/// @brief Method .ctor addr 0x25f18c0 size 0x4 virtual false final false
inline void _ctor() ;

/// @brief Method GetSharedStringMaker addr 0x25f18c8 size 0x1d0 virtual false final false
static inline ::System::Security::Util::__Tokenizer__StringMaker* GetSharedStringMaker() ;

/// @brief Method ReleaseSharedStringMaker addr 0x25f1a98 size 0x150 virtual false final false
static inline void ReleaseSharedStringMaker(ByRef<::System::Security::Util::__Tokenizer__StringMaker*>  maker) ;

// Ctor Parameters [CppParam { name: "", ty: "SharedStatics", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SharedStatics(SharedStatics && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SharedStatics", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SharedStatics(SharedStatics const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 SharedStatics()  = default;
public:


// Fields

// Static field _sharedStatics


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::SharedStatics, 0x18>, "Size mismatch!");

} // namespace end def System
NEED_NO_BOX(::System::SharedStatics);
DEFINE_IL2CPP_ARG_TYPE(::System::SharedStatics*, "System", "SharedStatics");
