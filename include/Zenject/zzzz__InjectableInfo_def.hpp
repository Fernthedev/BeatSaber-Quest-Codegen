#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(InjectableInfo)
namespace Zenject {
struct InjectSources;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Zenject {
class InjectableInfo;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::InjectableInfo);
// Type: Zenject::InjectableInfo
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15706))
// CS Name: ::Zenject::InjectableInfo*
class CORDL_TYPE InjectableInfo : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x40};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x40 - sizeof(::System::Object)]{};

/// @brief Field Optional offset 0x10
 __declspec(property(get=__get_Optional, put=__set_Optional)) bool  Optional;

/// @brief Field Identifier offset 0x18
 __declspec(property(get=__get_Identifier, put=__set_Identifier)) ::System::Object*  Identifier;

/// @brief Field SourceType offset 0x20
 __declspec(property(get=__get_SourceType, put=__set_SourceType)) ::Zenject::InjectSources  SourceType;

/// @brief Field MemberName offset 0x28
 __declspec(property(get=__get_MemberName, put=__set_MemberName)) ::StringW  MemberName;

/// @brief Field MemberType offset 0x30
 __declspec(property(get=__get_MemberType, put=__set_MemberType)) ::System::Type*  MemberType;

/// @brief Field DefaultValue offset 0x38
 __declspec(property(get=__get_DefaultValue, put=__set_DefaultValue)) ::System::Object*  DefaultValue;

constexpr void __set_Optional(bool  value) ;

constexpr bool& __get_Optional() ;

constexpr bool const& __get_Optional() const;

constexpr void __set_Identifier(::System::Object*  value) ;

constexpr ::System::Object* __get_Identifier() ;

constexpr ::cordl_internals::to_const_pointer<::System::Object*> __get_Identifier() const;

constexpr void __set_SourceType(::Zenject::InjectSources  value) ;

constexpr ::Zenject::InjectSources& __get_SourceType() ;

constexpr ::Zenject::InjectSources const& __get_SourceType() const;

constexpr void __set_MemberName(::StringW  value) ;

constexpr ::StringW& __get_MemberName() ;

constexpr ::StringW const& __get_MemberName() const;

constexpr void __set_MemberType(::System::Type*  value) ;

constexpr ::System::Type* __get_MemberType() ;

constexpr ::cordl_internals::to_const_pointer<::System::Type*> __get_MemberType() const;

constexpr void __set_DefaultValue(::System::Object*  value) ;

constexpr ::System::Object* __get_DefaultValue() ;

constexpr ::cordl_internals::to_const_pointer<::System::Object*> __get_DefaultValue() const;

static inline ::Zenject::InjectableInfo* New_ctor(bool  optional, ::System::Object*  identifier, ::StringW  memberName, ::System::Type*  memberType, ::System::Object*  defaultValue, ::Zenject::InjectSources  sourceType) ;

/// @brief Method .ctor addr 0x2eb974c size 0x5c virtual false final false
inline void _ctor(bool  optional, ::System::Object*  identifier, ::StringW  memberName, ::System::Type*  memberType, ::System::Object*  defaultValue, ::Zenject::InjectSources  sourceType) ;

// Ctor Parameters [CppParam { name: "", ty: "InjectableInfo", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InjectableInfo(InjectableInfo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InjectableInfo", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InjectableInfo(InjectableInfo const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 InjectableInfo()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::InjectableInfo, 0x40>, "Size mismatch!");

} // namespace end def Zenject
NEED_NO_BOX(::Zenject::InjectableInfo);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::InjectableInfo*, "Zenject", "InjectableInfo");
