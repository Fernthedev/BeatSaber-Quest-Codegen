#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Reflection/zzzz__Module_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RuntimeModule)
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Reflection {
class RuntimeAssembly;
}
namespace System {
class Type;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System {
class Object;
}
namespace System::Reflection {
class Assembly;
}
namespace System {
struct Guid;
}
// Forward declare root types
namespace System::Reflection {
class RuntimeModule;
}
// Write type traits
MARK_REF_PTR_T(::System::Reflection::RuntimeModule);
// Type: System.Reflection::RuntimeModule
namespace System::Reflection {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3481))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3525))
// CS Name: ::System.Reflection::RuntimeModule*
class CORDL_TYPE RuntimeModule : public ::System::Reflection::Module {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x40};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x40 - sizeof(::System::Reflection::Module)]{};

/// @brief Field _impl offset 0x10
 __declspec(property(get=__get__impl, put=__set__impl)) ::cordl_internals::intptr_t  _impl;

/// @brief Field assembly offset 0x18
 __declspec(property(get=__get_assembly, put=__set_assembly)) ::System::Reflection::Assembly*  assembly;

/// @brief Field fqname offset 0x20
 __declspec(property(get=__get_fqname, put=__set_fqname)) ::StringW  fqname;

/// @brief Field name offset 0x28
 __declspec(property(get=__get_name, put=__set_name)) ::StringW  name;

/// @brief Field scopename offset 0x30
 __declspec(property(get=__get_scopename, put=__set_scopename)) ::StringW  scopename;

/// @brief Field is_resource offset 0x38
 __declspec(property(get=__get_is_resource, put=__set_is_resource)) bool  is_resource;

/// @brief Field token offset 0x3c
 __declspec(property(get=__get_token, put=__set_token)) int32_t  token;

 __declspec(property(get=get_Assembly)) ::System::Reflection::Assembly*  Assembly;

 __declspec(property(get=get_ScopeName)) ::StringW  ScopeName;

 __declspec(property(get=get_ModuleVersionId)) ::System::Guid  ModuleVersionId;

constexpr void __set__impl(::cordl_internals::intptr_t  value) ;

constexpr ::cordl_internals::intptr_t& __get__impl() ;

constexpr ::cordl_internals::intptr_t const& __get__impl() const;

constexpr void __set_assembly(::System::Reflection::Assembly*  value) ;

constexpr ::System::Reflection::Assembly* __get_assembly() ;

constexpr ::cordl_internals::to_const_pointer<::System::Reflection::Assembly*> __get_assembly() const;

constexpr void __set_fqname(::StringW  value) ;

constexpr ::StringW& __get_fqname() ;

constexpr ::StringW const& __get_fqname() const;

constexpr void __set_name(::StringW  value) ;

constexpr ::StringW& __get_name() ;

constexpr ::StringW const& __get_name() const;

constexpr void __set_scopename(::StringW  value) ;

constexpr ::StringW& __get_scopename() ;

constexpr ::StringW const& __get_scopename() const;

constexpr void __set_is_resource(bool  value) ;

constexpr bool& __get_is_resource() ;

constexpr bool const& __get_is_resource() const;

constexpr void __set_token(int32_t  value) ;

constexpr int32_t& __get_token() ;

constexpr int32_t const& __get_token() const;

/// @brief Method get_Assembly addr 0x24f7174 size 0x8 virtual true final false
inline ::System::Reflection::Assembly* get_Assembly() ;

/// @brief Method get_ScopeName addr 0x24f717c size 0x8 virtual true final false
inline ::StringW get_ScopeName() ;

/// @brief Method get_ModuleVersionId addr 0x24f7184 size 0x10 virtual true final false
inline ::System::Guid get_ModuleVersionId() ;

/// @brief Method IsResource addr 0x24f7194 size 0x8 virtual true final false
inline bool IsResource() ;

/// @brief Method GetCustomAttributes addr 0x24f719c size 0x68 virtual true final false
inline ::ArrayW<::System::Object*,::Array<::System::Object*>*> GetCustomAttributes(bool  inherit) ;

/// @brief Method GetCustomAttributes addr 0x24f7204 size 0x70 virtual true final false
inline ::ArrayW<::System::Object*,::Array<::System::Object*>*> GetCustomAttributes(::System::Type*  attributeType, bool  inherit) ;

/// @brief Method IsDefined addr 0x24f7274 size 0x70 virtual true final false
inline bool IsDefined(::System::Type*  attributeType, bool  inherit) ;

/// @brief Method GetObjectData addr 0x24f72e4 size 0x98 virtual true final false
inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method GetRuntimeAssembly addr 0x24f737c size 0x78 virtual false final false
inline ::System::Reflection::RuntimeAssembly* GetRuntimeAssembly() ;

/// @brief Method GetModuleVersionId addr 0x24f73f4 size 0x80 virtual true final false
inline ::System::Guid GetModuleVersionId() ;

/// @brief Method GetGuidInternal addr 0x24f7474 size 0x4 virtual false final false
static inline void GetGuidInternal(::cordl_internals::intptr_t  module, ::ArrayW<uint8_t,::Array<uint8_t>*>  guid) ;

static inline ::System::Reflection::RuntimeModule* New_ctor() ;

/// @brief Method .ctor addr 0x24f7478 size 0x58 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "RuntimeModule", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RuntimeModule(RuntimeModule && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RuntimeModule", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RuntimeModule(RuntimeModule const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 RuntimeModule()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Reflection::RuntimeModule, 0x40>, "Size mismatch!");

} // namespace end def System::Reflection
NEED_NO_BOX(::System::Reflection::RuntimeModule);
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::RuntimeModule*, "System.Reflection", "RuntimeModule");
