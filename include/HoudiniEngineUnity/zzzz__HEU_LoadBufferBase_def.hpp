#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HEU_LoadBufferBase)
namespace HoudiniEngineUnity {
class HEU_GeneratedOutput;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_LoadBufferBase;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_LoadBufferBase);
// Type: HoudiniEngineUnity::HEU_LoadBufferBase
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9804))
// CS Name: ::HoudiniEngineUnity::HEU_LoadBufferBase*
class CORDL_TYPE HEU_LoadBufferBase : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::System::Object)]{};

/// @brief Field _id offset 0x10
 __declspec(property(get=__get__id, put=__set__id)) int32_t  _id;

/// @brief Field _name offset 0x18
 __declspec(property(get=__get__name, put=__set__name)) ::StringW  _name;

/// @brief Field _bInstanced offset 0x20
 __declspec(property(get=__get__bInstanced, put=__set__bInstanced)) bool  _bInstanced;

/// @brief Field _bInstancer offset 0x21
 __declspec(property(get=__get__bInstancer, put=__set__bInstancer)) bool  _bInstancer;

/// @brief Field _generatedOutput offset 0x28
 __declspec(property(get=__get__generatedOutput, put=__set__generatedOutput)) ::HoudiniEngineUnity::HEU_GeneratedOutput*  _generatedOutput;

constexpr void __set__id(int32_t  value) ;

constexpr int32_t& __get__id() ;

constexpr int32_t const& __get__id() const;

constexpr void __set__name(::StringW  value) ;

constexpr ::StringW& __get__name() ;

constexpr ::StringW const& __get__name() const;

constexpr void __set__bInstanced(bool  value) ;

constexpr bool& __get__bInstanced() ;

constexpr bool const& __get__bInstanced() const;

constexpr void __set__bInstancer(bool  value) ;

constexpr bool& __get__bInstancer() ;

constexpr bool const& __get__bInstancer() const;

constexpr void __set__generatedOutput(::HoudiniEngineUnity::HEU_GeneratedOutput*  value) ;

constexpr ::HoudiniEngineUnity::HEU_GeneratedOutput* __get__generatedOutput() ;

constexpr ::cordl_internals::to_const_pointer<::HoudiniEngineUnity::HEU_GeneratedOutput*> __get__generatedOutput() const;

/// @brief Method InitializeBuffer addr 0x21abbe8 size 0x1c virtual false final false
inline void InitializeBuffer(int32_t  id, ::StringW  name, bool  bInstanced, bool  bInstancer) ;

static inline ::HoudiniEngineUnity::HEU_LoadBufferBase* New_ctor() ;

/// @brief Method .ctor addr 0x21abc04 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "HEU_LoadBufferBase", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HEU_LoadBufferBase(HEU_LoadBufferBase && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HEU_LoadBufferBase", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HEU_LoadBufferBase(HEU_LoadBufferBase const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 HEU_LoadBufferBase()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_LoadBufferBase, 0x30>, "Size mismatch!");

} // namespace end def HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::HEU_LoadBufferBase);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_LoadBufferBase*, "HoudiniEngineUnity", "HEU_LoadBufferBase");
