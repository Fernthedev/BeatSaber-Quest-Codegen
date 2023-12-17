#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(MonoTypeInfo)
namespace System::Reflection {
class RuntimeConstructorInfo;
}
// Forward declare root types
namespace System {
class MonoTypeInfo;
}
// Write type traits
MARK_REF_PTR_T(::System::MonoTypeInfo);
// Type: System::MonoTypeInfo
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2580))
// CS Name: ::System::MonoTypeInfo*
class CORDL_TYPE MonoTypeInfo : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field full_name offset 0x10
 __declspec(property(get=__get_full_name, put=__set_full_name)) ::StringW  full_name;

/// @brief Field default_ctor offset 0x18
 __declspec(property(get=__get_default_ctor, put=__set_default_ctor)) ::System::Reflection::RuntimeConstructorInfo*  default_ctor;

constexpr void __set_full_name(::StringW  value) ;

constexpr ::StringW& __get_full_name() ;

constexpr ::StringW const& __get_full_name() const;

constexpr void __set_default_ctor(::System::Reflection::RuntimeConstructorInfo*  value) ;

constexpr ::System::Reflection::RuntimeConstructorInfo* __get_default_ctor() ;

constexpr ::cordl_internals::to_const_pointer<::System::Reflection::RuntimeConstructorInfo*> __get_default_ctor() const;

static inline ::System::MonoTypeInfo* New_ctor() ;

/// @brief Method .ctor addr 0x25f6248 size 0x4 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "MonoTypeInfo", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MonoTypeInfo(MonoTypeInfo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MonoTypeInfo", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MonoTypeInfo(MonoTypeInfo const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MonoTypeInfo()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::MonoTypeInfo, 0x20>, "Size mismatch!");

} // namespace end def System
NEED_NO_BOX(::System::MonoTypeInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::MonoTypeInfo*, "System", "MonoTypeInfo");
