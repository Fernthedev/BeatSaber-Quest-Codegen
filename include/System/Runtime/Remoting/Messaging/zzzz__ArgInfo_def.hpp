#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ArgInfo)
namespace System::Runtime::Remoting::Messaging {
struct ArgInfoType;
}
namespace System::Reflection {
class MethodBase;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Runtime::Remoting::Messaging {
class ArgInfo;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Remoting::Messaging::ArgInfo);
// Type: System.Runtime.Remoting.Messaging::ArgInfo
namespace System::Runtime::Remoting::Messaging {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3150))
// CS Name: ::System.Runtime.Remoting.Messaging::ArgInfo*
class CORDL_TYPE ArgInfo : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field _paramMap offset 0x10
 __declspec(property(get=__get__paramMap, put=__set__paramMap)) ::ArrayW<int32_t,::Array<int32_t>*>  _paramMap;

/// @brief Field _inoutArgCount offset 0x18
 __declspec(property(get=__get__inoutArgCount, put=__set__inoutArgCount)) int32_t  _inoutArgCount;

/// @brief Field _method offset 0x20
 __declspec(property(get=__get__method, put=__set__method)) ::System::Reflection::MethodBase*  _method;

constexpr void __set__paramMap(::ArrayW<int32_t,::Array<int32_t>*>  value) ;

constexpr ::ArrayW<int32_t,::Array<int32_t>*>& __get__paramMap() ;

constexpr ::ArrayW<int32_t,::Array<int32_t>*> const& __get__paramMap() const;

constexpr void __set__inoutArgCount(int32_t  value) ;

constexpr int32_t& __get__inoutArgCount() ;

constexpr int32_t const& __get__inoutArgCount() const;

constexpr void __set__method(::System::Reflection::MethodBase*  value) ;

constexpr ::System::Reflection::MethodBase* __get__method() ;

constexpr ::cordl_internals::to_const_pointer<::System::Reflection::MethodBase*> __get__method() const;

static inline ::System::Runtime::Remoting::Messaging::ArgInfo* New_ctor(::System::Reflection::MethodBase*  method, ::System::Runtime::Remoting::Messaging::ArgInfoType  type) ;

/// @brief Method .ctor addr 0x24a7594 size 0x1b4 virtual false final false
inline void _ctor(::System::Reflection::MethodBase*  method, ::System::Runtime::Remoting::Messaging::ArgInfoType  type) ;

/// @brief Method GetInOutArgs addr 0x24a7748 size 0x100 virtual false final false
inline ::ArrayW<::System::Object*,::Array<::System::Object*>*> GetInOutArgs(::ArrayW<::System::Object*,::Array<::System::Object*>*>  args) ;

// Ctor Parameters [CppParam { name: "", ty: "ArgInfo", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ArgInfo(ArgInfo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ArgInfo", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ArgInfo(ArgInfo const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ArgInfo()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Remoting::Messaging::ArgInfo, 0x28>, "Size mismatch!");

} // namespace end def System::Runtime::Remoting::Messaging
NEED_NO_BOX(::System::Runtime::Remoting::Messaging::ArgInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Messaging::ArgInfo*, "System.Runtime.Remoting.Messaging", "ArgInfo");
